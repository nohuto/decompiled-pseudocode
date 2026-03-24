/*
 * XREFs of DpiFdoInitializeDisplayDiagnostics @ 0x1C0021A68
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C018071C (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiFdoCleanupDisplayDiagnostics @ 0x1C0021AE4 (DpiFdoCleanupDisplayDiagnostics.c)
 *     DpiQueryMiniportInterface @ 0x1C017FA18 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeDisplayDiagnostics(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  int MiniportInterface; // ebx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+58h] [rbp+10h]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 64);
  MiniportInterface = 0;
  v9 = v2;
  v4 = v2 + 5656;
  if ( !*(_WORD *)(v2 + 5656) )
  {
    MiniportInterface = DpiQueryMiniportInterface(v1, (unsigned int)&GUID_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE, 48, 1);
    if ( MiniportInterface >= 0 && (*(_WORD *)v4 != 48 || !*(_QWORD *)(v4 + 32) || !*(_QWORD *)(v4 + 40)) )
    {
      v8 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v8 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v8);
      MiniportInterface = -1073741823;
    }
    v2 = v9;
  }
  if ( MiniportInterface < 0 )
    DpiFdoCleanupDisplayDiagnostics(v2);
  return (unsigned int)MiniportInterface;
}
