/*
 * XREFs of HalpMmAllocCtxMarkHiberPhase @ 0x1409A3264
 * Callers:
 *     HaliLocateHiberRanges @ 0x140991DB0 (HaliLocateHiberRanges.c)
 * Callees:
 *     RtlAreBitsClear @ 0x1402E0BC0 (RtlAreBitsClear.c)
 *     PoSetHiberRange @ 0x1403847F0 (PoSetHiberRange.c)
 */

void HalpMmAllocCtxMarkHiberPhase()
{
  __int64 i; // rbx
  unsigned __int64 v1; // rdi
  ULONG v2; // r14d
  char *j; // rsi
  __int64 v4; // rbp

  for ( i = HalpNPPoolAllocCtx; (__int64 *)i != &HalpNPPoolAllocCtx; i = *(_QWORD *)i )
  {
    v1 = *(unsigned int *)(i + 32);
    v2 = 0;
    for ( j = *(char **)(i + 16); v1; v1 -= v4 )
    {
      v4 = v1;
      if ( v1 > 0x100 )
        v4 = 256LL;
      if ( !RtlAreBitsClear((PRTL_BITMAP)(i + 32), v2, v4) )
        PoSetHiberRange(0LL, 0x10000u, j, 16 * v4, 0x746C6168u);
      v2 += v4;
      j += 16 * v4;
    }
  }
}
