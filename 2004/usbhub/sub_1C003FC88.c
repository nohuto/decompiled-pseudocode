/*
 * XREFs of sub_1C003FC88 @ 0x1C003FC88
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
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

__int64 __fastcall sub_1C003FC88(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // rax
  __m128 *MasterIrp; // r14
  unsigned __int64 v8; // r12
  _DWORD *v9; // r13
  int v10; // edi
  __int32 v11; // r15d
  __int32 v12; // ebx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // r10d
  __int64 v18; // [rsp+28h] [rbp-60h]
  char v19; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+18h] BYREF

  v19 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x1Eu, (__int64)&unk_1C0062E18);
  v20 = 279;
  v6 = sub_1C000F050(a1);
  MasterIrp = (__m128 *)a2->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = v6;
  sub_1C000FD80(a1, 32, 1768898147, (__int64)a2, (__int64)MasterIrp);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x1Fu, (__int64)&unk_1C0062E18);
  v10 = sub_1C003D9B0(a1, 0xF00D0015, &v19);
  if ( (v10 & 0xC0000000) != 0xC0000000 )
  {
    v10 = sub_1C0040CF4(a1, 279, (_DWORD)a2, a3, 16, 16);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      if ( MasterIrp->m128_i32[1] >= 0x10u )
      {
        v11 = MasterIrp->m128_u16[0];
        v12 = MasterIrp->m128_i32[2];
        sub_1C001D340(MasterIrp, 0, v8);
        MasterIrp->m128_i32[0] = v11;
        if ( (v12 & 4) != 0 && sub_1C0016CA0(a1, v11) )
        {
          MasterIrp->m128_i32[1] = 16;
          a2->IoStatus.Information = 16LL;
          v13 = MasterIrp->m128_i32[2] | 1;
          MasterIrp->m128_i32[2] = v13;
          if ( (v9[640] & 0x8000) != 0 )
            MasterIrp->m128_i32[2] = v13 | 2;
          v14 = sub_1C0016B5C(a1, v11, (__int64)a2, 0x496F3063u);
          v15 = v14;
          if ( v14 )
          {
            if ( (sub_1C0011220(v14)[355] & 0x80000) != 0 )
              MasterIrp->m128_i32[3] |= 2u;
            sub_1C00171A0(a1, v15, (__int64)a2, 0x496F3063u);
          }
        }
        else
        {
          v10 = -1073741811;
        }
      }
      else
      {
        v10 = -1073741811;
      }
    }
  }
  sub_1C000FD80(a1, 32, 1768897635, (__int64)a2, v10);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v18) = v10;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, v16 - 30, v16, (__int64)&unk_1C0062E18, v18);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v10) )
    sub_1C004A608(a1, 0, 91, (unsigned int)&v20, 4, v10, 0, (__int64)aIoctlC, 1062, 0);
  if ( v19 )
    sub_1C0041094(a1, 4027383829LL);
  sub_1C0040ACC(a1, a2);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
