/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0124FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000F1E8 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00112D4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C0118F70 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0125214 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C01254A8 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C0126EC0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C0127FA4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  ADAPTER_RENDER *v12; // rsi
  struct DXGPROCESS *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // r12d
  struct DXGPROCESS *Current; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DXGPROCESS *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  _DWORD v47[2]; // [rsp+20h] [rbp-30h] BYREF
  int *v48; // [rsp+28h] [rbp-28h]
  _BYTE v49[8]; // [rsp+30h] [rbp-20h] BYREF
  struct DXGADAPTER *v50; // [rsp+38h] [rbp-18h]
  char v51; // [rsp+40h] [rbp-10h]
  unsigned int v52; // [rsp+88h] [rbp+38h] BYREF
  int v53; // [rsp+90h] [rbp+40h] BYREF

  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 88);
  if ( v6 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v36 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v36 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v37);
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    return 3221225485LL;
  }
  v50 = this;
  v51 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  if ( *((_DWORD *)this + 50) == 1 && !*((_BYTE *)this + 2585) && (*((_DWORD *)this + 636) & 4) == 0 )
  {
    v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 335);
    if ( v12 && (v13 = DXGPROCESS::GetCurrent(v10, v9), ADAPTER_RENDER::IsProcessGpuAccessBlocked(v12, v13)) )
    {
      v38 = WdLogNewEntry5_WdEvent(v10, v14);
      *(_QWORD *)(v38 + 24) = this;
      *(_QWORD *)(v38 + 32) = DXGPROCESS::GetCurrent(v40, v39);
      WdLogEvent5_WdEvent(v38);
    }
    else
    {
      v15 = a2[3];
      if ( (v15 & 1) != 0 || !DXGADAPTER::IsComputeOnlyAdapter(this) )
      {
        v16 = 2;
        if ( (v15 & 2) != 0 || *((_QWORD *)this + 335) )
        {
          ++*((_DWORD *)a2 + 2);
          if ( *(_DWORD *)a2 >= *((_DWORD *)a2 + 1) )
          {
            if ( a2[2] )
            {
              v41 = WdLogNewEntry5_WdWarning(v10, v15, v11);
              *(_QWORD *)(v41 + 24) = *((unsigned int *)a2 + 2);
              *(_QWORD *)(v41 + 32) = *((unsigned int *)a2 + 1);
              WdLogEvent5_WdWarning(v41);
            }
          }
          else
          {
            v52 = 0;
            Current = DXGPROCESS::GetCurrent(v10, v15);
            v18 = DXGADAPTER::CreateHandle(this, Current, &v52);
            v21 = v18;
            if ( v18 < 0 )
            {
              v42 = WdLogNewEntry5_WdError(v20, v19);
              *(_QWORD *)(v42 + 24) = this;
              *(_QWORD *)(v42 + 32) = v21;
              WdLogEvent5_WdError(v42);
              goto LABEL_21;
            }
            v22 = *(unsigned int *)a2;
            v23 = a2[2];
            v24 = 5 * v22;
            *(_DWORD *)a2 = v22 + 1;
            *(_DWORD *)(v23 + 4 * v24) = v52;
            v25 = *(_QWORD *)((char *)this + 316);
            *(_DWORD *)(v23 + 4 * v24 + 16) = 0;
            *(_QWORD *)(v23 + 4 * v24 + 4) = v25;
            if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
            {
              SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                                         SessionDataForSpecifiedSession,
                                         (const struct _LUID *)((char *)this + 316));
              if ( SessionAdapterFromLuid )
                LODWORD(SessionAdapterFromLuid) = *((_DWORD *)SessionAdapterFromLuid + 27);
              *(_DWORD *)(v23 + 4 * v24 + 12) = (_DWORD)SessionAdapterFromLuid;
              if ( (_DWORD)SessionAdapterFromLuid
                && (unsigned int)DxgIsRemoteSessionUsingWddmMonitors()
                && DXGADAPTER::IsFullWDDMAdapter(this) )
              {
                v43 = WdLogNewEntry5_WdAssertion(v30, v29);
                *(_QWORD *)(v43 + 24) = 901LL;
                WdLogEvent5_WdAssertion(v43);
              }
              if ( !*((_QWORD *)this + 335) )
              {
                v44 = *((_QWORD *)this + 334);
                if ( *(_QWORD *)(*(_QWORD *)(v44 + 16) + 2680LL) )
                {
                  v45 = WdLogNewEntry5_WdAssertion(v30, v29);
                  *(_QWORD *)(v45 + 24) = 6606LL;
                  WdLogEvent5_WdAssertion(v45);
                }
                *(_DWORD *)(v23 + 4 * v24 + 16) = *(_DWORD *)(v44 + 364);
              }
            }
            else
            {
              v53 = 0;
              v48 = &v53;
              v47[0] = 2;
              v47[1] = 4;
              v32 = DXGPROCESS::GetCurrent(v27, v26);
              if ( (*(int (__fastcall **)(_DWORD *))(*((_QWORD *)v32 + 11) + 352LL))(v47) < 0 )
              {
                v46 = WdLogNewEntry5_WdWarning(v34, v33, v35);
                *(_QWORD *)(v46 + 24) = 929LL;
                WdLogEvent5_WdWarning(v46);
              }
              else
              {
                v16 = v53;
              }
              if ( v16 != 0xFFFF
                && *((_DWORD *)SessionDataForSpecifiedSession + 4625) == *((_DWORD *)this + 79)
                && *((_DWORD *)SessionDataForSpecifiedSession + 4626) == *((_DWORD *)this + 80) )
              {
                *(_DWORD *)(v23 + 4 * v24 + 12) = *((_DWORD *)SessionDataForSpecifiedSession + 4627);
              }
              else
              {
                *(_DWORD *)(v23 + 4 * v24 + 12) = 0;
              }
            }
          }
        }
      }
    }
  }
  LODWORD(v21) = 0;
LABEL_21:
  if ( v51 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  return (unsigned int)v21;
}
