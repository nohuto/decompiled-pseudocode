/*
 * XREFs of ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C03217F8
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C031FEB8 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x1C002840C (--0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(OUTPUTDUPL_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax

  if ( !*((_QWORD *)this + 10) && g_IsInternalReleaseOrDbg )
  {
    v5 = operator new[](0x70uLL, 0x674D444Fu, 256LL, a4);
    if ( v5 )
    {
      v6 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v5, 0x80000u, 1, 256LL, 0x12Cu);
      *((_QWORD *)this + 10) = v6;
      if ( v6 )
        return;
    }
    else
    {
      *((_QWORD *)this + 10) = 0LL;
    }
    WdLogSingleEntry1(6LL, 943LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to create high frequency diagnostic buffer.",
      943LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
