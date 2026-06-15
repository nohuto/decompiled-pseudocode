/*
 * XREFs of ??_GCSpatialCrossProcessServerEndpoint@@UEAAPEAXI@Z @ 0x14005D380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14005CFD4 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 */

CSpatialCrossProcessServerEndpoint *__fastcall CSpatialCrossProcessServerEndpoint::`scalar deleting destructor'(
        CSpatialCrossProcessServerEndpoint *this,
        int a2,
        int a3)
{
  char v3; // bl

  v3 = a2;
  CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
