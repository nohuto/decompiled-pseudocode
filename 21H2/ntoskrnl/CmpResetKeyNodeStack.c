/*
 * XREFs of CmpResetKeyNodeStack @ 0x140729F5C
 * Callers:
 *     CmpKeyEnumStackReset @ 0x140729EFC (CmpKeyEnumStackReset.c)
 *     CmpSubtreeEnumeratorReset @ 0x1408768D8 (CmpSubtreeEnumeratorReset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1405F8E58 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
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
