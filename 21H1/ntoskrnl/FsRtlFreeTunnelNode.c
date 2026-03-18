/*
 * XREFs of FsRtlFreeTunnelNode @ 0x1402F3A2C
 * Callers:
 *     FsRtlRemoveNodeFromTunnel @ 0x1402F38CC (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406B9D20 (FsRtlAddToTunnelCacheEx.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlFreeTunnelNode(char *Entry, __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx

  if ( a2 )
  {
    v2 = *a2;
    v3 = Entry + 24;
    if ( *(__int64 **)(*a2 + 8) != a2 )
      __fastfail(3u);
    *v3 = v2;
    v3[1] = a2;
    *(_QWORD *)(v2 + 8) = v3;
    *a2 = (__int64)v3;
  }
  else if ( (*((_DWORD *)Entry + 14) & 1) != 0 )
  {
    ExFreePoolWithTag(Entry, 0);
  }
  else
  {
    ExFreeToNPagedLookasideList(&TunnelLookasideList, Entry);
  }
}
