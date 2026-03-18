/*
 * XREFs of ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C028C4B0
 * Callers:
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B5910 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C02B8C00 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C028C924 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C028DAD4 (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C02B7264 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkCreateRemoteCompositionSurfaceObjectForPairing(struct IPairedSurfaceObject **a1, void **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGSESSIONMGR *v22; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  void *v34; // rax
  _BYTE v35[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v36; // [rsp+70h] [rbp+18h] BYREF
  void *v37; // [rsp+78h] [rbp+20h] BYREF

  v36 = 0;
  v37 = 0LL;
  v6 = operator new(0x30uLL, 0x4B677844u, 1, PagedPool);
  if ( v6 )
  {
    v6[2] = 1;
    *(_QWORD *)v6 = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
    *((_WORD *)v6 + 6) = 0;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_WORD *)v6 + 12) = 0;
    *((_QWORD *)v6 + 4) = 0LL;
    v6[10] = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v8 = -1073741801LL;
LABEL_7:
    v10 = WdLogNewEntry5_WdWarning(v5, v4, v7);
    *(_QWORD *)(v10 + 24) = v8;
    WdLogEvent5_WdWarning(v10);
    goto LABEL_8;
  }
  v9 = DXGCOMPOSITIONSURFACEPROXY::Initialize((DXGCOMPOSITIONSURFACEPROXY *)v6);
  v8 = v9;
  if ( v9 < 0 )
    goto LABEL_7;
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
    if ( *((_DWORD *)Current + 106) && (*((_BYTE *)Current + 346) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      if ( !*((_BYTE *)Current + 488) )
      {
        LODWORD(v8) = -2147483611;
        v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v19 + 24) = -2147483611LL;
        WdLogEvent5_WdWarning(v19);
      }
      if ( (int)v8 >= 0 )
      {
        v22 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 102);
        if ( v22 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21, v20);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v22,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( !SessionDataForSpecifiedSession )
        {
          LODWORD(v8) = -1073741811;
          v25 = WdLogNewEntry5_WdError(v21, v20);
          *(_QWORD *)(v25 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v27, v26);
          *(_QWORD *)(v25 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v25);
        }
        if ( (int)v8 >= 0 )
        {
          v28 = DXGSESSIONDATA::VailSendCreateCompositionSurface(SessionDataForSpecifiedSession, &v36, &v37);
          v8 = v28;
          if ( v28 < 0 )
          {
            v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
            *(_QWORD *)(v32 + 24) = v8;
            WdLogEvent5_WdWarning(v32);
          }
        }
      }
    }
    KeLeaveCriticalRegion();
    if ( v35[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35, v33);
    if ( (int)v8 >= 0 )
    {
      v6[5] = v36;
      v34 = v37;
      *a1 = (struct IPairedSurfaceObject *)v6;
      *a2 = v34;
      return (unsigned int)v8;
    }
LABEL_8:
    *a2 = 0LL;
    if ( v6 )
      DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)v6);
    return (unsigned int)v8;
  }
  v15 = WdLogNewEntry5_WdError(v13, v12);
  *(_QWORD *)(v15 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v15);
  return 3221225485LL;
}
