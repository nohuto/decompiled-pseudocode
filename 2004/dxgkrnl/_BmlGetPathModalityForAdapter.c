/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C013A528
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C013A464 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C012344C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0135160 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C013A7DC (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C013AD30 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     FillDevmodeFromVidPn @ 0x1C0145E6C (FillDevmodeFromVidPn.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C0146188 (ConvertDMMScalingToGdiScaling.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C015E310 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C015EB10 (_BmlLogDiagnosticsPacket.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C0167250 (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0167F70 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
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
  struct DMMVIDPN *v22; // rsi
  unsigned int v23; // r12d
  __int64 v24; // rbx
  __int64 v25; // r15
  _DWORD *v26; // r13
  _DWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rbx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int16 v49; // [rsp+20h] [rbp-30h]
  __int64 v50; // [rsp+40h] [rbp-10h] BYREF
  __int16 v51; // [rsp+90h] [rbp+40h]
  DMMVIDPN *v52; // [rsp+A0h] [rbp+50h] BYREF
  __int64 i; // [rsp+A8h] [rbp+58h]

  v51 = a1;
  v9 = a9;
  v12 = a2;
  *(_BYTE *)a9 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v40);
  }
  v13 = *(_QWORD *)(a4 + 2696);
  a9 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v13 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v50, (__int64)v14);
  v52 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14, (__int64 *)&v52);
  v20 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = ClientVidPn;
    goto LABEL_19;
  }
  v21 = a6;
  v49 = v12;
  v22 = v52;
  v20 = BmlPreparePathOrderAndVidPn((__int64 *)&a9, (__int64)v52, a3, v51, v49, a6, a7);
  if ( v20 < 0 )
    goto LABEL_19;
  v20 = BmlFunctionalizeVidPn(a9, v22);
  if ( v20 < 0 || (v20 = BmlPickColorSpaceAndWireFormat(a9, v21, v22), v20 < 0) )
  {
    *(_BYTE *)v9 = 1;
    if ( a5 )
    {
      if ( v22 )
      {
        v41 = BmlLogDiagnosticsPacket(v14, v21, v22, a9);
        v45 = v41;
        if ( v41 < 0 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
          v46[3] = v22;
          v46[4] = a9;
          v46[5] = v45;
          WdLogEvent5_WdWarning(v46);
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
        if ( DMMVIDPN::IsFunctional(v22, 0) )
        {
          v35 = BmlLogDiagnosticsPacket(v14, v21, v22, a9);
          v39 = v35;
          if ( v35 < 0 )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
            v47[3] = v22;
            v47[4] = a9;
            v47[5] = v39;
            WdLogEvent5_WdWarning(v47);
          }
        }
      }
    }
    if ( a8 )
    {
      v52 = 0LL;
      *a8 = (unsigned __int64)v22 & -(__int64)((struct DMMVIDPN *)((char *)v22 + 88) != 0LL);
      goto LABEL_19;
    }
    v20 = BmlFillPathModalityFromVidPn(v22, (struct D3DKMT_GETPATHSMODALITY *)a3);
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
              v48 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
              WdLogEvent5_WdLowResource(v48);
              v20 = -1073741670;
              break;
            }
          }
          v20 = FillDevmodeFromVidPn(v22, *(unsigned int *)(v25 + a3 + 72), v26);
          if ( v20 < 0 )
            break;
          v32 = *(unsigned int *)(v25 + a3 + 188);
          v26[58] = v32;
          ConvertDMMScalingToGdiScaling(v32, v26 + 59);
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
  auto_rc<DMMVIDPN>::reset((__int64 *)&v52, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40), v33);
  if ( a9 )
    operator delete[](a9);
  return (unsigned int)v20;
}
