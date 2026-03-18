/*
 * XREFs of sub_1C003F208 @ 0x1C003F208
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003D9B0 @ 0x1C003D9B0 (sub_1C003D9B0.c)
 *     sub_1C0040ACC @ 0x1C0040ACC (sub_1C0040ACC.c)
 *     sub_1C0040CF4 @ 0x1C0040CF4 (sub_1C0040CF4.c)
 *     sub_1C0041094 @ 0x1C0041094 (sub_1C0041094.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C003F208(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 MasterIrp; // r14
  unsigned __int64 v7; // r15
  _DWORD *v8; // rax
  _QWORD *v9; // r12
  int v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v14; // [rsp+28h] [rbp-60h]
  char v15; // [rsp+98h] [rbp+10h] BYREF
  int v16; // [rsp+A0h] [rbp+18h] BYREF

  v15 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x26u, (__int64)&unk_1C0062E18);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v7 = *(unsigned int *)(a3 + 8);
  v16 = 272;
  sub_1C000FD80(a1, 32, 1768898145, (__int64)a2, MasterIrp);
  v8 = sub_1C000F050(a1);
  v9 = (_QWORD *)sub_1C0004060(a1, (__int64)(v8 + 434), (__int64)a2, 1430414185, 1);
  if ( v9 )
  {
    v10 = sub_1C003D9B0(a1, 0xF00D000A, &v15);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      v10 = sub_1C0040CF4(a1, 272, (_DWORD)a2, a3, 4, 12);
      if ( (v10 & 0xC0000000) == 0xC0000000 )
      {
        v10 = -1073741811;
      }
      else
      {
        v11 = sub_1C0016CA0(a1, *(_WORD *)MasterIrp);
        sub_1C001D340((__m128 *)MasterIrp, 0, v7);
        if ( v11 )
        {
          v10 = 0;
          *(_DWORD *)MasterIrp = *(unsigned __int16 *)(v11 + 4);
          *(_QWORD *)(MasterIrp + 4) = *(unsigned int *)(v11 + 428);
          a2->IoStatus.Information = 12LL;
        }
      }
    }
  }
  else
  {
    v10 = -1073741670;
  }
  sub_1C000FD80(a1, 32, 1768897633, (__int64)a2, v10);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v14) = v10;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x27u, (__int64)&unk_1C0062E18, v14);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v10) )
    sub_1C004A608(a1, 0, 91, (unsigned int)&v16, 4, v10, 0, (__int64)aIoctlC, 1838, 0);
  if ( v15 )
    sub_1C0041094(a1, 4027383818LL);
  sub_1C0040ACC(a1, a2);
  sub_1C000F050(a1);
  sub_1C0003610(a1, v12, v9);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
