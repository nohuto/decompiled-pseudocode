/*
 * XREFs of ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0052318
 * Callers:
 *     _DxgDbgBugcheckCallback @ 0x1C004C9E0 (_DxgDbgBugcheckCallback.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C02EB624 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0304978 (-DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLL.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?TdrGatherPowerTriage@@YA?AU_DPI_DBG_POWER_ACTIVITY@@XZ @ 0x1C00525B4 (-TdrGatherPowerTriage@@YA-AU_DPI_DBG_POWER_ACTIVITY@@XZ.c)
 *     DpiGetDbgInfoAdapters @ 0x1C005F594 (DpiGetDbgInfoAdapters.c)
 */

__int64 __fastcall TdrCollectBugcheckSecondaryDumpData(_QWORD *a1, unsigned int a2, char a3)
{
  char v3; // r12
  unsigned __int64 v4; // r15
  unsigned __int16 i; // cx
  __int64 v8; // rax
  unsigned __int16 v9; // r14
  int v10; // esi
  __int64 v11; // rsi
  unsigned __int16 j; // dx
  int v13; // r10d
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int16 v16; // r14
  char v17; // cl
  __int64 v18; // rax
  unsigned __int16 v19; // bx
  __int64 v20; // rdx
  unsigned int RecentEvents; // r8d
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rdx
  _DWORD v27[9]; // [rsp+28h] [rbp-91h]
  __int64 v28; // [rsp+4Ch] [rbp-6Dh]
  _DWORD v29[28]; // [rsp+60h] [rbp-59h] BYREF

  v3 = a3;
  v4 = a2;
  if ( a2 <= 0xA8 )
    return 0LL;
  if ( a1 )
  {
    for ( i = 0; i < 0x15u; ++i )
    {
      v8 = i;
      a1[v8] = 0LL;
    }
    *(_DWORD *)a1 = 21;
  }
  v9 = 0;
  v10 = 8;
  if ( a2 < 0xB0 )
  {
    v10 = 0;
  }
  else if ( a1 )
  {
    *((_DWORD *)a1 + 42) = 2;
    v9 = 1;
    *((_BYTE *)a1 + 172) = word_1C013049C;
    *((_BYTE *)a1 + 173) = 0;
    *((_DWORD *)a1 + 2) = 168;
    *((_DWORD *)a1 + 3) = 9;
  }
  v11 = (unsigned int)(v10 + 168);
  memset(v29, 0, sizeof(v29));
  if ( (int)DpiGetDbgInfoAdapters(v29) >= 0 )
  {
    for ( j = 0; j < 7u; ++j )
    {
      if ( (unsigned int)v11 >= (unsigned int)v4 )
        break;
      v13 = v29[4 * j];
      if ( !v13 )
        break;
      if ( v11 + 16 <= v4 )
      {
        ++v9;
        if ( a1 )
        {
          *(_DWORD *)((char *)a1 + v11 + 4) = v29[4 * j + 1];
          *(_DWORD *)((char *)a1 + v11 + 8) = v29[4 * j + 2];
          v14 = v9;
          v15 = (*(_DWORD *)((char *)a1 + v11 + 12) ^ v29[4 * j + 3]) & 3;
          *(_DWORD *)((char *)a1 + v11) = v13;
          *(_DWORD *)((char *)a1 + v11 + 12) ^= v15;
          LODWORD(a1[v14]) = v11;
          HIDWORD(a1[v14]) = j + 32;
        }
        v11 = (unsigned int)(v11 + 16);
      }
    }
  }
  v16 = v9 + 1;
  if ( a1 )
  {
    v17 = TdrGatherPowerTriage() ^ *((_BYTE *)a1 + v11);
    v18 = v16;
    *((_BYTE *)a1 + v11) ^= v17 & 3;
    LODWORD(a1[v18]) = v11;
    v11 = (unsigned int)(v11 + 8);
    HIDWORD(a1[v18]) = 48;
  }
  v27[0] = 1;
  v27[3] = 64;
  v19 = 0;
  v27[4] = 64;
  v27[5] = 64;
  v27[7] = 64;
  v28 = 64LL;
  v27[1] = 32;
  v27[2] = 32;
  v27[6] = 32;
  v27[8] = 32;
  do
  {
    if ( (unsigned int)v11 >= (unsigned int)v4 )
      break;
    if ( v3 )
      v20 = 0xFFFFFFFFLL;
    else
      v20 = (unsigned int)v27[v19];
    RecentEvents = WdLogGetRecentEvents(v19, v20, 0LL, 0LL);
    v22 = v11 + RecentEvents;
    if ( v22 < RecentEvents || v22 > v4 )
      RecentEvents = v4 - v11;
    if ( RecentEvents )
    {
      ++v16;
      if ( a1 )
      {
        if ( a3 )
          v23 = 0xFFFFFFFFLL;
        else
          v23 = (unsigned int)v27[v19];
        v24 = WdLogGetRecentEvents(v19, v23, (char *)a1 + v11, RecentEvents);
        v25 = v16;
        RecentEvents = v24;
        LODWORD(a1[v25]) = v11;
        HIDWORD(a1[v25]) = v19 + 16;
      }
      v3 = a3;
      v11 = RecentEvents + (unsigned int)v11;
    }
    ++v19;
  }
  while ( v19 < 0xBu );
  return (unsigned int)v11;
}
