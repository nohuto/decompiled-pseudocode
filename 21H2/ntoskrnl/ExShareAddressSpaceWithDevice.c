/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x14063F7C0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmEnableProcessSvm @ 0x1405816E4 (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x140640A9C (ExpAllocateAsid.c)
 *     ExpConvertSvmDevice @ 0x140640DE4 (ExpConvertSvmDevice.c)
 *     ExpPrepareNewSvmDevice @ 0x140640FF0 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x140641354 (ExpSvmDereferenceDevice.c)
 *     IoQueryInterface @ 0x140846710 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x140A02994 (ExpAssignPasid.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExShareAddressSpaceWithDevice(__int64 a1, unsigned int *a2)
{
  unsigned __int64 *v4; // r13
  unsigned __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // rdi
  struct _EX_RUNDOWN_REF *Process; // rsi
  int v9; // r14d
  __int64 v10; // rdi
  struct _KTHREAD *v11; // r14
  __int64 v12; // rsi
  unsigned int AbEntrySummary; // eax
  __int64 v14; // rdx
  int SessionId; // eax
  unsigned int Count; // edi
  struct _EX_RUNDOWN_REF *v17; // r15
  unsigned int v18; // edi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v23; // r9
  int v24; // eax
  bool v25; // zf
  struct _KTHREAD *v26; // rsi
  __int64 v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 *v32; // rax
  __int64 *v33; // rcx
  __int64 *v34; // rdi
  struct _KTHREAD *v35; // rsi
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  __int64 p_Process; // rdi
  unsigned int v39; // edx
  int v40; // r8d
  int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // rdi
  unsigned int v44; // edx
  struct _KTHREAD *v45; // rsi
  unsigned int v46; // ecx
  unsigned int v47; // edx
  __int64 v48; // rdi
  unsigned int v49; // edx
  int v50; // r8d
  unsigned __int64 *PoolWithTag; // rax
  char v52; // si
  unsigned __int8 v53; // di
  _DWORD *v54; // r9
  struct _EX_RUNDOWN_REF *v55; // rcx
  struct _EX_RUNDOWN_REF *i; // rdx
  unsigned __int64 v57; // rax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  unsigned __int8 v62; // di
  _DWORD *v63; // r9
  unsigned __int64 v64; // rcx
  unsigned __int64 **v65; // rax
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // eax
  ULONG_PTR v70; // rsi
  struct _KTHREAD *v71; // rdi
  unsigned int v72; // r8d
  __int64 v73; // rbx
  unsigned int v74; // ecx
  int v75; // r8d
  struct _KTHREAD *v76; // rdx
  struct _EX_RUNDOWN_REF *Object; // [rsp+40h] [rbp-89h]
  unsigned __int64 v78; // [rsp+48h] [rbp-81h] BYREF
  PVOID P; // [rsp+50h] [rbp-79h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-71h] BYREF
  int Interface; // [rsp+70h] [rbp-59h]
  int v82; // [rsp+74h] [rbp-55h]
  struct _KTHREAD *v83; // [rsp+78h] [rbp-51h]
  PEX_RUNDOWN_REF RunRef; // [rsp+80h] [rbp-49h]
  _QWORD v85[18]; // [rsp+90h] [rbp-39h] BYREF
  unsigned int Asid; // [rsp+140h] [rbp+77h]

  memset(v85, 0, 0x58uLL);
  *a2 = -1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  P = 0LL;
  v4 = 0LL;
  v78 = 0LL;
  v5 = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v83 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  Object = Process;
  RunRef = Process + 139;
  if ( !ExAcquireRundownProtection(Process + 139) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 88, 1, a1, v85);
  v9 = Interface;
  if ( Interface >= 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v10 = (__int64)&Process[274];
    v11 = KeGetCurrentThread();
    v12 = 0LL;
    _disable();
    AbEntrySummary = v11->AbEntrySummary;
    if ( v11->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v10, (__int64)v11)) != 0 )
    {
      _BitScanForward((unsigned int *)&v14, AbEntrySummary);
      v11->AbEntrySummary = AbEntrySummary & ~(1 << v14);
      _enable();
      v12 = (__int64)(&v11[1].Process + 12 * v14);
      if ( (unsigned __int64)(v10 - qword_140C50630) >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
      *(_DWORD *)(v12 + 8) = SessionId;
      *(_QWORD *)v12 = v10 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v12, v10);
    if ( v12 )
      *(_BYTE *)(v12 + 18) = 1;
    Count = Object[272].Count;
    if ( !Count )
    {
      Asid = ExpAllocateAsid();
      Count = Asid;
      if ( !Asid )
      {
        v9 = -1073741709;
        v17 = Object;
        goto LABEL_160;
      }
      if ( !(unsigned int)ExpAssignPasid(Object) )
        Count = Object[272].Count;
    }
    v18 = Count - 1;
    Asid = v18;
    v78 = Object[273].Count;
    if ( v78 )
    {
      v9 = Interface;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64 *))(HalIommuDispatch + 16))(v18, 0LL, &v78);
      if ( v9 < 0 )
        goto LABEL_120;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = &Object[275].Count;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&Object[275]);
      if ( Object[273].Count )
      {
        v5 = v78;
        v78 = Object[273].Count;
      }
      else
      {
        Object[273].Count = v78;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v25 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v5 )
        (*(void (__fastcall **)(unsigned __int64))(HalIommuDispatch + 64))(v5);
    }
    v26 = KeGetCurrentThread();
    v82 = 0;
    v27 = 0LL;
    _disable();
    v28 = v26->AbEntrySummary;
    if ( v26->AbEntrySummary
      || (v28 = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)v26)) != 0 )
    {
      _BitScanForward((unsigned int *)&v29, v28);
      v82 = v29;
      v26->AbEntrySummary = v28 & ~(1 << v29);
      _enable();
      v27 = (__int64)(&v26[1].Process + 12 * v29);
      if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 >= 0x8000000000LL )
        v30 = -1;
      else
        v30 = MmGetSessionIdEx((__int64)v26->ApcState.Process);
      *(_DWORD *)(v27 + 8) = v30;
      *(_QWORD *)v27 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v27, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v27 )
      *(_BYTE *)(v27 + 18) = 1;
    v32 = (__int64 *)ExpAtsSvmDevices;
    if ( (__int64 *)ExpAtsSvmDevices != &ExpAtsSvmDevices )
    {
      do
      {
        v33 = v32;
        v34 = v32;
        P = v32;
        if ( v32[3] == a1 )
          break;
        v32 = (__int64 *)*v32;
      }
      while ( v32 != &ExpAtsSvmDevices );
      if ( v34[3] == a1 )
      {
        if ( v33 )
        {
          if ( *((_BYTE *)v34 + 17) )
          {
            v9 = -1073741637;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(&ExpAtsSvmDeviceListLock);
            v35 = KeGetCurrentThread();
            if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 >= 0x8000000000LL )
              v37 = -1;
            else
              v37 = MmGetSessionIdEx((__int64)v35->ApcState.Process);
            _disable();
            p_Process = (__int64)&v35[1].Process;
            v39 = 0;
            while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
                 || !*(_BYTE *)(p_Process + 18)
                 || (*(_DWORD *)p_Process & 1) != 0
                 || *(_DWORD *)(p_Process + 8) != v37 )
            {
              ++v39;
              p_Process += 96LL;
              if ( v39 >= 6 )
                goto LABEL_75;
            }
            *(_BYTE *)(p_Process + 18) = 0;
            if ( !p_Process )
            {
LABEL_75:
              if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)&ExpAtsSvmDeviceListLock, v37, 0LL);
              goto LABEL_119;
            }
            if ( *(__int64 *)p_Process < 0 )
            {
              *(_BYTE *)p_Process |= 2u;
              _enable();
              KiAbEntryRemoveFromTree(p_Process);
              _disable();
            }
            v40 = *(_DWORD *)(p_Process + 88);
            *(_DWORD *)(p_Process + 88) = 0;
            *(_BYTE *)(p_Process + 17) = 0;
            *(_QWORD *)p_Process = 0LL;
            v41 = v35->AbEntrySummary | (1 << *(_BYTE *)(p_Process + 16));
