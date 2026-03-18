/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x1C011EE20
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C0110140 (DxgkGetAdapterDeviceDesc.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C011D760 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C011E930 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkGetDisplayModeList @ 0x1C016B3F0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 CurrentProcessSessionId; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // r9d
  __int64 v35; // [rsp+20h] [rbp-18h] BYREF
  char v36; // [rsp+28h] [rbp-10h]

  v2 = a1;
  v5 = *((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 102);
  if ( !v5 )
    goto LABEL_37;
  v36 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v4, v3);
  v35 = v5 + 80;
  if ( v5 == -80 )
  {
    v22 = WdLogNewEntry5_WdAssertion(0LL, v6);
    *(_QWORD *)(v22 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v22);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v35 + 16) == CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(CurrentThread, v6);
    *(_QWORD *)(v23 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( v36 )
  {
    v24 = WdLogNewEntry5_WdCriticalError(CurrentThread, v6);
    *(_QWORD *)(v24 + 40) = &v35;
    *(_QWORD *)(v24 + 24) = 275LL;
    *(_QWORD *)(v24 + 32) = 4LL;
    *(_OWORD *)(v24 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  v9 = v35;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v9 + 16) == KeGetCurrentThread() )
  {
    v25 = *(_DWORD *)(v9 + 24);
    if ( v25 <= 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v26 + 24) = 661LL;
      WdLogEvent5_WdAssertion(v26);
      v25 = *(_DWORD *)(v9 + 24);
    }
    v13 = v25 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v9, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v21 = *(_DWORD *)(v9 + 28);
        if ( v21 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, &EventBlockThread, v12, v21);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 8));
      ExAcquirePushLockExclusiveEx(v9, 0LL);
    }
    if ( *(_QWORD *)(v9 + 16) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v27 + 24) = 685LL;
      WdLogEvent5_WdAssertion(v27);
    }
    if ( *(_DWORD *)(v9 + 24) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v28 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v28);
    }
    *(_QWORD *)(v9 + 16) = KeGetCurrentThread();
    v13 = 1;
  }
  *(_DWORD *)(v9 + 24) = v13;
  v36 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v5 + 72) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v35);
LABEL_37:
    v15 = 0LL;
    goto LABEL_23;
  }
  _mm_lfence();
  v14 = v35;
  v15 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 8 * CurrentProcessSessionId);
  v36 = 0;
  if ( *(struct _KTHREAD **)(v35 + 16) != KeGetCurrentThread() )
  {
    v29 = WdLogNewEntry5_WdCriticalError(v11, v10);
    *(_QWORD *)(v29 + 24) = 275LL;
    *(_QWORD *)(v29 + 32) = 4LL;
    *(_QWORD *)(v29 + 40) = v14;
    *(_OWORD *)(v29 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  v16 = *(_DWORD *)(v14 + 24);
  if ( v16 <= 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v30 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v30);
    v16 = *(_DWORD *)(v14 + 24);
  }
  v17 = v16 - 1;
  *(_DWORD *)(v14 + 24) = v17;
  if ( !v17 )
  {
    *(_QWORD *)(v14 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_23:
  if ( v15 )
  {
    if ( v2 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v15 + 18528));
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 18528, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v34 = *(_DWORD *)(v15 + 18552);
          if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v18, &EventBlockThread, v19, v34);
        }
        ExAcquirePushLockSharedEx(v15 + 18528, 0LL);
      }
    }
    return 0LL;
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v31 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v33, v32);
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    return 3221225485LL;
  }
}
