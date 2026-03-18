/*
 * XREFs of ??1CChannelTable@@UEAA@XZ @ 0x1801A99C8
 * Callers:
 *     ??1CInternalMilCmdConnection@@UEAA@XZ @ 0x180193A30 (--1CInternalMilCmdConnection@@UEAA@XZ.c)
 *     ??_GCChannelTable@@UEAAPEAXI@Z @ 0x1801A9A10 (--_GCChannelTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CChannelTable::~CChannelTable(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CChannelTable::`vftable';
  DeleteCriticalSection(this + 1);
  LockSemaphore = this->LockSemaphore;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&HANDLE_TABLE::`vftable';
  DefaultHeap::Free(LockSemaphore);
}
