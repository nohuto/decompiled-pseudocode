/*
 * XREFs of CmpSetValueKeyTombstone @ 0x14086EB5C
 * Callers:
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 * Callees:
 *     CmpFreeValue @ 0x140660258 (CmpFreeValue.c)
 *     CmpAddValueKeyTombstone @ 0x14086E64C (CmpAddValueKeyTombstone.c)
 *     CmpAddValueToList @ 0x14087B518 (CmpAddValueToList.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpSetValueKeyTombstone(ULONG_PTR a1, __int64 a2, unsigned __int16 *a3, int a4, int a5)
{
  __int64 v5; // rbx
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edi

  v5 = a2 + 36;
  if ( !*(_DWORD *)(a2 + 36) || (unsigned __int8)HvMarkCellDirty(a1, *(unsigned int *)(a2 + 40), 0LL) )
  {
    v10 = CmpAddValueKeyTombstone(a1, a3);
    v11 = v10;
    if ( v10 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      v9 = CmpAddValueToList(a1, v10, a4, a5, v5);
      if ( v9 >= 0 )
      {
        v11 = -1;
        v9 = 0;
      }
      if ( v11 != -1 )
        CmpFreeValue(a1, v11);
    }
  }
  else
  {
    return (unsigned int)-1073741443;
  }
  return (unsigned int)v9;
}
