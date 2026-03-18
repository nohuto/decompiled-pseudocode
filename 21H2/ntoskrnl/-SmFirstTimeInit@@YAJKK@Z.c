/*
 * XREFs of ?SmFirstTimeInit@@YAJKK@Z @ 0x140261354
 * Callers:
 *     SmProcessCreateRequest @ 0x1406ED528 (SmProcessCreateRequest.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     SmFpCleanup @ 0x1402376C4 (SmFpCleanup.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x1403B1A00 (MmStoreChargeResidentAvailableForRead.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403D7250 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403D72C8 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x1403D735C (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ?SmReInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405F71B0 (-SmReInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 *     MmStoreRegister @ 0x14084A7D0 (MmStoreRegister.c)
 *     MmStoreCheckPagefiles @ 0x14084BD8C (MmStoreCheckPagefiles.c)
 *     ExAllocatePrivateWorkerPool @ 0x140851D88 (ExAllocatePrivateWorkerPool.c)
 *     SmRegistrationCtxStart @ 0x140861560 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmFirstTimeInit(int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  NTSTATUS MinimalProcess; // edi
  struct _KTHREAD *v9; // rsi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  int v14; // r9d
  unsigned int v16; // esi
  HANDLE Handle; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v18; // [rsp+58h] [rbp-70h]
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-60h] BYREF
  int v21; // [rsp+98h] [rbp-30h]
  int v22; // [rsp+9Ch] [rbp-2Ch]
  int v23; // [rsp+A0h] [rbp-28h]

  v23 = 1048596;
  memset(&ApcState, 0, sizeof(ApcState));
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D321A0, 0LL);
  if ( dword_140D32188 )
  {
    if ( dword_140D32188 != a2 )
    {
      MinimalProcess = -1073741217;
      goto LABEL_12;
    }
  }
  else
  {
    dword_140D32188 = a2;
  }
  if ( (dword_140D32180 & 8) == 0 )
  {
    MinimalProcess = SmRegistrationCtxStart(&qword_140D32430);
    if ( MinimalProcess < 0 )
      goto LABEL_12;
    dword_140D32180 |= 8u;
  }
  v5 = ::Handle;
  if ( !::Handle )
  {
    if ( !(unsigned int)MmStoreCheckPagefiles() )
    {
      MinimalProcess = -1073741637;
      goto LABEL_12;
    }
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    MinimalProcess = PsCreateMinimalProcess(PsInitialSystemProcess, 0LL, 0, 0, 0LL, 0LL, (__int64)&Handle);
    KeUnstackDetachProcess(&ApcState);
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
    qword_140D32198 = Object;
  }
  v6 = (unsigned int)dword_140D32180;
  if ( (dword_140D32180 & 2) == 0 )
  {
    v16 = dword_140D32188;
    qword_140D32140 = (__int64)v5;
    MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(&SmGlobals);
    if ( MinimalProcess < 0
      || (dword_140D32130 & 0x20) != 0
      && (MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(&unk_140D31EF0, &SmGlobals, v16),
          MinimalProcess < 0) )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmReInitialize(&SmGlobals);
      ObfDereferenceObject(qword_140D32198);
      ZwClose(::Handle);
      qword_140D32198 = 0LL;
      ::Handle = 0LL;
      goto LABEL_12;
    }
    v6 = dword_140D32180 | 2u;
    dword_140D32180 |= 2u;
  }
  if ( (v6 & 0x10) != 0
    || (v6 = ((unsigned __int8)dword_140D32180 ^ (unsigned __int8)(16 * MmStoreChargeResidentAvailableForRead(1LL))) & 0x10 ^ (unsigned int)dword_140D32180,
        dword_140D32180 = v6,
        (v6 & 0x10) != 0) )
  {
    if ( dword_140D32184 )
    {
      if ( a1 != dword_140D32184 )
      {
        MinimalProcess = -1073741800;
        goto LABEL_12;
      }
    }
    else
    {
      v18 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
      v22 = v18 & 0xFFFF0 | 0x100002;
      v21 = v18 & 0xFFFF0 | 0x100005;
      MinimalProcess = SmFpPreAllocate(&dword_140D32450);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      MinimalProcess = SmFpPreAllocate(&dword_140D324C0);
      if ( MinimalProcess < 0 )
      {
        SmFpCleanup((__int64)&dword_140D32450);
        memset(&dword_140D32450, 0, 0x70uLL);
        word_140D32458 = 1;
        qword_140D32468 = (__int64)&qword_140D32460;
        qword_140D32460 = (__int64)&qword_140D32460;
        byte_140D3245A = 6;
        dword_140D3245C = 0;
        goto LABEL_12;
      }
      dword_140D32184 = a1;
    }
    v7 = dword_140D32180;
    if ( (dword_140D32180 & 0x20) == 0 )
    {
      MinimalProcess = ExAllocatePrivateWorkerPool(&qword_140D321B0);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      v7 = dword_140D32180 | 0x20;
      dword_140D32180 |= 0x20u;
    }
    if ( (v7 & 1) == 0 )
    {
      MinimalProcess = MmStoreRegister(v6, v5, qword_140D32198, ((unsigned int)dword_140D321C0 >> 7) & 1);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      dword_140D32180 |= 1u;
    }
    MinimalProcess = 0;
  }
  else
  {
    MinimalProcess = -1073741670;
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D321A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D321A0);
  v9 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140D321A0 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v9->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&v9[1].Process;
  v12 = 0LL;
  v13 = (unsigned __int64)&qword_140D321A0 & 0x7FFFFFFFFFFFFFFCLL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v13
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v12 = (unsigned int)(v12 + 1);
    p_Process += 96;
    if ( (unsigned int)v12 >= 6 )
      goto LABEL_28;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v12, v13);
      _disable();
    }
    v14 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    v9->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v14 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v9, (__int64)&qword_140D321A0, v14);
    goto LABEL_26;
  }
LABEL_28:
  if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&qword_140D321A0, SessionId, 0LL);
  _enable();
LABEL_26:
  KeLeaveCriticalRegion();
  return (unsigned int)MinimalProcess;
}
