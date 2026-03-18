/*
 * XREFs of sub_1C004D180 @ 0x1C004D180
 * Callers:
 *     sub_1C004E0B0 @ 0x1C004E0B0 (sub_1C004E0B0.c)
 * Callees:
 *     sub_1C00015A0 @ 0x1C00015A0 (sub_1C00015A0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 *     sub_1C004D340 @ 0x1C004D340 (sub_1C004D340.c)
 */

__int64 __fastcall sub_1C004D180(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // rax
  int v10; // [rsp+28h] [rbp-20h]

  v6 = sub_1C0011220(a3);
  v7 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v10 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x23u, (__int64)&unk_1C0062100, v10);
  }
  sub_1C000FD80(a1, 1024, 1883461955, a2, a3);
  if ( *((_BYTE *)v6 + 2740) )
  {
    if ( v7[702] == 2 )
    {
      v8 = *((_QWORD *)v6 + 349);
      if ( v8 )
      {
        *(_DWORD *)(v8 + 48) = 0;
        IofCompleteRequest(*((PIRP *)v6 + 349), 0);
      }
    }
  }
  else
  {
    v6[355] |= 0x20000u;
    sub_1C004D340(a1, a2, a3);
    sub_1C00015A0(a1, a2);
    sub_1C0034AF8(a1, *(_WORD *)(a2 + 4), *(_QWORD *)(a2 + 376), 0);
  }
  return 0LL;
}
