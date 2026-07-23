/*
 * XREFs of ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1405C8E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x1405C8D88 (--1SC_DEVICE@@UEAA@XZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140617060 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

SC_DEVICE *__fastcall SC_DEVICE::`scalar deleting destructor'(SC_DEVICE *Buffer, char a2)
{
  SC_DEVICE::~SC_DEVICE(Buffer);
  if ( (a2 & 1) != 0 )
    SC_ENV::Free(Buffer);
  return Buffer;
}
