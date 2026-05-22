/*
 * XREFs of ?FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ @ 0x1800C0A30
 * Callers:
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0C30 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AlpcPort::AlpcSectionListEntry::FreeSectionEntry(AlpcPort::AlpcSectionListEntry *this)
{
  if ( *((_BYTE *)this + 59) )
  {
    AlpcPort::AlpcSectionListEntry::`vector deleting destructor'(this, 1);
  }
  else
  {
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_WORD *)this + 28) = 0;
    *((_BYTE *)this + 58) = 0;
    NtList<AlpcPort::AlpcSectionListEntry>::PushBack(*((_QWORD *)this + 10) + 64LL, this);
  }
}
