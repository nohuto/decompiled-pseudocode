/*
 * XREFs of ??0CDDisplayManager@@QEAA@XZ @ 0x1800E0F94
 * Callers:
 *     _dynamic_initializer_for__g_DDisplayManager__ @ 0x1800036B0 (_dynamic_initializer_for__g_DDisplayManager__.c)
 * Callees:
 *     <none>
 */

CDDisplayManager *__fastcall CDDisplayManager::CDDisplayManager(CDDisplayManager *this)
{
  CDDisplayManager *result; // rax

  qword_18034D638 = 0LL;
  result = (CDDisplayManager *)&g_DDisplayManager;
  dword_18034D640 = 0;
  g_DDisplayManager = 0LL;
  return result;
}
