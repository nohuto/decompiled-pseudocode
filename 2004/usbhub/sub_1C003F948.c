/*
 * XREFs of sub_1C003F948 @ 0x1C003F948
 * Callers:
 *     sub_1C003F818 @ 0x1C003F818 (sub_1C003F818.c)
 *     sub_1C003F8B0 @ 0x1C003F8B0 (sub_1C003F8B0.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003D9B0 @ 0x1C003D9B0 (sub_1C003D9B0.c)
 *     sub_1C003DC2C @ 0x1C003DC2C (sub_1C003DC2C.c)
 *     sub_1C0040ACC @ 0x1C0040ACC (sub_1C0040ACC.c)
 *     sub_1C0040CF4 @ 0x1C0040CF4 (sub_1C0040CF4.c)
 *     sub_1C0041094 @ 0x1C0041094 (sub_1C0041094.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C003F948(__int64 a1, IRP *a2, __int64 a3, char a4)
{
  __int64 MasterIrp; // r14
  unsigned __int64 v9; // r12
  _DWORD *v10; // rax
  _QWORD *v11; // r13
  int v12; // ebx
  __int64 v13; // rbx
  __int64 v14; // rbp
  int v15; // r8d
  __int16 v16; // r10
  __int64 v17; // rdx
  __int64 v19; // [rsp+28h] [rbp-60h]
  unsigned int v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF
  char v22; // [rsp+A8h] [rbp+20h] BYREF

  v22 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x2Cu, (__int64)&unk_1C0062E18);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v9 = *(unsigned int *)(a3 + 8);
  v20 = *(_DWORD *)(a3 + 8);
  v21 = a4 != 0 ? 274 : 259;
  sub_1C000FD80(a1, 32, 1735284785, (__int64)a2, MasterIrp);
  v10 = sub_1C000F050(a1);
  v11 = (_QWORD *)sub_1C0004060(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  if ( v11 )
  {
    v12 = sub_1C003D9B0(a1, 0xF00D0004, &v22);
    if ( (v12 & 0xC0000000) != 0xC0000000 )
    {
      v12 = sub_1C0040CF4(a1, 259, (_DWORD)a2, a3, 4, 35);
      if ( (v12 & 0xC0000000) != 0xC0000000 )
      {
        v13 = sub_1C0016CA0(a1, *(_WORD *)MasterIrp);
        if ( v13 )
        {
          v14 = sub_1C0016B5C(a1, *(_WORD *)MasterIrp, (__int64)a2, 0x496F3034u);
          if ( v14 )
          {
            v12 = sub_1C003DC2C(a1, (__int64)a2, v13, v14, MasterIrp, &v20, a4);
            a2->IoStatus.Information = v20;
            sub_1C00171A0(a1, v14, (__int64)a2, 0x496F3034u);
          }
          else
          {
            sub_1C000FD80(a1, 32, 1733848688, *(unsigned __int16 *)(v13 + 4), MasterIrp);
            sub_1C001D340((__m128 *)MasterIrp, 0, v9);
            *(_DWORD *)MasterIrp = *(unsigned __int16 *)(v13 + 4);
            v12 = 0;
            *(_DWORD *)(MasterIrp + 31) = 0;
            a2->IoStatus.Information = 35LL;
          }
        }
        else
        {
          v12 = -1073741811;
        }
      }
    }
  }
  else
  {
    v12 = -1073741670;
  }
  if ( (v12 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v12) )
    sub_1C004A608(a1, 0, 91, (unsigned int)&v21, 4, v12, v15, (__int64)aIoctlC, 2190, v15);
  if ( v22 )
    sub_1C0041094(a1, 4027383812LL);
  sub_1C000FD80(a1, 32, 1735284786, (__int64)a2, v12);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) != v16 )
  {
    LODWORD(v19) = v12;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x2Du, (__int64)&unk_1C0062E18, v19);
  }
  sub_1C0040ACC(a1, a2);
  sub_1C000F050(a1);
  sub_1C0003610(a1, v17, v11);
  a2->IoStatus.Status = v12;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v12;
}
