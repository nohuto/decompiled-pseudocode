/*
 * XREFs of ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x1800C0998
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180039900 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x1800C1EA0 (-UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z @ 0x1800C0960 (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@PEAX@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800C1C70 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall SipcPort::FreeSection(SipcPort *this, void *a2)
{
  struct SipcPort::SectionListEntry *SectionListEntry; // rax
  int v4; // edx
  struct SipcPort::SectionListEntry *v5; // rbx
  __int64 result; // rax
  struct SipcPort::SectionListEntry **v7; // rcx
  struct SipcPort::SectionListEntry **v8; // rdx

  SectionListEntry = SipcPort::FindSectionListEntry(this, a2);
  v5 = SectionListEntry;
  if ( SectionListEntry )
  {
    result = (*(__int64 (__fastcall **)(struct SipcPort::SectionListEntry *))(*(_QWORD *)SectionListEntry + 8LL))(SectionListEntry);
    if ( (int)result >= 0 )
    {
      v7 = (struct SipcPort::SectionListEntry **)*((_QWORD *)v5 + 1);
      if ( v7[1] != (struct SipcPort::SectionListEntry *)((char *)v5 + 8)
        || (v8 = (struct SipcPort::SectionListEntry **)*((_QWORD *)v5 + 2),
            *v8 != (struct SipcPort::SectionListEntry *)((char *)v5 + 8)) )
      {
        __fastfail(3u);
      }
      *v8 = (struct SipcPort::SectionListEntry *)v7;
      v7[1] = (struct SipcPort::SectionListEntry *)v8;
      --*((_QWORD *)this + 4);
      (*(void (__fastcall **)(struct SipcPort::SectionListEntry *))(*(_QWORD *)v5 + 16LL))(v5);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070057LL, v4);
    return 2147942487LL;
  }
  return result;
}
