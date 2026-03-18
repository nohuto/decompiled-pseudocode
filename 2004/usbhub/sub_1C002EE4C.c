/*
 * XREFs of sub_1C002EE4C @ 0x1C002EE4C
 * Callers:
 *     sub_1C0036430 @ 0x1C0036430 (sub_1C0036430.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

void __fastcall sub_1C002EE4C(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // [rsp+28h] [rbp-10h]

  sub_1C000FD80(a1, 0x8000, 1768834636, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v6 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xCu, (__int64)&unk_1C0062C18, v6);
  }
  sub_1C000FD80(a1, 0x2000, 1768843604, a2 + 2744, (__int64)sub_1C002EFC0);
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = 1332899156LL;
  *(_QWORD *)(v4 + 48) = v5;
  *(_DWORD *)(v4 + 72) = 1349086820;
  *(_DWORD *)(a2 + 2824) = 4;
  *(_DWORD *)(a2 + 2832) = 500;
}
