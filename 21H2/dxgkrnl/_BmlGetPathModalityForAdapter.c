/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C01BD268
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01BD1A4 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B0CF4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C01BD518 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C01BD718 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     FillDevmodeFromVidPn @ 0x1C01BDFE4 (FillDevmodeFromVidPn.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C01BE2E0 (ConvertDMMScalingToGdiScaling.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C01BE400 (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01BE460 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C01C0A6C (_BmlLogDiagnosticsPacket.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C01DE414 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(
        unsigned __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        int a7,
        unsigned __int64 *a8,
        struct BML_VIDPN_PATH_ORDER *a9)
{
  struct BML_VIDPN_PATH_ORDER *v9; // rbx
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // r12
  int ClientVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edi
  unsigned int v19; // r15d
  struct DMMVIDPN *v20; // rsi
  unsigned int v21; // edx
  __int64 v22; // rbx
  unsigned int v23; // r12d
  __int64 v24; // r15
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rcx
  int v30; // eax
  int v31; // eax
  __int16 v32; // [rsp+20h] [rbp-30h]
  __int64 v33; // [rsp+40h] [rbp-10h] BYREF
  DMMVIDPN *v35; // [rsp+A0h] [rbp+50h] BYREF
  __int64 i; // [rsp+A8h] [rbp+58h]

  v9 = a9;
  *(_BYTE *)a9 = 0;
  if ( !*(_WORD *)(a3 + 20) )
    WdLogSingleEntry0(1LL);
  v13 = *(_QWORD *)(a4 + 2792);
  a9 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v13 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, (__int64)v14);
  v35 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14, (__int64 *)&v35);
  v18 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16) + 24) = ClientVidPn;
    goto LABEL_19;
  }
  v19 = a6;
  v32 = a2;
  v20 = v35;
  v18 = BmlPreparePathOrderAndVidPn((__int64 *)&a9, (__int64)v35, a3, a1, v32, a6, a7);
  if ( v18 < 0 )
    goto LABEL_19;
  v18 = BmlFunctionalizeVidPn(a9, v20);
  if ( v18 < 0 || (v18 = BmlPickColorSpaceAndWireFormat(a9, v19, v20), v18 < 0) )
  {
    *(_BYTE *)v9 = 1;
    if ( a5 )
    {
      if ( v20 )
      {
        v31 = BmlLogDiagnosticsPacket(v14, v19, v20, a9);
        if ( v31 < 0 )
          WdLogSingleEntry3(3LL, v20, a9, v31);
      }
    }
  }
  else
  {
    if ( a5 )
    {
      if ( v20 )
      {
        if ( DMMVIDPN::IsFunctional(v20, v21) )
        {
          v30 = BmlLogDiagnosticsPacket(v14, v19, v20, a9);
          if ( v30 < 0 )
            WdLogSingleEntry3(3LL, v20, a9, v30);
        }
      }
    }
    if ( a8 )
    {
      v35 = 0LL;
      *a8 = (unsigned __int64)v20 & -(__int64)((struct DMMVIDPN *)((char *)v20 + 88) != 0LL);
      goto LABEL_19;
    }
    v18 = BmlFillPathModalityFromVidPn(v20, (struct D3DKMT_GETPATHSMODALITY *)a3);
    if ( v18 >= 0 )
    {
      v22 = *(_QWORD *)(a4 + 404);
      v23 = 0;
      for ( i = v22; v23 < *(unsigned __int16 *)(a3 + 20); ++v23 )
      {
        v24 = 296LL * v23;
        if ( __PAIR64__(HIDWORD(i), v22) == *(_QWORD *)(v24 + a3 + 72)
          && BmlIsPrimaryClonePath((const struct D3DKMT_GETPATHSMODALITY *)a3, v23) )
        {
          v26 = *(_QWORD *)(v24 + a3 + 304);
          if ( !v26 )
          {
            v27 = operator new[](0xF4uLL, 0x63644356u, 256LL, v25);
            *(_QWORD *)(v24 + a3 + 304) = v27;
            v26 = v27;
            if ( !v27 )
            {
              WdLogSingleEntry0(6LL);
              v18 = -1073741670;
              break;
            }
          }
          v18 = FillDevmodeFromVidPn(v20, *(unsigned int *)(v24 + a3 + 80), v26);
          if ( v18 < 0 )
            break;
          v28 = *(unsigned int *)(v24 + a3 + 196);
          *(_DWORD *)(v26 + 232) = v28;
          ConvertDMMScalingToGdiScaling(v28, v26 + 236);
          if ( (*(_DWORD *)(v24 + a3 + 56) & 0x20000) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v24 + a3 + 304) + 172LL) = *(_DWORD *)(v24 + a3 + 208);
            *(_DWORD *)(*(_QWORD *)(v24 + a3 + 304) + 176LL) = *(_DWORD *)(v24 + a3 + 212);
          }
        }
      }
    }
  }
LABEL_19:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v35, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v33 + 40));
  if ( a9 )
    operator delete[](a9);
  return (unsigned int)v18;
}
