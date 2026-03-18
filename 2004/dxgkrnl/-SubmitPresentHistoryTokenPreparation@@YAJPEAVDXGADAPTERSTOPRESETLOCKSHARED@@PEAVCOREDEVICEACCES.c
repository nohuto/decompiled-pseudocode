/*
 * XREFs of ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0152CE0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD2E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x1C0282DB0 (DxgkPresentRedirected.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00099A8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00135B8 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0064294 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD040 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x1C024BC18 (-VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGS.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268C6C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall SubmitPresentHistoryTokenPreparation(
        struct DXGADAPTERSTOPRESETLOCKSHARED *this,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTER *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        HANDLE Handle,
        bool a6)
{
  __int64 v6; // rdi
  struct DXGADAPTER *v8; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  BOOL v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  char *v21; // rbx
  struct _KTHREAD **v22; // rcx
  int SwapChainBindingStatus; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  NTSTATUS v32; // ebx
  __int64 v33; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct DXGPROCESS *v37; // rbx
  struct DXGPROCESS *v38; // r12
  struct DXGGLOBAL *Global; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *v44; // rbx
  HANDLE hSyncObject; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  struct _DXGSHAREDSYNCOBJECT *v49; // rdi
  UINT64 FenceValue; // rax
  NTSTATUS v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  PVOID v55; // r12
  __int64 v56; // r13
  __int64 v57; // rax
  int v58; // r9d
  _QWORD *v59; // rax
  __int64 v60; // rax
  char *v61; // rdx
  char *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  char *v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rdx
  char *v72; // rdx
  struct DXGTHREAD *Current; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  PVOID Object; // [rsp+30h] [rbp-30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+38h] [rbp-28h] BYREF
  PERESOURCE *v80; // [rsp+48h] [rbp-18h] BYREF
  char v81; // [rsp+50h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+40h] BYREF
  PVOID v83; // [rsp+A8h] [rbp+48h] BYREF
  struct DXGADAPTER *v84; // [rsp+B0h] [rbp+50h]

  v84 = a3;
  v6 = *((_QWORD *)a3 + 338);
  v8 = a3;
  v11 = v6 + 840;
  if ( v6 != -840 && *(struct _KTHREAD **)(v6 + 848) == KeGetCurrentThread() )
  {
    v57 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v57 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v57);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6 + 840, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v58 = *(_DWORD *)(v6 + 864);
      if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventBlockThread, v14, v58);
    }
    ExAcquirePushLockSharedEx(v6 + 840, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v13, v12);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v17 = ProcessSessionId < *(_DWORD *)(v6 + 872) && *(_QWORD *)(*(_QWORD *)(v6 + 880) + 8LL * ProcessSessionId);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)this + 16) )
  {
    v20 = *((_QWORD *)this + 1) + 136LL;
    *((_BYTE *)this + 16) = 0;
    ExReleasePushLockSharedEx(v20, 0LL);
    KeLeaveCriticalRegion();
    v19 = *((_QWORD *)this + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v19 + 16), (struct DXGADAPTER *)v19);
  }
  v21 = (char *)a2 + 8;
  if ( !*((_BYTE *)a2 + 32) )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18);
    v59[3] = 275LL;
    v59[4] = 4LL;
    v59[5] = v21;
    v59[6] = 0LL;
    v59[7] = 0LL;
    WdLogEvent5_WdCriticalError(v59);
  }
  v22 = (struct _KTHREAD **)*((_QWORD *)a2 + 3);
  *((_BYTE *)a2 + 32) = 0;
  if ( KeGetCurrentThread() != v22[23] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v22, *((char **)a2 + 5));
  *((_QWORD *)a2 + 5) = 0LL;
  if ( *((_BYTE *)a2 + 144) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
  if ( !Handle )
    goto LABEL_18;
  v83 = 0LL;
  v52 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &v83, 0LL);
  v55 = v83;
  v56 = v52;
  if ( v52 < 0 )
  {
    v60 = WdLogNewEntry5_WdEvent(v54, v53);
    *(_QWORD *)(v60 + 24) = v56;
    WdLogEvent5_WdEvent(v60);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
    COREDEVICEACCESS::AcquireSharedUncheck(a2, v61);
    return (unsigned int)v56;
  }
  else
  {
    if ( !a6 )
    {
      Timeout.QuadPart = -20000000LL;
      KeWaitForSingleObject(v83, Executive, 0, 1u, &Timeout);
      goto LABEL_53;
    }
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject(v83, Executive, 0, 1u, &Timeout) != 258 )
    {
LABEL_53:
      ObfDereferenceObject(v55);
      v8 = v84;
LABEL_18:
      SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(v17, a4);
      v26 = SwapChainBindingStatus;
      if ( SwapChainBindingStatus < 0 )
      {
        if ( SwapChainBindingStatus != -1071775733 && SwapChainBindingStatus != -1071775730 )
        {
          v63 = WdLogNewEntry5_WdEvent(v25, v24);
          *(_QWORD *)(v63 + 24) = v26;
          WdLogEvent5_WdEvent(v63);
        }
        goto LABEL_76;
      }
      if ( !a4 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v25, v24);
        *(_QWORD *)(v64 + 24) = 130LL;
        WdLogEvent5_WdAssertion(v64);
      }
      if ( !*((_BYTE *)this + 16) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 24LL));
        v27 = *((_QWORD *)this + 1);
        *(_QWORD *)this = -1LL;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v27 + 136, 0LL);
        *((_BYTE *)this + 16) = 1;
      }
      if ( *((_BYTE *)a2 + 144) )
      {
        COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a2 + 72), 0LL);
        v24 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 200LL);
        if ( (_DWORD)v24 != 1 )
          goto LABEL_73;
      }
      if ( *((_BYTE *)a2 + 32) )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
        v65[3] = 275LL;
        v65[4] = 4LL;
        v65[5] = v21;
        v65[6] = 0LL;
        v65[7] = 0LL;
        WdLogEvent5_WdCriticalError(v65);
      }
      v28 = *((_QWORD *)a2 + 3);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v28 + 184) )
      {
        if ( !KeReadStateEvent((PRKEVENT)(v28 + 48)) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v29, &EventBlockThread, v30, 72);
          KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a2 + 3), 0LL);
      }
      *((_QWORD *)a2 + 5) = 0LL;
      *((_BYTE *)a2 + 32) = 1;
      v31 = *(unsigned int *)(*((_QWORD *)a2 + 17) + 576LL);
      if ( (_DWORD)v31 == 1 )
      {
        v32 = 0;
        if ( a4->Model == D3DKMT_PM_REDIRECTED_FLIP && a4->Token.Flip.hSyncObject )
        {
          v33 = PsGetCurrentProcess(v31, v24);
          ProcessDxgProcess = PsGetProcessDxgProcess(v33);
          v37 = (struct DXGPROCESS *)ProcessDxgProcess;
          if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
            || (Current = DXGTHREAD::GetCurrent(v36, v35)) == 0LL
            || (v38 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL )
          {
            v38 = v37;
          }
          HandleInformation = 0LL;
          Global = DXGGLOBAL::GetGlobal(v36, v35);
          v80 = (PERESOURCE *)Global;
          v81 = 0;
          if ( !Global )
          {
            v74 = WdLogNewEntry5_WdAssertion(v41, v40);
            *(_QWORD *)(v74 + 24) = 2423LL;
            WdLogEvent5_WdAssertion(v74);
            Global = (struct DXGGLOBAL *)v80;
          }
          if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
          {
            v75 = WdLogNewEntry5_WdAssertion(v43, v42);
            *(_QWORD *)(v75 + 24) = 2428LL;
            WdLogEvent5_WdAssertion(v75);
          }
          if ( v81 )
          {
            v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v42);
            v76[5] = &v80;
            v76[3] = 275LL;
            v76[4] = 4LL;
            v76[6] = 0LL;
            v76[7] = 0LL;
            WdLogEvent5_WdCriticalError(v76);
          }
          v44 = v80;
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v44[65], 1u);
          hSyncObject = a4->Token.Flip.hSyncObject;
          v81 = 1;
          Object = 0LL;
          v32 = ObReferenceObjectByHandle(
                  hSyncObject,
                  0x20000u,
                  g_pDxgkSharedSyncObjectType,
                  1,
                  &Object,
                  &HandleInformation);
          if ( v32 < 0 )
          {
            v77 = WdLogNewEntry5_WdWarning(v47, v46, v48);
            *(_QWORD *)(v77 + 24) = a4->Token.Flip.hSyncObject;
            WdLogEvent5_WdWarning(v77);
          }
          else
          {
            v49 = (struct _DXGSHAREDSYNCOBJECT *)Object;
            FenceValue = *(_QWORD *)(*(_QWORD *)Object + 112LL);
            if ( FenceValue <= a4->Token.Flip.FenceValue )
              FenceValue = a4->Token.Flip.FenceValue;
            *(_QWORD *)(*(_QWORD *)Object + 112LL) = FenceValue;
            a4->Token.Flip.hSyncObject = 0LL;
            if ( *((_BYTE *)v8 + 209) )
            {
              v32 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
                      (struct DXGADAPTER *)((char *)v8 + 4240),
                      v38,
                      v49,
                      a4->Token.Flip.FenceValue);
              if ( v32 < 0 )
              {
                ObfDereferenceObject(v49);
                if ( v81 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v80);
                LODWORD(v26) = v32;
                goto LABEL_75;
              }
            }
            ObfDereferenceObject(v49);
          }
          if ( v81 )
          {
            v81 = 0;
            ExReleaseResourceLite(v80[65]);
            KeLeaveCriticalRegion();
          }
        }
        LODWORD(v26) = v32;
        if ( v32 >= 0 )
          return (unsigned int)v26;
        goto LABEL_75;
      }
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 8));
      if ( *((_BYTE *)a2 + 144) )
LABEL_73:
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
      v68 = WdLogNewEntry5_WdError(v67, v66);
      LODWORD(v26) = -1073741130;
      *(_QWORD *)(v68 + 24) = -1073741130LL;
      WdLogEvent5_WdError(v68);
      COREDEVICEACCESS::AcquireSharedUncheck(a2, v69);
LABEL_75:
      DXGADAPTERSTOPRESETLOCKSHARED::Release(this);
      COREDEVICEACCESS::Release(a2, v70);
      DxgkCancelSwapChainBinding(a4, v71);
LABEL_76:
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
      COREDEVICEACCESS::AcquireSharedUncheck(a2, v72);
      return (unsigned int)v26;
    }
    ObfDereferenceObject(v55);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
    COREDEVICEACCESS::AcquireSharedUncheck(a2, v62);
    return 3223191810LL;
  }
}
