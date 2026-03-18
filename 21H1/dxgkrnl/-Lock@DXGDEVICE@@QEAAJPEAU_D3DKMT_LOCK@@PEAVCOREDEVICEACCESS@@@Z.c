/*
 * XREFs of ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0102370
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D5EF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00D9A70 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD870 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkLock @ 0x1C0102950 (DxgkLock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0180664 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02B5308 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02B82D8 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FAC90 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0149520 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0245110 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 */

__int64 __fastcall DXGDEVICE::Lock(DXGDEVICE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3)
{
  __int64 Value; // r8
  int v6; // r12d
  _BOOL8 v7; // rcx
  __int64 v8; // rbp
  D3DKMT_HANDLE v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rcx
  struct _EX_RUNDOWN_REF *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  ULONG_PTR Count; // rbp
  ULONG_PTR v29; // rcx
  __int64 v30; // r9
  __int16 v31; // ax
  __int64 v32; // r13
  __int16 v33; // r12
  D3DKMT_HANDLE v34; // r15d
  __int64 v35; // rcx
  __int64 v36; // r8
  D3DKMT_HANDLE v37; // r14d
  unsigned int v38; // ecx
  __int64 v39; // r9
  int v40; // edx
  __int64 v41; // rdx
  struct _EX_RUNDOWN_REF *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  int CurrentProcessSessionId; // esi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  int *ThreadProperty; // rbx
  __int64 result; // rax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int64 v62; // rcx
  D3DKMT_HANDLE hAllocation; // eax
  __int64 v64; // rdi
  struct DXGPROCESS *Current; // rax
  int v66; // r9d
  __int64 v67; // rax
  _QWORD *v68; // rax
  int v69; // r9d
  __int64 v70; // rax
  char *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 NumPages; // rcx
  unsigned int v79; // [rsp+28h] [rbp-70h]
  unsigned int v80; // [rsp+30h] [rbp-68h]
  struct _D3DKMT_LOCK2 v81; // [rsp+40h] [rbp-58h] BYREF
  int v82; // [rsp+A0h] [rbp+8h]
  struct _EX_RUNDOWN_REF *v84; // [rsp+B8h] [rbp+20h] BYREF

  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    hAllocation = a2->hAllocation;
    memset(&v81, 0, sizeof(v81));
    v81.hAllocation = hAllocation;
    v64 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent();
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v64 + 4208),
               Current,
               this,
               &v81,
               1u,
               v79,
               v80);
    if ( (int)result >= 0 )
      a2->pData = v81.pData;
    return result;
  }
  Value = a2->Flags.Value;
  v6 = 1;
  v82 = 1;
  if ( (unsigned int)Value >= 0x800 )
  {
LABEL_96:
    v77 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, Value);
    v77[3] = this;
    NumPages = a2->Flags.Value;
LABEL_97:
    v77[4] = NumPages;
    LODWORD(Count) = -1073741811;
    v77[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v77);
    return (unsigned int)Count;
  }
  while ( 1 )
  {
    v7 = a2->NumPages == 0;
    if ( v7 != (a2->pPages == 0LL) )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, Value);
      v77[3] = this;
      NumPages = a2->NumPages;
      goto LABEL_97;
    }
    v8 = *((_QWORD *)this + 5);
    v9 = a2->hAllocation;
    v10 = ((Value & 4) == 0) | 2;
    if ( (Value & 8) == 0 )
      v10 = (Value & 4) == 0;
    v11 = v10 | 4;
    if ( (Value & 0x20) == 0 )
      v11 = v10;
    v12 = v11 | 8;
    if ( (Value & 0x40) == 0 )
      v12 = v11;
    v13 = v12 | 0x10;
    if ( (Value & 0x80u) == 0LL )
      v13 = v12;
    v14 = v13 | 0x20;
    if ( (Value & 0x100) == 0 )
      v14 = v13;
    v15 = v14 | 0x48;
    if ( (Value & 0x200) == 0 )
      v15 = v14;
    v16 = v15 | 0x80;
    if ( (Value & 0x400) == 0 )
      v16 = v15;
    v17 = v16 | 0x200;
    if ( (Value & 1) == 0 )
      v17 = v16;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v66 = *(_DWORD *)(v8 + 232);
        if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, &EventBlockThread, v19, v66);
      }
      ExAcquirePushLockSharedEx(v8 + 208, 0LL);
    }
    v20 = (v9 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v20 < *(_DWORD *)(v8 + 256) )
    {
      v21 = *(_QWORD *)(v8 + 240);
      v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
      if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
      {
        v23 = v22 & 0x1F;
        if ( (_BYTE)v23 == 5 )
        {
          v24 = *(struct _EX_RUNDOWN_REF **)(v21 + 16LL * (unsigned int)v20);
          goto LABEL_27;
        }
        v67 = WdLogNewEntry5_WdError(v23, 2LL * (unsigned int)v20);
        *(_QWORD *)(v67 + 24) = 267LL;
        WdLogEvent5_WdError(v67);
      }
    }
    v24 = 0LL;
