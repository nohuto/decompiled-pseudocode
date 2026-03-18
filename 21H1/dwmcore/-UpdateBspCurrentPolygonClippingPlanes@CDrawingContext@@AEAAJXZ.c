/*
 * XREFs of ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18017CDAC
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18004D5B4 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800502F0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@@Z @ 0x180192E10 (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 */

__int64 __fastcall CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(CDrawingContext *this)
{
  void (__fastcall ***v2)(_QWORD, _DWORD *); // rcx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _DWORD v7[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v8[64]; // [rsp+40h] [rbp-78h] BYREF
  int v9; // [rsp+80h] [rbp-38h]
  int v10; // [rsp+90h] [rbp-28h]
  int v11; // [rsp+94h] [rbp-24h]
  int v12; // [rsp+98h] [rbp-20h]
  int v13; // [rsp+9Ch] [rbp-1Ch]

  v2 = (void (__fastcall ***)(_QWORD, _DWORD *))(*((_QWORD *)this + 4)
                                               + 8LL
                                               + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL));
  (**v2)(v2, v7);
  v9 = 0;
  CMatrixStack::Top((CDrawingContext *)((char *)this + 408), (struct CMILMatrix *)v8);
  v10 = 0;
  v11 = 0;
  v12 = v7[0];
  v13 = v7[1];
  v3 = ClipPlaneIterator::ClipToPolygon((CDrawingContext *)((char *)this + 3488));
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x121Au, 0LL);
  return v5;
}
