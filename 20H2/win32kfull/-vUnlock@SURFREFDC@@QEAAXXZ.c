/*
 * XREFs of ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C00A2D2C
 * Callers:
 *     GreDrawStream @ 0x1C00A2D50 (GreDrawStream.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C027BA8C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 */

void __fastcall SURFREFDC::vUnlock(SURFACE **this)
{
  struct SURFACE *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    if ( v2 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v2);
    }
    else
    {
      GreAcquireHmgrSemaphore();
      SURFACE::vDec_cRef(*this);
      GreReleaseHmgrSemaphore();
    }
    *this = 0LL;
  }
}
