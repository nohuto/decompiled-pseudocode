/*
 * XREFs of ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x1C001038C
 * Callers:
 *     ??_EDMMVIDPNTOPOLOGY@@UEAAPEAXI@Z @ 0x1C005B960 (--_EDMMVIDPNTOPOLOGY@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C01295F4 (--1DMMVIDPN@@UEAA@XZ.c)
 * Callees:
 *     ??1?$Set@VDMMVIDPNPRESENTPATH@@@@UEAA@XZ @ 0x1C00103E4 (--1-$Set@VDMMVIDPNPRESENTPATH@@@@UEAA@XZ.c)
 *     ??1ProtectableFromChange@@UEAA@XZ @ 0x1C0010414 (--1ProtectableFromChange@@UEAA@XZ.c)
 */

void __fastcall DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY(DMMVIDPNTOPOLOGY *this)
{
  *((_DWORD *)this + 46) |= 0x6D640000u;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 20) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ProtectableFromChange::~ProtectableFromChange((DMMVIDPNTOPOLOGY *)((char *)this + 56));
  Set<DMMVIDPNPRESENTPATH>::~Set<DMMVIDPNPRESENTPATH>(this);
}
