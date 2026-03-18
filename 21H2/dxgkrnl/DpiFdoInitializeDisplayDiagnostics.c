/*
 * XREFs of DpiFdoInitializeDisplayDiagnostics @ 0x1C00262E8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiFdoCleanupDisplayDiagnostics @ 0x1C002B080 (DpiFdoCleanupDisplayDiagnostics.c)
 *     DpiQueryMiniportInterface @ 0x1C01FA410 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeDisplayDiagnostics(__int64 a1)
{
  __int64 v1; // rdi
  int MiniportInterface; // eax
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 64);
  MiniportInterface = 0;
  if ( !*(_WORD *)(v1 + 5584) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE, 48, 1);
    if ( MiniportInterface >= 0 && (*(_WORD *)(v1 + 5584) != 48 || !*(_QWORD *)(v1 + 5616) || !*(_QWORD *)(v1 + 5624)) )
    {
      v3 = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      goto LABEL_4;
    }
  }
  v3 = MiniportInterface;
  if ( MiniportInterface < 0 )
LABEL_4:
    DpiFdoCleanupDisplayDiagnostics(v1);
  return v3;
}
