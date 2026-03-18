/*
 * XREFs of NtDxgkVailConnect @ 0x1C02B84D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A110 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003FFEC (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x1C004C970 (-EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0285770 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02B4940 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02B4DDC (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B6628 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailConnect(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _EX_RUNDOWN_REF *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int VmBusHostSubscribers; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  DXGSESSIONMGR *v37; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  struct DXGPROCESS *v53; // r15
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  char v59; // al
  PVOID Object; // [rsp+20h] [rbp-60h] BYREF
  char v61; // [rsp+28h] [rbp-58h]
  _BYTE v62[16]; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF
  char v64; // [rsp+70h] [rbp-10h]

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v62, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v62);
  if ( !*((_QWORD *)Current + 60) )
  {
    if ( *((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled )
    {
      if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 104) )
      {
        Object = 0LL;
        v37 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v32, v31) + 102);
        if ( v37 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v36, v35);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v37,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
        {
          v43 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
          v20 = v43;
          if ( v43 >= 0 )
          {
            v64 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
            v53 = DXGPROCESS::GetCurrent(v50, v49);
            if ( *((_BYTE *)v53 + 488) )
            {
              v54 = WdLogNewEntry5_WdWarning(v51, v27, v52);
              *(_QWORD *)(v54 + 24) = -1073740528LL;
              WdLogEvent5_WdWarning(v54);
              LODWORD(v20) = -1073740528;
            }
            if ( (int)v20 >= 0 )
            {
              v55 = DXGSESSIONDATA::VailGuestConnect(SessionDataForSpecifiedSession);
              v20 = v55;
              if ( v55 >= 0 )
              {
                v59 = 1;
              }
              else
              {
                v58 = WdLogNewEntry5_WdWarning(v56, v27, v57);
                *(_QWORD *)(v58 + 24) = v20;
                WdLogEvent5_WdWarning(v58);
                v59 = 0;
              }
              *((_BYTE *)v53 + 488) = v59;
            }
            if ( v64 )
              KeUnstackDetachProcess(&ApcState);
          }
          else
          {
            v46 = WdLogNewEntry5_WdError(v45, v44);
            *(_QWORD *)(v46 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v48, v47);
            *(_QWORD *)(v46 + 32) = v20;
            WdLogEvent5_WdError(v46);
          }
          if ( Object )
            ObfDereferenceObject(Object);
        }
        else
        {
          v40 = WdLogNewEntry5_WdError(v36, v35);
          LODWORD(v20) = -1073741790;
          *(_QWORD *)(v40 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v42, v41);
          *(_QWORD *)(v40 + 32) = -1073741790LL;
          WdLogEvent5_WdError(v40);
        }
      }
      else
      {
        LODWORD(v20) = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v32, v31, v33, v34) + 24) = -1071775727LL;
      }
    }
    else
    {
      LODWORD(v20) = -1073741790;
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
      v28[3] = -1073741790LL;
      v28[4] = *((_QWORD *)Current + 60) != 0LL;
      v29 = *((unsigned __int8 *)Current + 346);
      v28[5] = v29;
      v28[6] = *((_QWORD *)DXGGLOBAL::GetGlobal(v29, v30) + 104);
      WdLogEvent5_WdWarning(v28);
    }
    goto LABEL_42;
  }
  v10 = (struct _EX_RUNDOWN_REF *)DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v62, v11);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGFASTMUTEX *const)&v10[5], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
  if ( v10[13].Count )
  {
    VmBusHostSubscribers = DXGVAILOBJECT::CreateVmBusHostSubscribers((DXGVAILOBJECT *)v10);
    v20 = VmBusHostSubscribers;
    if ( VmBusHostSubscribers == -1073740528 )
    {
      v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v21 + 24) = -1073740528LL;
    }
    else
    {
      if ( VmBusHostSubscribers >= 0 )
      {
        v23 = DXGVAILOBJECT::EnableVmBusChannel((struct _KTHREAD **)v10, v17);
        v20 = v23;
        if ( v23 < 0 )
        {
          v26 = WdLogNewEntry5_WdWarning(v24, v22, v25);
          *(_QWORD *)(v26 + 24) = v20;
          WdLogEvent5_WdWarning(v26);
          DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v10);
        }
        goto LABEL_13;
      }
      v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v21 + 24) = v20;
    }
    WdLogEvent5_WdWarning(v21);
  }
  else
  {
    LODWORD(v20) = -1071775727;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = -1071775727LL;
  }
LABEL_13:
  if ( v61 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object, v22);
  if ( (int)v20 >= 0 )
    ExReInitializeRundownProtection(v10 + 10);
  DxgkCompositionObject::Release((DxgkCompositionObject *)v10);
LABEL_42:
  if ( v62[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v62, v27);
  KeLeaveCriticalRegion();
  return (unsigned int)v20;
}
