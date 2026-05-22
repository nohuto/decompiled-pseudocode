/*
 * XREFs of ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x1800C04A8
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800399E0 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x1800C1950 (-UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BEBB0 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z @ 0x1800C0470 (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z.c)
 */

__int64 __fastcall SipcPort::FreeSection(SipcPort *this, void *a2)
{
  struct SipcPort::SectionListEntry *SectionListEntry; // rax
  struct SipcPort::SectionListEntry *v4; // rbx
  __int64 result; // rax
  struct SipcPort::SectionListEntry **v6; // rcx
  struct SipcPort::SectionListEntry **v7; // rdx

  SectionListEntry = SipcPort::FindSectionListEntry(this, a2);
  v4 = SectionListEntry;
  if ( SectionListEntry )
  {
    result = (*(__int64 (__fastcall **)(struct SipcPort::SectionListEntry *))(*(_QWORD *)SectionListEntry + 8LL))(SectionListEntry);
    if ( (int)result >= 0 )
    {
      v6 = (struct SipcPort::SectionListEntry **)*((_QWORD *)v4 + 1);
      if ( v6[1] != (struct SipcPort::SectionListEntry *)((char *)v4 + 8)
        || (v7 = (struct SipcPort::SectionListEntry **)*((_QWORD *)v4 + 2),
            *v7 != (struct SipcPort::SectionListEntry *)((char *)v4 + 8)) )
      {
        __fastfail(3u);
      }
      *v7 = (struct SipcPort::SectionListEntry *)v6;
      v6[1] = (struct SipcPort::SectionListEntry *)v7;
      --*((_QWORD *)this + 4);
      (*(void (__fastcall **)(struct SipcPort::SectionListEntry *))(*(_QWORD *)v4 + 16LL))(v4);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
