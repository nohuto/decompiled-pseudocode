/*
 * XREFs of ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003D7DC
 * Callers:
 *     ?s_TokenThreadMain@CGlobalSurfaceManager@@CAKPEAX@Z @ 0x1800F8EC0 (-s_TokenThreadMain@CGlobalSurfaceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18002BB04 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18003D624 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x18003D934 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003D964 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x18003DDB4 (-clear@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSurfaceMana.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800F4DA0 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessKernelTokens(CGlobalSurfaceManager *this)
{
  int v1; // ebx
  const struct DWM_MMTASK **v3; // rsi
  char v4; // al
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  CMmcssTask *v12; // rcx
  signed int LastError; // eax
  unsigned int v14; // ecx
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  __int128 v17; // [rsp+38h] [rbp-20h]
  char *v18; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v16 = *((_QWORD *)this + 56);
  v17 = 0LL;
  if ( !*((_BYTE *)this + 496) )
  {
    while ( 1 )
    {
      SetLastError(0);
      if ( !ResetEvent(*((HANDLE *)this + 56)) )
        break;
      if ( !*((_BYTE *)this + 496) )
      {
        v3 = (const struct DWM_MMTASK **)((char *)g_pComposition + 336);
        v18 = (char *)g_pComposition + 336;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_pComposition + 336));
        if ( CMmcssTask::AreEqualMmTask((LPCWCH)v3[5], *((LPCWCH *)this + 49)) )
        {
          v4 = *((_BYTE *)v3 + 80);
          if ( *((_BYTE *)this + 432) != v4 )
          {
            v12 = (CGlobalSurfaceManager *)((char *)this + 352);
            if ( v4 )
              CMmcssTask::Apply(v12, 0);
            else
              CMmcssTask::Revert((struct _RTL_CRITICAL_SECTION *)v12);
          }
        }
        else
        {
          v10 = CMmcssTask::Set((struct _RTL_CRITICAL_SECTION *)((char *)this + 352), v3[5], *((_BYTE *)v3 + 80));
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x77u, 0LL);
        }
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
        v5 = CGlobalSurfaceManager::EnsureAdapterInfo(this);
        v1 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1C7u, 0LL);
          WaitForSingleObject(*((HANDLE *)this + 56), 0xFFFFFFFF);
        }
        else
        {
          v7 = *((_QWORD *)this + 60) - *((_QWORD *)this + 59);
          *(_QWORD *)&v17 = *((_QWORD *)this + 59);
          DWORD2(v17) = -1431655765 * (v7 >> 3);
          v8 = NtTokenManagerThread(&v16);
          if ( v8 < 0 )
          {
            v1 = v8 | 0x10000000;
            MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8 | 0x10000000, 0x1D6u, 0LL);
          }
          std::vector<CGlobalSurfaceManager::AdapterInfo>::clear((char *)this + 472);
        }
        if ( !*((_BYTE *)this + 496) )
          continue;
      }
      return (unsigned int)v1;
    }
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    if ( v1 >= 0 )
      v1 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v1, 0x1B6u, 0LL);
  }
  return (unsigned int)v1;
}
