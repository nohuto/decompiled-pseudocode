/*
 * XREFs of ??_ECWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x1800BCE30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800BCE6C (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::`vector deleting destructor'(
        CWindowBackgroundTreatment *this,
        char a2)
{
  CWindowBackgroundTreatment::~CWindowBackgroundTreatment(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
