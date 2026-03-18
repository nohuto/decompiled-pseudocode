/*
 * XREFs of ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E01E0
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DC870 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00DFCD0 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1C00DFE40 (DxgkUnlock.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FC160 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkLock @ 0x1C01011F0 (DxgkLock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C018FE24 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1C02B8868 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02BB838 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE200 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002118 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014350 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0014870 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0155EC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C024C38C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0273FA0 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
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
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rdi
  void *v27; // rax
  __int64 v28; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int *ThreadProperty; // rdi
  __int64 v34; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  D3DKMT_HANDLE hDevice; // eax
  __int64 v40; // rbx
  struct DXGPROCESS *Current; // rax
  _QWORD *v42; // rax
  unsigned int v43; // r12d
  unsigned int v44; // r12d
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  _D3DKMT_UNLOCK2 v50; // [rsp+30h] [rbp-58h] BYREF
  struct DXGALLOCATION *v51; // [rsp+38h] [rbp-50h] BYREF
  const struct DXGALLOCATION *v52; // [rsp+40h] [rbp-48h]
  char v53; // [rsp+A0h] [rbp+18h]
  unsigned int v54; // [rsp+A8h] [rbp+20h]

  v53 = a3;
  v3 = a2;
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations || (a2 = (const struct _D3DKMT_UNLOCK *)a2->phAllocations) == 0LL )
  {
    v37 = WdLogNewEntry5_WdWarning(NumAllocations, a2, a3);
    *(_QWORD *)(v37 + 24) = this;
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v37);
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    v6 = 0;
    v7 = 0LL;
    while ( 1 )
    {
      v50.hDevice = v7;
      if ( (unsigned int)v7 >= v3->NumAllocations )
        return (unsigned int)v6;
      if ( (_BYTE)a3 )
      {
        v8 = (unsigned int *)&v3->phAllocations[v7];
        if ( (unsigned __int64)v8 >= MmUserProbeAddress )
          v8 = (unsigned int *)MmUserProbeAddress;
        v9 = *v8;
        v54 = *v8;
      }
      else
      {
        v9 = v3->phAllocations[v7];
        v54 = v9;
      }
      v10 = v9 & 0x3F;
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v51, v9);
      v14 = v51;
      if ( !v51 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayedPrimary, v11, v13);
        v42[3] = this;
        v42[4] = v9;
        v42[5] = -1073741811LL;
LABEL_56:
        WdLogEvent5_WdWarning(v42);
        LODWORD(v19) = -1073741811;
        goto LABEL_16;
      }
      if ( !*((_QWORD *)v51 + 3) )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayedPrimary, v11, v13);
        v42[3] = this;
        v42[4] = v9;
        v42[5] = v51;
        v42[6] = -1073741811LL;
        goto LABEL_56;
      }
      if ( !*((_DWORD *)this + 108) )
      {
        DisplayedPrimary = (const struct DXGALLOCATION *)*((_QWORD *)v51 + 6);
        v43 = *((_DWORD *)DisplayedPrimary + 1);
        if ( (v43 & 4) != 0 )
        {
          if ( v53 )
          {
            v44 = (v43 >> 6) & 0xF;
            DisplayedPrimary = (const struct DXGALLOCATION *)*((_QWORD *)this + 231);
            v52 = DisplayedPrimary;
            if ( DisplayedPrimary )
              break;
          }
        }
      }
LABEL_13:
      if ( *((DXGDEVICE **)v14 + 1) != this )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayedPrimary, v11, v13);
        v46[3] = v51;
        v46[4] = this;
        v46[5] = *((_QWORD *)v51 + 1);
        v46[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v46);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v51);
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
        v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
        v47[3] = this;
        v47[4] = v9;
        v47[5] = v51;
        v47[6] = v19;
        WdLogEvent5_WdWarning(v47);
      }
LABEL_16:
      if ( v6 >= 0 )
        v6 = v19;
      v20 = v51;
      if ( v51 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v51 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v20, v16) + 311) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v48 = WdLogNewEntry5_WdAssertion(v22, v21);
          *(_QWORD *)(v48 + 24) = 507LL;
          WdLogEvent5_WdAssertion(v48);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId();
        CurrentProcess = PsGetCurrentProcess();
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        if ( CurrentProcessSessionId )
        {
          if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            if ( ProcessDxgProcess )
            {
              v27 = *(void **)(ProcessDxgProcess + 88);
              if ( v27 )
              {
                if ( v27 != &gDxgkWin32kEngInterface )
                {
                  v28 = 0LL;
                  if ( !(unsigned __int8)KeIsAttachedProcess()
                    || (v34 = PsGetCurrentProcess(),
                        ProcessSessionId = PsGetProcessSessionIdEx(v34),
                        CurrentThreadProcess = PsGetCurrentThreadProcess(),
                        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
                  {
                    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                    if ( ThreadWin32Thread )
                      v28 = *ThreadWin32Thread;
                  }
                  if ( v28 )
                  {
                    ThreadProperty = *(int **)(v28 + 80);
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
              v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30);
              v49[3] = 275LL;
              v49[4] = 38LL;
              v49[5] = ThreadProperty[8];
              v49[6] = 0LL;
              v49[7] = 0LL;
              WdLogEvent5_WdCriticalError(v49);
            }
          }
        }
      }
      v7 = (unsigned int)(v7 + 1);
      LOBYTE(a3) = v53;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DisplayedPrimary) )
    {
      v45 = WdLogNewEntry5_WdAssertion(DisplayedPrimary, v11);
      *(_QWORD *)(v45 + 24) = 366LL;
      WdLogEvent5_WdAssertion(v45);
    }
    if ( *((_DWORD *)this + 144) == 1 && ADAPTER_DISPLAY::IsVidPnSourceOwner(*((DXGADAPTER ***)v52 + 337), this, v44) )
    {
      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v44);
      v14 = v51;
      if ( DisplayedPrimary != v51 )
      {
LABEL_67:
        v9 = v54;
        goto LABEL_13;
      }
      DXGDEVICE::UpdateDodFrontBuffer(this, v51);
    }
    v14 = v51;
    goto LABEL_67;
  }
  if ( (_DWORD)NumAllocations == 1 )
  {
    v50 = 0LL;
    if ( (_BYTE)a3 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (const struct _D3DKMT_UNLOCK *)MmUserProbeAddress;
      hDevice = a2->hDevice;
    }
    else
    {
      hDevice = a2->hDevice;
    }
    v50.hAllocation = hDevice;
    v40 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent();
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v40 + 4240),
             Current,
             this,
             &v50,
             1u);
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(NumAllocations, a2);
    *(_QWORD *)(v38 + 24) = this;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    return 3221225485LL;
  }
}
