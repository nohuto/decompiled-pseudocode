/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x1800DF814
 * Callers:
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x1800035F0 (_dynamic_initializer_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

CDisplayManager *__fastcall CDisplayManager::CDisplayManager(CDisplayManager *this)
{
  CDisplayManager *result; // rax

  InitializeCriticalSection(&g_DisplayManager);
  result = (CDisplayManager *)&g_DisplayManager;
  qword_18034B5F8 = 0LL;
  hObject = 0LL;
  dword_18034B608 = 0;
  unk_18034B60C = 0;
  return result;
}
