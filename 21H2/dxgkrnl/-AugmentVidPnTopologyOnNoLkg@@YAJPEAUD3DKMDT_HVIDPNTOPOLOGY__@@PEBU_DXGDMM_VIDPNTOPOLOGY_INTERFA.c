/*
 * XREFs of ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C025CA94
 * Callers:
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C025C778 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C025C4F8 (-AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTER.c)
 *     ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C025C64C (-AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DK.c)
 *     ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C025DA4C (-ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGD.c)
 */

__int64 __fastcall AugmentVidPnTopologyOnNoLkg(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a2,
        void *a3,
        const struct _DXGDMM_INTERFACE *a4,
        unsigned int a5,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a6,
        unsigned int a7,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a8,
        unsigned __int64 *const a9,
        unsigned int *const a10)
{
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v18; // esi
  __int64 v19; // rax
  unsigned __int64 *v20; // r13
  __int64 v21; // rax
  unsigned int *v22; // r14
  int AvailableTarget; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r15
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // r15
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rsi
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v50; // [rsp+20h] [rbp-48h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v51; // [rsp+20h] [rbp-48h]

  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v14 + 24) = 3130LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v15 + 24) = 3131LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v16 + 24) = 3132LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a4 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = 3133LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = -1;
  if ( a5 == -1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v19 + 24) = 3134LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v20 = a9;
  if ( !a9 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v21 + 24) = 3135LL;
    WdLogEvent5_WdAssertion(v21);
  }
  *v20 = 0LL;
  v22 = a10;
  if ( a10 )
    *a10 = -1;
  a6 = -1;
  AvailableTarget = AddPathToFirstAvailableTarget(a1, (__int64)a2, a5, (__int64)a4, v50, 2u);
  v26 = AvailableTarget;
  if ( AvailableTarget == -1071774925 )
  {
    v27 = WdLogNewEntry5_WdDmmEvent(v25, v24);
    *(_QWORD *)(v27 + 24) = a1;
    *(_QWORD *)(v27 + 32) = a5;
    WdLogEvent5_WdDmmEvent(v27);
    v29 = AddPathToFirstAvailableTarget(a1, (__int64)a2, a5, v28, v51, 1u);
    v32 = v29;
    if ( v29 == -1071774925 )
    {
      v33 = WdLogNewEntry5_WdDmmEvent(v31, v30);
      *(_QWORD *)(v33 + 24) = a1;
      *(_QWORD *)(v33 + 32) = a5;
      WdLogEvent5_WdDmmEvent(v33);
      a7 = -1;
      v34 = ReclaimClonedVidPnTarget(a4, a3, a1, a2, a8, &a7, (unsigned int *const)&a6);
      v32 = v34;
      if ( v34 == -1071774925 )
      {
        v37 = WdLogNewEntry5_WdTrace(v31, v30, v35, v36);
        *(_QWORD *)(v37 + 24) = a1;
        *(_QWORD *)(v37 + 32) = a5;
        return 3223192371LL;
      }
      if ( v34 >= 0 )
      {
        if ( a7 == -1 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v31, v30);
          *(_QWORD *)(v39 + 24) = 3261LL;
          WdLogEvent5_WdAssertion(v39);
        }
        v40 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v31, v30);
        v41 = a7;
        v40[3] = a7;
        v40[4] = a1;
        v40[5] = a5;
        WdLogEvent5_WdDmmEvent(v40);
        v42 = AddPresentPath(a1, a2, a5, a7);
        v45 = v42;
        if ( v42 == -1071774975 || v42 == -1071774920 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v44, v43);
          v46[3] = a5;
          v46[4] = v41;
          v46[5] = a3;
          WdLogEvent5_WdDmmEvent(v46);
          return 3223192371LL;
        }
        if ( v42 < 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
          v47[3] = a5;
          v47[4] = v41;
          v47[5] = a1;
          v47[6] = v45;
          WdLogEvent5_WdError(v47);
          return (unsigned int)v45;
        }
        v18 = a6;
        goto LABEL_29;
      }
LABEL_33:
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v48[3] = a1;
      v48[4] = a5;
      v48[5] = v32;
      WdLogEvent5_WdError(v48);
      return (unsigned int)v32;
    }
    if ( v29 < 0 )
      goto LABEL_33;
  }
  else if ( AvailableTarget < 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v49[4] = a5;
    v49[3] = a1;
    v49[5] = v26;
    WdLogEvent5_WdError(v49);
    return (unsigned int)v26;
  }
LABEL_29:
  *v20 = 1LL;
  if ( v22 )
    *v22 = v18;
  return 0LL;
}
