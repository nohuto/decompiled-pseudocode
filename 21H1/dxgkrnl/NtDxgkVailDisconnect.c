/*
 * XREFs of NtDxgkVailDisconnect @ 0x1C02B43A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011C24 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A1C0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003F07C (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0046C54 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C02812CC (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02B089C (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B223C (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailDisconnect(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGVAILOBJECT *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGPROCESS *v33; // r14
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // rdx
  PVOID Object; // [rsp+20h] [rbp-60h] BYREF
  char v44; // [rsp+28h] [rbp-58h]
  _BYTE v45[16]; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF
  char v47; // [rsp+70h] [rbp-10h]

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v45, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
    if ( *((_QWORD *)Current + 60) )
    {
      v9 = DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45, v10);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v9 + 10);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGVAILOBJECT *)((char *)v9 + 40), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
      DXGVAILOBJECT::DisableVmBusChannel((struct _KTHREAD **)v9, v11);
      LODWORD(v13) = DXGVAILOBJECT::DestroyVmBusHostSubscribers(v9);
      if ( v44 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object, v12);
      DxgkCompositionObject::Release(v9);
    }
    else if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 90)
           && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      Object = 0LL;
      SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(v15, v14) + 88);
      if ( SessionDataForSpecifiedSession )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                           SessionDataForSpecifiedSession,
                                           CurrentProcessSessionId);
      }
      if ( SessionDataForSpecifiedSession )
      {
        v23 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
        v13 = v23;
        if ( v23 >= 0 )
        {
          v47 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
          v33 = DXGPROCESS::GetCurrent(v29, v28);
          if ( !*((_BYTE *)v33 + 488) )
          {
            v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
            LODWORD(v13) = -2147483611;
            *(_QWORD *)(v34 + 24) = -2147483611LL;
            WdLogEvent5_WdWarning(v34);
          }
          if ( (int)v13 >= 0 )
          {
            v35 = DXGSESSIONDATA::VailGuestDisconnect(SessionDataForSpecifiedSession);
            v13 = v35;
            if ( v35 >= 0 )
            {
              v40 = 0;
            }
            else
            {
              v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
              *(_QWORD *)(v39 + 24) = v13;
              WdLogEvent5_WdWarning(v39);
              v40 = 1;
            }
            *((_BYTE *)v33 + 488) = v40;
          }
          if ( v47 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          v26 = WdLogNewEntry5_WdError(v25, v24);
          *(_QWORD *)(v26 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v27);
          *(_QWORD *)(v26 + 32) = v13;
          WdLogEvent5_WdError(v26);
        }
        if ( Object )
          ObfDereferenceObject(Object);
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v21 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v22);
        *(_QWORD *)(v21 + 32) = -1073741790LL;
        WdLogEvent5_WdError(v21);
        LODWORD(v13) = -1073741790;
      }
    }
    else
    {
      LODWORD(v13) = -1073741790;
      v41 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v41 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v41);
    }
    KeLeaveCriticalRegion();
    if ( v45[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45, v42);
    return (unsigned int)v13;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
