/*
 * XREFs of CmpSubtreeEnumeratorStart @ 0x14072A53C
 * Callers:
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x14072A464 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140876938 (CmpSubtreeEnumeratorStartForKcbStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpKeyEnumStackInitialize @ 0x1405F8E7C (CmpKeyEnumStackInitialize.c)
 *     CmpStartKcbStack @ 0x140712760 (CmpStartKcbStack.c)
 *     CmpKeyEnumStackStart @ 0x14072A63C (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStack @ 0x14072A698 (CmpStartKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStart(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  PVOID TransientPoolWithTag; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r8
  struct _LOOKASIDE_LIST_EX *v10; // r9
  __int16 v11; // bx
  __int64 v12; // rsi
  __int64 result; // rax

  *(_WORD *)(a1 + 2) = a2;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x33000uLL, 0x31394D43u, a4);
  *(_QWORD *)(a1 + 96) = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return 3221225626LL;
  v6 = 0LL;
  v7 = 512LL;
  do
  {
    v8 = v6 + *(_QWORD *)(a1 + 96);
    memset((void *)v8, 0, 0x198uLL);
    *(_WORD *)(v8 + 26) = -1;
    CmpKeyEnumStackInitialize((char *)(v8 + 56));
    v6 += 408LL;
    --v7;
  }
  while ( v7 );
  v11 = 0;
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 96) + 408LL * v11;
    result = CmpStartKcbStack(v12 + 24, *(_WORD *)(a1 + 2), v9, v10);
    if ( (int)result < 0 )
      break;
    result = CmpKeyEnumStackStart(v12 + 56, *(unsigned __int16 *)(a1 + 2));
    if ( (int)result < 0 )
      break;
    if ( ++v11 >= 512 )
      return CmpStartKeyNodeStack(a1 + 16, *(unsigned __int16 *)(a1 + 2));
  }
  return result;
}
