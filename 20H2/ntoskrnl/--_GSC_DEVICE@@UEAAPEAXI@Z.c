/*
 * XREFs of ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1405C73E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x1405C7328 (--1SC_DEVICE@@UEAA@XZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406D9400 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

SC_DEVICE *__fastcall SC_DEVICE::`scalar deleting destructor'(SC_DEVICE *Buffer, char a2)
{
  SC_DEVICE::~SC_DEVICE(Buffer);
  if ( (a2 & 1) != 0 )
    SC_ENV::Free(Buffer);
  return Buffer;
}
