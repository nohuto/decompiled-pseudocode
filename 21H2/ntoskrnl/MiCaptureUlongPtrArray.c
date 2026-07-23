/*
 * XREFs of MiCaptureUlongPtrArray @ 0x1408D5904
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1408D6960 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D6E40 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D7100 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCaptureUlongPtrArray(_QWORD *a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rcx
  __int16 v5; // ax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  size_t v8; // r8

  v4 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( v4 && ((v5 = *(_WORD *)(v4 + 8), v5 == 332) || v5 == 452) )
  {
    v6 = 4 * a3;
    if ( 4 * a3 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v6] > 0x7FFFFFFF0000LL || &a2[v6] < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v7 = 0LL;
    if ( (a3 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      do
      {
        a1[v7] = *(unsigned int *)&a2[4 * v7];
        a1[v7 + 1] = *(unsigned int *)&a2[4 * v7 + 4];
        a1[v7 + 2] = *(unsigned int *)&a2[4 * v7 + 8];
        a1[v7 + 3] = *(unsigned int *)&a2[4 * v7 + 12];
        a1[v7 + 4] = *(unsigned int *)&a2[4 * v7 + 16];
        a1[v7 + 5] = *(unsigned int *)&a2[4 * v7 + 20];
        a1[v7 + 6] = *(unsigned int *)&a2[4 * v7 + 24];
        a1[v7 + 7] = *(unsigned int *)&a2[4 * v7 + 28];
        v7 += 8LL;
      }
      while ( v7 < (a3 & 0xFFFFFFFFFFFFFFF8uLL) );
    }
    if ( (a3 & 7) != 0 )
    {
      do
      {
        a1[v7] = *(unsigned int *)&a2[4 * v7];
        ++v7;
      }
      while ( v7 < a3 );
    }
  }
  else
  {
    v8 = 8 * a3;
    if ( v8 )
    {
      if ( ((unsigned __int8)a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v8] > 0x7FFFFFFF0000LL || &a2[v8] < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(a1, a2, v8);
  }
  return 0LL;
}
