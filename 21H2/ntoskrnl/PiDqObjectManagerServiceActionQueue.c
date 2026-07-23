/*
 * XREFs of PiDqObjectManagerServiceActionQueue @ 0x1407632E0
 * Callers:
 *     <none>
 * Callees:
 *     IoClearActivityIdThread @ 0x140252490 (IoClearActivityIdThread.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     IoSetActivityIdThread @ 0x1402F9230 (IoSetActivityIdThread.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14050DAA0 (McTemplateK0p_EtwWriteTransfer.c)
 *     PiDqQueryRelease @ 0x14062371C (PiDqQueryRelease.c)
 *     PiDqQueryFreeActiveData @ 0x140623798 (PiDqQueryFreeActiveData.c)
 *     PiPnpRtlObjectEventRelease @ 0x1406290D4 (PiPnpRtlObjectEventRelease.c)
 *     PnpIsNullGuid @ 0x1406FEAA0 (PnpIsNullGuid.c)
 *     PiDqQueryApplyObjectEvent @ 0x140763684 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryCompletePendedIrp @ 0x140763C04 (PiDqQueryCompletePendedIrp.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PiDqObjectManagerServiceActionQueue(PERESOURCE Resource)
{
  struct _FAST_MUTEX *v1; // rdi
  PERESOURCE v2; // rsi
  char v3; // r14
  PERESOURCE v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v6; // r13
  __int64 v7; // r12
  char v8; // cl
  PVOID *PoolWithTag; // rax
  __int64 v10; // rdx
  volatile signed __int32 *i; // rcx
  PVOID v12; // r15
  __int64 v13; // rax
  PVOID *v14; // rsi
  struct _LIST_ENTRY *v15; // r13
  char *v16; // rdi
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  struct _KTHREAD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  PVOID *v28; // rbx
  __int64 v29; // rdi
  int OwnerTable_high; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *result; // rax
  __int64 j; // rdi
  struct _KTHREAD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  char v40; // [rsp+20h] [rbp-60h]
  char v41; // [rsp+21h] [rbp-5Fh]
  PVOID P[2]; // [rsp+28h] [rbp-58h] BYREF
  int v43; // [rsp+38h] [rbp-48h]
  struct _LIST_ENTRY *v44; // [rsp+40h] [rbp-40h]
  PVOID *v45; // [rsp+48h] [rbp-38h]
  PERESOURCE v46; // [rsp+58h] [rbp-28h]
  struct _LIST_ENTRY v47; // [rsp+60h] [rbp-20h] BYREF

  v44 = 0LL;
  v1 = (struct _FAST_MUTEX *)&Resource[1];
  v46 = Resource;
  *(_OWORD *)P = 0LL;
  v2 = Resource;
  v41 = 1;
  v47 = 0LL;
  v3 = 1;
  v4 = Resource + 2;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    LODWORD(v7) = 0;
    v45 = 0LL;
    v43 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v2, 1u);
    ExAcquireFastMutex(v1);
    if ( (PERESOURCE)v4->SystemResourcesList.Flink == v4 )
    {
      P[1] = P;
      P[0] = P;
    }
    else
    {
      *(LIST_ENTRY *)P = v4->SystemResourcesList;
      *((_QWORD *)P[0] + 1) = P;
      *(_QWORD *)P[1] = P;
      v4->SystemResourcesList.Blink = &v4->SystemResourcesList;
      v4->SystemResourcesList.Flink = &v4->SystemResourcesList;
    }
    v8 = 0;
    if ( (HIDWORD(v2[2].OwnerTable) & 2) == 0 )
      v8 = v3;
    v3 = v8;
    if ( v8 )
    {
      LODWORD(v7) = v2[2].OwnerTable;
      v43 = v7;
      if ( (_DWORD)v7 )
      {
        PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v7, 0x58706E50u);
        v45 = PoolWithTag;
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v10 = 0LL;
          for ( i = (volatile signed __int32 *)v2[1].Address;
                i != (volatile signed __int32 *)&v2[1].Address;
                i = *(volatile signed __int32 **)i )
          {
            if ( (unsigned int)v10 >= (unsigned int)v7 )
              goto LABEL_49;
            PoolWithTag[v10] = (PVOID)i;
            v10 = (unsigned int)(v10 + 1);
            _InterlockedIncrement(i + 53);
          }
        }
        else
        {
LABEL_49:
          v3 = 0;
        }
      }
    }
    if ( !v3 )
    {
      for ( j = (__int64)v2[1].Address; (PVOID *)j != &v2[1].Address; j = *(_QWORD *)j )
      {
        v36 = KeGetCurrentThread();
        --v36->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(j + 64, 0LL);
        *(_DWORD *)(j + 216) |= 1u;
        PiDqQueryFreeActiveData(j);
        PiDqQueryCompletePendedIrp(j);
        ExReleasePushLockEx(j + 64, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v37, v38, v39);
      }
      HIDWORD(v2[2].OwnerTable) &= ~2u;
      v1 = (struct _FAST_MUTEX *)&v2[1];
    }
    KeReleaseGuardedMutex(v1);
    while ( 1 )
    {
      v12 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v13 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      if ( v3 && (_DWORD)v7 )
      {
        v14 = v6;
        v15 = v44;
        v7 = (unsigned int)v7;
        do
        {
          v16 = (char *)*v14;
          if ( *((_QWORD *)*v14 + 28) <= *((_QWORD *)v12 + 3) )
          {
            v40 = 0;
            if ( !PnpIsNullGuid(*((void **)v16 + 3)) )
            {
              v47 = *(struct _LIST_ENTRY *)*((_QWORD *)v16 + 3);
              v15 = IoSetActivityIdThread(&v47);
              v40 = 1;
            }
            if ( byte_140C1327A < 0 )
              McTemplateK0p_EtwWriteTransfer(
                v17,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_ProcessingStart,
                *((const GUID **)v16 + 3),
                v16);
            v18 = KeGetCurrentThread();
            --v18->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 64), 0LL);
            v19 = *((_DWORD *)v16 + 54);
            ExReleasePushLockEx((ULONG_PTR)(v16 + 64), 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
            if ( (v19 & 9) == 0 )
            {
              PiDqQueryApplyObjectEvent(v16, *((_QWORD *)v12 + 2));
              v24 = KeGetCurrentThread();
              --v24->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 64), 0LL);
              if ( (*((_DWORD *)v16 + 54) & 1) != 0 || *((char **)v16 + 24) != v16 + 192 )
                PiDqQueryCompletePendedIrp(v16);
              ExReleasePushLockEx((ULONG_PTR)(v16 + 64), 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26, v27);
            }
            if ( byte_140C1327A < 0 )
              McTemplateK0p_EtwWriteTransfer(
                v23,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_ProcessingStop,
                *((const GUID **)v16 + 3),
                v16);
            if ( v40 )
              IoClearActivityIdThread(v15);
          }
          ++v14;
          --v7;
        }
        while ( v7 );
        v2 = v46;
        LODWORD(v7) = v43;
        v44 = v15;
        v6 = v45;
      }
      PiPnpRtlObjectEventRelease(*((char **)v12 + 2));
      ExFreePoolWithTag(v12, 0x58706E50u);
    }
    if ( v6 )
    {
      if ( (_DWORD)v7 )
      {
        v28 = v6;
        v29 = (unsigned int)v7;
        do
        {
          PiDqQueryRelease(*v28++);
          --v29;
        }
        while ( v29 );
      }
      ExFreePoolWithTag(v6, 0x58706E50u);
    }
    v1 = (struct _FAST_MUTEX *)&v2[1];
    ExAcquireFastMutex((PFAST_MUTEX)&v2[1]);
    v4 = v2 + 2;
    if ( (PERESOURCE)v4->SystemResourcesList.Flink == v4 )
    {
      OwnerTable_high = HIDWORD(v2[2].OwnerTable);
      if ( (OwnerTable_high & 2) == 0 )
      {
        v41 = 0;
        HIDWORD(v2[2].OwnerTable) = OwnerTable_high & 0xFFFFFFFE;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&v2[1]);
    ExReleaseResourceLite(v2);
    result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v31, v32, v33);
  }
  while ( v41 );
  return result;
}
