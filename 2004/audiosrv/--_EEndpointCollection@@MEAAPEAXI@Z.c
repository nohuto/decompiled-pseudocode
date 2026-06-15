/*
 * XREFs of ??_EEndpointCollection@@MEAAPEAXI@Z @ 0x18013EB78
 * Callers:
 *     ??_EEndpointCollection@@O7EAAPEAXI@Z @ 0x180075B40 (--_EEndpointCollection@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EndpointCollection@@MEAA@XZ @ 0x18013EAC0 (--1EndpointCollection@@MEAA@XZ.c)
 */

EndpointCollection *__fastcall EndpointCollection::`vector deleting destructor'(EndpointCollection *this, char a2)
{
  EndpointCollection::~EndpointCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
