/*
 * XREFs of ?SmFirstTimeInit@@YAJKK@Z @ 0x14035D458
 * Callers:
 *     SmProcessCreateRequest @ 0x140710D34 (SmProcessCreateRequest.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x1402E08B4 (MmStoreChargeResidentAvailableForRead.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     SmFpCleanup @ 0x14035AEC4 (SmFpCleanup.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403C8E88 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403C8F00 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x1403C8F94 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     ?SmReInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140599470 (-SmReInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     MmStoreRegister @ 0x1407B637C (MmStoreRegister.c)
 *     MmStoreCheckPagefiles @ 0x1407B7700 (MmStoreCheckPagefiles.c)
 *     ExAllocatePrivateWorkerPool @ 0x1407C2264 (ExAllocatePrivateWorkerPool.c)
 *     PsCreateMinimalProcess @ 0x1407C6284 (PsCreateMinimalProcess.c)
 *     SmRegistrationCtxStart @ 0x1407D17D8 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmFirstTimeInit(int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  HANDLE v7; // rdx
  __int64 v8; // rcx
  char v9; // al
  NTSTATUS MinimalProcess; // ebx
  struct _KTHREAD *v11; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v13; // r14
  _DWORD *v14; // r9
  unsigned int v15; // r8d
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v22; // r9
  unsigned int v23; // esi
  unsigned int v24; // [rsp+50h] [rbp-98h]
  int v25; // [rsp+58h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-88h] BYREF
  PVOID Object; // [rsp+68h] [rbp-80h] BYREF
  _OWORD v28[3]; // [rsp+70h] [rbp-78h] BYREF
  int v29; // [rsp+A0h] [rbp-48h]
  int v30; // [rsp+A4h] [rbp-44h]
  int v31; // [rsp+A8h] [rbp-40h]

  memset(v28, 0, sizeof(v28));
  v29 = 1048581;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  v30 = 1048578;
  v31 = 1048596;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  if ( dword_140D24148 )
  {
    if ( dword_140D24148 != a2 )
    {
      MinimalProcess = -1073741217;
      goto LABEL_12;
    }
  }
  else
  {
    dword_140D24148 = a2;
  }
  if ( (dword_140D24140 & 8) == 0 )
  {
    MinimalProcess = SmRegistrationCtxStart(&qword_140D243F0);
    if ( MinimalProcess < 0 )
      goto LABEL_12;
    dword_140D24140 |= 8u;
  }
  v7 = ::Handle;
  if ( !::Handle )
  {
    if ( !(unsigned int)MmStoreCheckPagefiles() )
    {
      MinimalProcess = -1073741637;
      goto LABEL_12;
    }
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v28, v22);
    MinimalProcess = PsCreateMinimalProcess(PsInitialSystemProcess, 0LL, 0, 0, 0LL, 0LL, (__int64)&Handle);
    KiUnstackDetachProcess((__int64)v28, 0);
    if ( MinimalProcess < 0 )
      goto LABEL_12;
    Object = 0LL;
    MinimalProcess = ObReferenceObjectByHandle(Handle, 0, 0LL, 0, &Object, 0LL);
    if ( MinimalProcess < 0 )
    {
      ZwClose(Handle);
      goto LABEL_12;
    }
    v7 = Handle;
    ::Handle = Handle;
    qword_140D24158 = Object;
  }
  v8 = (unsigned int)dword_140D24140;
  if ( (dword_140D24140 & 2) == 0 )
  {
    v23 = dword_140D24148;
    qword_140D24100 = (__int64)v7;
    MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(&SmGlobals);
    if ( MinimalProcess >= 0 )
    {
      if ( (dword_140D240F0 & 0x20) == 0
        || (MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(&unk_140D23EB0, &SmGlobals, v23),
            MinimalProcess >= 0) )
      {
        MinimalProcess = 0;
      }
    }
    if ( MinimalProcess < 0 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmReInitialize(&SmGlobals);
      ObfDereferenceObjectWithTag(qword_140D24158, 0x746C6644u);
      ZwClose(::Handle);
      qword_140D24158 = 0LL;
      ::Handle = 0LL;
      goto LABEL_12;
    }
    v8 = dword_140D24140 | 2u;
    dword_140D24140 |= 2u;
  }
  if ( (v8 & 0x10) != 0
    || (v8 = ((unsigned __int8)dword_140D24140 ^ (16 * MmStoreChargeResidentAvailableForRead(1LL, (__int64)v7, v5, v6))) & 0x10 ^ (unsigned int)dword_140D24140,
        dword_140D24140 = v8,
        (v8 & 0x10) != 0) )
  {
    if ( dword_140D24144 )
    {
      if ( a1 != dword_140D24144 )
      {
        MinimalProcess = -1073741800;
        goto LABEL_12;
      }
    }
    else
    {
      v24 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
      v30 = v24 & 0xFFFF0 | 0x100002;
      v29 = v24 & 0xFFFF0 | 0x100005;
      MinimalProcess = SmFpPreAllocate(&dword_140D24410);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      MinimalProcess = SmFpPreAllocate(&dword_140D24480);
      if ( MinimalProcess < 0 )
      {
        SmFpCleanup((__int64)&dword_140D24410);
        memset(&dword_140D24410, 0, 0x70uLL);
        word_140D24418 = 1;
        qword_140D24428 = (__int64)&qword_140D24420;
        qword_140D24420 = (__int64)&qword_140D24420;
        byte_140D2441A = 6;
        dword_140D2441C = 0;
        goto LABEL_12;
      }
      dword_140D24144 = a1;
    }
    v9 = dword_140D24140;
    if ( (dword_140D24140 & 0x20) == 0 )
    {
      MinimalProcess = ExAllocatePrivateWorkerPool(&qword_140D24170);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      v9 = dword_140D24140 | 0x20;
      dword_140D24140 |= 0x20u;
    }
    if ( (v9 & 1) == 0 )
    {
      MinimalProcess = MmStoreRegister(v8, v7, qword_140D24158, ((unsigned int)dword_140D24180 >> 7) & 1);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      dword_140D24140 |= 1u;
    }
    MinimalProcess = 0;
  }
  else
  {
    MinimalProcess = -1073741670;
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&BugCheckParameter2);
  v25 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
  else
    SessionId = -1;
  --v11->SpecialApcDisable;
  v13 = ++v11->AbAllocationRegionCount;
  v14 = (_DWORD *)((unsigned __int64)&BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL);
  v15 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v17, v15);
    if ( v16 )
      break;
    v18 = (__int64)&v11->LockEntries[v17];
    v15 &= ~(1 << v17);
    if ( (*(_BYTE *)(v18 + 26) & 1) != 0
      && (*(_DWORD *)(v18 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v18 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v14
      && *(_DWORD *)(v18 + 40) == SessionId )
    {
      *(_BYTE *)(v18 + 26) &= ~1u;
      if ( *(_QWORD *)(v18 + 32) )
      {
        if ( v18 )
        {
          *(_BYTE *)(v18 + 32) |= 2u;
          if ( *(__int64 *)(v18 + 32) < 0 )
            KiAbEntryRemoveFromTree(v18);
          v25 = *(_DWORD *)(v18 + 88) & 0x1FFFF;
          *(_DWORD *)(v18 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v18 + 25) &= ~1u;
          *(_QWORD *)(v18 + 32) = 0LL;
          v19 = (signed __int64)(v18 - (unsigned __int64)v11->LockEntries) / 96;
          if ( v13 == 1 )
            v11->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v19);
          goto LABEL_28;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v11, (ULONG_PTR)&BugCheckParameter2, SessionId, 0LL);
LABEL_28:
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v11, (__int64)&BugCheckParameter2, (__int64)&v25, v14);
  v16 = v11->SpecialApcDisable++ == -1;
  if ( v16 && ($C459BD0D405E8E46662177FB3D0A143F *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery(v20);
  KeLeaveCriticalRegion();
  return (unsigned int)MinimalProcess;
}
