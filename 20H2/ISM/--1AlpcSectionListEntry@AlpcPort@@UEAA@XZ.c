/*
 * XREFs of ??1AlpcSectionListEntry@AlpcPort@@UEAA@XZ @ 0x1800BEDF8
 * Callers:
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800BF040 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ @ 0x1800BFD90 (-DestroySection@AlpcSectionListEntry@AlpcPort@@UEAAJXZ.c)
 *     ?FailFast_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800C0244 (-FailFast_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

void __fastcall AlpcPort::AlpcSectionListEntry::~AlpcSectionListEntry(AlpcPort::AlpcSectionListEntry *this)
{
  int v2; // eax
  int v3; // edx
  void *v4; // rcx

  *(_QWORD *)this = &AlpcPort::AlpcSectionListEntry::`vftable';
  v2 = AlpcPort::AlpcSectionListEntry::DestroySection(this);
  if ( v2 < 0 )
  {
    wil::details::in1diag0::FailFast_Hr((wil::details::in1diag0 *)(unsigned int)v2, v3);
    __debugbreak();
  }
  v4 = (void *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  *(_QWORD *)this = &SipcPort::SectionListEntry::`vftable';
}
