/*
 * XREFs of sub_1C003A2BC @ 0x1C003A2BC
 * Callers:
 *     sub_1C00023E0 @ 0x1C00023E0 (sub_1C00023E0.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C0017FEC @ 0x1C0017FEC (sub_1C0017FEC.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C0036194 @ 0x1C0036194 (sub_1C0036194.c)
 *     sub_1C0037600 @ 0x1C0037600 (sub_1C0037600.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 */

void __fastcall sub_1C003A2BC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  KIRQL v10; // dl

  sub_1C0037600(a1, a3);
  sub_1C001CDA8(v8, a4, 10);
  sub_1C000FD80(a1, 2, 1716736630, 0LL, a4);
  v9 = (unsigned int)sub_1C0011220(a2)[281];
  if ( (_DWORD)v9 == 1 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E62C((__int64)DeviceObject->DeviceExtension, v9, 1u, 0x45u, (__int64)"FKh&", a2);
    sub_1C000FD80(a1, 4, 1685283663, a2, a4);
    sub_1C0054AFC(a1, a2, 1LL);
  }
  else if ( (_DWORD)v9 == 2 || (int)v9 > 2 && (int)v9 <= 4 )
  {
    sub_1C0036194(a2, v9, 10);
    *(_DWORD *)(a4 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a4 + 132));
    sub_1C001518C(a1, a2, -1073741823);
    sub_1C0017FEC(a1, a3);
  }
  else
  {
    *(_DWORD *)(a4 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    v10 = *(_BYTE *)(a4 + 132);
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v10);
  }
}
