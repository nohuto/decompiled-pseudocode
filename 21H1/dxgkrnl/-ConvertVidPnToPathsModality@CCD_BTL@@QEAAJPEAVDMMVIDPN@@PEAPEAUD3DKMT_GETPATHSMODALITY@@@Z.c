/*
 * XREFs of ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02E8878
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0290E04 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02E9B88 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00E8464 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C00EBADC (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C02E869C (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
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
  __int64 v18; // rcx
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  _QWORD *v24; // rax
  int *v25; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int16 v26; // [rsp+30h] [rbp-31h]
  int v27; // [rsp+38h] [rbp-29h] BYREF
  __int128 v28; // [rsp+40h] [rbp-21h]
  __int64 v29; // [rsp+50h] [rbp-11h]
  __int16 v30; // [rsp+58h] [rbp-9h]
  __int128 v31; // [rsp+60h] [rbp-1h]
  __int64 v32; // [rsp+70h] [rbp+Fh]
  _WORD *v33; // [rsp+78h] [rbp+17h]
  bool v34; // [rsp+80h] [rbp+1Fh]
  int v35; // [rsp+84h] [rbp+23h]
  int v36; // [rsp+88h] [rbp+27h]
  __int64 v37; // [rsp+8Ch] [rbp+2Bh]

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
      v33 = *a3;
      v27 = 0;
      v34 = v33 == 0LL;
      v29 = 0LL;
      v28 = 0LL;
      v30 = 0;
      v31 = 0LL;
      v32 = 0LL;
      v35 = 0;
      v36 = 1;
      v37 = 0LL;
      v25 = &v27;
      v26 = 0;
      v20 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v25, a2);
      v23 = v20;
      if ( v20 >= 0 )
      {
        if ( v33 )
          v3 = v33[10];
        if ( v3 < v26 )
          LODWORD(v23) = -1073741789;
        CCD_TOPOLOGY::AdjustDesktopLayout((CCD_TOPOLOGY *)&v27, 1);
      }
      else
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
        v24[3] = v23;
        v24[4] = a2;
        v24[5] = v8;
        WdLogEvent5_WdError(v24);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v27);
      return (unsigned int)v23;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18);
      v19[3] = this;
      v19[4] = a2;
      v19[5] = a3;
      WdLogEvent5_WdDmmEvent(v19);
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
