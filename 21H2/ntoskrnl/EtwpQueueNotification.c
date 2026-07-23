/*
 * XREFs of EtwpQueueNotification @ 0x1406BB52C
 * Callers:
 *     EtwpSendDataBlock @ 0x1406BB334 (EtwpSendDataBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     EtwpAddDataSource @ 0x1406BB79C (EtwpAddDataSource.c)
 *     EtwpReleaseQueueEntry @ 0x1406BBBFC (EtwpReleaseQueueEntry.c)
 *     PsChargeProcessWakeCounter @ 0x1406BCA00 (PsChargeProcessWakeCounter.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpQueueNotification(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int16 v5; // r12
  char v8; // r13
  __int64 v9; // r14
  _OWORD *PoolWithTag; // rax
  _QWORD *v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  _QWORD *v15; // rax
  struct _KEVENT *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v21; // rbx
  unsigned int v22; // edx

  v3 = 0;
  v5 = *(_WORD *)(a3 + 98) & 0x100;
  v8 = 1;
  v9 = EtwpAddDataSource();
  if ( v9 && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u), (v11 = PoolWithTag) != 0LL) )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = a2;
    *((_QWORD *)PoolWithTag + 3) = a3;
    *((_WORD *)PoolWithTag + 24) = *(_WORD *)(a3 + 96);
    *((_DWORD *)PoolWithTag + 13) = 1;
    if ( !*(_BYTE *)(a2 + 12) )
      goto LABEL_4;
    v21 = *(void **)(a2 + 24);
    *((_DWORD *)PoolWithTag + 13) |= 2u;
    ObfReferenceObject(v21);
    v11[4] = v21;
    v11[5] = PsChargeProcessWakeCounter(a1);
    v22 = 0;
    v3 = -1073741823;
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8LL * v22 + 48), (signed __int64)v11, 0LL) )
    {
      if ( ++v22 >= 4 )
        goto LABEL_18;
    }
    *((_WORD *)v11 + 25) = v22;
    v3 = 0;
LABEL_18:
    if ( v3 < 0 )
    {
      EtwpReleaseQueueEntry(v11);
    }
    else
    {
LABEL_4:
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
      v13 = (_QWORD *)(v9 + 24);
      v14 = *(_QWORD **)(v9 + 24);
      if ( v14 != (_QWORD *)(v9 + 24) )
      {
        while ( (v5 != 0) != (*(_BYTE *)(v14[3] + 99LL) & 1) )
        {
          v14 = (_QWORD *)*v14;
          if ( v14 == v13 )
            goto LABEL_5;
        }
        v8 = 0;
      }
LABEL_5:
      v15 = *(_QWORD **)(v9 + 32);
      if ( (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *v11 = v13;
      v11[1] = v15;
      *v15 = v11;
      *(_QWORD *)(v9 + 32) = v11;
      if ( v8 )
      {
        if ( v5 )
          v16 = *(struct _KEVENT **)(v9 + 8);
        else
          v16 = *(struct _KEVENT **)v9;
        if ( v16 )
          KeSetEvent(v16, 1, 0);
      }
      ExReleasePushLockEx(v9 + 16, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
