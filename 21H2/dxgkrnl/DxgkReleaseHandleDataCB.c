/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1C01C9830
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

void __fastcall DxgkReleaseHandleDataCB(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  struct DXGTHREAD *DxgThread; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  struct _EX_RUNDOWN_REF *v16; // rcx
  int v18; // r9d
  struct DXGTHREAD *Current; // rax
  __int64 v20; // rbx
  struct DXGTHREAD *v21; // [rsp+50h] [rbp-68h] BYREF
  char v22[8]; // [rsp+58h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-58h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v22);
    CurrentProcess = PsGetCurrentProcess(v4, v3, v5, v6);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v9 = ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
      || (Current = DXGTHREAD::GetCurrent()) == 0LL
      || (v10 = *((_QWORD *)Current + 3)) == 0 )
    {
      v10 = v9;
    }
    v21 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v21) < 0 )
    {
      DxgThread = 0LL;
    }
    else
    {
      DxgThread = v21;
      if ( !v21 )
      {
        DxgThread = DxgkThreadObjectCreateDxgThread();
        v21 = DxgThread;
      }
    }
    v12 = v10 + 248;
    if ( v12 && *(struct _KTHREAD **)(v12 + 8) == KeGetCurrentThread() )
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
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v18 = *(_DWORD *)(v12 + 24);
        if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (const EVENT_DESCRIPTOR *)"g", v14, v18);
      }
      ExAcquirePushLockSharedEx(v12, 0LL);
    }
    v15 = *((_DWORD *)a1 + 2);
    if ( v15 == 1 )
    {
      v16 = (struct _EX_RUNDOWN_REF *)(v1 + 88);
    }
    else
    {
      if ( v15 != 2 )
      {
        v20 = *((int *)a1 + 2);
        WdLogSingleEntry1(2LL, v20);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver supplied invalid handle type (0x%I64x), cannot release reference",
          v20,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_17:
        ExReleasePushLockSharedEx(v12, 0LL);
        KeLeaveCriticalRegion();
        if ( v22[0] )
          KeUnstackDetachProcess(&ApcState);
        return;
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 80));
      v16 = (struct _EX_RUNDOWN_REF *)(v1 + 72);
    }
    ExReleaseRundownProtection(v16);
    if ( DxgThread )
    {
      if ( --*((_DWORD *)DxgThread + 12) < 0 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
    }
    goto LABEL_17;
  }
}
