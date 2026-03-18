/*
 * XREFs of sub_1C003EC70 @ 0x1C003EC70
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003D9B0 @ 0x1C003D9B0 (sub_1C003D9B0.c)
 *     sub_1C0040ACC @ 0x1C0040ACC (sub_1C0040ACC.c)
 *     sub_1C0040CF4 @ 0x1C0040CF4 (sub_1C0040CF4.c)
 *     sub_1C0041094 @ 0x1C0041094 (sub_1C0041094.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C003EC70(__int64 a1, IRP *a2, int a3)
{
  _DWORD *v6; // rax
  _DWORD *p_Type; // r14
  _DWORD *v8; // rbp
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  int v11; // ecx
  int v12; // edx
  __int64 v14; // [rsp+28h] [rbp-60h]
  char v15; // [rsp+98h] [rbp+10h] BYREF
  int v16; // [rsp+A8h] [rbp+20h] BYREF

  v15 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x15u, (__int64)&unk_1C0062E18);
  v16 = 276;
  v6 = sub_1C000F050(a1);
  p_Type = &a2->AssociatedIrp.MasterIrp->Type;
  v8 = v6;
  sub_1C000FD80(a1, 32, 1768898098, (__int64)a2, (__int64)p_Type);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x16u, (__int64)&unk_1C0062E18);
  v9 = sub_1C003D9B0(a1, 0xF00D0012, &v15);
  v10 = v9 >> 30;
  if ( v9 >> 30 != 3 )
  {
    v9 = sub_1C0040CF4(a1, 271, (_DWORD)a2, a3, 0, 4);
    v10 = v9 >> 30;
    if ( v9 >> 30 != 3 )
    {
      *p_Type = 0;
      v11 = 0;
      v12 = v8[640];
      if ( (v12 & 0x8000) != 0 )
      {
        *p_Type = 1;
        v11 = 1;
        v12 = v8[640];
      }
      if ( (v12 & 0x80u) != 0 )
      {
        v11 |= 8u;
        *p_Type = v11;
        v12 = v8[640];
      }
      if ( (v12 & 0x10000) != 0 )
      {
        v11 |= 4u;
        *p_Type = v11;
        v12 = v8[640];
      }
      if ( (v12 & 0x8001) == 0x8001 || (v12 & 0x40) != 0 )
      {
        v11 |= 2u;
        *p_Type = v11;
        v12 = v8[640];
      }
      if ( (v12 & 0x80000) != 0 )
      {
        v11 |= 0x20u;
        *p_Type = v11;
        v12 = v8[640];
      }
      if ( (v12 & 1) != 0 )
        *p_Type = v11 | 0x10;
      a2->IoStatus.Information = 4LL;
    }
  }
  sub_1C000FD80(a1, 32, 1768897586, (__int64)a2, (int)v9);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v14) = v9;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x17u, (__int64)&unk_1C0062E18, v14);
  }
  if ( v10 == 3 && !sub_1C001CEB4(v9) )
    sub_1C004A608(a1, 0, 91, (unsigned int)&v16, 4, v9, 0, (__int64)aIoctlC, 700, 0);
  if ( v15 )
    sub_1C0041094(a1, 4027383826LL);
  sub_1C0040ACC(a1, a2);
  a2->IoStatus.Status = v9;
  IofCompleteRequest(a2, 0);
  return v9;
}
