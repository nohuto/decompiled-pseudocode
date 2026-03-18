/*
 * XREFs of ??0CDDisplayManager@@QEAA@XZ @ 0x1800E2744
 * Callers:
 *     _dynamic_initializer_for__g_DDisplayManager__ @ 0x1800036A0 (_dynamic_initializer_for__g_DDisplayManager__.c)
 * Callees:
 *     <none>
 */

CDDisplayManager *__fastcall CDDisplayManager::CDDisplayManager(CDDisplayManager *this)
{
  CDDisplayManager *result; // rax

  qword_1803485C8 = 0LL;
  result = (CDDisplayManager *)&g_DDisplayManager;
  dword_1803485D0 = 0;
  g_DDisplayManager = 0LL;
  return result;
}
