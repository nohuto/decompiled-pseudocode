/*
 * XREFs of ExGetHeapFromType @ 0x14021720C
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x140216FE0 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapPages @ 0x140375218 (ExAllocateHeapPages.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B9FAC (ExAllocateHeapSpecialPool.c)
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
  v3 = &qword_140C58100[1048 * (a2 < dword_140C580D0 ? a2 : 0)];
  if ( a1 < 0 )
  {
    if ( a3 )
      return qword_140CDB118;
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
      return qword_140CDB100[v4];
    else
      return v3[v4];
  }
}
