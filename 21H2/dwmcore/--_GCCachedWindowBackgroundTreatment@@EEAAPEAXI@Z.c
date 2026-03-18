/*
 * XREFs of ??_GCCachedWindowBackgroundTreatment@@EEAAPEAXI@Z @ 0x180009500
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCachedWindowBackgroundTreatment@@EEAA@XZ @ 0x18000953C (--1CCachedWindowBackgroundTreatment@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CCachedWindowBackgroundTreatment *__fastcall CCachedWindowBackgroundTreatment::`scalar deleting destructor'(
        CCachedWindowBackgroundTreatment *this,
        char a2)
{
  CCachedWindowBackgroundTreatment::~CCachedWindowBackgroundTreatment(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
