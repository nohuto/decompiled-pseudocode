/*
 * XREFs of ??_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140065F70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140065A94 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 */

CSpatialCrossProcessBaseEndpoint *__fastcall CSpatialCrossProcessBaseEndpoint::`scalar deleting destructor'(
        CSpatialCrossProcessBaseEndpoint *this,
        char a2)
{
  CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
