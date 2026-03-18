/*
 * XREFs of ??0CDDisplayManager@@QEAA@XZ @ 0x1800F85C0
 * Callers:
 *     _dynamic_initializer_for__g_DDisplayManager__ @ 0x180003E90 (_dynamic_initializer_for__g_DDisplayManager__.c)
 * Callees:
 *     <none>
 */

CDDisplayManager *__fastcall CDDisplayManager::CDDisplayManager(CDDisplayManager *this)
{
  CDDisplayManager *result; // rax

  qword_1803D39D8 = 0LL;
  dword_1803D39E0 = 0;
  qword_1803D39F8 = 0LL;
  result = (CDDisplayManager *)&g_DDisplayManager;
  g_DDisplayManager = 0LL;
  xmmword_1803D39E8 = 0LL;
  return result;
}
