/*
 * XREFs of ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800BF530
 * Callers:
 *     ??1AlpcPort@@UEAA@XZ @ 0x1800BF264 (--1AlpcPort@@UEAA@XZ.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800C07B0 (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ @ 0x1800C0A30 (-FreeSectionEntry@AlpcSectionListEntry@AlpcPort@@UEAAXXZ.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0C30 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AlpcSectionListEntry@AlpcPort@@UEAA@XZ @ 0x1800BF2F4 (--1AlpcSectionListEntry@AlpcPort@@UEAA@XZ.c)
 */

AlpcPort::AlpcSectionListEntry *__fastcall AlpcPort::AlpcSectionListEntry::`vector deleting destructor'(
        AlpcPort::AlpcSectionListEntry *this,
        char a2)
{
  AlpcPort::AlpcSectionListEntry::~AlpcSectionListEntry(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
