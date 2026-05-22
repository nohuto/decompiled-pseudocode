/*
 * XREFs of ??$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVPenEventsDispatcherPrincipal@@_N@Details@WRL@Microsoft@@YAJPEAPEAUIHotKeyClient@@$$QEAPEAVPenEventsDispatcherPrincipal@@$$QEA_N@Z @ 0x18013250C
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVPenEventsDispatcherPrincipal@@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIHotKeyClient@@@WRL@Microsoft@@@012@$$QEAPEAVPenEventsDispatcherPrincipal@@$$QEA_N@Z @ 0x1801325DC (--$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVPenEventsDispatcherPrincipa_ea_1801325DC.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0HotKeyClient@@QEAA@XZ @ 0x18014810C (--0HotKeyClient@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z @ 0x180148A48 (-RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotKeyClient,IHotKeyClient,PenEventsDispatcherPrincipal *,bool>(
        _QWORD *a1,
        _QWORD *a2,
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
    v7 = HotKeyClient::RuntimeClassInitialize(
           v8,
           (struct IHotKeyClientOwner *)((*a2 + 56LL) & -(__int64)(*a2 != 0LL)),
           *a3);
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
