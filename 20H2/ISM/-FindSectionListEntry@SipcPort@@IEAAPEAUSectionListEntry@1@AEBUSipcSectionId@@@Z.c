/*
 * XREFs of ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z @ 0x1800C03EC
 * Callers:
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800BFAA0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0740 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18004A62F (memcmp_0.c)
 */

struct SipcPort::SectionListEntry *__fastcall SipcPort::FindSectionListEntry(
        SipcPort *this,
        const struct SipcSectionId *a2)
{
  char *v2; // rsi
  char *i; // rbx

  v2 = (char *)this + 16;
  for ( i = (char *)*((_QWORD *)this + 2); i != v2; i = *(char **)i )
  {
    if ( !memcmp_0(
            a2,
            (const void *)(((*(_QWORD *)(((unsigned __int64)(i - 8) & -(__int64)(i != 0LL)) + 0x20) - 40LL) & 0xFFFFFFFFFFFFFFF8uLL)
                         + 8
                         + *(_QWORD *)(((unsigned __int64)(i - 8) & -(__int64)(i != 0LL)) + 0x18)),
            0x20uLL) )
      return (struct SipcPort::SectionListEntry *)((unsigned __int64)(i - 8) & -(__int64)(i != 0LL));
  }
  return 0LL;
}
