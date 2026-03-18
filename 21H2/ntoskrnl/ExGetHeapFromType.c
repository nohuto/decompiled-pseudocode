/*
 * XREFs of ExGetHeapFromType @ 0x14021491C
 * Callers:
 *     ExAllocateHeapPages @ 0x140213318 (ExAllocateHeapPages.c)
 *     ExAllocateContiguousHeapPool @ 0x140214694 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapSpecialPool @ 0x140641F58 (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetHeapFromType(int a1, unsigned int a2, int a3)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rax

  if ( a2 == 0x80000000 )
    a2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v3 = &qword_140C5EA40[1048 * (a2 < dword_140C5EA20 ? a2 : 0)];
  if ( a1 < 0 )
  {
    if ( a3 )
      return qword_140CE1A58;
    else
      return v3[3];
  }
  else if ( (a1 & 0x21) == 0x21 )
  {
    v6 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 608);
    if ( a3 )
      return *(_QWORD *)(v6 + 14584);
    else
      return *(_QWORD *)(v6 + 14576);
  }
  else
  {
    if ( (a1 & 1) != 0 )
      v4 = 2LL;
    else
      v4 = (a1 & 0x200) != 0;
    if ( a3 )
      return qword_140CE1A40[v4];
    else
      return v3[v4];
  }
}
