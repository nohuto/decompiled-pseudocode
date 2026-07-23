/*
 * XREFs of RawInitiateDeleteVolume @ 0x1402FF00C
 * Callers:
 *     RawCompletionRoutine @ 0x140311CE0 (RawCompletionRoutine.c)
 *     RawVerifyVolume @ 0x14057FA04 (RawVerifyVolume.c)
 *     RawReadWriteDeviceControl @ 0x1406BBF48 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x1406BC004 (RawCreate.c)
 *     RawClose @ 0x1406BC19C (RawClose.c)
 *     RawCleanup @ 0x1406BC21C (RawCleanup.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     IoReleaseVpbSpinLock @ 0x1402FF290 (IoReleaseVpbSpinLock.c)
 *     IoAcquireVpbSpinLock @ 0x1402FF2B0 (IoAcquireVpbSpinLock.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RawDeleteVcb @ 0x140634218 (RawDeleteVcb.c)
 *     RawCleanupVcb @ 0x1406DA85C (RawCleanupVcb.c)
 */

char __fastcall RawInitiateDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, int a2, int a3)
{
  char v3; // si
  KIRQL v7; // cl
  void **FileContextSupportPointer; // rcx
  char *p_FilterContexts; // rdi
  KIRQL v11; // cl
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *v13; // rax
  void **v14; // rax
  KIRQL v15; // cl
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  struct _LIST_ENTRY *v18; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  UCHAR Irql; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  Irql = 0;
  if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 4) != 0 )
  {
    if ( LODWORD(AdvancedHeader[1].Resource) )
      return v3;
    IoAcquireVpbSpinLock(&Irql);
    v7 = Irql;
    if ( *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
      goto LABEL_5;
    IoReleaseVpbSpinLock(Irql);
    ExAcquireFastMutex(&RawGlobalLock);
    Flink = AdvancedHeader[1].FilterContexts.Flink;
    if ( Flink->Blink == &AdvancedHeader[1].FilterContexts )
    {
      Blink = AdvancedHeader[1].FilterContexts.Blink;
      if ( Blink->Flink == &AdvancedHeader[1].FilterContexts )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        KeReleaseGuardedMutex(&RawGlobalLock);
        goto LABEL_11;
      }
    }
LABEL_21:
    __fastfail(3u);
  }
  IoAcquireVpbSpinLock(&Irql);
  if ( a2 || *(_DWORD *)&AdvancedHeader[1].Flags + *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) == a3 )
  {
    FileContextSupportPointer = AdvancedHeader[1].FileContextSupportPointer;
    p_FilterContexts = (char *)&AdvancedHeader[1].FilterContexts;
    if ( LODWORD(AdvancedHeader[1].Resource) + *((_DWORD *)FileContextSupportPointer + 7) )
    {
      memset(AdvancedHeader[1].Oplock, 0, 0x60uLL);
      *(_WORD *)AdvancedHeader[1].Oplock = 10;
      *((_WORD *)AdvancedHeader[1].Oplock + 1) = 96;
      *((_QWORD *)AdvancedHeader[1].Oplock + 2) = *((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 2);
      *((_QWORD *)AdvancedHeader[1].Oplock + 1) = 0LL;
      *((_WORD *)AdvancedHeader[1].Oplock + 2) = *((_WORD *)AdvancedHeader[1].FileContextSupportPointer + 2) & 8;
      *(_QWORD *)(*((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 2) + 56LL) = AdvancedHeader[1].Oplock;
      v14 = AdvancedHeader[1].FileContextSupportPointer;
      v15 = Irql;
      AdvancedHeader[1].Oplock = 0LL;
      *((_WORD *)v14 + 2) |= 4u;
      *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 8u;
      IoReleaseVpbSpinLock(v15);
      ExAcquireFastMutex(&RawGlobalLock);
      v16 = *(struct _LIST_ENTRY **)p_FilterContexts;
      if ( *(char **)(*(_QWORD *)p_FilterContexts + 8LL) == p_FilterContexts )
      {
        v17 = AdvancedHeader[1].FilterContexts.Blink;
        if ( (char *)v17->Flink == p_FilterContexts )
        {
          v17->Flink = v16;
          v16->Blink = v17;
          *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 6u;
          v18 = (struct _LIST_ENTRY *)qword_140C1DCB8;
          if ( *(__int64 **)qword_140C1DCB8 == &RawDismountedQueue )
          {
            *(_QWORD *)p_FilterContexts = &RawDismountedQueue;
            AdvancedHeader[1].FilterContexts.Blink = v18;
            v18->Flink = (struct _LIST_ENTRY *)p_FilterContexts;
            qword_140C1DCB8 = (__int64)&AdvancedHeader[1].FilterContexts;
            KeReleaseGuardedMutex(&RawGlobalLock);
            return v3;
          }
        }
      }
    }
    else
    {
      *((_WORD *)FileContextSupportPointer + 2) &= ~1u;
      v11 = Irql;
      *((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 1) = 0LL;
      IoReleaseVpbSpinLock(v11);
      ExAcquireFastMutex(&RawGlobalLock);
      v12 = *(struct _LIST_ENTRY **)p_FilterContexts;
      if ( *(char **)(*(_QWORD *)p_FilterContexts + 8LL) == p_FilterContexts )
      {
        v13 = AdvancedHeader[1].FilterContexts.Blink;
        if ( (char *)v13->Flink == p_FilterContexts )
        {
          v13->Flink = v12;
          v12->Blink = v13;
          KeReleaseGuardedMutex(&RawGlobalLock);
          *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 2u;
LABEL_11:
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].PagingIoResource);
          RawCleanupVcb(AdvancedHeader);
          RawDeleteVcb(AdvancedHeader);
          return 1;
        }
      }
    }
    goto LABEL_21;
  }
  v7 = Irql;
LABEL_5:
  IoReleaseVpbSpinLock(v7);
  return v3;
}
