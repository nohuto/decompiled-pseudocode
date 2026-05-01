/*
 * XREFs of ??$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIFallbackWindow@@@Z @ 0x1801387E8
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180133B10 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0CFallbackWindow@@QEAA@XZ @ 0x180138A54 (--0CFallbackWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ @ 0x18013952C (-RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CFallbackWindow,IFallbackWindow,>(_QWORD *a1)
{
  CFallbackWindow *v2; // rax
  int v3; // edi
  CFallbackWindow *v4; // rbx

  *a1 = 0LL;
  v2 = (CFallbackWindow *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = CFallbackWindow::CFallbackWindow(v2);
    v3 = CFallbackWindow::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(CFallbackWindow *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(CFallbackWindow *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
