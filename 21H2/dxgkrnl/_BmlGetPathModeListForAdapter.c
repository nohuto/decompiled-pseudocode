/*
 * XREFs of _BmlGetPathModeListForAdapter @ 0x1C03ABC44
 * Callers:
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03AB1B8 (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B0CF4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C01BD718 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C01C0A6C (_BmlLogDiagnosticsPacket.c)
 *     _BmlGetPathModeListForPath @ 0x1C03ABDDC (_BmlGetPathModeListForPath.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(
        unsigned __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        struct BML_VIDPN_PATH_ORDER *a8)
{
  struct BML_VIDPN_PATH_ORDER *v8; // rsi
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // r14
  int ClientVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int PathModeListForPath; // edi
  int v19; // r15d
  __int64 v20; // r8
  struct DMMVIDPN *v21; // rbx
  int v22; // ecx
  bool v23; // zf
  int v24; // eax
  struct DMMVIDPN *v26; // [rsp+90h] [rbp+50h] BYREF
  __int64 v27; // [rsp+98h] [rbp+58h] BYREF

  v8 = a8;
  *(_BYTE *)a8 = 0;
  if ( !*(_WORD *)(a3 + 20) )
    WdLogSingleEntry0(1LL);
  v13 = *(_QWORD *)(a4 + 2792);
  a8 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v13 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v27, (__int64)v14);
  v26 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14, (__int64 *)&v26);
  PathModeListForPath = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16) + 24) = ClientVidPn;
    goto LABEL_14;
  }
  v19 = a6;
  v20 = a3;
  v21 = v26;
  PathModeListForPath = BmlPreparePathOrderAndVidPn((__int64 *)&a8, (__int64)v26, v20, a1, a2, a6, a7);
  if ( PathModeListForPath >= 0 )
  {
    v22 = (int)a8;
    if ( *(_BYTE *)a8 > 1u )
    {
      --*(_BYTE *)a8;
      PathModeListForPath = BmlFunctionalizeVidPn(a8, v21);
      ++*(_BYTE *)a8;
      if ( PathModeListForPath < 0 )
      {
        v23 = a5 == 0;
        *(_BYTE *)v8 = 1;
        if ( !v23 )
        {
          if ( v21 )
          {
            v24 = BmlLogDiagnosticsPacket(v14, v19, (__int64)v21, (unsigned __int8 *)a8);
            if ( v24 < 0 )
              WdLogSingleEntry3(3LL, v21, a8, v24);
          }
        }
        goto LABEL_14;
      }
      v22 = (int)a8;
    }
    PathModeListForPath = BmlGetPathModeListForPath(v22, (int)v21);
  }
LABEL_14:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v26, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v27 + 40));
  if ( a8 )
    operator delete[](a8);
  return (unsigned int)PathModeListForPath;
}
