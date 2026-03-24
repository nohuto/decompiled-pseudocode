/*
 * XREFs of _BmlGetPathModeListForAdapter @ 0x1C02EC678
 * Callers:
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02EBC94 (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00085F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0125A5C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0138800 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C013E374 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C0163AC0 (_BmlLogDiagnosticsPacket.c)
 *     _BmlGetPathModeListForPath @ 0x1C02EC830 (_BmlGetPathModeListForPath.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        struct BML_VIDPN_PATH_ORDER *a8)
{
  struct BML_VIDPN_PATH_ORDER *v8; // rsi
  bool v9; // cf
  __int16 v12; // r12
  __int16 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  struct VIDPN_MGR *v16; // r14
  int ClientVidPn; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int PathModeListForPath; // edi
  int v23; // r15d
  __int64 v24; // r8
  struct DMMVIDPN *v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  bool v29; // zf
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rsi
  _QWORD *v35; // rax
  __int64 v36; // rdx
  struct DMMVIDPN *v38; // [rsp+90h] [rbp+50h] BYREF
  __int64 v39; // [rsp+98h] [rbp+58h] BYREF

  v8 = a8;
  v9 = *(_WORD *)(a3 + 20) == 0;
  v12 = a2;
  v13 = a1;
  *(_BYTE *)a8 = 0;
  if ( v9 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(_QWORD *)(a4 + 2696);
  a8 = 0LL;
  v16 = *(struct VIDPN_MGR **)(v15 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v39, (__int64)v16);
  v38 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v16, (__int64 *)&v38);
  PathModeListForPath = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = ClientVidPn;
    goto LABEL_14;
  }
  v23 = a6;
  v24 = a3;
  v25 = v38;
  PathModeListForPath = BmlPreparePathOrderAndVidPn((__int64 *)&a8, (__int64)v38, v24, v13, v12, a6, a7);
  if ( PathModeListForPath >= 0 )
  {
    v28 = (int)a8;
    if ( *(_BYTE *)a8 > 1u )
    {
      --*(_BYTE *)a8;
      PathModeListForPath = BmlFunctionalizeVidPn(a8, v25, v26, v27);
      ++*(_BYTE *)a8;
      if ( PathModeListForPath < 0 )
      {
        v29 = a5 == 0;
        *(_BYTE *)v8 = 1;
        if ( !v29 )
        {
          if ( v25 )
          {
            v30 = BmlLogDiagnosticsPacket((DXGFASTMUTEX ***)v16, v23, (__int64)v25, (unsigned __int8 *)a8);
            v34 = v30;
            if ( v30 < 0 )
            {
              v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
              v35[3] = v25;
              v35[4] = a8;
              v35[5] = v34;
              WdLogEvent5_WdWarning(v35);
            }
          }
        }
        goto LABEL_14;
      }
      v28 = (int)a8;
    }
    PathModeListForPath = BmlGetPathModeListForPath(v28, (int)v25);
  }
LABEL_14:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v38, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v39 + 40), v36);
  if ( a8 )
    operator delete[](a8);
  return (unsigned int)PathModeListForPath;
}
