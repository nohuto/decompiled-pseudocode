/*
 * XREFs of ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802AB310
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180015658 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009759C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x180194AE0 (McTemplateU0ffff_EventWriteTransfer.c)
 *     ?AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x1801AF69C (-AddTransientDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801AF824 (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 */

__int64 __fastcall CSuperWetInkScribbleBase::DrawFallback(
        __int64 *a1,
        CDrawingContext *a2,
        struct _EVENT_DATA_DESCRIPTOR *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _DWORD *, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  const struct tagRECT *v17; // rax
  __int64 v18; // r8
  __int64 v19; // [rsp+30h] [rbp-99h] BYREF
  int v20; // [rsp+38h] [rbp-91h] BYREF
  int v21[2]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v22; // [rsp+48h] [rbp-81h] BYREF
  __int64 v23; // [rsp+50h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+58h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+68h] [rbp-61h] BYREF
  _DWORD v26[4]; // [rsp+78h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+88h] [rbp-41h] BYREF
  void *v28[10]; // [rsp+A0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_DRAWASWETINK_Start,
      (__int64)a3,
      1u,
      &v25);
  a3->Reserved = 0;
  a3->Size = 0;
  HIDWORD(a3->Ptr) = 0;
  LODWORD(a3->Ptr) = 0;
  v6 = *a1;
  v20 = 0;
  v23 = 0LL;
  v22 = 0LL;
  *(_QWORD *)v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64 *, __int64 *, int *))(v6 + 88))(a1, &v20, &v23, &v22, v21);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1[2] + 96LL))(a1[2]) )
      return 0LL;
    v10 = a1[2];
    v19 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64 *))(*(_QWORD *)v10 + 88LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v19);
    v12 = v11(v10, v26, &v19);
    v8 = v12;
    if ( v12 < 0 )
    {
      v13 = 185LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
        (const char *)(unsigned int)v12);
LABEL_21:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
      return v8;
    }
    *(float *)&v24.Ptr = (float)v26[0];
    *((float *)&v24.Ptr + 1) = (float)v26[1];
    *(float *)&v24.Size = (float)v26[2];
    *(float *)&v24.Reserved = (float)v26[3];
    v25 = v24;
    v12 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v25, D2D1_ANTIALIAS_MODE_ALIASED, 1);
    v8 = v12;
    if ( v12 < 0 )
    {
      v13 = 190LL;
      goto LABEL_11;
    }
    LOBYTE(v14) = 1;
    v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*((_QWORD *)a2 + 2) + 64LL))(
            (_QWORD *)a2 + 2,
            v19,
            v14);
    v8 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)v19 + 32LL))(v19, &v27);
      v8 = v15;
      if ( v15 >= 0 )
      {
        v24 = 0LL;
        v25 = v27;
        CDrawingContext::CalcLocalSpaceClippedBounds((__int64)a2, &v25, (__int64)&v24);
        v17 = (const struct tagRECT *)PixelAlign(&v25, (__int64)&v24);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v28, v17);
        CDrawingContext::AddTransientDirtyRegion(a2, (const struct CRegion *)v28);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
          McTemplateU0ffff_EventWriteTransfer(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_COMPUTESCRIBBLE_DRAWASWETINK_Stop,
            v18,
            *((float *)&v24.Ptr + 1),
            v24.Size,
            v24.Type);
        v8 = 0;
        *a3 = v24;
        FastRegion::CRegion::FreeMemory(v28);
        goto LABEL_20;
      }
      v16 = 198LL;
    }
    else
    {
      v16 = 195LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v15);
LABEL_20:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB0,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
