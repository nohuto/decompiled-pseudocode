/*
 * XREFs of ??_ESwitchItem@@UEAAPEAXI@Z @ 0x18039DF20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??1SwitchItem@@UEAA@XZ @ 0x18039DD40 (--1SwitchItem@@UEAA@XZ.c)
 */

SwitchItem *__fastcall SwitchItem::`vector deleting destructor'(SwitchItem *this, char a2)
{
  SwitchItem::~SwitchItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
