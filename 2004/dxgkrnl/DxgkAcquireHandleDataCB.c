/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C014E270
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0024424 (-ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C010AFD0 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0157070 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v13; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v15; // rax
  int CurrentProcessSessionId; // ebp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  struct DXGTHREAD *ThreadProperty; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // r9d
  unsigned int v35; // eax
  ULONG_PTR Count; // rsi
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r9
  struct _EX_RUNDOWN_REF *v40; // rdi
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // edi
  struct DXGPROCESS *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  char v56[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v57; // [rsp+28h] [rbp-80h]
  int v58; // [rsp+30h] [rbp-78h]
  char v59[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v59);
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 167LL;
    WdLogEvent5_WdAssertion(v6);
  }
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v10, v9)) == 0LL
    || (v13 = *((_QWORD *)Current + 1)) == 0 )
  {
    v13 = v11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v15 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9);
  v19 = PsGetCurrentProcess(v18, v17);
  v20 = PsGetProcessDxgProcess(v19);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && v20
    && (v21 = *(void **)(v20 + 88)) != 0LL
    && v21 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v24 = PsGetCurrentProcess(v23, v22),
         ProcessSessionId = PsGetProcessSessionIdEx(v24),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    ThreadProperty = *(struct DXGTHREAD **)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( ThreadProperty || (ThreadProperty = DxgkThreadObjectCreateDxgThread()) != 0LL )
      ObfDereferenceObject(ThreadProperty);
    else
      ThreadProperty = 0LL;
  }
  v57 = v13 + 208;
  if ( v13 != -208 && *(struct _KTHREAD **)(v13 + 216) == KeGetCurrentThread() )
  {
    v30 = WdLogNewEntry5_WdAssertion(v13 + 208, v28);
    *(_QWORD *)(v30 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v30);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v57, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v34 = *(_DWORD *)(v57 + 24);
      if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, &EventBlockThread, v33, v34);
    }
    ExAcquirePushLockSharedEx(v57, 0LL);
  }
  v35 = a1[1];
  Count = 0LL;
  v58 = 1;
  if ( v35 == 1 )
  {
    v37 = *a1;
    v38 = (*a1 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v38 >= *(_DWORD *)(v13 + 256) )
      goto LABEL_51;
    v39 = *(_QWORD *)(v13 + 240);
    v33 = (unsigned int)v38;
    v37 = ((unsigned int)v37 >> 25) & 0x60;
    v32 = *(unsigned int *)(v39 + 16 * v38 + 8);
    if ( (_BYTE)v37 != (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60) || (v32 & 0x2000) != 0 || (v32 & 0x1F) == 0 )
      goto LABEL_51;
    v33 = 2LL * (unsigned int)v38;
    v32 &= 0x1Fu;
    if ( (_BYTE)v32 == 5 )
    {
      v40 = *(struct _EX_RUNDOWN_REF **)(v39 + 16LL * (unsigned int)v38);
      if ( v40 )
      {
        if ( KeGetCurrentIrql() >= 2u )
        {
          v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40[1].Count + 16) + 16LL) + 216LL) + 64LL)
                          + 40LL);
          if ( *(_DWORD *)(v41 + 28) >= 0x2003u )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v37);
            v42[3] = 275LL;
            v42[4] = 20LL;
            v42[5] = *(_QWORD *)(*(_QWORD *)(v40[1].Count + 16) + 16LL);
            v42[6] = 0LL;
            v42[7] = 0LL;
            WdLogEvent5_WdCriticalError(v42);
          }
        }
        if ( !ExAcquireRundownProtection(v40 + 11) )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v44, v43);
          v45[3] = 275LL;
          v45[4] = 38LL;
          v45[5] = v40;
          v45[6] = 0LL;
          v45[7] = 0LL;
          WdLogEvent5_WdCriticalError(v45);
        }
        if ( ThreadProperty )
          ++*((_DWORD *)ThreadProperty + 8);
        *a2 = v40;
        if ( (a1[2] & 1) != 0 )
          Count = v40[4].Count;
        else
          Count = *(_QWORD *)(v40[6].Count + 16);
        goto LABEL_68;
      }
      goto LABEL_51;
    }
    goto LABEL_50;
  }
  if ( v35 != 2 )
  {
    v47 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    v48 = (int)a1[1];
    goto LABEL_67;
  }
  v49 = *a1;
  v50 = DXGPROCESS::GetCurrent(v32, v31);
  v32 = (v49 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v32 >= *((_DWORD *)v50 + 64)
    || (v33 = *((_QWORD *)v50 + 30),
        v37 = (unsigned int)v32,
        v32 = *(unsigned int *)(v33 + 16LL * (unsigned int)v32 + 8),
        ((v49 >> 25) & 0x60) != (v32 & 0x60))
    || (v32 & 0x2000) != 0
    || (v32 & 0x1F) == 0 )
  {
LABEL_51:
    v47 = WdLogNewEntry5_WdWarning(v32, v37, v33);
    v48 = *a1;
LABEL_67:
    *(_QWORD *)(v47 + 24) = v48;
    WdLogEvent5_WdWarning(v47);
    goto LABEL_68;
  }
  v37 *= 2LL;
  v32 &= 0x1Fu;
  if ( (_BYTE)v32 != 4 )
  {
LABEL_50:
    v46 = WdLogNewEntry5_WdError(v32, v37);
    *(_QWORD *)(v46 + 24) = 267LL;
    WdLogEvent5_WdError(v46);
    goto LABEL_51;
  }
  v51 = *(_QWORD *)(v33 + 8 * v37);
  if ( !v51 )
    goto LABEL_51;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 8) + 16LL) + 16LL) + 216LL)
                                + 64LL)
                    + 40LL);
    if ( *(_DWORD *)(v52 + 28) >= 0x2003u )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v37);
      v53[3] = 275LL;
      v53[4] = 20LL;
      v53[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 8) + 16LL) + 16LL);
      v53[6] = 0LL;
      v53[7] = 0LL;
      WdLogEvent5_WdCriticalError(v53);
    }
  }
  DxgkReferenceDxgResource((struct _EX_RUNDOWN_REF *)v51);
  if ( ThreadProperty )
    ++*((_DWORD *)ThreadProperty + 8);
  DXGAUTOPUSHLOCK::ReleaseShared((DXGAUTOPUSHLOCK *)v56);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v51 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v51;
  Count = *(_QWORD *)(v51 + 56);
  if ( (*(_DWORD *)(v51 + 4) & 1) != 0 )
    Count = *(_QWORD *)(Count + 16);
LABEL_68:
  if ( v58 == 1 )
  {
    v58 = 0;
    ExReleasePushLockSharedEx(v57, 0LL);
  }
  else
  {
    if ( v58 != 2 )
      goto LABEL_73;
    v54 = v57;
    v58 = 0;
    *(_QWORD *)(v57 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v54, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_73:
  if ( v59[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
