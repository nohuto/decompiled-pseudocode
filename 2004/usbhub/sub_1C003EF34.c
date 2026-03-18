/*
 * XREFs of sub_1C003EF34 @ 0x1C003EF34
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
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

__int64 __fastcall sub_1C003EF34(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // rax
  __int64 MasterIrp; // r14
  unsigned __int64 v8; // r12
  _DWORD *v9; // r15
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  __int64 v13; // [rsp+28h] [rbp-60h]
  char v14; // [rsp+98h] [rbp+10h] BYREF
  int v15; // [rsp+A0h] [rbp+18h] BYREF

  v14 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x18u, (__int64)&unk_1C0062E18);
  v15 = 277;
  v6 = sub_1C000F050(a1);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = v6;
  sub_1C000FD80(a1, 32, 1768898098, (__int64)a2, MasterIrp);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x19u, (__int64)&unk_1C0062E18);
  v10 = sub_1C003D9B0(a1, 0xF00D0013, &v14);
  v11 = v10 >> 30;
  if ( v10 >> 30 != 3 )
  {
    v10 = sub_1C0040CF4(a1, 277, (_DWORD)a2, a3, 0, 77);
    v11 = v10 >> 30;
    if ( v10 >> 30 != 3 )
    {
      sub_1C001D340((__m128 *)MasterIrp, 0, v8);
      *(_WORD *)(MasterIrp + 4) = *((unsigned __int8 *)sub_1C000F050(a1) + 2938);
      if ( (v9[640] & 1) != 0 )
      {
        *(_DWORD *)MasterIrp = 1;
      }
      else
      {
        *(_DWORD *)MasterIrp = 2;
        *(_OWORD *)(MasterIrp + 6) = *(_OWORD *)(v9 + 734);
        *(_OWORD *)(MasterIrp + 22) = *(_OWORD *)(v9 + 738);
        *(_OWORD *)(MasterIrp + 38) = *(_OWORD *)(v9 + 742);
        *(_OWORD *)(MasterIrp + 54) = *(_OWORD *)(v9 + 746);
        *(_DWORD *)(MasterIrp + 70) = v9[750];
        *(_WORD *)(MasterIrp + 74) = *((_WORD *)v9 + 1502);
        *(_BYTE *)(MasterIrp + 76) = *((_BYTE *)v9 + 3006);
      }
      a2->IoStatus.Information = 77LL;
    }
  }
  sub_1C000FD80(a1, 32, 1768897586, (__int64)a2, (int)v10);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v13) = v10;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x1Au, (__int64)&unk_1C0062E18, v13);
  }
  if ( v11 == 3 && !sub_1C001CEB4(v10) )
    sub_1C004A608(a1, 0, 91, (unsigned int)&v15, 4, v10, 0, (__int64)aIoctlC, 799, 0);
  if ( v14 )
    sub_1C0041094(a1, 4027383827LL);
  sub_1C0040ACC(a1, a2);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return v10;
}
