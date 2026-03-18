/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01862D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0021A48 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0049C98 (-GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0183ED4 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C01A4390 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01A5328 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C01DA754 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01DB11C (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  unsigned int v4; // edi
  DXGSESSIONMGR *v5; // rbp
  unsigned int v6; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  ADAPTER_RENDER *v8; // rbp
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  int v12; // ebp
  struct DXGPROCESS *v13; // rcx
  unsigned int v14; // eax
  struct DXGPROCESS *v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r15
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  int v21; // eax
  struct DXGPROCESS *v23; // rax
  struct DXGPROCESS *v24; // r8
  struct DXGADAPTER *v25; // rdx
  __int64 v26; // rcx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v28; // eax
  _DWORD v29[2]; // [rsp+50h] [rbp-48h] BYREF
  int *v30; // [rsp+58h] [rbp-40h]
  int v31; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v32; // [rsp+B0h] [rbp+18h] BYREF

  v4 = 0;
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v5
    || (v6 = PsGetCurrentProcessSessionId(),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, v6)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v28 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v28,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 136, 0LL);
  if ( *((_DWORD *)this + 50) != 1 || *((_BYTE *)this + 2705) || (*((_DWORD *)this + 666) & 4) != 0 )
    goto LABEL_9;
  v8 = (ADAPTER_RENDER *)*((_QWORD *)this + 350);
  if ( v8 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( ADAPTER_RENDER::IsProcessGpuAccessBlocked(v8, Current) )
    {
      v24 = DXGPROCESS::GetCurrent();
      v25 = this;
      v26 = 4LL;
      goto LABEL_34;
    }
  }
  v10 = a2[3];
  if ( (v10 & 1) == 0 && (*((_DWORD *)this + 666) & 8) != 0 )
    goto LABEL_9;
  v12 = 2;
  if ( (v10 & 2) == 0 && !*((_QWORD *)this + 350) )
    goto LABEL_9;
  v13 = (struct DXGPROCESS *)*((unsigned int *)a2 + 1);
  v14 = *((_DWORD *)a2 + 2) + 1;
  *((_DWORD *)a2 + 2) = v14;
  if ( *(_DWORD *)a2 >= (unsigned int)v13 )
  {
    if ( !a2[2] )
      goto LABEL_9;
    v24 = v13;
    v25 = (struct DXGADAPTER *)v14;
    v26 = 3LL;
LABEL_34:
    WdLogSingleEntry2(v26, v25, v24);
LABEL_9:
    LODWORD(v11) = 0;
    goto LABEL_10;
  }
  v32 = 0;
  v15 = DXGPROCESS::GetCurrent();
  v16 = DXGADAPTER::CreateHandle(this, v15, &v32);
  v11 = v16;
  if ( v16 >= 0 )
  {
    v17 = *(unsigned int *)a2;
    v18 = a2[2];
    v19 = 5 * v17;
    *(_DWORD *)a2 = v17 + 1;
    *(_DWORD *)(v18 + 4 * v19) = v32;
    *(_QWORD *)(v18 + 4 * v19 + 4) = *(_QWORD *)((char *)this + 404);
    *(_DWORD *)(v18 + 4 * v19 + 16) = 0;
    if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
    {
      SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                                 SessionDataForSpecifiedSession,
                                 (const struct _LUID *)((char *)this + 404));
      if ( SessionAdapterFromLuid )
        v21 = *((_DWORD *)SessionAdapterFromLuid + 27);
      else
        v21 = 0;
      *(_DWORD *)(v18 + 4 * v19 + 12) = v21;
      if ( v21 && (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() && DXGADAPTER::IsFullWDDMAdapter(this) )
      {
        WdLogSingleEntry1(1LL, 901LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pAdapterInfo->NumOfSources == 0) || !DxgIsRemoteSessionUsingWddmMonitors() || !pAdapter->IsFullWDDMAdapter()",
          901LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !*((_QWORD *)this + 350) )
        *(_DWORD *)(v18 + 4 * v19 + 16) = ADAPTER_DISPLAY::GetDisplayOnlyDriverPrecisePresentRegionPreference(*((ADAPTER_DISPLAY **)this + 349));
    }
    else
    {
      v31 = 0;
      v30 = &v31;
      v29[0] = 2;
      v29[1] = 4;
      v23 = DXGPROCESS::GetCurrent();
      if ( (*(int (__fastcall **)(_DWORD *))(*((_QWORD *)v23 + 11) + 352LL))(v29) < 0 )
      {
        WdLogSingleEntry1(3LL, 929LL);
        v31 = 2;
      }
      else
      {
        v12 = v31;
      }
      if ( v12 != 0xFFFF
        && *((_DWORD *)SessionDataForSpecifiedSession + 4627) == *((_DWORD *)this + 101)
        && *((_DWORD *)SessionDataForSpecifiedSession + 4628) == *((_DWORD *)this + 102) )
      {
        *(_DWORD *)(v18 + 4 * v19 + 12) = *((_DWORD *)SessionDataForSpecifiedSession + 4629);
      }
      else
      {
        *(_DWORD *)(v18 + 4 * v19 + 12) = 0;
      }
    }
    goto LABEL_20;
  }
  WdLogSingleEntry2(2LL, this, v16);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to open a handle on adapter 0x%I64x (ntStatus = 0x%I64x).",
    (__int64)this,
    v11,
    0LL,
    0LL,
    0LL);
LABEL_10:
  v4 = v11;
LABEL_20:
  ExReleasePushLockSharedEx((char *)this + 136, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  return v4;
}
