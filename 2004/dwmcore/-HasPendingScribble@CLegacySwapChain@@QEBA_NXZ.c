/*
 * XREFs of ?HasPendingScribble@CLegacySwapChain@@QEBA_NXZ @ 0x1802481B4
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1800C23B4 (-PostPresent@CLegacySwapChain@@IEAAX_N@Z.c)
 *     ?DeactivateIfIdle@CComputeScribbleRenderer@@AEAAXXZ @ 0x1801A0E74 (-DeactivateIfIdle@CComputeScribbleRenderer@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CLegacySwapChain::HasPendingScribble(CLegacySwapChain *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 13);
  v2 = *((_QWORD *)this + 14);
  while ( 1 )
  {
    if ( v1 == v2 )
      return 0;
    v3 = *(_QWORD *)(*(_QWORD *)v1 + 96LL);
    if ( v3 ? *(_BYTE *)(v3 + 208) : 0 )
      break;
    v1 += 8LL;
  }
  return 1;
}
