/*
 * XREFs of ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18023A090
 * Callers:
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18017A024 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007B89C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007BD48 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801542B8 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18018FB30 (McTemplateU0ffff_EventWriteTransfer.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18023B384 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 */

__int64 __fastcall CD2DContext::DrawShape(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct ID2D1Geometry *a3,
        struct ID2D1Brush *a4,
        float a5,
        struct ID2D1StrokeStyle1 *a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  _DWORD v20[2]; // [rsp+40h] [rbp-68h] BYREF
  int v21; // [rsp+48h] [rbp-60h]
  int v22; // [rsp+4Ch] [rbp-5Ch]
  struct D2D_MATRIX_3X2_F v23; // [rsp+50h] [rbp-58h] BYREF

  CD2DContext::FlushDrawList(this);
  v12 = 0;
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v13 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      14,
      v13);
  }
  CD2DContext::SetCommonState(this, a2, a8, &a7, &v23);
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v15 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, __int64, struct ID2D1StrokeStyle1 *, struct D2D_MATRIX_3X2_F *, _DWORD, _DWORD *))(*(_QWORD *)a3 + 40LL))(
            a3,
            v14,
            a6,
            &v23,
            LODWORD(FLOAT_0_25),
            v20);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x474u, 0LL);
      return v12;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT,
        v17,
        *(float *)&v20[1],
        v21,
        v22);
  }
  (*(void (__fastcall **)(_QWORD, const struct ID2D1Geometry *, struct ID2D1Brush *))(**((_QWORD **)this + 30) + 176LL))(
    *((_QWORD *)this + 30),
    a3,
    a4);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v18 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    McTemplateU0qq_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      14,
      v18);
  }
  return v12;
}
