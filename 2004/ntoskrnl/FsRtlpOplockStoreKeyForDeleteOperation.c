/*
 * XREFs of FsRtlpOplockStoreKeyForDeleteOperation @ 0x140291E40
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140291210 (FsRtlCheckOplockEx2.c)
 *     FsRtlCheckOplock @ 0x1402921F0 (FsRtlCheckOplock.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     IoGetOplockKeyContextEx @ 0x14033C8B0 (IoGetOplockKeyContextEx.c)
 *     FsRtlpAllocateOplock @ 0x1406F6348 (FsRtlpAllocateOplock.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall FsRtlpOplockStoreKeyForDeleteOperation(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r9
  __int64 Oplock; // rsi
  char v7; // bl
  int v8; // ecx
  __int64 OplockKeyContext; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  _OWORD *PoolWithTag; // rax

  v5 = *(_QWORD *)(a2 + 184);
  Oplock = *a1;
  v7 = 0;
  if ( !*(_BYTE *)v5 && (*(_DWORD *)(v5 + 16) & 0x1000) != 0
    || *(_BYTE *)v5 == 6
    && ((v8 = *(_DWORD *)(v5 + 16), v8 == 13) && **(_BYTE **)(a2 + 24) || v8 == 64 && (**(_DWORD **)(a2 + 24) & 1) != 0) )
  {
    OplockKeyContext = IoGetOplockKeyContextEx(*(_QWORD *)(v5 + 48));
    v12 = OplockKeyContext;
    if ( OplockKeyContext )
    {
      if ( (*(_BYTE *)(OplockKeyContext + 2) & 1) != 0 )
      {
        if ( !Oplock )
        {
          Oplock = FsRtlpAllocateOplock(v11, v10);
          *a1 = Oplock;
        }
        if ( (a3 & 0x20000000) == 0 )
          ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
        v7 = 1;
        PoolWithTag = *(_OWORD **)(Oplock + 136);
        if ( !PoolWithTag )
        {
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x10uLL, 0x6F725346u);
          *(_QWORD *)(Oplock + 136) = PoolWithTag;
        }
        *PoolWithTag = *(_OWORD *)(v12 + 4);
      }
    }
  }
  if ( v7 )
  {
    if ( (a3 & 0x20000000) == 0 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  }
}
