/*
 * XREFs of sub_1C0040574 @ 0x1C0040574
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003D9B0 @ 0x1C003D9B0 (sub_1C003D9B0.c)
 *     sub_1C0040ACC @ 0x1C0040ACC (sub_1C0040ACC.c)
 *     sub_1C0040CF4 @ 0x1C0040CF4 (sub_1C0040CF4.c)
 *     sub_1C0041094 @ 0x1C0041094 (sub_1C0041094.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C0040574(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // rax
  __m128 *MasterIrp; // r14
  unsigned __int64 v8; // r12
  _DWORD *v9; // r13
  unsigned int v10; // edi
  unsigned int v11; // ebp
  __int64 v12; // r15
  _DWORD *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  __int16 v16; // ax
  __int64 (__fastcall *v17)(_QWORD); // rax
  __int64 v19; // [rsp+28h] [rbp-60h]
  char v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF

  v20 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x1Bu, (__int64)&unk_1C0062E18);
  v21 = 278;
  v6 = sub_1C000F050(a1);
  MasterIrp = (__m128 *)a2->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = v6;
  sub_1C000FD80(a1, 32, 1768898098, (__int64)a2, (__int64)MasterIrp);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x1Cu, (__int64)&unk_1C0062E18);
  v10 = sub_1C003D9B0(a1, 0xF00D0014, &v20);
  v11 = v10 >> 30;
  if ( v10 >> 30 != 3 )
  {
    v10 = sub_1C0040CF4(a1, 278, (_DWORD)a2, a3, 4, 18);
    v11 = v10 >> 30;
    if ( v10 >> 30 != 3 )
    {
      v12 = MasterIrp->m128_u16[0];
      sub_1C001D340(MasterIrp, 0, v8);
      MasterIrp->m128_i32[0] = v12;
      MasterIrp->m128_i32[1] = 18;
      if ( sub_1C0016CA0(a1, v12) )
      {
        v13 = sub_1C000F050(a1);
        sub_1C000FD80(a1, 4, 1967604816, (__int64)(v13 + 1056), 0LL);
        if ( (*(_DWORD *)(v15 + 2560) & 1) != 0 )
        {
          v17 = *(__int64 (__fastcall **)(_QWORD))(v14 + 304);
          if ( v17 )
            v16 = v17(*(_QWORD *)(v14 + 8));
          else
            v16 = 0;
        }
        else
        {
          v16 = 0;
        }
        if ( v16 == (_WORD)v12 )
          MasterIrp->m128_i32[2] |= 2u;
        if ( (*(_DWORD *)(*((_QWORD *)v9 + 377) + 4 * v12) & 0x10) == 0 )
          MasterIrp->m128_i32[2] |= 1u;
      }
      a2->IoStatus.Information = 18LL;
    }
  }
  sub_1C000FD80(a1, 32, 1768897586, (__int64)a2, (int)v10);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v19) = v10;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x1Du, (__int64)&unk_1C0062E18, v19);
  }
  if ( v11 == 3 && !sub_1C001CEB4(v10) )
    sub_1C004A608(a1, 0, 91, (unsigned int)&v21, 4, v10, 0, (__int64)aIoctlC, 913, 0);
  if ( v20 )
    sub_1C0041094(a1, 4027383828LL);
  sub_1C0040ACC(a1, a2);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return v10;
}
