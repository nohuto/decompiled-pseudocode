/*
 * XREFs of ?DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z @ 0x1802505D0
 * Callers:
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x180251630 (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D68C0 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152660 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CompositorTracing::DwmHolographicDisplayRemove_(CompositorTracing *this, int a2)
{
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v3 = *((_QWORD *)wil::details::static_lazy<CompositorTracing>::get(
                     (__int64)this,
                     _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*(_QWORD *)(v3 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v3 + 24) & 0x400000000000LL) == *(_QWORD *)(v3 + 24) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = a2;
    v7 = 4;
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1802EA664, 0LL, 0LL, 3u, &v5);
  }
}
