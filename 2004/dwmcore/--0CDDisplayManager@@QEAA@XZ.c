/*
 * XREFs of ??0CDDisplayManager@@QEAA@XZ @ 0x1800E2434
 * Callers:
 *     _dynamic_initializer_for__g_DDisplayManager__ @ 0x1800036B0 (_dynamic_initializer_for__g_DDisplayManager__.c)
 * Callees:
 *     <none>
 */

CDDisplayManager *__fastcall CDDisplayManager::CDDisplayManager(CDDisplayManager *this)
{
  CDDisplayManager *result; // rax

  qword_1803495D8 = 0LL;
  result = (CDDisplayManager *)&g_DDisplayManager;
  dword_1803495E0 = 0;
  g_DDisplayManager = 0LL;
  return result;
}
