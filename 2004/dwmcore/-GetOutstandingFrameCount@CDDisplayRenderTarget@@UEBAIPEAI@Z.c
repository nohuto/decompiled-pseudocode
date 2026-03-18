/*
 * XREFs of ?GetOutstandingFrameCount@CDDisplayRenderTarget@@UEBAIPEAI@Z @ 0x18018D830
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18018D9A0 (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?GetPresentStatisticsDWM@CDDisplayRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180170340 (-GetPresentStatisticsDWM@CDDisplayRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNE.c)
 */

__int64 __fastcall CDDisplayRenderTarget::GetOutstandingFrameCount(CDDisplayRenderTarget *this, unsigned int *a2)
{
  unsigned int v3; // ebx
  _DWORD v6[10]; // [rsp+20h] [rbp-28h] BYREF
  struct _UNSIGNED_RATIO v7; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0;
  if ( (int)CDDisplayRenderTarget::GetPresentStatisticsDWM(this, (struct DXGI_FRAME_STATISTICS_DWM *)v6, &v7) >= 0 )
  {
    if ( v6[0] )
      v3 = *(_DWORD *)(*((_QWORD *)this + 4) + 280LL) - v6[0];
    *a2 = v3 + v6[4] + 1;
  }
  return v3;
}
