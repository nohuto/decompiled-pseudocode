/*
 * XREFs of ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1405C6E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x1405C6D14 (--1SC_DISK@@UEAA@XZ.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140617060 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

SC_DISK *__fastcall SC_DISK::`scalar deleting destructor'(SC_DISK *Buffer, char a2)
{
  SC_DISK::~SC_DISK(Buffer);
  if ( (a2 & 1) != 0 )
    SC_ENV::Free(Buffer);
  return Buffer;
}
