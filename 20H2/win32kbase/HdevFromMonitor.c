/*
 * XREFs of HdevFromMonitor @ 0x1C006F9C0
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C001E6D0 (-UpdateUserScreen@@YAJXZ.c)
 *     DestroyMonitorDCs @ 0x1C006F840 (DestroyMonitorDCs.c)
 *     SnapshotMonitorRects @ 0x1C006F8C0 (SnapshotMonitorRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HdevFromMonitor(__int64 a1)
{
  unsigned int v1; // edx
  __int64 i; // r8
  __int64 v4; // r9
  unsigned int v5; // r8d

  v1 = 0;
  for ( i = *(_QWORD *)(gpDispInfo + 104); ; i = *(_QWORD *)(i + 56) )
  {
    if ( !i )
      return 0xFFFFFFFFLL;
    if ( i == a1 )
      break;
  }
  v4 = *(_QWORD *)(gpDispInfo + 16);
  v5 = *(_DWORD *)(v4 + 20);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  while ( *(_QWORD *)(56LL * v1 + v4 + 40) != *(_QWORD *)(a1 + 232) )
  {
    if ( ++v1 >= v5 )
      return 0xFFFFFFFFLL;
  }
  return v1;
}
