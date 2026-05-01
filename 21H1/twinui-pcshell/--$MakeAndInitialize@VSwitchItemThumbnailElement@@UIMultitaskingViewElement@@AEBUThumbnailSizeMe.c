/*
 * XREFs of ??$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Z @ 0x18037F4B0
 * Callers:
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x180380274 (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0SwitchItemThumbnailElement@@QEAA@XZ @ 0x18037F7CC (--0SwitchItemThumbnailElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchThumbnailFactory@@PEAUISwitchItem@@@Z @ 0x180395424 (-RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchTh.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItemThumbnailElement,IMultitaskingViewElement,ThumbnailSizeMetrics const &,ISwitchThumbnailFactory * const &,ISwitchItem * const &>(
        _QWORD *a1,
        const struct ThumbnailSizeMetrics *a2,
        struct ISwitchThumbnailFactory **a3,
        struct ISwitchItem **a4)
{
  SwitchItemThumbnailElement *v8; // rax
  int v9; // edi
  SwitchItemThumbnailElement *v10; // rbx

  *a1 = 0LL;
  v8 = (SwitchItemThumbnailElement *)operator new(0x270uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = SwitchItemThumbnailElement::SwitchItemThumbnailElement(v8);
    v9 = SwitchItemThumbnailElement::RuntimeClassInitialize(v10, a2, *a3, *a4);
    if ( v9 >= 0 )
      v9 = (**(__int64 (__fastcall ***)(SwitchItemThumbnailElement *, GUID *, _QWORD *))v10)(
             v10,
             &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
             a1);
    if ( v10 )
      (*(void (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
