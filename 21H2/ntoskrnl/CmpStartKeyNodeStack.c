/*
 * XREFs of CmpStartKeyNodeStack @ 0x14072A698
 * Callers:
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x14072A53C (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x14072A63C (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14087680C (CmpStartKeyNodeStackFromKcbStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 */

__int64 __fastcall CmpStartKeyNodeStack(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  unsigned int v4; // ebx
  __int16 v8; // di
  PVOID TransientPoolWithTag; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  v4 = 0;
  if ( a2 >= 2 )
  {
    v8 = a2 - 1;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 32LL * (__int16)(a2 - 1), 0x39364D43u, a4);
    *(_QWORD *)(a1 + 72) = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return (unsigned int)-1073741670;
    if ( v8 > 0 )
    {
      v10 = 0LL;
      v11 = (unsigned __int16)v8;
      do
      {
        v12 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(v10 + v12) = 0LL;
        *(_QWORD *)(v10 + v12 + 12) = 0LL;
        *(_DWORD *)(v10 + v12 + 20) = 0;
        *(_DWORD *)(v10 + v12 + 8) = -1;
        *(_QWORD *)(v10 + v12 + 24) = 0LL;
        *(_DWORD *)(v10 + v12 + 24) = -1;
        *(_WORD *)(v10 + v12 + 28) = 0;
        v10 += 32LL;
        --v11;
      }
      while ( v11 );
    }
  }
  *(_WORD *)a1 = a2;
  return v4;
}
