/*
 * XREFs of MiStoreModifiedWriteDereference @ 0x14023AC4C
 * Callers:
 *     SmIoRequestComplete @ 0x14023D648 (SmIoRequestComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     KeInitializeApc @ 0x140355490 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1403575C0 (KeInsertQueueApc.c)
 */

__int64 __fastcall MiStoreModifiedWriteDereference(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v3 = *(_QWORD *)(a1 + 192);
    v4 = *(unsigned int *)(a1 + 248);
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = v4;
    KeInitializeApc(a1 + 48, *(_QWORD *)(v3 + 944), 0, (unsigned int)MiStoreWriteModifiedCompleteApc, 0LL, 0LL, 0, 0LL);
    return KeInsertQueueApc(a1 + 48, a1, 0LL, 0LL);
  }
  return result;
}
