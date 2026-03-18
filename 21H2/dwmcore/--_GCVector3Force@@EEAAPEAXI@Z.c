/*
 * XREFs of ??_GCVector3Force@@EEAAPEAXI@Z @ 0x180225AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CVector3Force@@EEAA@XZ @ 0x180225954 (--1CVector3Force@@EEAA@XZ.c)
 */

CVector3Force *__fastcall CVector3Force::`scalar deleting destructor'(CVector3Force *this, char a2)
{
  CVector3Force::~CVector3Force(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
