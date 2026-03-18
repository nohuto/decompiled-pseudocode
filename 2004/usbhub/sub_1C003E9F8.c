/*
 * XREFs of sub_1C003E9F8 @ 0x1C003E9F8
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
 *     sub_1C0040CF4 @ 0x1C0040CF4 (sub_1C0040CF4.c)
 *     sub_1C0041094 @ 0x1C0041094 (sub_1C0041094.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C003E9F8(__int64 a1, IRP *a2, int a3)
{
  _DWORD *v6; // rax
  _DWORD *p_Type; // r14
  _DWORD *v8; // r15
  _DWORD *v9; // rax
  _QWORD *v10; // r12
  int v11; // ebx
  __int64 v12; // rdx
  unsigned int v14; // r8d
  __int64 v15; // [rsp+28h] [rbp-60h]
  char v16; // [rsp+98h] [rbp+10h] BYREF
  int v17; // [rsp+A8h] [rbp+20h] BYREF

  v16 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x13u, (__int64)&unk_1C0062E18);
  v17 = 271;
  v6 = sub_1C000F050(a1);
  p_Type = &a2->AssociatedIrp.MasterIrp->Type;
  v8 = v6;
  sub_1C000FD80(a1, 32, 1768898098, (__int64)a2, (__int64)p_Type);
  v9 = sub_1C000F050(a1);
  v10 = (_QWORD *)sub_1C0004060(a1, (__int64)(v9 + 434), (__int64)a2, 1430414185, 1);
  if ( v10 )
  {
    v11 = sub_1C003D9B0(a1, 0xF00D0002, &v16);
    if ( (v11 & 0xC0000000) != 0xC0000000 )
    {
      v11 = sub_1C0040CF4(a1, 271, (_DWORD)a2, a3, 0, 4);
      if ( (v11 & 0xC0000000) != 0xC0000000 )
      {
        v14 = *p_Type | 1;
        if ( (v8[640] & 0x8000) == 0 )
          v14 = *p_Type & 0xFFFFFFFE;
        *p_Type = v14;
      }
    }
  }
  else
  {
    v11 = -1073741670;
  }
  sub_1C000FD80(a1, 32, 1768897586, (__int64)a2, v11);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v15) = v11;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x14u, (__int64)&unk_1C0062E18, v15);
  }
  if ( (v11 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v11) )
    sub_1C004A608(a1, 0, 91, (unsigned int)&v17, 4, v11, 0, (__int64)aIoctlC, 573, 0);
  if ( v16 )
    sub_1C0041094(a1, 4027383810LL);
  sub_1C0040ACC(a1, a2);
  sub_1C000F050(a1);
  sub_1C0003610(a1, v12, v10);
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
