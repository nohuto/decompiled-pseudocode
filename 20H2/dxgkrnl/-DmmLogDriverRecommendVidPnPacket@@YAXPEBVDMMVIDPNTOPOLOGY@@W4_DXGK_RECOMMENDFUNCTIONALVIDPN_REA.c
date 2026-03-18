/*
 * XREFs of ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02DD0F8
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02DEE48 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D03C (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017E58 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019498 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01362BC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C02DDCF4 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogDriverRecommendVidPnPacket(const struct DMMVIDPNTOPOLOGY *a1, __int64 a2)
{
  char *v2; // rdi
  int v4; // r12d
  struct _LUID *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  DXGADAPTER *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // rbx
  unsigned int v18; // esi
  char *v19; // rax
  char *v20; // rdi
  signed int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = (char *)a1 + 160;
  v4 = a2;
  v6 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160, a2) + 48);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, v5);
    WdLogEvent5_WdAssertion(v8);
    v7 = *(_QWORD *)(v6 + 8);
  }
  v9 = *(DXGADAPTER **)(v7 + 16);
  v23 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v9, v5, 0LL, &v23);
  v13 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)v2, v10) + 48);
  v14 = *(_QWORD *)(v13 + 8);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v15);
    v14 = *(_QWORD *)(v13 + 8);
  }
  v16 = *((_DWORD *)a1 + 10);
  v17 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 316LL);
  v18 = 144 * v16 + 56;
  v19 = (char *)operator new[](v18, 0x4E506456u, PagedPool);
  v20 = v19;
  if ( !v19 )
  {
    DxgkLogCodePointPacketForSession(0x38u, v23, 0xC0000017, 0, 0, v17);
    return;
  }
  memset(v19, 0, 144 * v16 + 56);
  *((_DWORD *)v20 + 10) = 0;
  *((_QWORD *)v20 + 4) = 0LL;
  *(_DWORD *)v20 = 34;
  *((_DWORD *)v20 + 1) = v18;
  *(_OWORD *)(v20 + 8) = 0LL;
  *((_QWORD *)v20 + 3) = 0LL;
  *((_DWORD *)v20 + 12) = v4;
  *((_DWORD *)v20 + 13) = v16;
  v21 = DmmStoreVidPnPathDataIntoDiagPacket(a1, v16, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v20 + 56));
  v22 = v23;
  if ( v21 < 0 )
    goto LABEL_10;
  v21 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v20, v23);
  if ( v21 < 0 )
  {
    v22 = v23;
LABEL_10:
    DxgkLogCodePointPacketForSession(0x38u, v22, v21, 0, 0, v17);
  }
  operator delete[](v20);
}
