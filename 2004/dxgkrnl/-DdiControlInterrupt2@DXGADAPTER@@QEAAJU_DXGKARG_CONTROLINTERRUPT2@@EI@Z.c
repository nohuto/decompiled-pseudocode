/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C0007488
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C0041850 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z @ 0x1C011CFB8 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C011D06C (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C003D7D4 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00EE9E4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(
        DXGADAPTER *this,
        struct _DXGKARG_CONTROLINTERRUPT2 a2,
        __int64 a3,
        unsigned int a4)
{
  char v5; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int8 CurrentIrql; // r13
  struct DXGTHREAD *v20; // r14
  struct DXGTHREAD *v21; // rax
  int v22; // r12d
  unsigned int *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v38; // eax
  signed __int64 v39; // rax
  __int64 v40; // rcx
  LARGE_INTEGER v41; // rbx
  struct _KDPC *v42; // r8
  struct _KTIMER *v43; // rcx
  __int64 v44; // r9
  struct DXGTHREAD *Current; // rax
  __int64 v46; // rax
  int v47; // eax
  struct DXGPROCESS *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v53; // rcx
  _QWORD *v54; // rax
  unsigned __int8 v55; // cl
  _QWORD *v56; // rax
  __int64 v57; // rax
  unsigned int v58; // edx
  __int64 v59; // rcx
  unsigned int i; // edx
  __int64 v61; // rcx
  unsigned int j; // r14d
  DXGK_INTERRUPT_STATE InterruptState; // [rsp+3Ch] [rbp-9Dh]
  unsigned int v65; // [rsp+40h] [rbp-99h] BYREF
  __int64 v66; // [rsp+48h] [rbp-91h]
  char v67; // [rsp+50h] [rbp-89h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-81h] BYREF
  _DWORD v69[4]; // [rsp+70h] [rbp-69h] BYREF
  char v70; // [rsp+80h] [rbp-59h]
  struct _KAPC_STATE v71; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v72[8]; // [rsp+B8h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-19h] BYREF

  v65 = -1;
  v5 = a3;
  InterruptState = a2.InterruptState;
  v66 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v67 = 1;
    v65 = 5054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5054LL);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v65, 5054LL);
  if ( !bTracingEnabled )
  {
LABEL_69:
    if ( a2.InterruptType != DXGK_INTERRUPT_CRTC_VSYNC )
      goto LABEL_9;
    goto LABEL_6;
  }
  if ( a2.InterruptType != DXGK_INTERRUPT_CRTC_VSYNC )
    goto LABEL_9;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qq_EtwWriteTransfer(v9, v8, v10, a4, InterruptState);
    goto LABEL_69;
  }
LABEL_6:
  if ( !v5 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 3936, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v44 = *((unsigned int *)this + 990);
        if ( (_DWORD)v44 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v44);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 3936, 0LL);
    }
    *((_QWORD *)this + 493) = KeGetCurrentThread();
  }
