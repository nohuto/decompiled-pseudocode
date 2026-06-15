/*
 * XREFs of ??_ECEndpointCharacteristics@@MEAAPEAXI@Z @ 0x18011A870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x18011987C (--1CEndpointCharacteristics@@MEAA@XZ.c)
 */

CEndpointCharacteristics *__fastcall CEndpointCharacteristics::`vector deleting destructor'(
        CEndpointCharacteristics *this,
        char a2)
{
  CEndpointCharacteristics::~CEndpointCharacteristics(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2220);
  return this;
}
