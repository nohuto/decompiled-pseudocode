/*
 * XREFs of sub_1C0057020 @ 0x1C0057020
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 *     sub_1C0013F80 @ 0x1C0013F80 (sub_1C0013F80.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C002FED0 @ 0x1C002FED0 (sub_1C002FED0.c)
 *     sub_1C003D218 @ 0x1C003D218 (sub_1C003D218.c)
 *     sub_1C0045F90 @ 0x1C0045F90 (sub_1C0045F90.c)
 *     sub_1C0049850 @ 0x1C0049850 (sub_1C0049850.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0053CC8 @ 0x1C0053CC8 (sub_1C0053CC8.c)
 *     sub_1C00554E0 @ 0x1C00554E0 (sub_1C00554E0.c)
 *     sub_1C0055C3C @ 0x1C0055C3C (sub_1C0055C3C.c)
 *     sub_1C0057830 @ 0x1C0057830 (sub_1C0057830.c)
 *     sub_1C005C07C @ 0x1C005C07C (sub_1C005C07C.c)
 *     sub_1C0073540 @ 0x1C0073540 (sub_1C0073540.c)
 */

__int64 __fastcall sub_1C0057020(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int32 v7; // ebx
  _DWORD *v8; // rax
  _QWORD *v9; // r12
  int DeviceProperty; // ebp
  _DWORD *v11; // rbx
  void *v12; // rcx
  __int64 v13; // rcx
  __m128 *PoolWithTag; // rax
  __m128 *v15; // rbx
  const EVENT_DESCRIPTOR *v16; // r8
  GUID *v17; // rdx
  __int64 v18; // rdx
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF

  ResultLength = 0;
  v4 = sub_1C0011220((__int64)DeviceObject);
  sub_1C0013F80((__int64)v4, (__int64)Irp, &stru_1C0062B18, 0);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E62C((__int64)::DeviceObject->DeviceExtension, v5, 1u, 0xEu, (__int64)&unk_1C0065258, DeviceObject);
  if ( sub_1C0011220((__int64)DeviceObject)[280] == 101 )
  {
    v7 = 0;
    goto LABEL_32;
  }
  sub_1C003D218(v6, (__int64)DeviceObject);
  sub_1C0011260(*((_QWORD *)v4 + 148), (__int64)(v4 + 426));
  v8 = sub_1C0011220((__int64)DeviceObject);
  v9 = (_QWORD *)sub_1C0004060(*((_QWORD *)v4 + 148), (__int64)(v8 + 236), (__int64)DeviceObject, 1346728819, 1);
  KeWaitForSingleObject(v4 + 724, Executive, 0, 0, 0LL);
  DeviceProperty = sub_1C0055C3C((__int64)DeviceObject);
  if ( sub_1C0011220((__int64)DeviceObject)[280] == 103 || sub_1C0011220((__int64)DeviceObject)[280] == 102 )
  {
    v11 = sub_1C0011220((__int64)DeviceObject);
    IoSetDevicePropertyData(DeviceObject, &stru_1C0062790, 0, 0, 0, 0, 0LL);
    v11[705] = 0;
    if ( (v4[283] & 4) != 0 )
    {
      DeviceProperty = 0;
      goto LABEL_28;
    }
  }
  if ( (DeviceProperty & 0xC0000000) != 0xC0000000 && sub_1C0011220((__int64)DeviceObject)[280] != 103 )
  {
    v12 = (void *)*((_QWORD *)v4 + 280);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)v4 + 280) = 0LL;
    }
    DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &ResultLength);
    if ( DeviceProperty == -1073741789 && ResultLength )
    {
      PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, ResultLength, 0x42554855u);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_28;
      sub_1C001D340(PoolWithTag, 0, ResultLength);
      DeviceProperty = IoGetDeviceProperty(
                         DeviceObject,
                         DevicePropertyDeviceDescription,
                         ResultLength,
                         v15,
                         &ResultLength);
      if ( DeviceProperty < 0 )
      {
        ExFreePoolWithTag(v15, 0);
        goto LABEL_28;
      }
      *((_QWORD *)v4 + 280) = v15;
      v4[562] = ResultLength;
      sub_1C005C07C(v4, &unk_1C0062770);
    }
    DeviceProperty = sub_1C0045F90(v13, DeviceObject);
    if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
    {
      v16 = (const EVENT_DESCRIPTOR *)&unk_1C0062B98;
LABEL_22:
      sub_1C0013F80((__int64)v4, (__int64)Irp, v16, DeviceProperty);
      goto LABEL_28;
    }
    v17 = (GUID *)&unk_1C0062A80;
    if ( (v4[355] & 4) == 0 )
      v17 = (GUID *)&stru_1C0062BC8;
    DeviceProperty = sub_1C00554E0(DeviceObject, v17);
    if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
    {
      v16 = (const EVENT_DESCRIPTOR *)&unk_1C0062720;
      goto LABEL_22;
    }
    sub_1C0049850(DeviceObject);
  }
LABEL_28:
  sub_1C0053CC8((__int64)DeviceObject, 101, 1);
  KeSetEvent((PRKEVENT)(v4 + 724), 0, 0);
  sub_1C0011220((__int64)DeviceObject);
  sub_1C0003610(*((_QWORD *)v4 + 148), v18, v9);
  sub_1C0057830(*((_QWORD *)v4 + 148), DeviceObject, DeviceObject);
  v7 = sub_1C002FED0(*((_QWORD *)v4 + 148), 2u, DeviceProperty, *((unsigned __int16 *)v4 + 714));
  if ( v7 < 0 )
  {
    sub_1C004A608(*((_QWORD *)v4 + 148), *((_WORD *)v4 + 714), 0x67u, 0LL, 0, v7, 0, aPdoC, 1564, 0);
  }
  else if ( (v4[355] & 1) != 0 )
  {
    sub_1C004A608(*((_QWORD *)v4 + 148), *((_WORD *)v4 + 714), 0x2Au, 0LL, 0, v7, 0, aPdoC, 1548, 0);
  }
LABEL_32:
  sub_1C000FD80(*((_QWORD *)v4 + 148), 256, 1398035004, (__int64)Irp, v7);
  sub_1C0013F80((__int64)v4, (__int64)Irp, &stru_1C0062A20, 0);
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  sub_1C0073540(DeviceObject);
  return (unsigned int)v7;
}
