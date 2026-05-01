/*
 * XREFs of ??_ECSwitchItemGrid@@UEAAPEAXI@Z @ 0x180385A30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1CSwitchItemGrid@@UEAA@XZ @ 0x180385934 (--1CSwitchItemGrid@@UEAA@XZ.c)
 */

CSwitchItemGrid *__fastcall CSwitchItemGrid::`vector deleting destructor'(CSwitchItemGrid *this, char a2)
{
  CSwitchItemGrid::~CSwitchItemGrid(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
