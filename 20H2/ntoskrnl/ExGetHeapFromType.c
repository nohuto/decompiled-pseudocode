/*
 * XREFs of ExGetHeapFromType @ 0x1402605DC
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x1402603B0 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapPages @ 0x1403754B4 (ExAllocateHeapPages.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B834C (ExAllocateHeapSpecialPool.c)
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
  v3 = &qword_140C57F40[1048 * (a2 < dword_140C57F10 ? a2 : 0)];
  if ( a1 < 0 )
  {
    if ( a3 )
      return qword_140CDAF58;
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
      return qword_140CDAF40[v4];
    else
      return v3[v4];
  }
}
