/*
 * XREFs of ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C039C580
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0399E6C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010C68 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C039D14C (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogCommitVidPnFailedPacket(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  const struct DMMVIDPNTOPOLOGY *v9; // rbp
  __int64 v10; // rbx
  unsigned int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // r8d
  int v16; // eax
  int v17; // r8d
  signed int v18; // eax
  __int64 v19; // rcx
  unsigned int CurrentProcessSessionId; // eax

  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)a1);
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 48);
    v9 = (const struct DMMVIDPNTOPOLOGY *)(v6 + 96);
    v10 = *(_QWORD *)(v8 + 8);
    if ( !v10 )
    {
      WdLogSingleEntry0(1LL);
      v10 = *(_QWORD *)(v8 + 8);
    }
    v11 = *((_DWORD *)v9 + 10);
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 404LL);
    v13 = operator new[](144 * v11 + 80, 0x4E506456u, 256LL, v7);
    v14 = v13;
    if ( v13 )
    {
      *(_DWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 32) = 0LL;
      *(_DWORD *)v13 = 33;
      *(_DWORD *)(v13 + 4) = 144 * v11 + 80;
      *(_OWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 24) = 0LL;
      v15 = *(_DWORD *)(v13 + 68);
      *(_DWORD *)(v13 + 48) = a2;
      *(_QWORD *)(v13 + 52) = v12;
      *(_DWORD *)(v13 + 60) = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(v13 + 64) = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(v13 + 68) ^= (*(_DWORD *)(a1 + 24) ^ v15) & 1;
      v16 = *(_DWORD *)(v13 + 68);
      v17 = (*(_DWORD *)(a1 + 24) ^ *(_DWORD *)(v14 + 68)) & 2;
      *(_DWORD *)(v14 + 72) = a3;
      *(_DWORD *)(v14 + 76) = v11;
      *(_DWORD *)(v14 + 68) = v16 ^ v17;
      v18 = DmmStoreVidPnPathDataIntoDiagPacket(v9, v11, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v14 + 80));
      if ( v18 < 0
        || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19),
            v18 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14, CurrentProcessSessionId),
            v18 < 0) )
      {
        DxgkLogCodePointPacket(0x37u, v18, 0, 0, v12);
      }
      operator delete[]((void *)v14);
    }
    else
    {
      DxgkLogCodePointPacket(0x37u, 0xC0000017, 0, 0, v12);
    }
  }
  else
  {
    DxgkLogCodePointPacket(0x37u, 0xC000000D, 0, 0, 0LL);
  }
}
