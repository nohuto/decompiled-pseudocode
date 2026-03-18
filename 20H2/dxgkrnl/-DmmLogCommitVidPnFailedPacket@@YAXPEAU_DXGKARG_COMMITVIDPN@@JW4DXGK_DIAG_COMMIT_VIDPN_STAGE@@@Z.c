/*
 * XREFs of ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C02DCF50
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0145900 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0008194 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01362BC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C02DDCF4 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogCommitVidPnFailedPacket(__int64 a1, int a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  const struct DMMVIDPNTOPOLOGY *v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 v13; // rbx
  unsigned int v14; // esi
  char *v15; // rax
  char *v16; // rdi
  int v17; // r8d
  int v18; // eax
  int v19; // r8d
  signed int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int CurrentProcessSessionId; // eax

  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)a1);
  if ( v5 )
  {
    v8 = *(_QWORD *)(v5 + 48);
    v9 = (const struct DMMVIDPNTOPOLOGY *)(v5 + 96);
    v10 = *(_QWORD *)(v8 + 8);
    if ( !v10 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v11);
      v10 = *(_QWORD *)(v8 + 8);
    }
    v12 = *((_DWORD *)v9 + 10);
    v13 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 316LL);
    v14 = 144 * v12 + 80;
    v15 = (char *)operator new[](v14, 0x4E506456u, PagedPool);
    v16 = v15;
    if ( v15 )
    {
      memset(v15, 0, 144 * v12 + 80);
      *((_DWORD *)v16 + 10) = 0;
      *((_QWORD *)v16 + 4) = 0LL;
      *(_DWORD *)v16 = 33;
      *((_DWORD *)v16 + 1) = v14;
      *(_OWORD *)(v16 + 8) = 0LL;
      *((_QWORD *)v16 + 3) = 0LL;
      v17 = *((_DWORD *)v16 + 17);
      *((_DWORD *)v16 + 12) = a2;
      *(_QWORD *)(v16 + 52) = v13;
      *((_DWORD *)v16 + 15) = *(_DWORD *)(a1 + 8);
      *((_DWORD *)v16 + 16) = *(_DWORD *)(a1 + 12);
      *((_DWORD *)v16 + 17) ^= (*(_DWORD *)(a1 + 24) ^ v17) & 1;
      v18 = *((_DWORD *)v16 + 17);
      v19 = (*(_DWORD *)(a1 + 24) ^ v18) & 2;
      *((_DWORD *)v16 + 18) = a3;
      *((_DWORD *)v16 + 19) = v12;
      *((_DWORD *)v16 + 17) = v18 ^ v19;
      v20 = DmmStoreVidPnPathDataIntoDiagPacket(v9, v12, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v16 + 80));
      if ( v20 < 0
        || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22, v21),
            v20 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16, CurrentProcessSessionId),
            v20 < 0) )
      {
        DxgkLogCodePointPacket(0x37u, v20, 0, 0, v13);
      }
      operator delete[](v16);
    }
    else
    {
      DxgkLogCodePointPacket(0x37u, 0xC0000017, 0, 0, v13);
    }
  }
  else
  {
    DxgkLogCodePointPacket(0x37u, 0xC000000D, 0, 0, 0LL);
  }
}
