/*
 * XREFs of MiAllocateAccessLog @ 0x140262C80
 * Callers:
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 * Callees:
 *     MiInitializePageAccessLogging @ 0x140262DC0 (MiInitializePageAccessLogging.c)
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     ExAllocatePoolMm @ 0x140346100 (ExAllocatePoolMm.c)
 */

_QWORD *__fastcall MiAllocateAccessLog(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbp
  PVOID *v4; // rdi
  _QWORD **v5; // rsi
  __int64 v6; // r9
  __int64 PoolMm; // rax
  _QWORD *v8; // rdx
  _QWORD *result; // rax
  _QWORD *v10; // rax

  v2 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 174));
  if ( (unsigned int)MiSufficientAvailablePages(v2, 1056LL)
    && *(__int64 *)(v2 + 7168) >= 1056
    && (unsigned __int64)(MiState - qword_140C4C908) >= 0x800 )
  {
    v3 = 4096LL;
  }
  else
  {
    v3 = 512LL;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v4 = (PVOID *)&unk_140C4F7E8;
  else
    v4 = (PVOID *)(a1 + 232);
  v5 = (_QWORD **)*v4;
  if ( *v4 )
  {
    v10 = *v5;
    if ( v3 == 512 || v10 && *v10 )
    {
      MiEmptyPageAccessLog(*v4);
      v5 = 0LL;
      *v4 = 0LL;
    }
  }
  do
  {
    v6 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
    LODWORD(v6) = v6 | 0x80000000;
    PoolMm = ExAllocatePoolMm(64LL, v3, 1665232205LL, v6);
    if ( PoolMm )
    {
      *v4 = (PVOID)PoolMm;
      MiInitializePageAccessLogging(a1, PoolMm, v3);
      result = v8;
      *v8 = v5;
      return result;
    }
    if ( *v4 )
    {
      MiEmptyPageAccessLog(*v4);
      v5 = 0LL;
      *v4 = 0LL;
    }
    v3 >>= 1;
  }
  while ( v3 >= 0x200 );
  return 0LL;
}
