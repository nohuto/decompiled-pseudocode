/*
 * XREFs of ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EE458
 * Callers:
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02EE5D4 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00085F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01352C8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0136844 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0169BBC (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02ED148 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology(
        CCD_TOPOLOGY **this,
        struct DXGADAPTER *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DMMVIDPN *v9; // rbx
  __int64 v10; // rax
  int v11; // ebx
  CCD_BTL *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  CCD_TOPOLOGY *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v22; // [rsp+20h] [rbp-60h] BYREF
  __int128 v23; // [rsp+28h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-48h]
  __int16 v25; // [rsp+40h] [rbp-40h]
  __int128 v26; // [rsp+48h] [rbp-38h]
  __int64 v27; // [rsp+58h] [rbp-28h]
  struct D3DKMT_GETPATHSMODALITY *v28; // [rsp+60h] [rbp-20h]
  bool v29; // [rsp+68h] [rbp-18h]
  int v30; // [rsp+6Ch] [rbp-14h]
  int v31; // [rsp+70h] [rbp-10h]
  __int64 v32; // [rsp+74h] [rbp-Ch]
  struct D3DKMT_GETPATHSMODALITY *v33; // [rsp+B8h] [rbp+38h] BYREF
  struct DMMVIDPN *v34; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+48h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 337) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v35, v4);
  v5 = *(_QWORD *)(v4 + 280);
  v34 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 32));
    v5 = *(_QWORD *)(v4 + 280);
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v34, v5);
  v9 = v34;
  if ( v34 )
  {
    v33 = 0LL;
    v12 = CCD_BTL::Global(v7, v6);
    v11 = CCD_BTL::ConvertVidPnToPathsModality(v12, v9, &v33);
    if ( v11 >= 0 )
    {
      v16 = *this;
      v22 = 0;
      v23 = 0LL;
      v24 = 0LL;
      v29 = v33 == 0LL;
      v25 = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = v33;
      v30 = 0;
      v31 = 1;
      v32 = 0LL;
      v11 = CCD_TOPOLOGY::CopyInheritScope(v16, (const struct CCD_TOPOLOGY *)&v22);
      operator delete[](v33);
      if ( v11 >= 0 )
      {
        v11 = 0;
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v19 + 24) = a2;
        WdLogEvent5_WdError(v19);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v22);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v15 + 24) = a2;
      WdLogEvent5_WdError(v15);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdWarning(v10);
    v11 = -1073741275;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v34, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v35 + 40), v20);
  return (unsigned int)v11;
}
