/*
 * XREFs of DxgkAcquireSessionModeChangeLock @ 0x1C01A455C
 * Callers:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01A32D0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C01B3730 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetDisplayModeList @ 0x1C01EBFF0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkAcquireSessionModeChangeLock(char a1)
{
  __int64 v2; // rbx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v4; // rax
  DXGFASTMUTEX *v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // eax
  DXGFASTMUTEX *v15; // [rsp+50h] [rbp-18h] BYREF
  char v16; // [rsp+58h] [rbp-10h]

  v2 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v2 )
    goto LABEL_25;
  v16 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  v15 = (DXGFASTMUTEX *)(v2 + 88);
  if ( v2 == -88 )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v15 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v15);
  v16 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v2 + 80) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v15);
    v6 = 0LL;
  }
  else
  {
    _mm_lfence();
    v4 = *(_QWORD *)(v2 + 48);
    v5 = v15;
    v6 = *(_QWORD *)(v4 + 8 * CurrentProcessSessionId);
    v16 = 0;
    if ( *((struct _KTHREAD **)v15 + 3) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v15, 0LL, 0LL);
    v7 = *((_DWORD *)v5 + 8);
    if ( v7 <= 0 )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
      v7 = *((_DWORD *)v5 + 8);
    }
    v8 = v7 - 1;
    *((_DWORD *)v5 + 8) = v8;
    if ( !v8 )
    {
      *((_QWORD *)v5 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v5 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    if ( a1 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 18544));
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6 + 18544, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v12 = *(_DWORD *)(v6 + 18568);
          if ( v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v9, (const EVENT_DESCRIPTOR *)"g", v10, v12);
        }
        ExAcquirePushLockSharedEx(v6 + 18544, 0LL);
      }
    }
    return 0LL;
  }
  else
  {
LABEL_25:
    v13 = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, v13, -1073741811LL);
    v14 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v14,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
