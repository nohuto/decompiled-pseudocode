/*
 * XREFs of MiAllocateAccessLog @ 0x140282764
 * Callers:
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 * Callees:
 *     MiInitializePageAccessLogging @ 0x140282874 (MiInitializePageAccessLogging.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiSufficientAvailablePages @ 0x140285380 (MiSufficientAvailablePages.c)
 *     MiEmptyPageAccessLog @ 0x140334400 (MiEmptyPageAccessLog.c)
 */

_QWORD *__fastcall MiAllocateAccessLog(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 SharedVm; // rsi
  _QWORD *v7; // rdi
  __int64 Pool; // rax
  _QWORD *v9; // rdx
  _QWORD *result; // rax
  __int64 v11; // rcx

  v2 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174));
  if ( !(unsigned int)MiSufficientAvailablePages(v2, 1056LL)
    || *(_QWORD *)(v2 + 16960) < v3
    || (v4 = 4096LL, (unsigned __int64)(MiState[0] - qword_140C4F048) < 0x800) )
  {
    v4 = 512LL;
  }
  SharedVm = MiGetSharedVm(a1);
  v7 = *(_QWORD **)(SharedVm + 40);
  if ( v7 && (v4 == 512 || *v7 && *(_QWORD *)*v7) )
  {
    MiEmptyPageAccessLog(v7, v5);
    v7 = 0LL;
    *(_QWORD *)(SharedVm + 40) = 0LL;
  }
  do
  {
    Pool = MiAllocatePool(64LL, v4, 1665232205LL);
    if ( Pool )
    {
      *(_QWORD *)(SharedVm + 40) = Pool;
      MiInitializePageAccessLogging(a1, Pool, v4);
      result = v9;
      *v9 = v7;
      return result;
    }
    v11 = *(_QWORD *)(SharedVm + 40);
    if ( v11 )
    {
      MiEmptyPageAccessLog(v11, 0LL);
      v7 = 0LL;
      *(_QWORD *)(SharedVm + 40) = 0LL;
    }
    v4 >>= 1;
  }
  while ( v4 >= 0x200 );
  return 0LL;
}
