/*
 * XREFs of KeFreeCalloutStack @ 0x14076A610
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x140239560 (MmDeleteKernelStack.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeCalloutStack(_BYTE *P)
{
  __int64 v1; // rdi
  unsigned int i; // ebp

  v1 = 0LL;
  for ( i = P[4] != 0; (unsigned int)v1 < (unsigned __int8)P[5]; v1 = (unsigned int)(v1 + 1) )
  {
    MmDeleteKernelStack(*(_QWORD *)&P[8 * v1 + 64], i);
    *(_QWORD *)&P[8 * v1 + 64] = (char *)MmBadPointer + 4096;
  }
  ExFreePoolWithTag(P, 0);
}
