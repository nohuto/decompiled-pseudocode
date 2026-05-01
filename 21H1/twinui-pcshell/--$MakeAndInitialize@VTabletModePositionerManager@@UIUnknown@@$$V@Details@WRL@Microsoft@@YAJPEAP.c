/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803D118C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803D1700 (-CreateInstance@-$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x1803D1408 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabletModePositionerManager@@QEAAJXZ @ 0x1803D1C60 (-RuntimeClassInitialize@TabletModePositionerManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerManager,IUnknown,>(_QWORD *a1)
{
  TabletModePositionerManager *v2; // rax
  int v3; // edi
  TabletModePositionerManager *v4; // rbx

  *a1 = 0LL;
  v2 = (TabletModePositionerManager *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = TabletModePositionerManager::TabletModePositionerManager(v2);
    v3 = TabletModePositionerManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(TabletModePositionerManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(TabletModePositionerManager *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
