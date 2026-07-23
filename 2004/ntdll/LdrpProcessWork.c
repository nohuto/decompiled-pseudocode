/*
 * XREFs of LdrpProcessWork @ 0x18005EB1C
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpDrainWorkQueue @ 0x18005E8F4 (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x18005EA90 (LdrpWorkCallback.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 *     LdrpReportError @ 0x18003F2A4 (LdrpReportError.c)
 *     LdrpMapDllSearchPath @ 0x18005F500 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x18005F8C0 (LdrpMapDllFullPath.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18005FF5C (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180060048 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogError @ 0x1800600D8 (LdrpLogError.c)
 *     LdrpMapDllRetry @ 0x180060478 (LdrpMapDllRetry.c)
 *     ZwSetEvent @ 0x18009CFD0 (ZwSetEvent.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 */

void __fastcall LdrpProcessWork(__int64 a1, char a2)
{
  int v4; // edi
  int v5; // eax
  char v6; // al
  int v7; // eax
  char v8; // bl
  int v9; // [rsp+20h] [rbp-38h]

  if ( **(int **)(a1 + 40) < 0 )
    goto LABEL_21;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL) + 56LL) )
  {
    v4 = LdrpSnapModule(a1);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x100000) != 0 )
    {
      v4 = LdrpMapDllRetry(a1);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x200) != 0 )
        v5 = LdrpMapDllFullPath(a1);
      else
        v5 = LdrpMapDllSearchPath(a1);
      v4 = v5;
    }
    if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741267 )
      goto LABEL_21;
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrmap.c",
        1889,
        (unsigned int)"LdrpProcessWork",
        0,
        (__int64)"Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
        a1,
        (*(_QWORD *)(a1 + 48) + 72LL) & (unsigned __int64)((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
        v4);
      v6 = LdrpDebugFlags;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
    if ( v4 == -1073741515 )
    {
      LdrpLogError(3221225781LL, 25LL, 0LL, a1);
      LdrpLogDeprecatedDllEtwEvent(a1);
      LOBYTE(v9) = 0;
      LdrpLogLoadFailureEtwEvent(
        a1,
        (*(_QWORD *)(a1 + 48) + 72LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
        3221225781LL,
        &LoadFailure,
        v9);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 104LL) & 0x20) != 0 )
        LdrpReportError((_UNICODE_STRING *)a1, 0LL, -1073741515);
    }
  }
  if ( v4 < 0 )
    **(_DWORD **)(a1 + 40) = v4;
LABEL_21:
  if ( !a2 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v7 = --LdrpWorkInProgress;
    if ( (__int64 *)LdrpWorkQueue != &LdrpWorkQueue || (v8 = 1, v7 != 1) )
      v8 = 0;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( v8 )
      ZwSetEvent(LdrpWorkCompleteEvent, 0LL);
  }
}
