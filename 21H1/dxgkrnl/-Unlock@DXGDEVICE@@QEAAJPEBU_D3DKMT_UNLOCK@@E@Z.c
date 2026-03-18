/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0141CE0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D5EF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD870 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkLock @ 0x1C0102950 (DxgkLock.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C01417D0 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1C0141940 (DxgkUnlock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0180664 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02B5308 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02B82D8 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FAC90 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0008490 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0011DB0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0149520 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0249148 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0270B20 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock(DXGDEVICE *this, const struct _D3DKMT_UNLOCK *a2, __int64 a3)
{
  const struct _D3DKMT_UNLOCK *v3; // rsi
  __int64 NumAllocations; // rcx
  int v6; // r13d
  __int64 v7; // rbx
  unsigned int *v8; // rdx
  unsigned int v9; // edi
  unsigned int v10; // r14d
  __int64 v11; // rdx
  const struct DXGALLOCATION *DisplayedPrimary; // rcx
  __int64 v13; // r8
  struct DXGALLOCATION *v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r14
  struct DXGALLOCATION *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // r12
  int CurrentProcessSessionId; // r14d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rdi
  void *v29; // rax
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int *ThreadProperty; // rdi
  __int64 v38; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  D3DKMT_HANDLE hDevice; // eax
  __int64 v44; // rbx
  struct DXGPROCESS *Current; // rax
  _QWORD *v46; // rax
  unsigned int v47; // r12d
  unsigned int v48; // r12d
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  struct _D3DKMT_UNLOCK2 v55; // [rsp+30h] [rbp-58h] BYREF
  struct DXGALLOCATION *v56; // [rsp+38h] [rbp-50h] BYREF
  const struct DXGALLOCATION *v57; // [rsp+40h] [rbp-48h]
  char v58; // [rsp+A0h] [rbp+18h]
  unsigned int v59; // [rsp+A8h] [rbp+20h]

  v58 = a3;
  v3 = a2;
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations || (a2 = (const struct _D3DKMT_UNLOCK *)a2->phAllocations) == 0LL )
  {
    v41 = WdLogNewEntry5_WdWarning(NumAllocations, a2, a3);
    *(_QWORD *)(v41 + 24) = this;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v41);
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    v6 = 0;
    v7 = 0LL;
    while ( 1 )
    {
      v55.hDevice = v7;
      if ( (unsigned int)v7 >= v3->NumAllocations )
        return (unsigned int)v6;
      if ( (_BYTE)a3 )
      {
        v8 = (unsigned int *)&v3->phAllocations[v7];
        if ( (unsigned __int64)v8 >= MmUserProbeAddress )
          v8 = (unsigned int *)MmUserProbeAddress;
        v9 = *v8;
        v59 = *v8;
      }
      else
      {
        v9 = v3->phAllocations[v7];
        v59 = v9;
      }
      v10 = v9 & 0x3F;
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v56, v9);
      v14 = v56;
      if ( !v56 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayedPrimary, v11, v13);
        v46[3] = this;
        v46[4] = v9;
        v46[5] = -1073741811LL;
LABEL_56:
        WdLogEvent5_WdWarning(v46);
        LODWORD(v19) = -1073741811;
        goto LABEL_16;
      }
      if ( !*((_QWORD *)v56 + 3) )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayedPrimary, v11, v13);
        v46[3] = this;
        v46[4] = v9;
        v46[5] = v56;
        v46[6] = -1073741811LL;
        goto LABEL_56;
      }
      if ( !*((_DWORD *)this + 108) )
      {
        DisplayedPrimary = (const struct DXGALLOCATION *)*((_QWORD *)v56 + 6);
        v47 = *((_DWORD *)DisplayedPrimary + 1);
        if ( (v47 & 4) != 0 )
        {
          if ( v58 )
          {
            v48 = (v47 >> 6) & 0xF;
            DisplayedPrimary = (const struct DXGALLOCATION *)*((_QWORD *)this + 231);
            v57 = DisplayedPrimary;
            if ( DisplayedPrimary )
              break;
          }
        }
      }
