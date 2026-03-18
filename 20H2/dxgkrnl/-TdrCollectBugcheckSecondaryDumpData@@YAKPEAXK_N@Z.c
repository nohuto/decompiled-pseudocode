/*
 * XREFs of ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0043E9C
 * Callers:
 *     _DxgDbgBugcheckCallback @ 0x1C0042C20 (_DxgDbgBugcheckCallback.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021FEF0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C02594A8 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0262DF8 (-DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLL.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?TdrGatherPowerTriage@@YA?AU_DPI_DBG_POWER_ACTIVITY@@XZ @ 0x1C0044134 (-TdrGatherPowerTriage@@YA-AU_DPI_DBG_POWER_ACTIVITY@@XZ.c)
 *     DpiGetDbgInfoAdapters @ 0x1C0050578 (DpiGetDbgInfoAdapters.c)
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
  unsigned __int64 RecentEvents; // r9
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  _DWORD v26[9]; // [rsp+28h] [rbp-91h]
  __int64 v27; // [rsp+4Ch] [rbp-6Dh]
  _DWORD v28[28]; // [rsp+60h] [rbp-59h] BYREF

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
  if ( a2 >= 0xB0 )
  {
    if ( a1 )
    {
      *((_DWORD *)a1 + 42) = 2;
      v9 = 1;
      *((_BYTE *)a1 + 172) = word_1C00B0B1D;
      *((_BYTE *)a1 + 173) = 0;
      *((_DWORD *)a1 + 2) = 168;
      *((_DWORD *)a1 + 3) = 9;
    }
  }
  else
  {
    v10 = 0;
  }
  v11 = (unsigned int)(v10 + 168);
  memset(v28, 0, sizeof(v28));
  if ( (int)DpiGetDbgInfoAdapters(v28) >= 0 )
  {
    for ( j = 0; j < 7u; ++j )
    {
      if ( (unsigned int)v11 >= (unsigned int)v4 )
        break;
      v13 = v28[4 * j];
      if ( !v13 )
        break;
      if ( v11 + 16 <= v4 )
      {
        ++v9;
        if ( a1 )
        {
          *(_DWORD *)((char *)a1 + v11 + 4) = v28[4 * j + 1];
          *(_DWORD *)((char *)a1 + v11 + 8) = v28[4 * j + 2];
          v14 = v9;
          v15 = (*(_DWORD *)((char *)a1 + v11 + 12) ^ v28[4 * j + 3]) & 3;
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
  v26[0] = 1;
  v26[3] = 64;
  v19 = 0;
  v26[4] = 64;
  v26[5] = 64;
  v26[7] = 64;
  v27 = 64LL;
  v26[1] = 32;
  v26[2] = 32;
  v26[6] = 32;
  v26[8] = 32;
  do
  {
    if ( (unsigned int)v11 >= (unsigned int)v4 )
      break;
    if ( v3 )
      v20 = 0xFFFFFFFFLL;
    else
      v20 = (unsigned int)v26[v19];
    RecentEvents = (unsigned int)WdLogGetRecentEvents(v19, v20, 0LL, 0LL);
    if ( v11 + RecentEvents < RecentEvents || v11 + RecentEvents > v4 )
      RecentEvents = (unsigned int)(v4 - v11);
    if ( (_DWORD)RecentEvents )
    {
      ++v16;
      if ( a1 )
      {
        if ( a3 )
          v22 = 0xFFFFFFFFLL;
        else
          v22 = (unsigned int)v26[v19];
        v23 = WdLogGetRecentEvents(v19, v22, (char *)a1 + (unsigned int)v11, RecentEvents);
        v24 = v16;
        LODWORD(RecentEvents) = v23;
        LODWORD(a1[v24]) = v11;
        HIDWORD(a1[v24]) = v19 + 16;
      }
      v3 = a3;
      v11 = (unsigned int)(RecentEvents + v11);
    }
    ++v19;
  }
  while ( v19 < 0xBu );
  return (unsigned int)v11;
}
