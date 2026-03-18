/*
 * XREFs of sub_1C0040864 @ 0x1C0040864
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003D9B0 @ 0x1C003D9B0 (sub_1C003D9B0.c)
 *     sub_1C0040ACC @ 0x1C0040ACC (sub_1C0040ACC.c)
 *     sub_1C0041094 @ 0x1C0041094 (sub_1C0041094.c)
 *     sub_1C00410FC @ 0x1C00410FC (sub_1C00410FC.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0040864(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v5; // rax
  _QWORD *v6; // rbp
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // [rsp+28h] [rbp-50h]
  char v11; // [rsp+88h] [rbp+10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v12 = a3;
  LOBYTE(v12) = 0;
  sub_1C000FD80(a1, 32, 1768898097, (__int64)a2, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x11u, (__int64)&unk_1C0062E18);
  v13 = 275;
  sub_1C000FD80(a1, 32, 1768898098, (__int64)a2, 0LL);
  v11 = sub_1C00410FC();
  v5 = sub_1C000F050(a1);
  v6 = (_QWORD *)sub_1C0004060(a1, (__int64)(v5 + 434), (__int64)a2, 1430414185, 1);
  if ( v6 )
  {
    v7 = sub_1C003D9B0(a1, 0xF00D0275, &v12);
    if ( (v7 & 0xC0000000) != 0xC0000000 )
    {
      sub_1C004A608(a1, 0, 132, (unsigned int)&v11, 1, v7, 0, (__int64)aIoctlC, 452, 0);
      a2->IoStatus.Information = 0LL;
    }
  }
  else
  {
    v7 = -1073741670;
  }
  sub_1C000FD80(a1, 32, 1768897586, (__int64)a2, v7);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v10) = v7;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x12u, (__int64)&unk_1C0062E18, v10);
  }
  if ( (v7 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v7) )
    sub_1C004A608(a1, 0, 91, (unsigned int)&v13, 4, v7, 0, (__int64)aIoctlC, 465, 0);
  if ( (_BYTE)v12 )
    sub_1C0041094(a1, 4027384437LL);
  sub_1C0040ACC(a1, a2);
  sub_1C000F050(a1);
  sub_1C0003610(a1, v8, v6);
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
