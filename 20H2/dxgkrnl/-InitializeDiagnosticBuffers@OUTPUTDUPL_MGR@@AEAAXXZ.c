/*
 * XREFs of ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0299184
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0297BAC (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z @ 0x1C0022680 (--0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z.c)
 *     ?GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z @ 0x1C0298BFC (-GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(OUTPUTDUPL_MGR *this)
{
  unsigned int DiagnosticBufferSize; // edi
  DXGDIAGNOSTICS *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned int v8; // edi
  DXGDIAGNOSTICS *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  if ( !*((_QWORD *)this + 7) )
  {
    DiagnosticBufferSize = OUTPUTDUPL_MGR::GetDiagnosticBufferSize(this, 1);
    if ( DiagnosticBufferSize )
    {
      v3 = (DXGDIAGNOSTICS *)operator new[](0x40uLL, 0x674D444Fu, PagedPool);
      if ( v3 )
        v3 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v3, DiagnosticBufferSize, 1, PagedPool, 0x12Cu);
      *((_QWORD *)this + 7) = v3;
      if ( !v3 )
      {
        v7 = WdLogNewEntry5_WdLowResource(this, v4, v5, v6);
        *(_QWORD *)(v7 + 24) = 967LL;
        WdLogEvent5_WdLowResource(v7);
      }
    }
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v8 = OUTPUTDUPL_MGR::GetDiagnosticBufferSize(this, 0);
    if ( v8 )
    {
      v9 = (DXGDIAGNOSTICS *)operator new[](0x40uLL, 0x674D444Fu, PagedPool);
      if ( v9 )
        v9 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v9, v8, 1, PagedPool, 0x12Cu);
      *((_QWORD *)this + 8) = v9;
      if ( !v9 )
      {
        v14 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
        *(_QWORD *)(v14 + 24) = 980LL;
        WdLogEvent5_WdLowResource(v14);
      }
    }
  }
}
