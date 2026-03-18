/*
 * XREFs of ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02EBE48
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0294314 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02ED158 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C01301BC (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0131FF4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C02EBC6C (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall CCD_BTL::ConvertVidPnToPathsModality(
        CCD_BTL *this,
        struct DMMVIDPN *a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  SIZE_T v10; // r12
  struct D3DKMT_GETPATHSMODALITY *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  _QWORD *v25; // rax
  int *v26; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int16 v27; // [rsp+30h] [rbp-31h]
  int v28; // [rsp+38h] [rbp-29h] BYREF
  __int128 v29; // [rsp+40h] [rbp-21h]
  __int64 v30; // [rsp+50h] [rbp-11h]
  __int16 v31; // [rsp+58h] [rbp-9h]
  __int128 v32; // [rsp+60h] [rbp-1h]
  __int64 v33; // [rsp+70h] [rbp+Fh]
  _WORD *v34; // [rsp+78h] [rbp+17h]
  bool v35; // [rsp+80h] [rbp+1Fh]
  int v36; // [rsp+84h] [rbp+23h]
  int v37; // [rsp+88h] [rbp+27h]
  __int64 v38; // [rsp+8Ch] [rbp+2Bh]

  v3 = 0;
  if ( !a2 || !a3 || *a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((unsigned __int16 *)a2 + 68);
  v9 = v8;
  if ( (unsigned __int16)v8 <= 1u )
    v9 = 1LL;
  v10 = 272 * v9 + 48;
  v11 = (struct D3DKMT_GETPATHSMODALITY *)operator new[](v10, 0x63644356u, PagedPool);
  *a3 = v11;
  if ( v11 )
  {
    memset(v11, 0, v10);
    *((_WORD *)*a3 + 11) = v8;
    if ( (_WORD)v8 )
    {
      v34 = *a3;
      v28 = 0;
      v35 = v34 == 0LL;
      v30 = 0LL;
      v29 = 0LL;
      v31 = 0;
      v32 = 0LL;
      v33 = 0LL;
      v36 = 0;
      v37 = 1;
      v38 = 0LL;
      v26 = &v28;
      v27 = 0;
      v21 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v26, a2);
      v24 = v21;
      if ( v21 >= 0 )
      {
        if ( v34 )
          v3 = v34[10];
        LOBYTE(v22) = 1;
        if ( v3 < v27 )
          LODWORD(v24) = -1073741789;
        CCD_TOPOLOGY::AdjustDesktopLayout((CCD_TOPOLOGY *)&v28, v22);
      }
      else
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
        v25[3] = v24;
        v25[4] = a2;
        v25[5] = v8;
        WdLogEvent5_WdError(v25);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v28);
      return (unsigned int)v24;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19, v18);
      v20[3] = this;
      v20[4] = a2;
      v20[5] = a3;
      WdLogEvent5_WdDmmEvent(v20);
      return 0LL;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    v16[3] = v10;
    v16[4] = a2;
    v16[5] = v8;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
}
