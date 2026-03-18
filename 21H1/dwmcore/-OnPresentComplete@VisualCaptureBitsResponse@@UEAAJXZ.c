/*
 * XREFs of ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18008B700
 * Callers:
 *     <none>
 * Callees:
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800265B8 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800266D4 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18008B768 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCaptureBitsResponse::OnPresentComplete(enum DXGI_FORMAT *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int Bits; // eax
  __int64 v8; // rcx

  v2 = CaptureBitsResponse::CalcSectionBitmapSize(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x2Bu, 0LL);
  }
  else
  {
    v5 = CaptureBitsResponse::MapSectionBitmap((CaptureBitsResponse *)this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2Du, 0LL);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits((CaptureBitsResponse *)this);
      v4 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Bits, 0x32u, 0LL);
    }
  }
  (*(void (__fastcall **)(enum DXGI_FORMAT *, _QWORD))(*(_QWORD *)this + 48LL))(this, v4);
  return v4;
}
