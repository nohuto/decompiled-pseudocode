/*
 * XREFs of ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C0299B68
 * Callers:
 *     OutputDuplGetDiagnosticBuffer @ 0x1C029DA08 (OutputDuplGetDiagnosticBuffer.c)
 * Callees:
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0044D94 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z @ 0x1C0299BDC (-GetDiagnosticBufferSize@OUTPUTDUPL_MGR@@AEBAIH@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C029A270 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDiagnosticBuffer(
        OUTPUTDUPL_MGR **this,
        struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2)
{
  OUTPUTDUPL_MGR *v5; // rcx
  unsigned int DiagnosticBufferSize; // eax
  DXGFASTMUTEX **v7; // rcx
  unsigned int *v8; // r8

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  if ( *(_DWORD *)a2 )
    v5 = this[7];
  else
    v5 = this[8];
  if ( v5 )
  {
    DiagnosticBufferSize = OUTPUTDUPL_MGR::GetDiagnosticBufferSize(v5, *(_DWORD *)a2);
    if ( *v8 < DiagnosticBufferSize )
    {
      *v8 = DiagnosticBufferSize;
      return 1075707914LL;
    }
    DXGDIAGNOSTICS::ReadDiagnostics(v7, (unsigned __int8 *)a2 + 8, v8, -1);
  }
  else
  {
    *((_DWORD *)a2 + 1) = 0;
  }
  return 0LL;
}
