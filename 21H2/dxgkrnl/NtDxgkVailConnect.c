/*
 * XREFs of NtDxgkVailConnect @ 0x1C0353FA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001EF50 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C004B314 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x1C005B888 (-EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0336D84 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C0350B5C (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C0350FD8 (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0351D08 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailConnect(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rbx
  __int64 v9; // rdi
  struct _EX_RUNDOWN_REF *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int VmBusHostSubscribers; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rbx
  unsigned int v20; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v22; // rbx
  int v23; // eax
  __int64 v24; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct DXGPROCESS *v32; // r15
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  char v42; // [rsp+60h] [rbp-31h]
  int v43; // [rsp+68h] [rbp-29h] BYREF
  __int64 v44; // [rsp+70h] [rbp-21h]
  char v45; // [rsp+78h] [rbp-19h]
  _BYTE v46[16]; // [rsp+80h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-1h] BYREF
  char v48; // [rsp+C0h] [rbp+2Fh]

  v43 = -1;
  v44 = 0LL;
  v3 = 1;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2216;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2216);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2216);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    LODWORD(v9) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_43;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v46, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v46);
  if ( !*((_QWORD *)Current + 74) )
  {
    if ( (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_QWORD *)DXGGLOBAL_GetGlobal() + 124) )
      {
        Object = 0LL;
        v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
        if ( v19
          && (v20 = PsGetCurrentProcessSessionId(v18),
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v19, v20),
              (v22 = SessionDataForSpecifiedSession) != 0LL) )
        {
          v23 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
          v9 = v23;
          if ( v23 >= 0 )
          {
            v48 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
            v32 = DXGPROCESS::GetCurrent(v29, v28, v30, v31);
            if ( *((_BYTE *)v32 + 600) )
            {
              WdLogSingleEntry1(3LL, -1073740528LL);
              LODWORD(v9) = -1073740528;
            }
            else
            {
              v33 = DXGSESSIONDATA::VailGuestConnect(v22);
              LODWORD(v9) = v33;
              if ( v33 < 0 )
              {
                WdLogSingleEntry1(3LL, v33);
                v3 = 0;
              }
              *((_BYTE *)v32 + 600) = v3;
            }
            if ( v48 )
              KeUnstackDetachProcess(&ApcState);
          }
          else
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v24);
            WdLogSingleEntry2(2LL, CurrentProcessSessionId, v9);
            v27 = PsGetCurrentProcessSessionId(v26);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
              v27,
              v9,
              0LL,
              0LL,
              0LL);
          }
          if ( Object )
            ObfDereferenceObject(Object);
        }
        else
        {
          v34 = PsGetCurrentProcessSessionId(v18);
          LODWORD(v9) = -1073741790;
          WdLogSingleEntry2(2LL, v34, -1073741790LL);
          v36 = PsGetCurrentProcessSessionId(v35);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v36,
            -1073741790LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        LODWORD(v9) = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16) + 24) = -1071775727LL;
      }
    }
    else
    {
      LODWORD(v9) = -1073741790;
      Global = DXGGLOBAL_GetGlobal();
      WdLogSingleEntry4(
        3LL,
        -1073741790LL,
        *((_QWORD *)Current + 74) != 0LL,
        (*((_DWORD *)Current + 106) >> 2) & 1LL,
        *((_QWORD *)Global + 124));
    }
    goto LABEL_40;
  }
  v10 = (struct _EX_RUNDOWN_REF *)DXGPROCESS::ReferenceVailObject((struct _KTHREAD **)Current);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v46);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGFASTMUTEX *const)&v10[5], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
  if ( v10[14].Count )
  {
    VmBusHostSubscribers = DXGVAILOBJECT::CreateVmBusHostSubscribers((DXGVAILOBJECT *)v10);
    LODWORD(v9) = VmBusHostSubscribers;
    if ( VmBusHostSubscribers == -1073740528 )
    {
      v14 = -1073740528LL;
    }
    else
    {
      if ( VmBusHostSubscribers >= 0 )
      {
        v15 = DXGVAILOBJECT::EnableVmBusChannel((struct _KTHREAD **)v10);
        LODWORD(v9) = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(3LL, v15);
          DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v10);
        }
        goto LABEL_17;
      }
      v14 = VmBusHostSubscribers;
    }
    WdLogSingleEntry1(3LL, v14);
  }
  else
  {
    LODWORD(v9) = -1071775727;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = -1071775727LL;
  }
LABEL_17:
  if ( v42 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
  if ( (int)v9 >= 0 )
    ExReInitializeRundownProtection(v10 + 11);
  DxgkCompositionObject::Release((DxgkCompositionObject *)v10);
LABEL_40:
  if ( v46[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v46);
  KeLeaveCriticalRegion();
LABEL_43:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 )
  {
    LOBYTE(v38) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v43);
  }
  return (unsigned int)v9;
}
