/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C011F800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0007C88 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B71C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C01141D0 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C011FA24 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C011FCB8 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01216D0 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01340B4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
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
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rax
  _DWORD v48[2]; // [rsp+20h] [rbp-30h] BYREF
  int *v49; // [rsp+28h] [rbp-28h]
  _BYTE v50[8]; // [rsp+30h] [rbp-20h] BYREF
  struct DXGADAPTER *v51; // [rsp+38h] [rbp-18h]
  char v52; // [rsp+40h] [rbp-10h]
  unsigned int v53; // [rsp+88h] [rbp+38h] BYREF
  int v54; // [rsp+90h] [rbp+40h] BYREF

  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
  if ( v6 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v36 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v36 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v38, v37);
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    return 3221225485LL;
  }
  v51 = this;
  v52 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
  if ( *((_DWORD *)this + 50) == 1 && !*((_BYTE *)this + 2609) && (*((_DWORD *)this + 642) & 4) == 0 )
  {
    v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 338);
    if ( v12 && (v13 = DXGPROCESS::GetCurrent(v10, v9), ADAPTER_RENDER::IsProcessGpuAccessBlocked(v12, v13)) )
    {
      v39 = WdLogNewEntry5_WdEvent(v10, v14);
      *(_QWORD *)(v39 + 24) = this;
      *(_QWORD *)(v39 + 32) = DXGPROCESS::GetCurrent(v41, v40);
      WdLogEvent5_WdEvent(v39);
    }
    else
    {
      v15 = a2[3];
      if ( (v15 & 1) != 0 || !DXGADAPTER::IsComputeOnlyAdapter(this) )
      {
        v16 = 2;
        if ( (v15 & 2) != 0 || *((_QWORD *)this + 338) )
        {
          ++*((_DWORD *)a2 + 2);
          if ( *(_DWORD *)a2 >= *((_DWORD *)a2 + 1) )
          {
            if ( a2[2] )
            {
              v42 = WdLogNewEntry5_WdWarning(v10, v15, v11);
              *(_QWORD *)(v42 + 24) = *((unsigned int *)a2 + 2);
              *(_QWORD *)(v42 + 32) = *((unsigned int *)a2 + 1);
              WdLogEvent5_WdWarning(v42);
            }
          }
          else
          {
            v53 = 0;
            Current = DXGPROCESS::GetCurrent(v10, v15);
            v18 = DXGADAPTER::CreateHandle(this, Current, &v53);
            v21 = v18;
            if ( v18 < 0 )
            {
              v43 = WdLogNewEntry5_WdError(v20, v19);
              *(_QWORD *)(v43 + 24) = this;
              *(_QWORD *)(v43 + 32) = v21;
              WdLogEvent5_WdError(v43);
              goto LABEL_21;
            }
            v22 = *(unsigned int *)a2;
            v23 = a2[2];
            v24 = 5 * v22;
            *(_DWORD *)a2 = v22 + 1;
            *(_DWORD *)(v23 + 4 * v24) = v53;
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
                v44 = WdLogNewEntry5_WdAssertion(v30, v29);
                *(_QWORD *)(v44 + 24) = 901LL;
                WdLogEvent5_WdAssertion(v44);
              }
              if ( !*((_QWORD *)this + 338) )
              {
                v45 = *((_QWORD *)this + 337);
                if ( *(_QWORD *)(*(_QWORD *)(v45 + 16) + 2704LL) )
                {
                  v46 = WdLogNewEntry5_WdAssertion(v30, v29);
                  *(_QWORD *)(v46 + 24) = 6634LL;
                  WdLogEvent5_WdAssertion(v46);
                }
                *(_DWORD *)(v23 + 4 * v24 + 16) = *(_DWORD *)(v45 + 372);
              }
            }
            else
            {
              v54 = 0;
              v49 = &v54;
              v48[0] = 2;
              v48[1] = 4;
              v32 = DXGPROCESS::GetCurrent(v27, v26);
              if ( (*(int (__fastcall **)(_DWORD *))(*((_QWORD *)v32 + 11) + 352LL))(v48) < 0 )
              {
                v47 = WdLogNewEntry5_WdWarning(v34, v33, v35);
                *(_QWORD *)(v47 + 24) = 929LL;
                WdLogEvent5_WdWarning(v47);
              }
              else
              {
                v16 = v54;
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
  if ( v52 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
  return (unsigned int)v21;
}
