/*
 * XREFs of sub_1C003F498 @ 0x1C003F498
 * Callers:
 *     sub_1C002A170 @ 0x1C002A170 (sub_1C002A170.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
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

__int64 __fastcall sub_1C003F498(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned __int16 v4; // r15
  __m128 *MasterIrp; // r14
  unsigned __int64 v8; // r13
  _DWORD *v9; // rax
  _QWORD *v10; // r12
  __int64 DeviceProperty; // rdi
  __int64 v12; // rax
  struct _DEVICE_OBJECT *v13; // rbp
  _DWORD *v14; // rdi
  ULONG v15; // eax
  __int64 v16; // rcx
  int v17; // r10d
  __int64 v18; // rdx
  __int64 v20; // [rsp+28h] [rbp-70h]
  char v21; // [rsp+A8h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp+18h] BYREF
  int v23; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0;
  v21 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x36u, (__int64)&unk_1C0062E18);
  MasterIrp = (__m128 *)a2->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v23 = 264;
  sub_1C000FD80(a1, 32, 1768898101, (__int64)a2, (__int64)MasterIrp);
  ResultLength = 0;
  v9 = sub_1C000F050(a1);
  v10 = (_QWORD *)sub_1C0004060(a1, (__int64)(v9 + 434), (__int64)a2, 1430414185, 1);
  if ( v10 )
  {
    LODWORD(DeviceProperty) = sub_1C003D9B0(a1, 0xF00D0005, &v21);
    if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
    {
      LODWORD(DeviceProperty) = sub_1C0040CF4(a1, 264, (_DWORD)a2, a3, 4, 10);
      if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
      {
        v4 = MasterIrp->m128_i16[0];
        v12 = sub_1C0016B5C(a1, MasterIrp->m128_i16[0], (__int64)a2, 0x496C3035u);
        v13 = (struct _DEVICE_OBJECT *)v12;
        if ( v12 )
        {
          v14 = sub_1C0011220(v12);
          if ( (v14[355] & 0x400) != 0 )
          {
            sub_1C001D340(MasterIrp, 0, v8);
            MasterIrp->m128_i32[0] = *((unsigned __int16 *)v14 + 714);
            ResultLength = v8 - 10;
            DeviceProperty = IoGetDeviceProperty(
                               v13,
                               DevicePropertyDriverKeyName,
                               v8 - 10,
                               &MasterIrp->m128_u16[4],
                               &ResultLength);
            sub_1C000FD80(a1, 32, 1768383600, (__int64)a2, DeviceProperty);
            if ( (_DWORD)DeviceProperty == -1073741789 )
              LODWORD(DeviceProperty) = 0;
            if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
            {
              v15 = ResultLength + 10;
              MasterIrp->m128_i32[1] = ResultLength + 10;
              if ( (unsigned int)v8 < v15 )
              {
                MasterIrp->m128_i16[4] = 0;
                v16 = 10LL;
              }
              else
              {
                v16 = v15;
              }
              a2->IoStatus.Information = v16;
            }
          }
          else
          {
            LODWORD(DeviceProperty) = -1073741436;
          }
          sub_1C00171A0(a1, (__int64)v13, (__int64)a2, 0x496C3035u);
        }
        else
        {
          LODWORD(DeviceProperty) = -1073741811;
        }
      }
    }
  }
  else
  {
    LODWORD(DeviceProperty) = -1073741670;
  }
  sub_1C000FD80(a1, 32, 1768897589, (__int64)a2, (int)DeviceProperty);
  if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
  {
    if ( !sub_1C001CEB4(DeviceProperty) )
    {
      sub_1C004A608(a1, v4, 91, (unsigned int)&v23, 4, DeviceProperty, v17, (__int64)aIoctlC, 2634, v17);
      LOWORD(v17) = 0;
    }
    if ( (unsigned int)v8 >= 0xA )
    {
      MasterIrp->m128_i16[4] = v17;
      MasterIrp->m128_i32[1] = 10;
    }
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) != (_WORD)v17 )
  {
    LODWORD(v20) = DeviceProperty;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 2u, 0x37u, (__int64)&unk_1C0062E18, v20);
  }
  if ( v21 )
    sub_1C0041094(a1, 4027383813LL);
  sub_1C0040ACC(a1, a2);
  sub_1C000F050(a1);
  sub_1C0003610(a1, v18, v10);
  a2->IoStatus.Status = DeviceProperty;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DeviceProperty;
}
