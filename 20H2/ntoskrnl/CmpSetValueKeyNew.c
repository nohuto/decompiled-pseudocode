/*
 * XREFs of CmpSetValueKeyNew @ 0x1407063C8
 * Callers:
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1407608EC (CmpCommitSetValueKeyUoW.c)
 * Callees:
 *     CmpFreeValue @ 0x140706124 (CmpFreeValue.c)
 *     CmpAddValueKeyNew @ 0x14070647C (CmpAddValueKeyNew.c)
 *     CmpAddValueToList @ 0x14087DA44 (CmpAddValueToList.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpSetValueKeyNew(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, int a7, int a8)
{
  __int64 v8; // rsi
  unsigned int v11; // eax
  unsigned int v12; // edi

  v8 = a2 + 36;
  if ( *(_DWORD *)(a2 + 36) && !(unsigned __int8)HvMarkCellDirty(a1, *(unsigned int *)(a2 + 40), 0LL) )
    return 3221225853LL;
  v11 = CmpAddValueKeyNew(a1, a7, a8);
  v12 = v11;
  if ( v11 != -1 )
  {
    if ( (int)CmpAddValueToList(a1, v11, a4, a8, v8) >= 0 )
      return 0LL;
    CmpFreeValue(a1, v12);
  }
  return 3221225626LL;
}
