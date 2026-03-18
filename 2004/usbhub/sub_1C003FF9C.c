/*
 * XREFs of sub_1C003FF9C @ 0x1C003FF9C
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002C2FC @ 0x1C002C2FC (sub_1C002C2FC.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C003D9B0 @ 0x1C003D9B0 (sub_1C003D9B0.c)
 *     sub_1C0040ACC @ 0x1C0040ACC (sub_1C0040ACC.c)
 *     sub_1C0040CF4 @ 0x1C0040CF4 (sub_1C0040CF4.c)
 *     sub_1C0041094 @ 0x1C0041094 (sub_1C0041094.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C003FF9C(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 MasterIrp; // r15
  unsigned __int64 v7; // r13
  _DWORD *v8; // rax
  _QWORD *v9; // r12
  int v10; // ebx
  _DWORD *v11; // r14
  __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+28h] [rbp-60h]
  char v17; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+18h] BYREF
  int v19; // [rsp+A8h] [rbp+20h] BYREF

  v17 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E62C(
      (__int64)DeviceObject->DeviceExtension,
      (__int64)&unk_1C0062E18,
      2u,
      0x24u,
      (__int64)&unk_1C0062E18,
      a2);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v7 = *(unsigned int *)(a3 + 8);
  v19 = 261;
  sub_1C000FD80(a1, 32, 1768898099, (__int64)a2, MasterIrp);
  v8 = sub_1C000F050(a1);
  v9 = (_QWORD *)sub_1C0004060(a1, (__int64)(v8 + 434), (__int64)a2, 1430414185, 1);
  if ( v9 )
  {
    v10 = sub_1C003D9B0(a1, 0xF00D0003, &v17);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      v10 = sub_1C0040CF4(a1, 261, (_DWORD)a2, a3, 4, 10);
      if ( (v10 & 0xC0000000) != 0xC0000000 )
      {
        v11 = (_DWORD *)(MasterIrp + 4);
        v12 = sub_1C0016B5C(a1, *(_WORD *)MasterIrp, (__int64)a2, 0x496C3033u);
        if ( v12 )
        {
          v18 = 0;
          sub_1C001D340((__m128 *)MasterIrp, 0, v7);
          v10 = sub_1C002C2FC(a1, v12, (__m128 *)(MasterIrp + 4), (int)v7 - 4, (__int32 *)&v18);
          v13 = v18;
          if ( v18 >= 4 )
            *v11 += 4;
          a2->IoStatus.Information = v13 + 4;
          sub_1C00171A0(a1, v12, (__int64)a2, 0x496C3033u);
        }
        else
        {
          *v11 = 10;
          *(_WORD *)(MasterIrp + 8) = 0;
          v10 = 0;
          a2->IoStatus.Information = 10LL;
        }
      }
    }
  }
  else
  {
    v10 = -1073741670;
  }
  sub_1C000FD80(a1, 32, 1768897587, (__int64)a2, v10);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v16) = v10;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x25u, (__int64)&unk_1C0062E18, v16);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v10) )
    sub_1C004A608(a1, 0, 91, (unsigned int)&v19, 4, v10, 0, (__int64)aIoctlC, 1715, 0);
  if ( v17 )
    sub_1C0041094(a1, 4027383811LL);
  sub_1C0040ACC(a1, a2);
  sub_1C000F050(a1);
  sub_1C0003610(a1, v14, v9);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
