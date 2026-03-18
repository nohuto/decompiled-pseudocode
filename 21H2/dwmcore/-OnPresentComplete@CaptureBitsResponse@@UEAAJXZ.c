/*
 * XREFs of ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1801B9990
 * Callers:
 *     <none>
 * Callees:
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18001FB40 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18003CFC8 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801B98A4 (-CreateSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::OnPresentComplete(CaptureBitsResponse *this)
{
  int SectionBitmap; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int Bits; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx

  SectionBitmap = CaptureBitsResponse::CreateSectionBitmap(this);
  v4 = SectionBitmap;
  if ( SectionBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, SectionBitmap, 0x50u);
  }
  else
  {
    v5 = CaptureBitsResponse::MapSectionBitmap(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v5, 0x52u);
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits(this, v6, v8);
      v4 = Bits;
      if ( Bits < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, Bits, 0x56u);
    }
  }
  v11 = (*(__int64 (__fastcall **)(CaptureBitsResponse *, _QWORD))(*(_QWORD *)this + 56LL))(this, v4);
  v13 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x59u);
  return v13;
}