LABEL_117:
            v35->AbEntrySummary = v41;
            _enable();
            if ( v40 )
              KiAbThreadRemoveBoostsSlow((ULONG_PTR)v35, (__int64)&ExpAtsSvmDeviceListLock, v40);
            goto LABEL_120;
          }
          if ( *((_BYTE *)v34 + 16) )
          {
            v9 = ExpConvertSvmDevice(v78, v34);
            if ( v9 < 0 )
            {
              if ( (_InterlockedExchangeAdd64(
                      (volatile signed __int64 *)&ExpAtsSvmDeviceListLock,
                      0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(&ExpAtsSvmDeviceListLock);
              v35 = KeGetCurrentThread();
              if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 >= 0x8000000000LL )
                v42 = -1;
              else
                v42 = MmGetSessionIdEx((__int64)v35->ApcState.Process);
              _disable();
              v43 = (__int64)&v35[1].Process;
              v44 = 0;
              while ( (*(_QWORD *)v43 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
                   || !*(_BYTE *)(v43 + 18)
                   || (*(_DWORD *)v43 & 1) != 0
                   || *(_DWORD *)(v43 + 8) != v42 )
              {
                ++v44;
                v43 += 96LL;
                if ( v44 >= 6 )
                  goto LABEL_96;
              }
              *(_BYTE *)(v43 + 18) = 0;
              if ( v43 )
              {
LABEL_114:
                if ( *(__int64 *)v43 < 0 )
                {
                  *(_BYTE *)v43 |= 2u;
                  _enable();
                  KiAbEntryRemoveFromTree(v43);
                  _disable();
                }
                v40 = *(_DWORD *)(v43 + 88);
                *(_DWORD *)(v43 + 88) = 0;
                *(_BYTE *)(v43 + 17) = 0;
                *(_QWORD *)v43 = 0LL;
                v41 = v35->AbEntrySummary | (1 << *(_BYTE *)(v43 + 16));
                goto LABEL_117;
              }
LABEL_96:
              if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)&ExpAtsSvmDeviceListLock, v42, 0LL);
              goto LABEL_119;
            }
            *((_BYTE *)v34 + 16) = 0;
          }
          ++*((_DWORD *)v34 + 8);
          ++*((_DWORD *)v34 + 9);
          goto LABEL_100;
        }
      }
      else
      {
        P = 0LL;
      }
    }
    v9 = ExpPrepareNewSvmDevice(a1, v78, v85, &P);
    if ( v9 < 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&ExpAtsSvmDeviceListLock);
      v35 = KeGetCurrentThread();
      if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 >= 0x8000000000LL )
        v36 = -1;
      else
        v36 = MmGetSessionIdEx((__int64)v35->ApcState.Process);
      _disable();
      v43 = (__int64)&v35[1].Process;
      v47 = 0;
      while ( (*(_QWORD *)v43 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v43 + 18)
           || (*(_DWORD *)v43 & 1) != 0
           || *(_DWORD *)(v43 + 8) != v36 )
      {
        ++v47;
        v43 += 96LL;
        if ( v47 >= 6 )
          goto LABEL_111;
      }
      *(_BYTE *)(v43 + 18) = 0;
      if ( v43 )
        goto LABEL_114;
