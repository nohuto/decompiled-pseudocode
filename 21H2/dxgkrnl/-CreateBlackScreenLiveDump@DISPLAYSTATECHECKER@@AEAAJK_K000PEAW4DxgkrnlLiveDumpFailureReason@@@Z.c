/*
 * XREFs of ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02EE650
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02EF7B8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004D134 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004D190 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C004D224 (-GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0052D10 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1C02EEC64 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO@@I@Z @ 0x1C02EF03C (-GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CreateBlackScreenLiveDump(
        DISPLAYSTATECHECKER *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        enum DxgkrnlLiveDumpFailureReason *a7)
{
  enum DxgkrnlLiveDumpFailureReason *v7; // r15
  int BlackScreenDiagPacket; // edi
  struct DXGGLOBAL *Global; // rax
  DXGDIAGNOSTICS *v12; // r13
  DXGDIAGNOSTICS *v13; // rax
  int v14; // ebp
  int v15; // r12d
  unsigned int DriverWhiteboxDiagDataSize; // eax
  int v17; // r14d
  __int64 v18; // rsi
  unsigned int v19; // ebx
  __int64 v20; // r9
  __int64 v21; // rbp
  _DWORD *v22; // rbx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r8
  int v25; // eax
  unsigned __int64 v26; // r9
  _DWORD *v27; // r14
  unsigned int i; // ebp
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  const void *v30; // rdx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rbp
  __int64 v33; // r8
  unsigned int v34; // esi
  __int64 v35; // rax
  __int64 v36; // rbp
  int v37; // edx
  const wchar_t *v38; // r9
  int v39; // esi
  unsigned int v40; // [rsp+50h] [rbp-68h]
  int v41; // [rsp+54h] [rbp-64h]
  int v42; // [rsp+58h] [rbp-60h]
  DXGDIAGNOSTICS *v43; // [rsp+60h] [rbp-58h]
  unsigned int v45; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v46; // [rsp+D0h] [rbp+18h]
  __int64 v47; // [rsp+D8h] [rbp+20h]

  v47 = a4;
  v46 = a3;
  v45 = a2;
  v7 = a7;
  BlackScreenDiagPacket = 0;
  *(_DWORD *)a7 = 0;
  Global = DXGGLOBAL_GetGlobal();
  if ( !Global )
  {
    *(_DWORD *)v7 = 1;
    return 3221225473LL;
  }
  v12 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 120);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility object; pDiagnostics = 0x%I64x",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *(_DWORD *)v7 = 2;
    return 3221225860LL;
  }
  v13 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 121);
  v43 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility object; pDiagnostics = 0x%I64x",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *(_DWORD *)v7 = 4;
    return 3221225860LL;
  }
  v14 = *((_DWORD *)v13 + 4);
  v41 = *((_DWORD *)this + 3522) << 13;
  LODWORD(a6) = *((_DWORD *)v12 + 4);
  v15 = a6;
  LODWORD(a5) = v14;
  LODWORD(a7) = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  DriverWhiteboxDiagDataSize = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagDataSize(this);
  v17 = *((_DWORD *)this + 3522);
  v40 = DriverWhiteboxDiagDataSize;
  v18 = (unsigned int)(8 * v17 + 48);
  v42 = v18 + DriverWhiteboxDiagDataSize;
  LODWORD(v47) = v15 + v14 + v41 + v18 + DriverWhiteboxDiagDataSize + (_DWORD)a7;
  v19 = (v47 + 4095) & 0xFFFFF000;
  if ( (unsigned int)WdDbgGetSecondaryDataMaxSize(424LL) < v19 )
  {
    *(_DWORD *)v7 = 8;
    return 3221225473LL;
  }
  v21 = v19;
  v22 = (_DWORD *)operator new[](v19, 0x4B677844u, 256LL, v20);
  if ( v22 )
  {
    v23 = (unsigned int)a6;
    v22[1] = 0;
    v24 = (unsigned int)v47;
    *v22 = v17 + 5;
    v22[2] = v18;
    v22[3] = 160;
    v45 = v23;
    if ( v18 + v23 >= v23 && v18 + v23 <= v24 )
    {
      v25 = DXGDIAGNOSTICS::ReadDiagnostics(v12, (unsigned __int8 *)v22 + (unsigned int)v18, &v45, 0xFFFFFFFF);
      v24 = (unsigned int)v47;
      BlackScreenDiagPacket = v25;
      if ( v25 >= 0 )
      {
        v18 = v45 + (unsigned int)v18;
        LODWORD(a6) = v45;
      }
      else
      {
        *(_DWORD *)v7 = 32;
      }
    }
    v26 = (unsigned int)a5;
    v22[4] = v18;
    v22[5] = 176;
    v45 = v26;
    if ( v18 + v26 >= v26 && v18 + v26 <= v24 )
    {
      BlackScreenDiagPacket = DXGDIAGNOSTICS::ReadDiagnostics(
                                v43,
                                (unsigned __int8 *)v22 + (unsigned int)v18,
                                &v45,
                                0xFFFFFFFF);
      if ( BlackScreenDiagPacket >= 0 )
      {
        v18 = v45 + (unsigned int)v18;
        LODWORD(a5) = v45;
      }
      else
      {
        *(_DWORD *)v7 = 64;
      }
    }
    v27 = v22 + 6;
    for ( i = 0; i < *((_DWORD *)this + 3522); ++i )
    {
      *v27 = v18;
      v27[1] = 5;
      DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
      if ( *((_BYTE *)DisplayAdapterDiagData + 56) )
      {
        v30 = (const void *)*((_QWORD *)DisplayAdapterDiagData + 6);
        if ( v30 )
        {
          memmove((char *)v22 + (unsigned int)v18, v30, 0x2000uLL);
          v27 += 2;
          v18 = (unsigned int)(v18 + 0x2000);
        }
      }
    }
    v31 = (unsigned int)a7;
    v32 = (unsigned int)v47;
    *v27 = v18;
    v27[1] = 194;
    if ( v18 + v31 >= v31 && v18 + v31 <= v32 )
    {
      BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
                                this,
                                (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)((char *)v22 + (unsigned int)v18),
                                v31);
      if ( BlackScreenDiagPacket >= 0 )
        v18 = (unsigned int)((_DWORD)a7 + v18);
      else
        *(_DWORD *)v7 = 1024;
    }
    v27[2] = v18;
    v27[3] = 208;
    if ( v18 + (unsigned __int64)v40 >= v40 && v18 + (unsigned __int64)v40 <= v32 )
    {
      BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetDriverWhiteboxDiagData(
                                this,
                                (struct _DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO *)((char *)v22 + (unsigned int)v18),
                                v40);
      if ( BlackScreenDiagPacket >= 0 )
        LODWORD(v18) = v40 + v18;
      else
        *(_DWORD *)v7 = 2048;
    }
    v27[5] = 0;
    v33 = v46;
    v27[4] = v18;
    v34 = a6 + a5 + v41 + (_DWORD)a7 + v42;
    v35 = WdDbgReportCreate(0LL, 424LL, v33, 0LL, 0LL, 0LL, 0);
    v36 = v35;
    if ( v35 )
    {
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v35, v22, v34) )
      {
        WdLogSingleEntry1(2LL, 1043LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"WdDbgReportSecondaryData returned FALSE while building live dump.",
          1043LL,
          0LL,
          0LL,
          0LL,
          0LL);
        *(_DWORD *)v7 = 256;
        BlackScreenDiagPacket = -1073741823;
      }
      WdDbgReportComplete(v36);
      goto LABEL_44;
    }
    v21 = 1036LL;
    WdLogSingleEntry1(2LL, 1036LL);
    v37 = 0x40000;
    v38 = L"WdDbgReportCreate failed";
    BlackScreenDiagPacket = -1073741823;
    v39 = 128;
  }
  else
  {
    WdLogSingleEntry1(6LL, v21);
    v37 = 262145;
    v38 = L"Out of memory allocating black screen live dump data (size 0x%I64x)";
    BlackScreenDiagPacket = -1073741801;
    v39 = 16;
  }
  DxgkLogInternalTriageEvent(0LL, v37, -1, (__int64)v38, v21, 0LL, 0LL, 0LL, 0LL);
  *(_DWORD *)v7 = v39;
  if ( v22 )
LABEL_44:
    operator delete[](v22);
  return (unsigned int)BlackScreenDiagPacket;
}
