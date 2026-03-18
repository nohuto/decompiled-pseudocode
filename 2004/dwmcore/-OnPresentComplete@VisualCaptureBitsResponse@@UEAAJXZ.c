/*
 * XREFs of ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180033A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180034650 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18008F040 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x18008F15C (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCaptureBitsResponse::OnPresentComplete(VisualCaptureBitsResponse *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  int Bits; // eax
  unsigned int v8; // ecx

  v2 = CaptureBitsResponse::CalcSectionBitmapSize(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x2Bu, 0LL);
  }
  else
  {
    v5 = CaptureBitsResponse::MapSectionBitmap(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2Du, 0LL);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits(this);
      v4 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Bits, 0x32u, 0LL);
    }
  }
  (*(void (__fastcall **)(VisualCaptureBitsResponse *, _QWORD))(*(_QWORD *)this + 48LL))(this, v4);
  return v4;
}