LABEL_111:
      if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)&ExpAtsSvmDeviceListLock, v36, 0LL);
LABEL_119:
      _enable();
      goto LABEL_120;
    }
LABEL_100:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpAtsSvmDeviceListLock);
    v45 = KeGetCurrentThread();
    if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 >= 0x8000000000LL )
      v46 = -1;
    else
      v46 = MmGetSessionIdEx((__int64)v45->ApcState.Process);
    _disable();
    v48 = (__int64)&v45[1].Process;
    v49 = 0;
    while ( (*(_QWORD *)v48 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v48 + 18)
         || (*(_DWORD *)v48 & 1) != 0
         || *(_DWORD *)(v48 + 8) != v46 )
    {
      ++v49;
      v48 += 96LL;
      if ( v49 >= 6 )
        goto LABEL_128;
    }
    *(_BYTE *)(v48 + 18) = 0;
    if ( !v48 )
    {
LABEL_128:
      if ( (*((_DWORD *)&v45->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v45, (ULONG_PTR)&ExpAtsSvmDeviceListLock, v46, 0LL);
      _enable();
      goto LABEL_136;
    }
    if ( *(__int64 *)v48 < 0 )
    {
      *(_BYTE *)v48 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v48);
      _disable();
    }
    v50 = *(_DWORD *)(v48 + 88);
    *(_DWORD *)(v48 + 88) = 0;
    *(_BYTE *)(v48 + 17) = 0;
    *(_QWORD *)v48 = 0LL;
    v45->AbEntrySummary |= 1 << *(_BYTE *)(v48 + 16);
    _enable();
    if ( v50 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v45, (__int64)&ExpAtsSvmDeviceListLock, v50);
LABEL_136:
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      v52 = 0;
      PoolWithTag[2] = (unsigned __int64)P;
      v53 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v53 <= 0xFu )
      {
        v54 = KeGetCurrentPrcb()->SchedulerAssist;
        v54[5] |= (-1 << (v53 + 1)) & 0xFFFC;
      }
      v17 = Object;
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = &Object[275].Count;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&Object[275]);
      v55 = Object + 276;
      for ( i = (struct _EX_RUNDOWN_REF *)Object[276].Count; i != v55; i = (struct _EX_RUNDOWN_REF *)i->Count )
      {
        if ( *(_QWORD *)(i[2].Count + 24) == a1 )
        {
          v52 = 1;
          goto LABEL_148;
        }
      }
      v57 = v55->Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v55->Count + 8) != v55 )
        goto LABEL_184;
      *v4 = v57;
      v4[1] = (unsigned __int64)v55;
      *(_QWORD *)(v57 + 8) = v4;
      v55->Count = (unsigned __int64)v4;
