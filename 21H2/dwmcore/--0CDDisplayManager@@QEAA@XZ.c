/*
 * XREFs of ??0CDDisplayManager@@QEAA@XZ @ 0x1800E6B94
 * Callers:
 *     _dynamic_initializer_for__g_DDisplayManager__ @ 0x1800036C0 (_dynamic_initializer_for__g_DDisplayManager__.c)
 * Callees:
 *     <none>
 */

CDDisplayManager *__fastcall CDDisplayManager::CDDisplayManager(CDDisplayManager *this)
{
  CDDisplayManager *result; // rax

  qword_18034B678 = 0LL;
  result = (CDDisplayManager *)&g_DDisplayManager;
  dword_18034B680 = 0;
  g_DDisplayManager = 0LL;
  return result;
}
