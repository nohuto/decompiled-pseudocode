/*
 * XREFs of CmpKeyEnumStackNotifyPromotion @ 0x14087ABDC
 * Callers:
 *     CmpPromoteSubtree @ 0x1407291E8 (CmpPromoteSubtree.c)
 *     CmpPartialPromoteSubkeys @ 0x1408800C0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140699C08 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140699C98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x14087AA20 (CmpKeyEnumStackEntryNotifyPromotion.c)
 */

_QWORD *__fastcall CmpKeyEnumStackNotifyPromotion(__int16 *a1)
{
  unsigned __int64 EntryAtLayerHeight; // rdi
  _QWORD *result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // edx

  EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight((__int64)a1, *a1);
  CmpKeyEnumStackEntryNotifyPromotion((_QWORD *)EntryAtLayerHeight);
  result = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)(a1 + 4), *a1);
  v4 = result;
  if ( *((_DWORD *)result + 2) == -1 )
  {
    if ( result[2] )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*result + 16LL))(*result, result + 3);
    *v4 = 0LL;
    *(_QWORD *)((char *)v4 + 12) = 0LL;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 2) = -1;
    v4[3] = 0LL;
    *((_DWORD *)v4 + 6) = -1;
    *((_WORD *)v4 + 14) = 0;
    v5 = *(_QWORD *)EntryAtLayerHeight;
    v6 = *(_DWORD *)(EntryAtLayerHeight + 112);
    *v4 = *(_QWORD *)EntryAtLayerHeight;
    *((_DWORD *)v4 + 2) = v6;
    result = (_QWORD *)(*(__int64 (**)(void))(v5 + 8))();
    v4[2] = result;
  }
  return result;
}
