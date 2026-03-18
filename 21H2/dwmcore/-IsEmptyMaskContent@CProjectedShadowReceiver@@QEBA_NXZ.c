/*
 * XREFs of ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x1802358A8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180237684 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowReceiver::IsEmptyMaskContent(CProjectedShadowReceiver *this)
{
  __int64 v1; // r9
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 8) )
    return 1;
  v1 = *((_QWORD *)this + 13);
  if ( !v1 )
    v1 = *(_QWORD *)(*((_QWORD *)this + 2) + 320LL);
  v3 = 1;
  return !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v1 + 288LL))(v1, 0LL, &v3) || v3;
}
