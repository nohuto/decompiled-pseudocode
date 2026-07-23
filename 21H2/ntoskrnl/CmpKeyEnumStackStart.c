/*
 * XREFs of CmpKeyEnumStackStart @ 0x14072A63C
 * Callers:
 *     CmpSubtreeEnumeratorStart @ 0x14072A53C (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14087AE88 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1405F8ECC (CmpKeyEnumStackEntryInitialize.c)
 *     CmpStartKeyNodeStack @ 0x14072A698 (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStart(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 v7; // rbp
  PVOID TransientPoolWithTag; // rax
  __int64 v9; // rsi

  if ( a2 < 2 )
  {
LABEL_2:
    *(_WORD *)a1 = a2;
    return CmpStartKeyNodeStack(a1 + 8, (unsigned __int16)a2);
  }
  LOWORD(v7) = a2 - 1;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, (__int64)(__int16)(a2 - 1) << 7, 0x38364D43u, a4);
  v9 = 0LL;
  *(_QWORD *)(a1 + 344) = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    if ( (__int16)v7 > 0 )
    {
      v7 = (unsigned __int16)v7;
      do
      {
        CmpKeyEnumStackEntryInitialize(v9 + *(_QWORD *)(a1 + 344));
        v9 += 128LL;
        --v7;
      }
      while ( v7 );
    }
    goto LABEL_2;
  }
  return 3221225626LL;
}
