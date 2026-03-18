/*
 * XREFs of ??_ECCachedWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x180011A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCachedWindowBackgroundTreatment@@UEAA@XZ @ 0x180011ABC (--1CCachedWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

CCachedWindowBackgroundTreatment *__fastcall CCachedWindowBackgroundTreatment::`vector deleting destructor'(
        CCachedWindowBackgroundTreatment *this,
        char a2)
{
  CCachedWindowBackgroundTreatment::~CCachedWindowBackgroundTreatment(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
