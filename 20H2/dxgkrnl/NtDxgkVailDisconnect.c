/*
 * XREFs of NtDxgkVailDisconnect @ 0x1C02B7900
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CFF0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A170 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003FEE8 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0047B64 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0284790 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02B3DFC (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B579C (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
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
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGPROCESS *v35; // r14
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  char v42; // al
  __int64 v43; // rax
  __int64 v44; // rdx
  PVOID Object; // [rsp+20h] [rbp-60h] BYREF
  char v46; // [rsp+28h] [rbp-58h]
  _BYTE v47[16]; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF
  char v49; // [rsp+70h] [rbp-10h]

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    if ( *((_QWORD *)Current + 60) )
    {
      v9 = DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47, v10);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v9 + 10);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGVAILOBJECT *)((char *)v9 + 40), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
      DXGVAILOBJECT::DisableVmBusChannel((struct _KTHREAD **)v9, v11);
      LODWORD(v13) = DXGVAILOBJECT::DestroyVmBusHostSubscribers(v9);
      if ( v46 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object, v12);
      DxgkCompositionObject::Release(v9);
    }
    else if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 104)
           && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      Object = 0LL;
      SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(v15, v14) + 102);
      if ( SessionDataForSpecifiedSession )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                           SessionDataForSpecifiedSession,
                                           CurrentProcessSessionId);
      }
      if ( SessionDataForSpecifiedSession )
      {
        v24 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
        v13 = v24;
        if ( v24 >= 0 )
        {
          v49 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
          v35 = DXGPROCESS::GetCurrent(v31, v30);
          if ( !*((_BYTE *)v35 + 488) )
          {
            v36 = WdLogNewEntry5_WdWarning(v33, v32, v34);
            LODWORD(v13) = -2147483611;
            *(_QWORD *)(v36 + 24) = -2147483611LL;
            WdLogEvent5_WdWarning(v36);
          }
          if ( (int)v13 >= 0 )
          {
            v37 = DXGSESSIONDATA::VailGuestDisconnect(SessionDataForSpecifiedSession);
            v13 = v37;
            if ( v37 >= 0 )
            {
              v42 = 0;
            }
            else
            {
              v41 = WdLogNewEntry5_WdWarning(v39, v38, v40);
              *(_QWORD *)(v41 + 24) = v13;
              WdLogEvent5_WdWarning(v41);
              v42 = 1;
            }
            *((_BYTE *)v35 + 488) = v42;
          }
          if ( v49 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          v27 = WdLogNewEntry5_WdError(v26, v25);
          *(_QWORD *)(v27 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v29, v28);
          *(_QWORD *)(v27 + 32) = v13;
          WdLogEvent5_WdError(v27);
        }
        if ( Object )
          ObfDereferenceObject(Object);
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v21 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v23, v22);
        *(_QWORD *)(v21 + 32) = -1073741790LL;
        WdLogEvent5_WdError(v21);
        LODWORD(v13) = -1073741790;
      }
    }
    else
    {
      LODWORD(v13) = -1073741790;
      v43 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v43 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v43);
    }
    KeLeaveCriticalRegion();
    if ( v47[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47, v44);
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
