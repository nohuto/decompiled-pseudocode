/*
 * XREFs of ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C025C4F8
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C025CA94 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C025C64C (-AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DK.c)
 */

__int64 __fastcall AddPathToFirstAvailableTarget(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int i,
        unsigned int a6)
{
  __int64 v7; // r14
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v20; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v21; // [rsp+20h] [rbp-28h]
  unsigned __int16 v22; // [rsp+28h] [rbp-20h]
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v23; // [rsp+30h] [rbp-18h]

  v7 = a3;
  v8 = 0xFFFFFFFFLL;
  for ( i = -1; ; v8 = i )
  {
    v10 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, _QWORD, unsigned int *))(a2 + 96))(
            a1,
            v8,
            a6,
            &i);
    v13 = v10;
    if ( v10 == -1071774925 )
      break;
    if ( v10 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      v18[3] = (int)a6;
      v18[4] = a1;
      v18[5] = v7;
LABEL_10:
      v18[6] = v13;
      WdLogEvent5_WdError(v18);
      return (unsigned int)v13;
    }
    v14 = AddPresentPath(a1, (const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)a2, v7, i, v21, v22, v23);
    v13 = v14;
    if ( v14 != -1071774975 )
    {
      if ( v14 >= 0 )
        return 0LL;
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
      v18[3] = v7;
      v18[4] = i;
      v18[5] = a1;
      goto LABEL_10;
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16, v15);
    v17[3] = v7;
    v17[4] = i;
    v17[5] = a1;
    WdLogEvent5_WdDmmEvent(v17);
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v12, v11);
  v20[3] = (int)a6;
  v20[4] = a1;
  v20[5] = v7;
  WdLogEvent5_WdDmmEvent(v20);
  return 3223192371LL;
}
