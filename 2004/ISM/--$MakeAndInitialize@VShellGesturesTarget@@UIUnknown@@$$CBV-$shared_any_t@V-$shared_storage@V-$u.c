/*
 * XREFs of ??$MakeAndInitialize@VShellGesturesTarget@@UIUnknown@@$$CBV?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEBV?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@@Z @ 0x18017E600
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017E780 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??0ShellGesturesTarget@@QEAA@XZ @ 0x18017E6B4 (--0ShellGesturesTarget@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellGesturesTarget,IUnknown,wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>> const>(
        _QWORD *a1,
        _QWORD *a2)
{
  ShellGesturesTarget *v4; // rax
  unsigned int v5; // edi
  ShellGesturesTarget *v6; // rax
  __int64 v7; // rdx
  ShellGesturesTarget *v8; // rbx
  std::_Ref_count_base *v9; // rcx

  *a1 = 0LL;
  v4 = (ShellGesturesTarget *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ShellGesturesTarget::ShellGesturesTarget(v4);
    v7 = a2[1];
    v8 = v6;
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = a2[1];
    }
    *((_QWORD *)v6 + 3) = *a2;
    v9 = (std::_Ref_count_base *)*((_QWORD *)v6 + 4);
    *((_QWORD *)v6 + 4) = v7;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    v5 = (**(__int64 (__fastcall ***)(ShellGesturesTarget *, GUID *, _QWORD *))v8)(
           v8,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(ShellGesturesTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
