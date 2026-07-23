/*
 * XREFs of _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176
 * Callers:
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpNotifyLoadOfGraph@4 @ 0x4B2D189B (_LdrpNotifyLoadOfGraph@4.c)
 *     _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904 (_LdrpInitializeGraphRecurse@12.c)
 *     _RtlIsCriticalSectionLockedByThread@4 @ 0x4B2D2150 (_RtlIsCriticalSectionLockedByThread@4.c)
 *     _LdrpDynamicShimModule@4 @ 0x4B2D234A (_LdrpDynamicShimModule@4.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _LdrpCondenseGraph@4 @ 0x4B2E205C (_LdrpCondenseGraph@4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpAddNodeServiceTag@8 @ 0x4B32F554 (_LdrpAddNodeServiceTag@8.c)
 */

int __fastcall LdrpPrepareModuleForExecution(int a1, int a2)
{
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // ecx
  char v10; // al
  char v11; // [esp+Fh] [ebp-1h] BYREF

  v4 = 0;
  if ( RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
    return v4;
  v5 = *(_DWORD *)(a1 + 80);
  switch ( *(_DWORD *)(v5 + 32) )
  {
    case 5:
      LdrpCondenseGraph(v5);
      break;
    case 6:
      break;
    case 7:
      goto LABEL_9;
    default:
      if ( (unsigned int)(*(_DWORD *)(v5 + 32) - 8) >= 2 )
        return -1073741595;
      return v4;
  }
  if ( (*(_BYTE *)(a1 + 52) & 0x20) == 0 && NtCurrentTeb()->SubProcessTag )
    LdrpAddNodeServiceTag(*(_DWORD *)(a1 + 80));
  v4 = LdrpNotifyLoadOfGraph(*(_DWORD **)(a1 + 80));
  if ( v4 >= 0 )
  {
    v4 = LdrpDynamicShimModule(*(_DWORD *)(a1 + 80));
    if ( v4 >= 0 )
    {
LABEL_9:
      v6 = *(_DWORD *)(a1 + 92);
      if ( v6 && (*(_BYTE *)(v6 + 16) & 1) == 0 )
      {
        LdrpAcquireLoaderLock();
        v7 = *(_DWORD **)(a1 + 80);
        v11 = 0;
        v4 = LdrpInitializeGraphRecurse(v7, a2, &v11);
        LdrpReleaseLoaderLock(v4, v8);
      }
      return v4;
    }
    v10 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrsnap.c",
        1937,
        "LdrpPrepareModuleForExecution",
        1,
        "Failed to load for appcompat reasons\n");
      v10 = ShowSnaps;
    }
    if ( (v10 & 0x40) != 0 )
      __debugbreak();
  }
  return v4;
}
