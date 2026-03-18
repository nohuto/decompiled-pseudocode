/*
 * XREFs of ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C039D14C
 * Callers:
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C039C580 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C039C714 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@Z @ 0x1C01C0E00 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall DmmStoreVidPnPathDataIntoDiagPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *a3)
{
  char *v3; // rbp
  __int64 v4; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 Container; // rax
  _QWORD *v15; // rbx
  unsigned int v16; // ebp
  _QWORD *v17; // rsi
  int v18; // ecx
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  _QWORD *v27; // rax
  _OWORD v28[10]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = (char *)a1 + 160;
  v4 = a2;
  v7 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    v8 = *(_QWORD *)(v7 + 8);
  }
  v9 = *(_QWORD *)(v8 + 16);
  v10 = *((_DWORD *)a1 + 10);
  if ( v10 <= (unsigned int)v4 )
  {
    v15 = (_QWORD *)((char *)a1 + 24);
    v16 = 0;
    if ( (_QWORD *)*v15 != v15 )
    {
      v17 = (_QWORD *)(*v15 - 8LL);
      while ( v17 && v16 < (unsigned int)v4 )
      {
        *((_DWORD *)a3 + 6) = *(_DWORD *)(v17[11] + 24LL);
        v18 = *(_DWORD *)(v17[12] + 24LL);
        *(_QWORD *)a3 |= 0x600000000000uLL;
        *((_DWORD *)a3 + 7) = v18;
        *((_QWORD *)a3 + 2) = *(_QWORD *)(v9 + 404);
        *(_QWORD *)a3 |= 0x100000000000uLL;
        memset(v28, 0, sizeof(v28));
        _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3>((__int64)v17, (__int64)v28);
        v19 = *(_QWORD *)&v28[8];
        v20 = v28[1];
        *(_OWORD *)a3 = v28[0];
        v21 = v28[2];
        *((_OWORD *)a3 + 1) = v20;
        v22 = v28[3];
        *((_OWORD *)a3 + 2) = v21;
        v23 = v28[4];
        *((_OWORD *)a3 + 3) = v22;
        v24 = v28[5];
        *((_OWORD *)a3 + 4) = v23;
        v25 = v28[6];
        *((_OWORD *)a3 + 5) = v24;
        v26 = v28[7];
        *((_OWORD *)a3 + 6) = v25;
        *((_OWORD *)a3 + 7) = v26;
        *((_QWORD *)a3 + 16) = v19;
        *((_DWORD *)a3 + 34) = DWORD2(v28[8]);
        v27 = (_QWORD *)v17[1];
        v17 = v27 - 1;
        if ( v27 == v15 )
          v17 = 0LL;
        a3 = (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)((char *)a3 + 144);
        ++v16;
      }
    }
    return 0LL;
  }
  else
  {
    v11 = v4;
    v12 = v10;
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v3);
    WdLogSingleEntry3(2LL, Container, v12, v11);
    return 3221225507LL;
  }
}
