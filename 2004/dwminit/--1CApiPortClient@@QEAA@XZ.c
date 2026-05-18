/*
 * XREFs of ??1CApiPortClient@@QEAA@XZ @ 0x180004064
 * Callers:
 *     _dynamic_atexit_destructor_for__g_PortClient__ @ 0x180006410 (_dynamic_atexit_destructor_for__g_PortClient__.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800040BC (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ @ 0x1800046B0 (-ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ.c)
 */

void __fastcall CApiPortClient::~CApiPortClient(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  CApiPortClient *v2; // rcx

  EnterCriticalSection(&CriticalSection);
  CApiPortClient::Disconnect(v1);
  CApiPortClient::ReleaseExtraDataSection(v2);
  byte_18000B7B8 = 1;
  LeaveCriticalSection(&CriticalSection);
  DeleteCriticalSection(&CriticalSection);
}