LABEL_9:
  v13 = *((_QWORD *)this + 338);
  if ( !v13
    || (v14 = *(_QWORD *)(v13 + 624)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v13 + 616) + 8LL) + 72LL))(v14)
    && *((struct _KTHREAD **)this + 339) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)this + 10) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventBlockThread, v18, 73LL);
      KeWaitForSingleObject((char *)this + 240, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 33), 1u);
  }
  if ( *((int *)this + 649) >= 2700 && *((_QWORD *)this + 167) )
  {
    v69[1] = InterruptState;
    v69[0] = a2.InterruptType;
    v69[2] = a4;
    _InterlockedIncrement((volatile signed __int32 *)this + 1091);
    CurrentIrql = KeGetCurrentIrql();
    v20 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v20 = Current) != 0LL) )
      v22 = *((_DWORD *)Current + 8);
    else
      v22 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v72, this);
    v26 = (*((int (__fastcall **)(_QWORD, _DWORD *))this + 167))(*((_QWORD *)this + 34), v69);
    if ( v72[0] )
      KeUnstackDetachProcess(&ApcState);
    v25 = KeGetCurrentIrql();
    v27 = CurrentIrql == (unsigned __int8)v25;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 1091);
    CurrentIrql = KeGetCurrentIrql();
    v20 = 0LL;
    if ( CurrentIrql < 2u && (v21 = DXGTHREAD::GetCurrent(), (v20 = v21) != 0LL) )
      v22 = *((_DWORD *)v21 + 8);
    else
      v22 = 0;
    v70 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v46 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v46 + 24) = 2238LL;
        WdLogEvent5_WdAssertion(v46);
      }
      v23 = (unsigned int *)DXGGLOBAL::m_pGlobal;
      if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 387) )
      {
        v47 = *((_DWORD *)this + 87);
        if ( (v47 & 0x20) == 0 && (v47 & 4) == 0 )
        {
          v48 = DXGPROCESS::GetCurrent();
          if ( v48 )
          {
            if ( !*((_BYTE *)v48 + 344) && !*((_BYTE *)v48 + 345) )
            {
              v50 = v23[387];
              if ( (_DWORD)v50 == 2 || (_DWORD)v50 == 1 && *((_BYTE *)v48 + 477) )
              {
                Global = DXGGLOBAL::GetGlobal(v50, v49);
                SessionData = DXGGLOBAL::GetSessionData(Global);
                if ( SessionData )
                {
                  v53 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2337);
                  if ( v53 )
                  {
                    KeStackAttachProcess(v53, &v71);
                    v70 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    v26 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 100))(*((_QWORD *)this + 34), a2);
    if ( v70 )
      KeUnstackDetachProcess(&v71);
    v27 = CurrentIrql == KeGetCurrentIrql();
  }
  if ( !v27 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
    v54[3] = 275LL;
    v54[4] = 16LL;
    v54[5] = this;
    v54[6] = CurrentIrql;
    v55 = KeGetCurrentIrql();
    v54[7] = v55;
    WdLogEvent5_WdCriticalError(v54);
  }
  if ( v20 && *((_DWORD *)v20 + 8) != v22 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
    v56[3] = 275LL;
    v56[4] = 38LL;
    v56[5] = *((int *)v20 + 8);
    v56[6] = v22;
    v56[7] = 0LL;
    WdLogEvent5_WdCriticalError(v56);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1091);
  if ( (_DWORD)v26 != -1073741823 && (_DWORD)v26 != -1073741822 && (_DWORD)v26 )
  {
    v57 = WdLogNewEntry5_WdError(v25, v24);
    *(_QWORD *)(v57 + 24) = v26;
    WdLogEvent5_WdError(v57);
  }
  v28 = *((_QWORD *)this + 338);
  if ( !v28
    || (v29 = *(_QWORD *)(v28 + 624)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v28 + 616) + 8LL) + 72LL))(v29)
    && *((struct _KTHREAD **)this + 339) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 33));
    KeLeaveCriticalRegion();
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v26 < 0 )
    {
LABEL_49:
      *((_QWORD *)this + 493) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 3936, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_50;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 496, &LockHandle);
    v30 = a4;
    if ( (*((_DWORD *)this + 642) & 0x10) == 0 )
    {
      **((_DWORD **)this + 486) = InterruptState;
LABEL_44:
      if ( InterruptState == DXGK_INTERRUPT_DISABLE )
      {
        if ( (*((_DWORD *)this + 642) & 0x10) != 0 )
        {
          if ( (_DWORD)v30 == -3 )
          {
            for ( i = 0; i < *((_DWORD *)this + 362); *(_QWORD *)(*((_QWORD *)this + 497) + 8 * v61) = 0LL )
              v61 = i++;
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 497) + 8 * v30) = 0LL;
          }
        }
        else
        {
          **((_QWORD **)this + 497) = 0LL;
        }
      }
      v31 = *((_QWORD *)this + 337);
      if ( v31 && InterruptState == DXGK_INTERRUPT_ENABLE && *(_QWORD *)(v31 + 912) )
        *(_BYTE *)(v31 + 856) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( InterruptState != 2 )
      {
        LOBYTE(v32) = InterruptState == DXGK_INTERRUPT_ENABLE;
        PoNotifyVSyncChange(v32);
      }
      goto LABEL_49;
    }
    if ( a4 == -3 )
    {
      v58 = 0;
      if ( !*((_DWORD *)this + 362) )
        goto LABEL_44;
      do
      {
        v59 = v58++;
        *(_DWORD *)(*((_QWORD *)this + 486) + 4 * v59) = InterruptState;
      }
      while ( v58 < *((_DWORD *)this + 362) );
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)this + 486) + 4LL * a4) = InterruptState;
    }
    v30 = a4;
    goto LABEL_44;
  }
LABEL_50:
  v33 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v34 = InterruptState;
  v33[3] = (int)v26;
  v33[4] = a2.InterruptType;
  v33[5] = InterruptState;
  if ( (int)v26 >= 0 && InterruptState == DXGK_INTERRUPT_DISABLE && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( a4 == -3 || (v38 = a4, (*((_DWORD *)this + 642) & 0x10) == 0) )
      v38 = 0;
    v34 = *((_QWORD *)this + 498);
    v39 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v34 + 8LL * v38),
            *(_QWORD *)(v34 + 8LL * v38),
            *(_QWORD *)(v34 + 8LL * v38));
    v40 = *((unsigned int *)this + 998);
    if ( v39 )
      v41.QuadPart = -(v39 * v40);
    else
      v41.QuadPart = (unsigned int)(-166667 * v40);
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    if ( (*((_DWORD *)this + 642) & 0x10) == 0 )
    {
      v42 = (struct _KDPC *)*((_QWORD *)this + 488);
      v43 = (struct _KTIMER *)*((_QWORD *)this + 487);
LABEL_65:
      KeSetTimer(v43, v41, v42);
      goto LABEL_52;
    }
    if ( a4 != -3 )
    {
      v42 = (struct _KDPC *)(((unsigned __int64)a4 << 6) + *((_QWORD *)this + 488));
      v43 = (struct _KTIMER *)(*((_QWORD *)this + 487) + ((unsigned __int64)a4 << 6));
      goto LABEL_65;
    }
    for ( j = 0; j < *((_DWORD *)this + 362); ++j )
      KeSetTimer(
        (PKTIMER)(*((_QWORD *)this + 487) + ((unsigned __int64)j << 6)),
        v41,
        (PKDPC)(((unsigned __int64)j << 6) + *((_QWORD *)this + 488)));
  }
LABEL_52:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v34);
  if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v65);
  return (unsigned int)v26;
}
