/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x1800DB154
 * Callers:
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x1800035E0 (_dynamic_initializer_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

CDisplayManager *__fastcall CDisplayManager::CDisplayManager(CDisplayManager *this)
{
  CDisplayManager *result; // rax

  InitializeCriticalSection(&g_DisplayManager);
  result = (CDisplayManager *)&g_DisplayManager;
  qword_180349558 = 0LL;
  hObject = 0LL;
  dword_180349568 = 0;
  unk_18034956C = 0;
  return result;
}
