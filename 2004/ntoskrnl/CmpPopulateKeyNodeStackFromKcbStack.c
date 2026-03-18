/*
 * XREFs of CmpPopulateKeyNodeStackFromKcbStack @ 0x1407187E0
 * Callers:
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1408731EC (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x140873228 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405E7738 (CmpGetKcbAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406E9448 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpPopulateKeyNodeStackFromKcbStack(__int64 a1, __int64 a2)
{
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // rsi
  __int16 v6; // dx
  __int64 KcbAtLayerHeight; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  for ( i = *(_WORD *)(a2 + 2); i >= 0; --i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, i);
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, v6);
    v8 = *(unsigned int *)(KcbAtLayerHeight + 40);
    if ( (_DWORD)v8 != -1 )
    {
      v9 = *(_QWORD *)(KcbAtLayerHeight + 32);
      *(_QWORD *)EntryAtLayerHeight = v9;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v8;
      *(_QWORD *)(EntryAtLayerHeight + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v9 + 8))(
                                               v9,
                                               v8,
                                               EntryAtLayerHeight + 24);
    }
  }
}
