/*
 * XREFs of ??_ECSwitchItemGrid@@UEAAPEAXI@Z @ 0x1803A6C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1CSwitchItemGrid@@UEAA@XZ @ 0x1803A6B84 (--1CSwitchItemGrid@@UEAA@XZ.c)
 */

CSwitchItemGrid *__fastcall CSwitchItemGrid::`vector deleting destructor'(CSwitchItemGrid *this, char a2)
{
  CSwitchItemGrid::~CSwitchItemGrid(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
