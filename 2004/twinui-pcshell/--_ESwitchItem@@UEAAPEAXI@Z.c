/*
 * XREFs of ??_ESwitchItem@@UEAAPEAXI@Z @ 0x18039E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1SwitchItem@@UEAA@XZ @ 0x18039E600 (--1SwitchItem@@UEAA@XZ.c)
 */

SwitchItem *__fastcall SwitchItem::`vector deleting destructor'(SwitchItem *this, char a2)
{
  SwitchItem::~SwitchItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