LABEL_27:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84, v24);
    ExReleasePushLockSharedEx(v8 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v84 )
      goto LABEL_81;
    Count = v84[3].Count;
    if ( !Count )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      LODWORD(Count) = -1073741811;
      v68[3] = this;
      v68[4] = a2->hAllocation;
      v68[5] = v84;
      v68[6] = -1073741811LL;
      goto LABEL_82;
    }
    if ( (DXGDEVICE *)v84[1].Count != this )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      LODWORD(Count) = -1073741811;
      v68[3] = v84;
      v68[4] = this;
      v68[5] = v84[1].Count;
      v68[6] = -1073741811LL;
      goto LABEL_82;
    }
    v25 = *(unsigned int *)(v84[6].Count + 4);
    if ( (v25 & 2) == 0 )
    {
      v29 = v84[5].Count;
      if ( v29 )
      {
        v59 = *(_DWORD *)(v29 + 4);
        if ( (v59 & 1) != 0 && (v59 & 2) == 0 )
        {
          v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v60 = *(_DWORD *)(v26 + 348);
          if ( (v60 & 0x10) == 0 && (v60 & 8) == 0 )
          {
LABEL_81:
            v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
            LODWORD(Count) = -1073741811;
            v68[3] = this;
            v68[4] = a2->hAllocation;
            v68[5] = -1073741811LL;
LABEL_82:
            WdLogEvent5_WdWarning(v68);
            goto LABEL_41;
          }
        }
      }
    }
    v30 = v17;
    LODWORD(v30) = v17 | 0x100;
    if ( v6 != 1 )
      v30 = v17;
    LODWORD(Count) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, __int64, UINT, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 264LL))(
                       *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                       Count,
                       a2->hAllocation & 0x3F,
                       v30,
                       a2->PrivateDriverData,
                       0LL,
                       &a2->pData);
    v31 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                       + 280LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            v84[3].Count);
    v32 = *((_QWORD *)this + 5);
    v33 = v31;
    v34 = a2->hAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v32 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v69 = *(_DWORD *)(v32 + 232);
        if ( v69 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v35, &EventBlockThread, v36, v69);
      }
      ExAcquirePushLockExclusiveEx(v32 + 208, 0LL);
    }
    v37 = 0;
    v38 = (v34 >> 6) & 0xFFFFFF;
    *(_QWORD *)(v32 + 216) = KeGetCurrentThread();
    if ( v38 < *(_DWORD *)(v32 + 256) )
    {
      v39 = *(_QWORD *)(v32 + 240);
      v40 = *(_DWORD *)(v39 + 16LL * v38 + 8);
      if ( ((v34 >> 25) & 0x60) == (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0x60) && (v40 & 0x2000) == 0 && (v40 & 0x1F) != 0 )
      {
        *(_DWORD *)(v39 + 16LL * v38 + 8) = v40 ^ ((unsigned __int16)v40 ^ (unsigned __int16)(v33 << 7)) & 0x1F80;
        v37 = (*(_DWORD *)(*(_QWORD *)(v32 + 240) + 16LL * v38 + 8) >> 7) & 0x3F | ((v38 | ((*(_DWORD *)(*(_QWORD *)(v32 + 240) + 16LL * v38 + 8) & 0xFFFFFFE0) << 19)) << 6);
      }
    }
    *(_QWORD *)(v32 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v32 + 208, 0LL);
    KeLeaveCriticalRegion();
    a2->hAllocation = v37;
    if ( (_DWORD)Count != -1071775484 )
      goto LABEL_41;
    COREDEVICEACCESS::Release(a3);
    LODWORD(Count) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                               + 8LL)
                                                                                   + 616LL))(
                       *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                       v84[3].Count,
                       a2->hAllocation & 0x3F,
                       2LL);
    if ( (Count & 0x80000000) != 0LL )
      goto LABEL_41;
    v61 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
    Count = v61;
    if ( v61 < 0 )
      break;
    a2->Flags.Value &= ~0x80u;
    if ( v82 != 1 )
      goto LABEL_41;
    v6 = 2;
    v82 = 2;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v84, v41);
    Value = a2->Flags.Value;
    if ( (unsigned int)Value >= 0x800 )
      goto LABEL_96;
  }
  v70 = WdLogNewEntry5_WdEvent(v62, v41);
  *(_QWORD *)(v70 + 24) = Count;
  WdLogEvent5_WdEvent(v70);
  COREDEVICEACCESS::AcquireSharedUncheck(a3, v71);
LABEL_41:
  v42 = v84;
  if ( v84 )
    ExReleaseRundownProtection(v84 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v42, v41) + 283) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v72 = WdLogNewEntry5_WdAssertion(v44, v43);
      *(_QWORD *)(v72 + 24) = 496LL;
      WdLogEvent5_WdAssertion(v72);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v44);
    CurrentProcess = PsGetCurrentProcess(v48, v47);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && ProcessDxgProcess
      && (v51 = *(void **)(ProcessDxgProcess + 88)) != 0LL
      && v51 != &gDxgkWin32kEngInterface
      && (!(unsigned __int8)KeIsAttachedProcess()
       || (v73 = PsGetCurrentProcess(v53, v52),
           ProcessSessionId = PsGetProcessSessionIdEx(v73),
           CurrentThreadProcess = PsGetCurrentThreadProcess(),
           ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      ThreadProperty = *(int **)(*(_QWORD *)ThreadWin32Thread + 80LL);
LABEL_55:
      if ( ThreadProperty )
      {
        if ( ThreadProperty[8] )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v56, v55);
          v76[3] = 275LL;
          v76[4] = 38LL;
          v76[5] = ThreadProperty[8];
          v76[6] = 0LL;
          v76[7] = 0LL;
          WdLogEvent5_WdCriticalError(v76);
        }
      }
    }
    else
    {
      ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( ThreadProperty || (ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread()) != 0LL )
      {
        ObfDereferenceObject(ThreadProperty);
        goto LABEL_55;
      }
    }
  }
  return (unsigned int)Count;
}
