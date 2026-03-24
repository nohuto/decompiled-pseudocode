/*
 * XREFs of NtDxgkVailPromoteCompositionSurface @ 0x1C02B9070
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000D12C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010CC4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00168A4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001AAD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00266E4 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0040E48 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C004D8D0 (-Pair@CompositionSurfaceObject@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 *     ?UnPair@CCompositionSurface@@QEAAJ_N@Z @ 0x1C00665D4 (-UnPair@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C028CA10 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 */

__int64 __fastcall NtDxgkVailPromoteCompositionSurface(void *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  struct DXGPROCESS *Current; // rbx
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct _KPROCESS *v13; // rdi
  DXGSESSIONMGR *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int8 v26; // r14
  struct IPairedSurfaceObject *v27; // r12
  DxgkCompositionObject *v28; // r15
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  DxgkCompositionObject *v38; // [rsp+20h] [rbp-88h] BYREF
  struct IPairedSurfaceObject *v39; // [rsp+28h] [rbp-80h] BYREF
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  void *v41; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v42[16]; // [rsp+40h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF
  char v44; // [rsp+80h] [rbp-28h]

  v2 = (_QWORD *)a2;
  v38 = 0LL;
  v41 = 0LL;
  if ( a1 && a2 && (Current = DXGPROCESS::GetCurrent((__int64)a1, a2)) != 0LL )
  {
    KeEnterCriticalRegion();
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v42, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
    v5 = *((_BYTE *)Current + 346);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v42, v6);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 104) && (v5 || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      LODWORD(v12) = CompositionSurfaceObject::ResolveHandle(a1, 2u, v9, &v38);
      if ( (int)v12 >= 0 )
      {
        v39 = 0LL;
        v13 = 0LL;
        Object = 0LL;
        v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v11, v10) + 102);
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
        if ( SessionDataForSpecifiedSession )
        {
          LODWORD(v12) = DXGSESSIONDATA::ReferenceDwmProcess(
                           SessionDataForSpecifiedSession,
                           (struct _EPROCESS **)&Object);
          v13 = (struct _KPROCESS *)Object;
        }
        else
        {
          LODWORD(v12) = -1073741790;
          v21 = WdLogNewEntry5_WdError(v20, v19);
          *(_QWORD *)(v21 + 24) = -1073741790LL;
          WdLogEvent5_WdError(v21);
        }
        if ( (int)v12 >= 0 )
        {
          v44 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v13);
          v22 = DxgkCreateRemoteCompositionSurfaceObjectForPairing(&v39, &v41);
          v12 = v22;
          if ( v22 >= 0 )
          {
            v26 = 0;
            v27 = v39;
            do
            {
              v28 = v38;
              v29 = CompositionSurfaceObject::Pair(v38, v27);
              v12 = v29;
              if ( v29 == -1073740528 )
              {
                if ( v26 )
                {
                  LODWORD(v12) = -1073741823;
                  v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
                  *(_QWORD *)(v34 + 24) = -1073741823LL;
                  WdLogEvent5_WdWarning(v34);
                }
                else
                {
                  v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
                  *(_QWORD *)(v33 + 24) = 1467LL;
                  WdLogEvent5_WdWarning(v33);
                  if ( (int)CPushLock::AcquireLockExclusive((DxgkCompositionObject *)((char *)v28 + 48)) >= 0 )
                  {
                    CCompositionSurface::UnPair((DxgkCompositionObject *)((char *)v28 + 40));
                    CPushLock::ReleaseLock((DxgkCompositionObject *)((char *)v28 + 48));
                  }
                  v26 = 1;
                }
              }
              else if ( v29 < 0 )
              {
                v35 = WdLogNewEntry5_WdError(v31, v30);
                *(_QWORD *)(v35 + 24) = v12;
                *(_QWORD *)(v35 + 32) = v26;
                WdLogEvent5_WdError(v35);
                (*(void (__fastcall **)(struct IPairedSurfaceObject *))(*(_QWORD *)v27 + 16LL))(v27);
              }
            }
            while ( (_DWORD)v12 == -1073740528 );
            v39 = 0LL;
          }
          else
          {
            v25 = WdLogNewEntry5_WdError(v24, v23);
            *(_QWORD *)(v25 + 24) = v12;
            WdLogEvent5_WdError(v25);
          }
          if ( v44 )
          {
            KeUnstackDetachProcess(&ApcState);
            v44 = 0;
          }
        }
        if ( v13 )
        {
          ObfDereferenceObject(v13);
          Object = 0LL;
        }
        DxgkCompositionObject::Release(v38);
        v38 = 0LL;
      }
    }
    else
    {
      LODWORD(v12) = -1073741790;
    }
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (_QWORD *)MmUserProbeAddress;
    *v2 = v41;
    KeLeaveCriticalRegion();
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(a1, a2);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
  }
  return (unsigned int)v12;
}
