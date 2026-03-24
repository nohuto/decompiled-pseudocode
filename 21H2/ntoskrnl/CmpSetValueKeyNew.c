/*
 * XREFs of CmpSetValueKeyNew @ 0x14070A140
 * Callers:
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 * Callees:
 *     CmpFreeValue @ 0x14066B438 (CmpFreeValue.c)
 *     CmpAddValueKeyNew @ 0x140709FA0 (CmpAddValueKeyNew.c)
 *     CmpAddValueToList @ 0x14087B3B8 (CmpAddValueToList.c)
 *     HvMarkCellDirty @ 0x14087BCE8 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpSetValueKeyNew(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        int a4,
        int a5,
        void *a6,
        size_t a7,
        int a8)
{
  __int64 v8; // rsi
  unsigned int v12; // eax
  unsigned int v13; // edi
  size_t Size; // [rsp+20h] [rbp-18h]

  v8 = a2 + 36;
  if ( *(_DWORD *)(a2 + 36) && !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 40), 0LL) )
    return 3221225853LL;
  LODWORD(Size) = a7;
  v12 = CmpAddValueKeyNew(BugCheckParameter2, a3, a5, a6, Size, a8);
  v13 = v12;
  if ( v12 != -1 )
  {
    if ( (int)CmpAddValueToList(BugCheckParameter2, v12, a4, a8, v8) >= 0 )
      return 0LL;
    CmpFreeValue(BugCheckParameter2, v13);
  }
  return 3221225626LL;
}
