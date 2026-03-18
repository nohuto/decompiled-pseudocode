/*
 * XREFs of FsRtlEmptyFreePoolList @ 0x1403305D4
 * Callers:
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406DADF0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406DAEC0 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406DB030 (FsRtlAddToTunnelCacheEx.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall FsRtlEmptyFreePoolList(_QWORD **a1)
{
  _QWORD *result; // rax
  __int64 v3; // r8
  _DWORD *v4; // rcx
  _QWORD *v5; // rdx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      break;
    v3 = *result;
    v4 = result - 3;
    if ( *(_QWORD **)(*result + 8LL) != result || (v5 = (_QWORD *)result[1], (_QWORD *)*v5 != result) )
      __fastfail(3u);
    *v5 = v3;
    *(_QWORD *)(v3 + 8) = v5;
    if ( (v4[14] & 1) != 0 )
      ExFreePoolWithTag(v4, 0);
    else
      ExFreeToNPagedLookasideList(&TunnelLookasideList, v4);
  }
  return result;
}
