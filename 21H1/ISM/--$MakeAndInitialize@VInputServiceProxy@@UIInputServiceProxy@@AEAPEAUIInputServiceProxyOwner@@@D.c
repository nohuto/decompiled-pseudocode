/*
 * XREFs of ??$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Z @ 0x18002D93C
 * Callers:
 *     CreateInputServiceProxy @ 0x18002D8B8 (CreateInputServiceProxy.c)
 * Callees:
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x18002DB2C (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 *     ??0InputServiceProxy@@QEAA@XZ @ 0x18002E53C (--0InputServiceProxy@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputServiceProxy,IInputServiceProxy,IInputServiceProxyOwner * &>(
        _QWORD *a1,
        struct IInputServiceProxyOwner **a2)
{
  InputServiceProxy *v4; // rax
  InputServiceProxy *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = (InputServiceProxy *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = InputServiceProxy::InputServiceProxy(v4);
    v6 = InputServiceProxy::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(InputServiceProxy *, GUID *, _QWORD *))v5)(
             v5,
             &GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18,
             a1);
    if ( v5 )
      (*(void (__fastcall **)(InputServiceProxy *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
