/*
 * XREFs of CmpStartKeyNodeStack @ 0x14069F324
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x14065C7A4 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x14065C8A4 (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14069EDC0 (CmpStartKeyNodeStackFromKcbStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpStartKeyNodeStack(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  unsigned int v5; // ebx
  __int64 v8; // rbp
  PVOID TransientPoolWithTag; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx

  v5 = 0;
  if ( a2 >= 2 )
  {
    LOWORD(v8) = a2 - 1;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 32LL * a2 - 32, 0x39364D43u, a4);
    *(_QWORD *)(a1 + 72) = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return (unsigned int)-1073741670;
    v10 = 0LL;
    v8 = (unsigned __int16)v8;
    do
    {
      v11 = *(_QWORD *)(a1 + 72);
      *(_OWORD *)(v10 + v11) = 0LL;
      *(_OWORD *)(v10 + v11 + 16) = 0LL;
      *(_DWORD *)(v10 + v11 + 8) = -1;
      HvpGetCellContextReinitialize(v10 + v11 + 24);
      v10 += 32LL;
      --v8;
    }
    while ( v8 );
  }
  *(_WORD *)a1 = a2;
  return v5;
}
