/*
 * XREFs of ??_GCActivationBasedAppAndGlomCollection@@UEAAPEAXI@Z @ 0x180148770
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CActivationBasedAppAndGlomCollection@@UEAA@XZ @ 0x1801471F4 (--1CActivationBasedAppAndGlomCollection@@UEAA@XZ.c)
 */

CActivationBasedAppAndGlomCollection *__fastcall CActivationBasedAppAndGlomCollection::`scalar deleting destructor'(
        CActivationBasedAppAndGlomCollection *this,
        char a2)
{
  CActivationBasedAppAndGlomCollection::~CActivationBasedAppAndGlomCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
