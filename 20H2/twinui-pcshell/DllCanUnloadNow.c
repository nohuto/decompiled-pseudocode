/*
 * XREFs of DllCanUnloadNow @ 0x180084300
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180085524 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  __int64 v0; // rax

  v0 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 24LL))(v0) != 0;
}
