/*
 * XREFs of MiDeleteZeroContext @ 0x1405B2670
 * Callers:
 *     MiCleanupPartitionZeroing @ 0x1405B25B4 (MiCleanupPartitionZeroing.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14023FD0C (MiDereferencePageRunsEx.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x140246E70 (MiDereferenceAnyActiveHugeContext.c)
 *     MiDeleteUltraThreadContext @ 0x140268284 (MiDeleteUltraThreadContext.c)
 *     MiSignalZeroingPassComplete @ 0x1403C6CDC (MiSignalZeroingPassComplete.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteZeroContext(_QWORD *P)
{
  void *v2; // rcx
  _QWORD *v3; // rsi
  __int64 i; // rdi
  _QWORD *v5; // rbp
  __int64 v6; // rcx

  v2 = (void *)P[38];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (_QWORD *)P[18];
  if ( v3 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 39); i = (unsigned int)(i + 1) )
    {
      v5 = (_QWORD *)v3[5 * i + 1];
      if ( v5 )
      {
        MiDereferenceAnyActiveHugeContext(v3[5 * i + 1]);
        MiDeleteUltraThreadContext((__int64)(v5 + 11));
        MiSignalZeroingPassComplete((__int64)v5);
        v6 = v5[30];
        if ( v6 )
          MiDereferencePageRunsEx(v6, 1);
        ExFreePoolWithTag(v5, 0);
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  ExFreePoolWithTag(P, 0);
}