LABEL_13:
      if ( *((DXGDEVICE **)v14 + 1) != this )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayedPrimary, v11, v13);
        v50[3] = v56;
        v50[4] = this;
        v50[5] = *((_QWORD *)v56 + 1);
        v50[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v50);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v56, v51);
        return 3221225485LL;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                                          + 8LL)
                                                                              + 272LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
              *((_QWORD *)v14 + 3),
              v10,
              0LL,
              0LL);
      v19 = v15;
      if ( v15 < 0 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
        v52[3] = this;
        v52[4] = v9;
        v52[5] = v56;
        v52[6] = v19;
        WdLogEvent5_WdWarning(v52);
      }
LABEL_16:
      if ( v6 >= 0 )
        v6 = v19;
      v20 = v56;
      if ( v56 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v56 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v20, v16) + 283) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v53 = WdLogNewEntry5_WdAssertion(v22, v21);
          *(_QWORD *)(v53 + 24) = 496LL;
          WdLogEvent5_WdAssertion(v53);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22);
        CurrentProcess = PsGetCurrentProcess(v26, v25);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        if ( CurrentProcessSessionId )
        {
          if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            if ( ProcessDxgProcess )
            {
              v29 = *(void **)(ProcessDxgProcess + 88);
              if ( v29 )
              {
                if ( v29 != &gDxgkWin32kEngInterface )
                {
                  v30 = 0LL;
                  if ( !(unsigned __int8)KeIsAttachedProcess()
                    || (v38 = PsGetCurrentProcess(v32, v31),
                        ProcessSessionId = PsGetProcessSessionIdEx(v38),
                        CurrentThreadProcess = PsGetCurrentThreadProcess(),
                        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
                  {
                    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                    if ( ThreadWin32Thread )
                      v30 = *ThreadWin32Thread;
                  }
                  if ( v30 )
                  {
                    ThreadProperty = *(int **)(v30 + 80);
                    goto LABEL_33;
                  }
                }
              }
            }
          }
        }
        ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
        if ( !ThreadProperty )
          ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread();
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
LABEL_33:
          if ( ThreadProperty )
          {
            if ( ThreadProperty[8] )
            {
              v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
              v54[3] = 275LL;
              v54[4] = 38LL;
              v54[5] = ThreadProperty[8];
              v54[6] = 0LL;
              v54[7] = 0LL;
              WdLogEvent5_WdCriticalError(v54);
            }
          }
        }
      }
      v7 = (unsigned int)(v7 + 1);
      LOBYTE(a3) = v58;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DisplayedPrimary) )
    {
      v49 = WdLogNewEntry5_WdAssertion(DisplayedPrimary, v11);
      *(_QWORD *)(v49 + 24) = 366LL;
      WdLogEvent5_WdAssertion(v49);
    }
    if ( *((_DWORD *)this + 144) == 1 && ADAPTER_DISPLAY::IsVidPnSourceOwner(*((DXGADAPTER ***)v57 + 334), this, v48) )
    {
      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v48);
      v14 = v56;
      if ( DisplayedPrimary != v56 )
      {
LABEL_67:
        v9 = v59;
        goto LABEL_13;
      }
      DXGDEVICE::UpdateDodFrontBuffer(this, v56);
    }
    v14 = v56;
    goto LABEL_67;
  }
  if ( (_DWORD)NumAllocations == 1 )
  {
    v55 = 0LL;
    if ( (_BYTE)a3 )
    {
      NumAllocations = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (const struct _D3DKMT_UNLOCK *)MmUserProbeAddress;
      hDevice = a2->hDevice;
    }
    else
    {
      hDevice = a2->hDevice;
    }
    v55.hAllocation = hDevice;
    v44 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent(NumAllocations, (__int64)a2);
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v44 + 4208),
             Current,
             this,
             &v55,
             1u);
  }
  else
  {
    v42 = WdLogNewEntry5_WdError(NumAllocations, a2);
    *(_QWORD *)(v42 + 24) = this;
    *(_QWORD *)(v42 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    return 3221225485LL;
  }
}
