/*
 * XREFs of sub_1C004028C @ 0x1C004028C
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
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

__int64 __fastcall sub_1C004028C(__int64 a1, IRP *a2, int a3)
{
  _DWORD *v6; // rax
  __int64 MasterIrp; // r14
  _DWORD *v8; // r15
  unsigned int v9; // r10d
  _DWORD *v10; // rax
  _QWORD *v11; // r12
  int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v16; // [rsp+28h] [rbp-60h]
  char v17; // [rsp+98h] [rbp+10h] BYREF
  int v18; // [rsp+A0h] [rbp+18h] BYREF

  v17 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x38u, (__int64)&unk_1C0062E18);
  v18 = 258;
  v6 = sub_1C000F050(a1);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v8 = v6;
  sub_1C000FD80(a1, 32, 1768898102, (__int64)a2, MasterIrp);
  sub_1C001D340((__m128 *)MasterIrp, 0, v9);
  v10 = sub_1C000F050(a1);
  v11 = (_QWORD *)sub_1C0004060(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  if ( v11 )
  {
    v12 = sub_1C003D9B0(a1, 0xF00D0006, &v17);
    if ( (v12 & 0xC0000000) != 0xC0000000 )
    {
      v12 = sub_1C0040CF4(a1, 258, (_DWORD)a2, a3, 0, 76);
      if ( (v12 & 0xC0000000) != 0xC0000000 )
      {
        sub_1C000FD80(a1, 32, 1768896100, (__int64)(v8 + 734), *((unsigned __int8 *)v8 + 2938));
        *(_DWORD *)MasterIrp = 0;
        v12 = 0;
        *(_OWORD *)(MasterIrp + 4) = *(_OWORD *)v13;
        *(_OWORD *)(MasterIrp + 20) = *(_OWORD *)(v13 + 16);
        *(_OWORD *)(MasterIrp + 36) = *(_OWORD *)(v13 + 32);
        *(_OWORD *)(MasterIrp + 52) = *(_OWORD *)(v13 + 48);
        *(_DWORD *)(MasterIrp + 68) = *(_DWORD *)(v13 + 64);
        *(_WORD *)(MasterIrp + 72) = *(_WORD *)(v13 + 68);
        *(_BYTE *)(MasterIrp + 74) = *(_BYTE *)(v13 + 70);
        *(_BYTE *)(MasterIrp + 75) = v8[758] == 100;
        a2->IoStatus.Information = 76LL;
      }
    }
  }
  else
  {
    v12 = -1073741670;
  }
  if ( (v12 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v12) )
    sub_1C004A608(a1, 0, 91, (unsigned int)&v18, 4, v12, 0, (__int64)aIoctlC, 2808, 0);
  if ( v17 )
    sub_1C0041094(a1, 4027383814LL);
  sub_1C000FD80(a1, 32, 1768897590, (__int64)a2, v12);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v16) = v12;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x39u, (__int64)&unk_1C0062E18, v16);
  }
  sub_1C0040ACC(a1, a2);
  sub_1C000F050(a1);
  sub_1C0003610(a1, v14, v11);
  a2->IoStatus.Status = v12;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v12;
}