LABEL_148:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v58 = KeGetCurrentIrql();
          if ( v58 <= 0xFu && v53 <= 0xFu && v58 >= 2u )
          {
            v59 = KeGetCurrentPrcb();
            v60 = v59->SchedulerAssist;
            v61 = ~(unsigned __int16)(-1LL << (v53 + 1));
            v25 = (v61 & v60[5]) == 0;
            v60[5] &= v61;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick((__int64)v59);
          }
        }
      }
      __writecr8(v53);
      if ( v52 )
      {
        ExFreeHeapPool((ULONG_PTR)v4);
        v4 = 0LL;
      }
      else
      {
        MmEnableProcessSvm();
        v9 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(HalIommuDispatch + 32))(v78, *((_QWORD *)P + 23));
        if ( v9 >= 0 )
          v9 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(HalIommuDispatch + 40))(
                 v78,
                 Object[5].Count & 0xFFFFFFFFFFFFF000uLL);
      }
LABEL_160:
      ((void (__fastcall *)(_QWORD))v85[3])(v85[1]);
      if ( v9 >= 0 )
      {
        *a2 = Asid;
LABEL_178:
        Process = Object;
        goto LABEL_179;
      }
      if ( P )
        ExpSvmDereferenceDevice(P);
      if ( !v4 )
        goto LABEL_178;
      v62 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v62 <= 0xFu )
      {
        v63 = KeGetCurrentPrcb()->SchedulerAssist;
        v63[5] |= (-1 << (v62 + 1)) & 0xFFFC;
      }
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = &v17[275].Count;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&v17[275]);
      v64 = *v4;
      v65 = (unsigned __int64 **)v4[1];
      if ( *(unsigned __int64 **)(*v4 + 8) == v4 && *v65 == v4 )
      {
        *v65 = (unsigned __int64 *)v64;
        *(_QWORD *)(v64 + 8) = v65;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v66 = KeGetCurrentIrql();
            if ( v66 <= 0xFu && v62 <= 0xFu && v66 >= 2u )
            {
              v67 = KeGetCurrentPrcb();
              v68 = v67->SchedulerAssist;
              v69 = ~(unsigned __int16)(-1LL << (v62 + 1));
              v25 = (v69 & v68[5]) == 0;
              v68[5] &= v69;
              if ( v25 )
                KiRemoveSystemWorkPriorityKick((__int64)v67);
            }
          }
        }
        __writecr8(v62);
        ExFreeHeapPool((ULONG_PTR)v4);
        goto LABEL_178;
      }
LABEL_184:
      __fastfail(3u);
    }
    v9 = -1073741670;
LABEL_120:
    v17 = Object;
    goto LABEL_160;
  }
LABEL_179:
  v70 = (ULONG_PTR)&Process[274];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v70);
  v71 = KeGetCurrentThread();
  if ( v70 - qword_140C50630 >= 0x8000000000LL )
    v72 = -1;
  else
    v72 = MmGetSessionIdEx((__int64)v71->ApcState.Process);
  _disable();
  v73 = (__int64)&v71[1].Process;
  v74 = 0;
  while ( (*(_QWORD *)v73 & 0x7FFFFFFFFFFFFFFCLL) != (v70 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v73 + 18)
       || (*(_DWORD *)v73 & 1) != 0
       || *(_DWORD *)(v73 + 8) != v72 )
  {
    ++v74;
    v73 += 96LL;
    if ( v74 >= 6 )
      goto LABEL_192;
  }
  *(_BYTE *)(v73 + 18) = 0;
  if ( !v73 )
  {
LABEL_192:
    if ( (*((_DWORD *)&v71->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v71, v70, v72, 0LL);
    _enable();
    goto LABEL_200;
  }
  if ( *(__int64 *)v73 < 0 )
  {
    *(_BYTE *)v73 |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(v73);
    _disable();
  }
  v75 = *(_DWORD *)(v73 + 88);
  *(_DWORD *)(v73 + 88) = 0;
  *(_BYTE *)(v73 + 17) = 0;
  *(_QWORD *)v73 = 0LL;
  v71->AbEntrySummary |= 1 << *(_BYTE *)(v73 + 16);
  _enable();
  if ( v75 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v71, v70, v75);
LABEL_200:
  v76 = v83;
  v25 = v83->SpecialApcDisable++ == -1;
  if ( v25 && ($CEA84C04E3712D858E5667A507841A2A *)v76->ApcState.ApcListHead[0].Flink != &v76->152 )
    KiCheckForKernelApcDelivery();
  ExReleaseRundownProtection(RunRef);
  return (unsigned int)v9;
}
