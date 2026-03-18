/*
 * XREFs of CmpSubtreeEnumeratorStart @ 0x14065C7A4
 * Callers:
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x14065C6C0 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x14091D2E4 (CmpSubtreeEnumeratorStartForKcbStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpKeyEnumStackStart @ 0x14065C8A4 (CmpKeyEnumStackStart.c)
 *     CmpKeyEnumStackInitialize @ 0x14069F1F4 (CmpKeyEnumStackInitialize.c)
 *     CmpStartKeyNodeStack @ 0x14069F324 (CmpStartKeyNodeStack.c)
 *     CmpStartKcbStack @ 0x1407C07F4 (CmpStartKcbStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStart(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  PVOID TransientPoolWithTag; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  _WORD *v8; // rbx
  unsigned __int16 v9; // bx
  __int64 v10; // rsi
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
    v8 = (_WORD *)(v6 + *(_QWORD *)(a1 + 96));
    memset(v8, 0, 0x198uLL);
    v8[13] = -1;
    CmpKeyEnumStackInitialize(v8 + 28);
    v6 += 408LL;
    --v7;
  }
  while ( v7 );
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a1 + 96) + 408LL * v9;
    result = CmpStartKcbStack(v10 + 24, *(unsigned __int16 *)(a1 + 2));
    if ( (int)result < 0 )
      break;
    result = CmpKeyEnumStackStart(v10 + 56, *(unsigned __int16 *)(a1 + 2));
    if ( (int)result < 0 )
      break;
    if ( (__int16)++v9 >= 512 )
      return CmpStartKeyNodeStack(a1 + 16, *(unsigned __int16 *)(a1 + 2));
  }
  return result;
}
