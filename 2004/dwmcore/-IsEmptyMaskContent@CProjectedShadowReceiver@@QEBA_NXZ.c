/*
 * XREFs of ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x18000DF94
 * Callers:
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x18000C3D4 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowReceiver::IsEmptyMaskContent(CProjectedShadowReceiver *this)
{
  __int64 v1; // r9
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 7) )
    return 1;
  v1 = *((_QWORD *)this + 12);
  if ( !v1 )
    v1 = *(_QWORD *)(*((_QWORD *)this + 2) + 168LL);
  v3 = 1;
  return !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v1 + 288LL))(v1, 0LL, &v3) || v3;
}
