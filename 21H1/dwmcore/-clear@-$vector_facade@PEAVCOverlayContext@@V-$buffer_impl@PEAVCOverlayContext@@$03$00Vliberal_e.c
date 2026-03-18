/*
 * XREFs of ?clear@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800BC7A4
 * Callers:
 *     ?EnsureClientInfo@CDesktopTree@@MEAAXXZ @ 0x1800BC4E0 (-EnsureClientInfo@CDesktopTree@@MEAAXXZ.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x1801B5F74 (--1CDesktopTree@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (__int64)(a1[1] - *a1) >> 3;
  if ( result )
  {
    result *= 8LL;
    a1[1] -= result;
  }
  return result;
}
