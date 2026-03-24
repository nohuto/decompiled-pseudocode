/*
 * XREFs of CmpResetKeyNodeStack @ 0x140729AAC
 * Callers:
 *     CmpKeyEnumStackReset @ 0x140729A4C (CmpKeyEnumStackReset.c)
 *     CmpSubtreeEnumeratorReset @ 0x140876778 (CmpSubtreeEnumeratorReset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140699C98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpResetKeyNodeStack(__int16 *a1)
{
  __int16 i; // si
  _QWORD *EntryAtLayerHeight; // rax
  _QWORD *v4; // rbx

  for ( i = 0; i <= *a1; *((_WORD *)v4 + 14) = 0 )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, i);
    v4 = EntryAtLayerHeight;
    if ( EntryAtLayerHeight[2] )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
        *EntryAtLayerHeight,
        EntryAtLayerHeight + 3);
    *v4 = 0LL;
    *(_QWORD *)((char *)v4 + 12) = 0LL;
    ++i;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 2) = -1;
    v4[3] = 0LL;
    *((_DWORD *)v4 + 6) = -1;
  }
}
