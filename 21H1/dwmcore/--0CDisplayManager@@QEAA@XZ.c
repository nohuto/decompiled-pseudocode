/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x1800D33B4
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
  qword_18034D5B8 = 0LL;
  hObject = 0LL;
  dword_18034D5C8 = 0;
  unk_18034D5CC = 0;
  return result;
}
