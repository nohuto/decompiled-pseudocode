/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C01C95D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C01890DC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG_PTR Count; // rbp
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  struct DXGTHREAD *DxgThread; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r10
  int v23; // r8d
  struct _EX_RUNDOWN_REF *v24; // rdi
  struct DXGTHREAD *Current; // rax
  int v27; // r9d
  __int64 v28; // r9
  struct DXGPROCESS *v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // r10
  int v32; // r8d
  __int64 v33; // rdi
  __int64 v34; // r9
  struct DXGTHREAD *v35; // [rsp+50h] [rbp-78h] BYREF
  char v36[8]; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v36);
  Count = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 168LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"nullptr != pReleaseHandle", 168LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v12 = *((_QWORD *)Current + 3)) == 0 )
  {
    v12 = v11;
  }
  v35 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v35) < 0 )
  {
    DxgThread = 0LL;
  }
  else
  {
    DxgThread = v35;
    if ( !v35 )
    {
      DxgThread = DxgkThreadObjectCreateDxgThread();
      v35 = DxgThread;
    }
  }
  v14 = v12 + 248;
  if ( v12 != -248 && *(struct _KTHREAD **)(v12 + 256) == KeGetCurrentThread() )
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
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v27 = *(_DWORD *)(v12 + 272);
      if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (const EVENT_DESCRIPTOR *)"g", v17, v27);
    }
    ExAcquirePushLockSharedEx(v12 + 248, 0LL);
  }
  v19 = a1[1];
  if ( v19 == 1 )
  {
    v20 = *a1;
    v21 = (*a1 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 >= *(_DWORD *)(v12 + 296) )
      goto LABEL_31;
    v22 = *(_QWORD *)(v12 + 280);
    v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
    if ( (((unsigned int)v20 >> 25) & 0x60) != (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
      || (v23 & 0x2000) != 0
      || (v23 & 0x1F) == 0 )
    {
      goto LABEL_31;
    }
    if ( (v23 & 0x1F) == 5 )
    {
      v24 = *(struct _EX_RUNDOWN_REF **)(v22 + 16LL * (unsigned int)v21);
      if ( v24 )
      {
        if ( KeGetCurrentIrql() >= 2u )
        {
          v28 = *(_QWORD *)(*(_QWORD *)(v24[1].Count + 16) + 16LL);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
            WdLogSingleEntry5(0LL, 275LL, 20LL, v28, 0LL, 0LL);
        }
        if ( !ExAcquireRundownProtection(v24 + 11) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, v24, 0LL, 0LL);
        if ( DxgThread )
          ++*((_DWORD *)DxgThread + 12);
        *a2 = v24;
        if ( (a1[2] & 1) != 0 )
          Count = v24[4].Count;
        else
          Count = *(_QWORD *)(v24[6].Count + 16);
        goto LABEL_27;
      }
LABEL_31:
      WdLogSingleEntry1(3LL, v20);
LABEL_27:
      ExReleasePushLockSharedEx(v14, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_28;
    }
LABEL_51:
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    v20 = *a1;
    goto LABEL_31;
  }
  if ( v19 != 2 )
  {
    v20 = (int)a1[1];
    goto LABEL_31;
  }
  v29 = DXGPROCESS::GetCurrent(v16, v15, v17, v18);
  v20 = *a1;
  v30 = (*a1 >> 6) & 0xFFFFFF;
  if ( v30 >= *((_DWORD *)v29 + 74) )
    goto LABEL_31;
  v31 = *((_QWORD *)v29 + 35);
  v32 = *(_DWORD *)(v31 + 16LL * v30 + 8);
  if ( (((unsigned int)v20 >> 25) & 0x60) != (v32 & 0x60) || (v32 & 0x2000) != 0 || (v32 & 0x1F) == 0 )
    goto LABEL_31;
  if ( (v32 & 0x1F) != 4 )
    goto LABEL_51;
  v33 = *(_QWORD *)(v31 + 16LL * v30);
  if ( !v33 )
    goto LABEL_31;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) + 16LL) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      WdLogSingleEntry5(0LL, 275LL, 20LL, v34, 0LL, 0LL);
  }
  DxgkReferenceDxgResource((struct _EX_RUNDOWN_REF *)v33);
  if ( DxgThread )
    ++*((_DWORD *)DxgThread + 12);
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v33 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v33;
  Count = *(_QWORD *)(v33 + 56);
  if ( (*(_DWORD *)(v33 + 4) & 1) != 0 )
    Count = *(_QWORD *)(Count + 16);
LABEL_28:
  if ( v36[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
