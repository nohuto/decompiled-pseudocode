/*
 * XREFs of ?UninitializeAndTerminateCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x1802C7E20
 * Callers:
 *     _lambda_decf04464874cb5401550835ac55dd28_::_lambda_invoker_cdecl_ @ 0x1802BAFF0 (_lambda_decf04464874cb5401550835ac55dd28_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::UninitializeAndTerminateCoreUiMessageLoop(ViewManagerBridge *this)
{
  __int64 v2; // rcx
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 264LL))(
    *((_QWORD *)this + 11),
    *((_QWORD *)this + 17));
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 72LL))(v2, (char *)this + 16);
  v5 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 13);
  if ( v3 )
  {
    v4 = **v3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
    if ( v4(v3, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v5) >= 0 )
    {
      (*(void (__fastcall **)(__int64, ViewManagerBridge *))(*(_QWORD *)v5 + 80LL))(v5, this);
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 64LL))(v5, (char *)this + 8);
    }
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 224LL))(*((_QWORD *)this + 11));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
}
