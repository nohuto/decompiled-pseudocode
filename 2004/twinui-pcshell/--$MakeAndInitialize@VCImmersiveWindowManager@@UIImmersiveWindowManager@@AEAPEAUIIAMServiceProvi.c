/*
 * XREFs of ??$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Z @ 0x18015E23C
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180158100 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0CImmersiveWindowManager@@QEAA@XZ @ 0x18015E48C (--0CImmersiveWindowManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18015F110 (-RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CImmersiveWindowManager,IImmersiveWindowManager,IIAMServiceProvider * &>(
        _QWORD *a1,
        struct IIAMServiceProvider **a2)
{
  CImmersiveWindowManager *v4; // rax
  int v5; // edi
  CImmersiveWindowManager *v6; // rbx

  *a1 = 0LL;
  v4 = (CImmersiveWindowManager *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CImmersiveWindowManager::CImmersiveWindowManager(v4);
    v5 = CImmersiveWindowManager::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(CImmersiveWindowManager *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_611aa8fe_b694_4129_86af_2c2553fff785,
             a1);
    if ( v6 )
      (*(void (__fastcall **)(CImmersiveWindowManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
