/*
 * XREFs of ??0CApiPortClient@@QEAA@I@Z @ 0x18000B308
 * Callers:
 *     _dynamic_initializer_for__g_PortClient__ @ 0x180001500 (_dynamic_initializer_for__g_PortClient__.c)
 * Callees:
 *     <none>
 */

CApiPortClient *__fastcall CApiPortClient::CApiPortClient(CApiPortClient *this)
{
  CApiPortClient *result; // rax

  g_PortClient = 0;
  BaseAddress = 0LL;
  *(_OWORD *)&hObject = 0LL;
  InitializeCriticalSection(&stru_180014B90);
  result = (CApiPortClient *)&g_PortClient;
  byte_180014BB8 = 0;
  return result;
}
