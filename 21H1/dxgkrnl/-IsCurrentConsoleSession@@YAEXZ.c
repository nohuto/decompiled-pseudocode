/*
 * XREFs of ?IsCurrentConsoleSession@@YAEXZ @ 0x1C00359A0
 * Callers:
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C0164838 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C0209CDC (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C0265794 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 */

bool __fastcall IsCurrentConsoleSession(__int64 a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  int v3; // ebx

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  v3 = *((_DWORD *)DXGGLOBAL::GetSessionMgr(Global) + 32);
  return (unsigned int)PsGetCurrentProcessSessionId() == v3;
}
