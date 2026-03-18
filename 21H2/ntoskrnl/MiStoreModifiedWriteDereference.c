/*
 * XREFs of MiStoreModifiedWriteDereference @ 0x14037AF3C
 * Callers:
 *     SmIoRequestComplete @ 0x14037ADB8 (SmIoRequestComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 */

char __fastcall MiStoreModifiedWriteDereference(__int64 a1)
{
  signed __int32 v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFFF);
  if ( v2 == 1 )
  {
    v3 = *(_QWORD *)(a1 + 192);
    v4 = *(unsigned int *)(a1 + 248);
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = v4;
    KeInitializeApc(a1 + 48, *(_QWORD *)(v3 + 968), 0, (__int64)MiStoreWriteModifiedCompleteApc, 0LL, 0LL, 0, 0LL);
    LOBYTE(v2) = KeInsertQueueApc(a1 + 48, a1, 0LL, 0);
  }
  return v2;
}
