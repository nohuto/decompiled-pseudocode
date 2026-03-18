/*
 * XREFs of ??1CInternalMilCmdConnection@@EEAA@XZ @ 0x18014E8D8
 * Callers:
 *     ??_GCInternalMilCmdConnection@@EEAAPEAXI@Z @ 0x18014E960 (--_GCInternalMilCmdConnection@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x18004437C (-FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x18014ECBC (--1CChannelTable@@UEAA@XZ.c)
 */

void __fastcall CInternalMilCmdConnection::~CInternalMilCmdConnection(CInternalMilCmdConnection *this)
{
  *(_QWORD *)this = &CInternalMilCmdConnection::`vftable';
  CInternalMilCmdConnection::FreeBatchPool((union _SLIST_HEADER *)this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  CChannelTable::~CChannelTable((CInternalMilCmdConnection *)((char *)this + 64));
  CConnection::~CConnection(this);
}
