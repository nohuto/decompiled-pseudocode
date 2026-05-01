/*
 * XREFs of ?GetViewportPercent@CScrollViewer@@UEAANXZ @ 0x18039A6C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_GetTotalRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x18039B374 (-_GetTotalRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x18039B3F0 (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 */

double __fastcall CScrollViewer::GetViewportPercent(CScrollViewer *this)
{
  __int64 (__fastcall *v2)(const struct tagRECT *); // rdi
  __int64 VisibleRect; // rax
  double v4; // xmm6_8
  __int64 TotalRect; // rax
  _BYTE v7[16]; // [rsp+30h] [rbp-38h] BYREF

  v2 = (__int64 (__fastcall *)(const struct tagRECT *))Geometry::CRect::GetHeight;
  if ( (*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 96LL))(this) )
    v2 = RectWidth;
  if ( !(*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 64LL))(this) )
    return DOUBLE_100_0;
  VisibleRect = CScrollViewer::_GetVisibleRect((char *)this - 208);
  v4 = (double)(int)v2((const struct tagRECT *)VisibleRect);
  TotalRect = CScrollViewer::_GetTotalRect((char *)this - 208, v7);
  return v4 * 100.0 / (double)(int)v2((const struct tagRECT *)TotalRect);
}
