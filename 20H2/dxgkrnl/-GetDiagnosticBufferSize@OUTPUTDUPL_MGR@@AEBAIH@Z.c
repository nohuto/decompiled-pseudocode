/*
 * XREFs of ?GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z @ 0x1C0298BFC
 * Callers:
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C0298B88 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0299184 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDiagnosticBufferSize(OUTPUTDUPL_MGR *this, int a2)
{
  if ( a2 )
    return g_IsInternalReleaseOrDbg != 0 ? 0x8000 : 4096;
  else
    return (unsigned __int8)(g_IsInternalReleaseOrDbg != 0) << 19;
}
