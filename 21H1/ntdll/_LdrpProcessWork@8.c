/*
 * XREFs of _LdrpProcessWork@8 @ 0x4B2CE6E8
 * Callers:
 *     _LdrpWorkCallback@12 @ 0x4B2B71B0 (_LdrpWorkCallback@12.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 * Callees:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlWow64EnableFsRedirectionEx@8 @ 0x4B2CC460 (_RtlWow64EnableFsRedirectionEx@8.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 *     _LdrpMapDllRetry@4 @ 0x4B2DDF9E (_LdrpMapDllRetry@4.c)
 *     _LdrpMapDllFullPath@4 @ 0x4B2DE04A (_LdrpMapDllFullPath@4.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 *     _LdrpReportError@12 @ 0x4B2E9F63 (_LdrpReportError@12.c)
 *     _LdrpLogDeprecatedDllEtwEvent@4 @ 0x4B2EBC3E (_LdrpLogDeprecatedDllEtwEvent@4.c)
 *     _LdrpLogLoadFailureEtwEvent@20 @ 0x4B2EC106 (_LdrpLogLoadFailureEtwEvent@20.c)
 *     _LdrpLogError@16 @ 0x4B2EC95F (_LdrpLogError@16.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __fastcall LdrpProcessWork(int a1, char a2)
{
  int v2; // ebp
  int v4; // ecx
  int result; // eax
  int v6; // edi
  char v7; // al
  PVOID OldFsRedirectionLevel; // [esp+1Ch] [ebp-2Ch] BYREF
  int v9; // [esp+20h] [ebp-28h]
  int v10; // [esp+24h] [ebp-24h]
  char v11; // [esp+28h] [ebp-20h]
  bool v12; // [esp+2Fh] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v11 = a2;
  v12 = RtlWow64EnableFsRedirectionEx(0, &OldFsRedirectionLevel) >= 0;
  v4 = **(_DWORD **)(a1 + 24);
  ms_exc.registration.TryLevel = 0;
  result = 1;
  v10 = 1;
  if ( v4 < 0 )
    goto LABEL_6;
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) + 32) )
  {
    result = LdrpSnapModule((_DWORD *)a1, v2);
    v6 = result;
    v9 = result;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x100000) != 0 )
    {
      result = LdrpMapDllRetry(a1);
    }
    else if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    {
      result = LdrpMapDllFullPath(a1);
    }
    else
    {
      result = LdrpMapDllSearchPath(a1);
    }
    v6 = result;
    v9 = result;
    if ( result >= 0 || result == -1073741267 )
      goto LABEL_6;
    v7 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrmap.c",
        1889,
        "LdrpProcessWork",
        0,
        "Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
        a1,
        *(_DWORD *)(a1 + 28) != 0 ? *(_DWORD *)(a1 + 28) + 36 : 0,
        v6);
      v7 = ShowSnaps;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
    result = -1073741515;
    if ( v6 == -1073741515 )
    {
      LdrpLogError(0, a1);
      LdrpLogDeprecatedDllEtwEvent(a1);
      LdrpLogLoadFailureEtwEvent(53, &LoadFailure, 0);
      result = *(_DWORD *)(a1 + 32);
      if ( (*(_BYTE *)(result + 52) & 0x20) != 0 )
        result = LdrpReportError(-1073741515);
    }
  }
  if ( v6 < 0 )
  {
    result = *(_DWORD *)(a1 + 24);
    *(_DWORD *)result = v6;
  }
LABEL_6:
  ms_exc.registration.TryLevel = -2;
  if ( v12 )
    result = RtlWow64EnableFsRedirectionEx(OldFsRedirectionLevel, &OldFsRedirectionLevel);
  if ( !v11 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    if ( --LdrpWorkInProgress != 1 || (int *)LdrpWorkQueue != &LdrpWorkQueue )
      LOBYTE(v10) = 0;
    result = RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( (_BYTE)v10 )
      return NtSetEvent(LdrpWorkCompleteEvent, 0);
  }
  return result;
}
