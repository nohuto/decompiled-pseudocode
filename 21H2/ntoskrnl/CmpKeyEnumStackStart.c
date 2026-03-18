/*
 * XREFs of CmpKeyEnumStackStart @ 0x14065C8A4
 * Callers:
 *     CmpSubtreeEnumeratorStart @ 0x14065C7A4 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140920FCC (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x14069F244 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpStartKeyNodeStack @ 0x14069F324 (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStart(__int64 a1, unsigned __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 v7; // rbp
  PVOID TransientPoolWithTag; // rax
  __int64 v9; // rsi

  if ( (__int16)a2 < 2 )
    goto LABEL_2;
  LOWORD(v7) = a2 - 1;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, ((__int64)(__int16)a2 << 7) - 128, 0x38364D43u, a4);
  v9 = 0LL;
  *(_QWORD *)(a1 + 344) = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    v7 = (unsigned __int16)v7;
    do
    {
      CmpKeyEnumStackEntryInitialize(v9 + *(_QWORD *)(a1 + 344));
      v9 += 128LL;
      --v7;
    }
    while ( v7 );
LABEL_2:
    *(_WORD *)a1 = a2;
    return CmpStartKeyNodeStack(a1 + 8, a2);
  }
  return 3221225626LL;
}
