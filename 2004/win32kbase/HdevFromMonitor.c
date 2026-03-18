/*
 * XREFs of HdevFromMonitor @ 0x1C0062CA0
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0013354 (-UpdateUserScreen@@YAJXZ.c)
 *     DestroyMonitorDCs @ 0x1C0062B20 (DestroyMonitorDCs.c)
 *     SnapshotMonitorRects @ 0x1C0062BA0 (SnapshotMonitorRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HdevFromMonitor(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // r9
  unsigned int v3; // r8d

  v1 = 0;
  v2 = *(_QWORD *)(gpDispInfo + 16);
  v3 = *(_DWORD *)(v2 + 20);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  while ( *(_QWORD *)(56LL * v1 + v2 + 40) != *(_QWORD *)(a1 + 232) )
  {
    if ( ++v1 >= v3 )
      return 0xFFFFFFFFLL;
  }
  return v1;
}
