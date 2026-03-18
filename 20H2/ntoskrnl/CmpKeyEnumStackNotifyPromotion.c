/*
 * XREFs of CmpKeyEnumStackNotifyPromotion @ 0x14087D260
 * Callers:
 *     CmpPromoteSubtree @ 0x140725758 (CmpPromoteSubtree.c)
 *     CmpPartialPromoteSubkeys @ 0x140882B3C (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406BDD30 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406BDDC0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x14087D0A4 (CmpKeyEnumStackEntryNotifyPromotion.c)
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
