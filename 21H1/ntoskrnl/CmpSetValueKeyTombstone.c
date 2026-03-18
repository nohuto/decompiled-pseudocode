/*
 * XREFs of CmpSetValueKeyTombstone @ 0x14086A450
 * Callers:
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 * Callees:
 *     CmpFreeValue @ 0x14069787C (CmpFreeValue.c)
 *     CmpAddValueKeyTombstone @ 0x140869F40 (CmpAddValueKeyTombstone.c)
 *     CmpAddValueToList @ 0x140876BD8 (CmpAddValueToList.c)
 *     HvMarkCellDirty @ 0x140877500 (HvMarkCellDirty.c)
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
