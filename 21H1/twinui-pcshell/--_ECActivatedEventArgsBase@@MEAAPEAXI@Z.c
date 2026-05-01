/*
 * XREFs of ??_ECActivatedEventArgsBase@@MEAAPEAXI@Z @ 0x18044E710
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActivatedEventArgsBase@@MEAA@XZ @ 0x180049908 (--1CActivatedEventArgsBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 */

CActivatedEventArgsBase *__fastcall CActivatedEventArgsBase::`vector deleting destructor'(
        CActivatedEventArgsBase *this,
        char a2)
{
  CActivatedEventArgsBase::~CActivatedEventArgsBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
