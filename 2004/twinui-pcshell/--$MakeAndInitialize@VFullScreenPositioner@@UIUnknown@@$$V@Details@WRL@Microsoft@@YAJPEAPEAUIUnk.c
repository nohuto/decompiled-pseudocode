/*
 * XREFs of ??$MakeAndInitialize@VFullScreenPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801A44D0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VFullScreenPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801A5CB0 (-CreateInstance@-$SimpleClassFactory@VFullScreenPositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0FullScreenPositioner@@QEAA@XZ @ 0x1801A4930 (--0FullScreenPositioner@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@FullScreenPositioner@@QEAAJXZ @ 0x1801A776C (-RuntimeClassInitialize@FullScreenPositioner@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<FullScreenPositioner,IUnknown,>(_QWORD *a1)
{
  FullScreenPositioner *v2; // rax
  int v3; // edi
  FullScreenPositioner *v4; // rbx

  *a1 = 0LL;
  v2 = (FullScreenPositioner *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = FullScreenPositioner::FullScreenPositioner(v2);
    v3 = FullScreenPositioner::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(FullScreenPositioner *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(FullScreenPositioner *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
