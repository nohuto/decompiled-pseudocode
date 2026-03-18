/*
 * XREFs of ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0195D50
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x1C0333590 (DxgkPresentRedirected.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DB54 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00770AC (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017ED90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x1C037CA50 (-VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGS.c)
 */

__int64 __fastcall SubmitPresentHistoryTokenPreparation(
        struct DXGADAPTERSTOPRESETLOCKSHARED *this,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTER *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        __int64 Handle,
        bool a6)
{
  __int64 v6; // rdi
  struct DXGADAPTER *v8; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  BOOL v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _KTHREAD **v21; // rcx
  int SwapChainBindingStatus; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // edi
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  NTSTATUS v32; // ebx
  __int64 v33; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v35; // rbx
  struct DXGPROCESS *v36; // r12
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v38; // rbx
  HANDLE hSyncObject; // rcx
  struct _DXGSHAREDSYNCOBJECT *v40; // rdi
  UINT64 FenceValue; // rax
  NTSTATUS v43; // eax
  PVOID v44; // r12
  unsigned int v45; // r13d
  char *v46; // rdx
  int v47; // r9d
  char *v48; // rdx
  char *v49; // rdx
  char *v50; // rdx
  struct DXGTHREAD *Current; // rax
  struct DXGGLOBAL *v52; // [rsp+58h] [rbp-18h] BYREF
  char v53; // [rsp+60h] [rbp-10h]
  PVOID v54; // [rsp+B0h] [rbp+40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B8h] [rbp+48h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+50h] BYREF

  Object = a3;
  v6 = *((_QWORD *)a3 + 350);
  v8 = a3;
  v11 = v6 + 864;
  if ( v6 != -864 && *(struct _KTHREAD **)(v6 + 872) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6 + 864, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v47 = *(_DWORD *)(v6 + 888);
      if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (const EVENT_DESCRIPTOR *)"g", v14, v47);
    }
    ExAcquirePushLockSharedEx(v6 + 864, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v13, v12, v14, v15);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v18 = ProcessSessionId < *(_DWORD *)(v6 + 896) && *(_QWORD *)(*(_QWORD *)(v6 + 904) + 8LL * ProcessSessionId);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)this + 16) )
  {
    v19 = *((_QWORD *)this + 1) + 136LL;
    *((_BYTE *)this + 16) = 0;
    ExReleasePushLockSharedEx(v19, 0LL);
    KeLeaveCriticalRegion();
    v20 = *((_QWORD *)this + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v20 + 16), (struct DXGADAPTER *)v20);
  }
  if ( !*((_BYTE *)a2 + 32) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 8, 0LL, 0LL);
  v21 = (struct _KTHREAD **)*((_QWORD *)a2 + 3);
  *((_BYTE *)a2 + 32) = 0;
  if ( KeGetCurrentThread() != v21[23] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v21, *((char **)a2 + 5));
  *((_QWORD *)a2 + 5) = 0LL;
  if ( *((_BYTE *)a2 + 144) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
  if ( !Handle )
    goto LABEL_18;
  v54 = 0LL;
  v43 = ObReferenceObjectByHandle((HANDLE)Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &v54, 0LL);
  v44 = v54;
  v45 = v43;
  if ( v43 < 0 )
  {
    WdLogSingleEntry1(4LL, v43);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
    COREDEVICEACCESS::AcquireSharedUncheck(a2, v48);
    return v45;
  }
  else
  {
    if ( !a6 )
    {
      Handle = -20000000LL;
      KeWaitForSingleObject(v54, Executive, 0, 1u, (PLARGE_INTEGER)&Handle);
      goto LABEL_51;
    }
    Handle = 0LL;
    if ( KeWaitForSingleObject(v54, Executive, 0, 1u, (PLARGE_INTEGER)&Handle) != 258 )
    {
LABEL_51:
      ObfDereferenceObject(v44);
      v8 = (struct DXGADAPTER *)Object;
LABEL_18:
      SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(v18, a4);
      v26 = SwapChainBindingStatus;
      if ( SwapChainBindingStatus < 0 )
      {
        if ( SwapChainBindingStatus != -1071775730 && SwapChainBindingStatus != -1071775733 )
          WdLogSingleEntry1(4LL, SwapChainBindingStatus);
        goto LABEL_54;
      }
      if ( !a4 )
      {
        WdLogSingleEntry1(1LL, 122LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pToken", 122LL, 0LL, 0LL, 0LL, 0LL);
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
        v23 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 200LL);
        if ( (_DWORD)v23 != 1 )
          goto LABEL_72;
      }
      if ( *((_BYTE *)a2 + 32) )
        WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a2 + 8, 0LL, 0LL);
      v28 = *((_QWORD *)a2 + 3);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v28 + 184) )
      {
        if ( !KeReadStateEvent((PRKEVENT)(v28 + 48)) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v29, (const EVENT_DESCRIPTOR *)"g", v30, 72);
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
          v33 = PsGetCurrentProcess(v31, v23, v24, v25);
          ProcessDxgProcess = PsGetProcessDxgProcess(v33);
          v35 = (struct DXGPROCESS *)ProcessDxgProcess;
          if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
            || (Current = DXGTHREAD::GetCurrent()) == 0LL
            || (v36 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) == 0LL )
          {
            v36 = v35;
          }
          HandleInformation = 0LL;
          Global = DXGGLOBAL_GetGlobal();
          v52 = Global;
          v53 = 0;
          if ( !Global )
          {
            WdLogSingleEntry1(1LL, 2725LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 2725LL, 0LL, 0LL, 0LL, 0LL);
            Global = 0LL;
          }
          if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 79)) )
          {
            WdLogSingleEntry1(1LL, 2730LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
              2730LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v38 = v52;
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(*((PERESOURCE *)v38 + 79), 1u);
          hSyncObject = a4->Token.Flip.hSyncObject;
          v53 = 1;
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
            WdLogSingleEntry1(3LL, a4->Token.Flip.hSyncObject);
          }
          else
          {
            v40 = (struct _DXGSHAREDSYNCOBJECT *)Object;
            FenceValue = *(_QWORD *)(*(_QWORD *)Object + 120LL);
            if ( FenceValue <= a4->Token.Flip.FenceValue )
              FenceValue = a4->Token.Flip.FenceValue;
            *(_QWORD *)(*(_QWORD *)Object + 120LL) = FenceValue;
            a4->Token.Flip.hSyncObject = 0LL;
            if ( *((_BYTE *)v8 + 209) )
            {
              v32 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
                      (struct DXGADAPTER *)((char *)v8 + 4344),
                      v36,
                      v40,
                      a4->Token.Flip.FenceValue);
              if ( v32 < 0 )
              {
                ObfDereferenceObject(v40);
                if ( v53 )
                  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v52);
                v26 = v32;
                goto LABEL_74;
              }
            }
            ObfDereferenceObject(v40);
          }
          if ( v53 )
          {
            v53 = 0;
            ExReleaseResourceLite(*((PERESOURCE *)v52 + 79));
            KeLeaveCriticalRegion();
          }
        }
        v26 = v32;
        if ( v32 >= 0 )
          return v26;
        goto LABEL_74;
      }
      COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 8));
      if ( *((_BYTE *)a2 + 144) )
LABEL_72:
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
      v26 = -1073741130;
      WdLogSingleEntry1(2LL, -1073741130LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire shared code device acess, returning 0x%I64x",
        -1073741130LL,
        0LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::AcquireSharedUncheck(a2, v50);
LABEL_74:
      DXGADAPTERSTOPRESETLOCKSHARED::Release(this);
      COREDEVICEACCESS::Release(a2);
      DxgkCancelSwapChainBinding(a4);
LABEL_54:
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
      COREDEVICEACCESS::AcquireSharedUncheck(a2, v46);
      return v26;
    }
    ObfDereferenceObject(v44);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
    COREDEVICEACCESS::AcquireSharedUncheck(a2, v49);
    return 3223191810LL;
  }
}
