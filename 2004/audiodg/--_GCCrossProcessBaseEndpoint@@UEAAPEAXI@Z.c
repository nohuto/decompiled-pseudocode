/*
 * XREFs of ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140053520
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400169C4 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrossProcessBaseEndpoint *__fastcall CCrossProcessBaseEndpoint::`scalar deleting destructor'(
        CCrossProcessBaseEndpoint *this,
        char a2)
{
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
