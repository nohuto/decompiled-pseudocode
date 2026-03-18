/*
 * XREFs of ExGetHeapFromType @ 0x1402F960C
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x1402F93E0 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapPages @ 0x140371FE8 (ExAllocateHeapPages.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B40CC (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetHeapFromType(int a1, unsigned int a2, int a3)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rax

  if ( a2 == 0x80000000 )
    a2 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  v3 = &qword_140C57FC0[1048 * (a2 < dword_140C57F90 ? a2 : 0)];
  if ( a1 < 0 )
  {
    if ( a3 )
      return qword_140CDAFD8;
    else
      return v3[3];
  }
  else if ( (a1 & 0x21) == 0x21 )
  {
    v6 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 672);
    if ( a3 )
      return *(_QWORD *)(v6 + 14568);
    else
      return *(_QWORD *)(v6 + 14560);
  }
  else
  {
    if ( (a1 & 1) != 0 )
      v4 = 2LL;
    else
      v4 = (a1 & 0x200) != 0;
    if ( a3 )
      return qword_140CDAFC0[v4];
    else
      return v3[v4];
  }
}
