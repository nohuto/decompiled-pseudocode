/*
 * XREFs of ??$MakeAndInitialize@VShellPositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803D29B4
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VShellPositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803D3D30 (-CreateInstance@-$SimpleClassFactory@VShellPositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0ShellPositionerManager@@QEAA@XZ @ 0x1803D2F8C (--0ShellPositionerManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ShellPositionerManager@@QEAAJXZ @ 0x1803D4C60 (-RuntimeClassInitialize@ShellPositionerManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellPositionerManager,IUnknown,>(_QWORD *a1)
{
  ShellPositionerManager *v2; // rax
  int v3; // edi
  ShellPositionerManager *v4; // rbx

  *a1 = 0LL;
  v2 = (ShellPositionerManager *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = ShellPositionerManager::ShellPositionerManager(v2);
    v3 = ShellPositionerManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(ShellPositionerManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(ShellPositionerManager *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
