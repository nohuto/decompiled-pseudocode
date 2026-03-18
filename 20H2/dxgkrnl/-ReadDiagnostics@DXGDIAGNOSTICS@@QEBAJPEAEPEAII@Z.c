/*
 * XREFs of ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0044C94
 * Callers:
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1C0259D1C (DxgkIddGetAdapterSessionDiagnostics.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0266C38 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C0298B88 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02B9408 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02D92F4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C00016AC (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C0036768 (-IsCurrentProcessAdmin@@YAEXZ.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnostics(
        DXGFASTMUTEX **this,
        unsigned __int8 *a2,
        unsigned int *a3,
        int CurrentProcessSessionId)
{
  unsigned int v9; // edi
  unsigned int DiagnosticsInternal; // ebx
  __int64 v11; // rdx

  if ( !a3 )
    return 3221225485LL;
  if ( a2 )
  {
    v9 = *a3;
    if ( *a3 )
      memset(a2, 0, v9);
  }
  else
  {
    v9 = 0;
  }
  if ( CurrentProcessSessionId == -1 && !IsCurrentProcessAdmin() )
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  DXGFASTMUTEX::Acquire(this[7]);
  DiagnosticsInternal = DXGDIAGNOSTICS::ReadDiagnosticsInternal(
                          (DXGDIAGNOSTICS *)this,
                          CurrentProcessSessionId,
                          v9,
                          a2,
                          a3);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this[7], v11);
  if ( *a3 > v9 )
    return (unsigned int)-2147483643;
  return DiagnosticsInternal;
}
