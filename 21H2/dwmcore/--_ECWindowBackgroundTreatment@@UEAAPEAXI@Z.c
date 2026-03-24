/*
 * XREFs of ??_ECWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x1800C0C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800C0CCC (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
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
