/*
 * XREFs of ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameFactory@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x1801440E8
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180157F50 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0FrameFactory@@QEAA@XZ @ 0x180146B90 (--0FrameFactory@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@FrameFactory@@QEAAJPEAUIPrivilegedPresentationOperations@@@Z @ 0x180185228 (-RuntimeClassInitialize@FrameFactory@@QEAAJPEAUIPrivilegedPresentationOperations@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<FrameFactory,IApplicationFrameFactory,IPrivilegedPresentationOperations *>(
        _QWORD *a1,
        struct IPrivilegedPresentationOperations **a2)
{
  FrameFactory *v4; // rax
  int v5; // edi
  FrameFactory *v6; // rbx

  *a1 = 0LL;
  v4 = (FrameFactory *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = FrameFactory::FrameFactory(v4);
    v5 = FrameFactory::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(FrameFactory *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
             a1);
    if ( v6 )
      (*(void (__fastcall **)(FrameFactory *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
