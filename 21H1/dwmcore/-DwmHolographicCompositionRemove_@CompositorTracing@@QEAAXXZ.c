/*
 * XREFs of ?DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ @ 0x180253DDC
 * Callers:
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z @ 0x180254F10 (-RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800CED90 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801560E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CompositorTracing::DwmHolographicCompositionRemove_(CompositorTracing *this)
{
  __int64 v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = wil::details::static_lazy<CompositorTracing>::get(
         (__int64)this,
         _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 4u
    && (*(_QWORD *)(v1 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v1 + 24) & 0x400000000000LL) == *(_QWORD *)(v1 + 24) )
  {
    tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_1802EE23B, 0LL, 0LL, 2u, &v2);
  }
}
