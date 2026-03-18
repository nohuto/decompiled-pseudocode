/*
 * XREFs of ?IsCurrentConsoleSession@@YAEXZ @ 0x1C0043CBC
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C01F2964 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02BC3EC (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C030A8A0 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 */

bool IsCurrentConsoleSession(void)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONMGR *SessionMgr; // rbx

  Global = DXGGLOBAL_GetGlobal();
  SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
  return (unsigned int)PsGetCurrentProcessSessionId() == *((_DWORD *)SessionMgr + 36);
}
