/*
 * XREFs of ??$MakeAndInitialize@VInputSiteHierarchyManager@@UIInputSiteHierarchyManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInputSiteHierarchyManager@@@Z @ 0x18001EF78
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800167F0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?Create@InputSiteHierarchyManager@@SA?AV?$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ @ 0x18001EF3C (-Create@InputSiteHierarchyManager@@SA-AV-$ComPtr@UIInputSiteHierarchyManager@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??0InputSiteHierarchyManager@@AEAA@XZ @ 0x18001F074 (--0InputSiteHierarchyManager@@AEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputSiteHierarchyManager,IInputSiteHierarchyManager,>(
        _QWORD *a1)
{
  InputSiteHierarchyManager *v2; // rax
  unsigned int v3; // edi
  InputSiteHierarchyManager *v5; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (InputSiteHierarchyManager *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v5 = InputSiteHierarchyManager::InputSiteHierarchyManager(v2);
    v3 = (**(__int64 (__fastcall ***)(InputSiteHierarchyManager *, GUID *, _QWORD *))v5)(
           v5,
           &GUID_5325a482_4673_4888_a483_4084c3b23478,
           a1);
    (*(void (__fastcall **)(InputSiteHierarchyManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
