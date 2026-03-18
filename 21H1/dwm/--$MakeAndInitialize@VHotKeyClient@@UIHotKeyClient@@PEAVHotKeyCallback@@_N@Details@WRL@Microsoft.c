/*
 * XREFs of ??$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVHotKeyCallback@@_N@Details@WRL@Microsoft@@YAJPEAPEAUIHotKeyClient@@$$QEAPEAVHotKeyCallback@@$$QEA_N@Z @ 0x140008124
 * Callers:
 *     ?RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ @ 0x140008220 (-RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140003980 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ??0HotKeyClient@@QEAA@XZ @ 0x14000A768 (--0HotKeyClient@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z @ 0x14000B7A4 (-RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotKeyClient,IHotKeyClient,HotKeyCallback *,bool>(
        _QWORD *a1,
        struct IHotKeyClientOwner **a2,
        bool *a3)
{
  HotKeyClient *v6; // rax
  int v7; // edi
  HotKeyClient *v8; // rbx

  *a1 = 0LL;
  v6 = (HotKeyClient *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = HotKeyClient::HotKeyClient(v6);
    v7 = HotKeyClient::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(HotKeyClient *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_b34d938b_69a1_473e_aa7c_930ffac40974,
             a1);
    if ( v8 )
      (*(void (__fastcall **)(HotKeyClient *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
