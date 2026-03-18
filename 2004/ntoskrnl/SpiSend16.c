/*
 * XREFs of SpiSend16 @ 0x1405C611C
 * Callers:
 *     SpiMax311GetByte @ 0x1405C5DC0 (SpiMax311GetByte.c)
 *     SpiMax311PutByte @ 0x1405C5EA0 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x1405C5F30 (SpiMax311RxReady.c)
 *     SpiMax311SetBaud @ 0x1405C5F90 (SpiMax311SetBaud.c)
 *     SpiMax311TxEmpty @ 0x1405C60E4 (SpiMax311TxEmpty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     SpiInit @ 0x1405C5C68 (SpiInit.c)
 */

__int64 __fastcall SpiSend16(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx

  v3 = *a1;
  v4 = (unsigned __int16)a2;
  SpiInit(*a1, a2, a3, word_140CF9528);
  ((void (__fastcall *)(__int64, __int64))off_140C05378)(v3 + 16, 2LL);
  ((void (__fastcall *)(__int64, _QWORD))off_140C05378)(v3 + 96, v4);
  while ( (((__int64 (__fastcall *)(__int64))off_140C05370)(v3 + 40) & 0xD) != 0xC )
    ;
  return ((__int64 (__fastcall *)(__int64))off_140C05370)(v3 + 96);
}
