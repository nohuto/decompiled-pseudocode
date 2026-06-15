/*
 * XREFs of ??_GEndpointDevice@@MEAAPEAXI@Z @ 0x18013F8B0
 * Callers:
 *     ??_EEndpointDevice@@O7EAAPEAXI@Z @ 0x180075A80 (--_EEndpointDevice@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EndpointDevice@@MEAA@XZ @ 0x18013F790 (--1EndpointDevice@@MEAA@XZ.c)
 */

EndpointDevice *__fastcall EndpointDevice::`scalar deleting destructor'(EndpointDevice *this, char a2)
{
  EndpointDevice::~EndpointDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
