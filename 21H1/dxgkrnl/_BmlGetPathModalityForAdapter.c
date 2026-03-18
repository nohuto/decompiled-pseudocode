/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C00E02B8
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00E01F4 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00DF0B4 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00DF2C8 (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     FillDevmodeFromVidPn @ 0x1C00DF328 (FillDevmodeFromVidPn.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00DF644 (ConvertDMMScalingToGdiScaling.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00E056C (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00E0AC0 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00E4A24 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128C08 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C014EBF0 (_BmlLogDiagnosticsPacket.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0158260 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        int a7,
        unsigned __int64 *a8,
        struct BML_VIDPN_PATH_ORDER *a9)
{
  struct BML_VIDPN_PATH_ORDER *v9; // rbx
  __int16 v12; // si
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // r12
  int ClientVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edi
  unsigned int v21; // r15d
  __int64 v22; // rsi
  unsigned int v23; // r12d
  __int64 v24; // rbx
  __int64 v25; // r15
  _DWORD *v26; // r13
  _DWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rbx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rbx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int16 v50; // [rsp+20h] [rbp-30h]
  __int64 v51; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v52; // [rsp+90h] [rbp+40h]
  struct DMMVIDPN *v53; // [rsp+A0h] [rbp+50h] BYREF
  __int64 i; // [rsp+A8h] [rbp+58h]

  v52 = a1;
  v9 = a9;
  v12 = a2;
  *(_BYTE *)a9 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v41 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v41);
  }
  v13 = *(_QWORD *)(a4 + 2672);
  a9 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v13 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v51, (__int64)v14);
  v53 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14);
  v20 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = ClientVidPn;
    goto LABEL_19;
  }
  v21 = a6;
  v50 = v12;
  v22 = (__int64)v53;
  v20 = BmlPreparePathOrderAndVidPn(&a9, v53, a3, v52, v50, a6, a7);
  if ( v20 < 0 )
    goto LABEL_19;
  v20 = BmlFunctionalizeVidPn(a9, (struct DMMVIDPN *)v22);
  if ( v20 < 0 || (v20 = BmlPickColorSpaceAndWireFormat(a9, v21, v22), v20 < 0) )
  {
    *(_BYTE *)v9 = 1;
    if ( a5 )
    {
      if ( v22 )
      {
        v42 = BmlLogDiagnosticsPacket(v14, v21, v22, a9);
        v46 = v42;
        if ( v42 < 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
          v47[3] = v22;
          v47[4] = a9;
          v47[5] = v46;
          WdLogEvent5_WdWarning(v47);
        }
      }
    }
  }
  else
  {
    if ( a5 )
    {
      if ( v22 )
      {
        if ( DMMVIDPN::IsFunctional((DMMVIDPN *)v22, 0) )
        {
          v36 = BmlLogDiagnosticsPacket(v14, v21, v22, a9);
          v40 = v36;
          if ( v36 < 0 )
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
            v48[3] = v22;
            v48[4] = a9;
            v48[5] = v40;
            WdLogEvent5_WdWarning(v48);
          }
        }
      }
    }
    if ( a8 )
    {
      v53 = 0LL;
      *a8 = v22 & -(__int64)(v22 != -88);
      goto LABEL_19;
    }
    v20 = BmlFillPathModalityFromVidPn((const struct DMMVIDPN *)v22, (struct D3DKMT_GETPATHSMODALITY *)a3);
    if ( v20 >= 0 )
    {
      v23 = 0;
      v24 = *(_QWORD *)(a4 + 316);
      for ( i = v24; v23 < *(unsigned __int16 *)(a3 + 20); ++v23 )
      {
        v25 = 272LL * v23;
        if ( __PAIR64__(HIDWORD(i), v24) == *(_QWORD *)(v25 + a3 + 64)
          && BmlIsPrimaryClonePath((const struct D3DKMT_GETPATHSMODALITY *)a3, v23) )
        {
          v26 = *(_DWORD **)(v25 + a3 + 272);
          if ( !v26 )
          {
            v27 = operator new[](0xF4uLL, 0x63644356u, PagedPool);
            *(_QWORD *)(v25 + a3 + 272) = v27;
            v26 = v27;
            if ( !v27 )
            {
              v49 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
              WdLogEvent5_WdLowResource(v49);
              v20 = -1073741670;
              break;
            }
          }
          v20 = FillDevmodeFromVidPn(v22, *(_DWORD *)(v25 + a3 + 72), v26);
          if ( v20 < 0 )
            break;
          v33 = *(unsigned int *)(v25 + a3 + 188);
          v26[58] = v33;
          ConvertDMMScalingToGdiScaling(v33, v26 + 59, v32);
          if ( (*(_DWORD *)(v25 + a3 + 48) & 0x20000) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v25 + a3 + 272) + 172LL) = *(_DWORD *)(v25 + a3 + 200);
            *(_DWORD *)(*(_QWORD *)(v25 + a3 + 272) + 176LL) = *(_DWORD *)(v25 + a3 + 204);
          }
        }
      }
    }
  }
LABEL_19:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v53, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v51 + 40), v34);
  if ( a9 )
    operator delete[](a9);
  return (unsigned int)v20;
}
