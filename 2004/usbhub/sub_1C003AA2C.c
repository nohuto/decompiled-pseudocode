/*
 * XREFs of sub_1C003AA2C @ 0x1C003AA2C
 * Callers:
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C0034F64 @ 0x1C0034F64 (sub_1C0034F64.c)
 *     sub_1C004C7A4 @ 0x1C004C7A4 (sub_1C004C7A4.c)
 *     sub_1C004D340 @ 0x1C004D340 (sub_1C004D340.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C0036FAC @ 0x1C0036FAC (sub_1C0036FAC.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 */

void __fastcall sub_1C003AA2C(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // r8
  KIRQL v9; // dl

  sub_1C001CDA8(a1, a4, a3);
  sub_1C000FD80(a1, 2, 1716736630, 0LL, a4);
  sub_1C000F050(a1);
  if ( (sub_1C0011220(a2)[355] & 0x200) != 0 )
    USBD_MarkDeviceAsDisconnected(a2);
  v8 = (unsigned int)sub_1C0011220(a2)[281];
  if ( (int)v8 > 0 )
  {
    if ( (int)v8 <= 2 )
    {
      sub_1C0054AFC(a1, a2, v8);
      return;
    }
    if ( (_DWORD)v8 == 3 )
    {
      sub_1C0036FAC(a1, a2, v8, a3, a4);
      return;
    }
  }
  *(_DWORD *)(a4 + 136) = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  v9 = *(_BYTE *)(a4 + 132);
  *(_DWORD *)(a4 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v9);
}
