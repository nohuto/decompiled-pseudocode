/*
 * XREFs of ?SmFirstTimeInit@@YAJKK@Z @ 0x14030CBC4
 * Callers:
 *     SmProcessCreateRequest @ 0x1406CF610 (SmProcessCreateRequest.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     SmFpCleanup @ 0x140302824 (SmFpCleanup.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140303C54 (MmStoreChargeResidentAvailableForRead.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403C58F8 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403C5970 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x1403C5A04 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ?SmReInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140593FA0 (-SmReInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 *     MmStoreRegister @ 0x1407A23D0 (MmStoreRegister.c)
 *     MmStoreCheckPagefiles @ 0x1407A3760 (MmStoreCheckPagefiles.c)
 *     ExAllocatePrivateWorkerPool @ 0x1407AFF24 (ExAllocatePrivateWorkerPool.c)
 *     SmRegistrationCtxStart @ 0x1407BEC9C (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmFirstTimeInit(int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  NTSTATUS MinimalProcess; // ebx
  struct _KTHREAD *v9; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v11; // r14
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v19; // esi
  unsigned int v20; // [rsp+50h] [rbp-98h]
  int v21; // [rsp+58h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-88h] BYREF
  PVOID Object; // [rsp+68h] [rbp-80h] BYREF
  _OWORD v24[3]; // [rsp+70h] [rbp-78h] BYREF
  int v25; // [rsp+A0h] [rbp-48h]
  int v26; // [rsp+A4h] [rbp-44h]
  int v27; // [rsp+A8h] [rbp-40h]

  memset(v24, 0, sizeof(v24));
  v25 = 1048581;
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  v26 = 1048578;
  v27 = 1048596;
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
  v5 = ::Handle;
  if ( !::Handle )
  {
    if ( !(unsigned int)MmStoreCheckPagefiles() )
    {
      MinimalProcess = -1073741637;
      goto LABEL_12;
    }
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v24);
    MinimalProcess = PsCreateMinimalProcess(PsInitialSystemProcess, 0LL, 0, 0, 0LL, 0LL, (__int64)&Handle);
    KiUnstackDetachProcess((__int64)v24, 0LL);
    if ( MinimalProcess < 0 )
      goto LABEL_12;
    Object = 0LL;
    MinimalProcess = ObReferenceObjectByHandle(Handle, 0, 0LL, 0, &Object, 0LL);
    if ( MinimalProcess < 0 )
    {
      ZwClose(Handle);
      goto LABEL_12;
    }
    v5 = Handle;
    ::Handle = Handle;
    qword_140D24158 = Object;
  }
  v6 = (unsigned int)dword_140D24140;
  if ( (dword_140D24140 & 2) == 0 )
  {
    v19 = dword_140D24148;
    qword_140D24100 = (__int64)v5;
    MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(&SmGlobals);
    if ( MinimalProcess >= 0 )
    {
      if ( (dword_140D240F0 & 0x20) == 0
        || (MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(&unk_140D23EB0, &SmGlobals, v19),
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
    v6 = dword_140D24140 | 2u;
    dword_140D24140 |= 2u;
  }
  if ( (v6 & 0x10) != 0
    || (v6 = ((unsigned __int8)dword_140D24140 ^ (16 * MmStoreChargeResidentAvailableForRead(1LL))) & 0x10 ^ (unsigned int)dword_140D24140,
        dword_140D24140 = v6,
        (v6 & 0x10) != 0) )
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
      v20 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
      v26 = v20 & 0xFFFF0 | 0x100002;
      v25 = v20 & 0xFFFF0 | 0x100005;
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
    v7 = dword_140D24140;
    if ( (dword_140D24140 & 0x20) == 0 )
    {
      MinimalProcess = ExAllocatePrivateWorkerPool(&qword_140D24170);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      v7 = dword_140D24140 | 0x20;
      dword_140D24140 |= 0x20u;
    }
    if ( (v7 & 1) == 0 )
    {
      MinimalProcess = MmStoreRegister(v6, v5, qword_140D24158, ((unsigned int)dword_140D24180 >> 7) & 1);
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
    ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
  v21 = 0;
  v9 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
  else
    SessionId = -1;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    if ( v13 )
      break;
    v15 = (__int64)&v9->LockEntries[v14];
    v12 &= ~(1 << v14);
    if ( (*(_BYTE *)(v15 + 26) & 1) != 0
      && (*(_DWORD *)(v15 + 32) & 1) == 0
      && (*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v15 + 40) == SessionId )
    {
      *(_BYTE *)(v15 + 26) &= ~1u;
      if ( *(_QWORD *)(v15 + 32) )
      {
        if ( v15 )
        {
          *(_BYTE *)(v15 + 32) |= 2u;
          if ( *(__int64 *)(v15 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v15);
          v21 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
          *(_DWORD *)(v15 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v15 + 25) &= ~1u;
          *(_QWORD *)(v15 + 32) = 0LL;
          v16 = (signed __int64)(v15 - (unsigned __int64)v9->LockEntries) / 96;
          if ( v11 == 1 )
            v9->AbEntrySummary |= 1 << v16;
          else
            _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v16);
          goto LABEL_28;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&BugCheckParameter2, SessionId, 0LL);
LABEL_28:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, (__int64)&BugCheckParameter2, &v21);
  v13 = v9->SpecialApcDisable++ == -1;
  if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v17);
  KeLeaveCriticalRegion();
  return (unsigned int)MinimalProcess;
}
