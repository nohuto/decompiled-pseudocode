/*
 * XREFs of NtDxgkVailPromoteCompositionSurface @ 0x1C0354840
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0003660 (DxgkGetSessionTokenManager.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001EF50 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002C1E0 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C004B314 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C005B9A0 (-Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0078444 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C02DF41C (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 */

__int64 __fastcall NtDxgkVailPromoteCompositionSurface(void *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // sf
  int v13; // ebx
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r8
  DxgkCompositionObject *v17; // r13
  struct _KPROCESS *v18; // r12
  DXGSESSIONMGR *v19; // rbx
  __int64 v20; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v23; // r9
  int v24; // eax
  unsigned __int8 v25; // r15
  struct IPairedSurfaceObject *v26; // r12
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // [rsp+50h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-C0h] BYREF
  int v33; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-B0h]
  char v35; // [rsp+70h] [rbp-A8h]
  struct IPairedSurfaceObject *v36; // [rsp+78h] [rbp-A0h] BYREF
  DxgkCompositionObject *v37; // [rsp+80h] [rbp-98h] BYREF
  void *v38; // [rsp+88h] [rbp-90h] BYREF
  _BYTE v39[16]; // [rsp+98h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-70h] BYREF
  char v41; // [rsp+D8h] [rbp-40h]

  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2215;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2215);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2215);
  v37 = 0LL;
  v38 = 0LL;
  if ( !a1 || !a2 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid parameters. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 )
    {
      LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_47:
      if ( v12 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v33);
    }
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  if ( !Current )
  {
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 )
    {
      v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_47;
    }
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v39, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
  v13 = (*((_DWORD *)Current + 106) >> 2) & 1;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v39);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v39);
  if ( *((_QWORD *)DXGGLOBAL_GetGlobal() + 124) && v13 )
  {
    v31 = 0LL;
    LODWORD(v14) = DxgkGetSessionTokenManager(&v31);
    v15 = v31;
    if ( (int)v14 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
      LODWORD(v14) = CompositionSurfaceObject::ResolveHandle(a1, 2u, v16, &v37);
      v17 = v37;
      if ( (int)v14 >= 0 )
      {
        v36 = 0LL;
        v18 = 0LL;
        Object = 0LL;
        v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v20);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v19, CurrentProcessSessionId);
        if ( SessionDataForSpecifiedSession )
        {
          LODWORD(v14) = DXGSESSIONDATA::ReferenceDwmProcess(
                           SessionDataForSpecifiedSession,
                           (struct _EPROCESS **)&Object);
          v18 = (struct _KPROCESS *)Object;
        }
        else
        {
          LODWORD(v14) = -1073741790;
          WdLogSingleEntry1(2LL, -1073741790LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Fail to reference Dwm process. Returning 0x%I64x",
            -1073741790LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v14 >= 0 )
        {
          v41 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v18);
          v24 = DxgkCreateRemoteCompositionSurfaceObjectForPairing(v17, &v36, &v38, v23);
          v14 = v24;
          if ( v24 >= 0 )
          {
            v25 = 0;
            v26 = v36;
            do
            {
              v27 = CompositionSurfaceObject::Pair(v17, v26);
              v14 = v27;
              if ( v27 == -1073740528 )
              {
                if ( v25 )
                {
                  LODWORD(v14) = -1073741823;
                  WdLogSingleEntry1(3LL, -1073741823LL);
                }
                else
                {
                  WdLogSingleEntry1(3LL, 1480LL);
                  if ( (int)CPushLock::AcquireLockExclusive((DxgkCompositionObject *)((char *)v17 + 48)) >= 0 )
                  {
                    CCompositionSurface::UnPair((DxgkCompositionObject *)((char *)v17 + 40));
                    CPushLock::ReleaseLock((DxgkCompositionObject *)((char *)v17 + 48));
                  }
                  v25 = 1;
                }
              }
              else if ( v27 < 0 )
              {
                WdLogSingleEntry2(2LL, v27, v25);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Fail on CompositionSurfaceObject::Pair. Returning 0x%I64x",
                  v14,
                  v25,
                  0LL,
                  0LL,
                  0LL);
                (*(void (__fastcall **)(struct IPairedSurfaceObject *))(*(_QWORD *)v26 + 16LL))(v26);
              }
            }
            while ( (_DWORD)v14 == -1073740528 );
            v36 = 0LL;
            v15 = v31;
            v18 = (struct _KPROCESS *)Object;
          }
          else
          {
            WdLogSingleEntry1(2LL, v24);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail on DxgkCreateRemoteCompositionSurfaceObjectForPairing. Returning 0x%I64x",
              v14,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( v41 )
          {
            KeUnstackDetachProcess(&ApcState);
            v41 = 0;
          }
        }
        if ( v18 )
        {
          ObfDereferenceObject(v18);
          Object = 0LL;
        }
        DxgkCompositionObject::Release(v17);
        v37 = 0LL;
      }
    }
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v31 = 0LL;
    }
  }
  else
  {
    LODWORD(v14) = -1073741790;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *a2 = v38;
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v33);
  return (unsigned int)v14;
}
