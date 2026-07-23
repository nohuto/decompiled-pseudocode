/*
 * XREFs of FsFilterAllocateCompletionStack @ 0x1404F103C
 * Callers:
 *     FsFilterCtrlInit @ 0x140361D80 (FsFilterCtrlInit.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall FsFilterAllocateCompletionStack(__int64 a1, char a2, _DWORD *a3)
{
  _QWORD *v5; // rdi
  SIZE_T v6; // rdx
  __int16 *v7; // rsi
  PVOID PoolWithTag; // rax

  v5 = 0LL;
  v6 = 32 * (unsigned int)*(unsigned __int16 *)(a1 + 72);
  *a3 = v6;
  v7 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x676D5346u);
  if ( PoolWithTag )
    goto LABEL_13;
  if ( a2 )
    return 3221225626LL;
  switch ( *(unsigned __int8 *)(a1 + 4) )
  {
    case 0xFAu:
      goto LABEL_11;
    case 0xFBu:
      goto LABEL_10;
    case 0xFCu:
LABEL_11:
      v5 = (_QWORD *)ReleaseOpsReservePool;
      v7 = &ReleaseOpsEvent;
      break;
    case 0xFDu:
LABEL_10:
      v5 = AcquireOpsReservePool;
      v7 = &AcquireOpsEvent;
      break;
    case 0xFEu:
      goto LABEL_11;
    case 0xFFu:
      goto LABEL_10;
  }
  KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
  *v5 = KeGetCurrentThread();
  PoolWithTag = v5 + 1;
  *(_DWORD *)(a1 + 64) |= 2u;
LABEL_13:
  *(_DWORD *)(a1 + 64) |= 1u;
  *(_QWORD *)(a1 + 80) = PoolWithTag;
  return 0LL;
}
