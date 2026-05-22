/*
 * XREFs of ??1SipcPort@@UEAA@XZ @ 0x1800BF2B0
 * Callers:
 *     ??1AlpcPort@@UEAA@XZ @ 0x1800BF1C8 (--1AlpcPort@@UEAA@XZ.c)
 *     ??_GSipcPort@@UEAAPEAXI@Z @ 0x1800BF5D0 (--_GSipcPort@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$NtList@USectionListEntry@SipcPort@@@@QEAAXXZ @ 0x1800BFCC0 (-Clear@-$NtList@USectionListEntry@SipcPort@@@@QEAAXXZ.c)
 */

void __fastcall SipcPort::~SipcPort(SipcPort *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &SipcPort::`vftable';
  NtList<SipcPort::SectionListEntry>::Clear((char *)this + 16);
  v2 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
}
