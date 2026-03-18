/*
 * XREFs of SnapshotMonitorRects @ 0x1C0062BA0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0062740 (xxxResetDisplayDevice.c)
 * Callees:
 *     HdevFromMonitor @ 0x1C0062CA0 (HdevFromMonitor.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 */

_DWORD *SnapshotMonitorRects()
{
  int v0; // edx
  __int64 v1; // rax
  _DWORD *v2; // rsi
  __int64 v3; // rbx
  __int64 *i; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD *result; // rax

  v0 = **(_DWORD **)gpDispInfo;
  if ( (unsigned int)(v0 - 1) > 0xFFFE )
    return 0LL;
  v1 = Win32AllocPool(48LL * (unsigned int)(v0 - 1) + 56, 1919775573LL);
  v2 = (_DWORD *)v1;
  if ( !v1 )
  {
    UserSetLastError(14LL);
    return 0LL;
  }
  v3 = v1 + 8;
  for ( i = *(__int64 **)(gpDispInfo + 104); i; i = (__int64 *)i[7] )
  {
    v5 = i[5];
    if ( (*(_DWORD *)(v5 + 24) & 1) != 0 )
    {
      *(_OWORD *)v3 = *(_OWORD *)(v5 + 28);
      *(_OWORD *)(v3 + 16) = *(_OWORD *)(i[5] + 44);
      *(_WORD *)(v3 + 32) = *(_WORD *)(i[5] + 64);
      *(_WORD *)(v3 + 34) = *(_WORD *)(i[5] + 66);
      if ( (unsigned int)HdevFromMonitor(i) == -1 )
        v6 = 0LL;
      else
        v6 = *i;
      *(_QWORD *)(v3 + 40) = v6;
      v3 += 48LL;
    }
  }
  result = v2;
  *v2 = (v3 - (__int64)v2 - 8) / 48;
  return result;
}
