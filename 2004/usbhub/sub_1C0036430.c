/*
 * XREFs of sub_1C0036430 @ 0x1C0036430
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002EE4C @ 0x1C002EE4C (sub_1C002EE4C.c)
 *     sub_1C0033B98 @ 0x1C0033B98 (sub_1C0033B98.c)
 *     sub_1C003B464 @ 0x1C003B464 (sub_1C003B464.c)
 *     sub_1C003B69C @ 0x1C003B69C (sub_1C003B69C.c)
 */

__int64 __fastcall sub_1C0036430(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // rbx
  unsigned __int16 v5; // bp
  _DWORD *v6; // r14
  _QWORD *v7; // r13
  __int64 v8; // rax
  PIRP Irp; // rax
  POOL_TYPE v10; // ecx
  __m128 *PoolWithTag; // rax
  unsigned int v12; // eax
  __m128 *v13; // rax
  _DWORD *v14; // rax
  PVOID v15; // rax
  _DWORD *v16; // rax
  PIO_WORKITEM WorkItem; // rax
  _DWORD *v18; // r14
  _DWORD *i; // rsi
  PIO_WORKITEM v20; // rax
  struct _IO_WORKITEM *v22; // rcx
  __int64 v23; // rsi
  PIO_WORKITEM *v24; // rsi
  IRP *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx

  v4 = sub_1C000F050((__int64)DeviceObject);
  v5 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0xFu, (__int64)"FKh&");
  sub_1C000FD80((__int64)DeviceObject, 4, 1649628242, 0LL, 0LL);
  v6 = v4 + 680;
  *((_QWORD *)v4 + 340) = sub_1C003B464(DeviceObject, sub_1C0038820, 1232302674LL);
  *((_QWORD *)v4 + 341) = sub_1C003B464(DeviceObject, sub_1C0038EF0, 1380545137LL);
  v7 = v4 + 692;
  *((_QWORD *)v4 + 346) = sub_1C003B464(DeviceObject, sub_1C0041890, 1231967343LL);
  v8 = sub_1C003B464(DeviceObject, sub_1C00436A0, 1231966821LL);
  *((_QWORD *)v4 + 347) = v8;
  if ( *((_QWORD *)v4 + 340) )
  {
    if ( *((_QWORD *)v4 + 341) )
    {
      if ( *v7 )
      {
        if ( v8 )
        {
          Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v4 + 151) + 76LL), 0);
          if ( Irp )
          {
            v10 = PoolType;
            *((_QWORD *)v4 + 333) = Irp;
            PoolWithTag = (__m128 *)ExAllocatePoolWithTag(v10, 0x98uLL, 0x42554855u);
            *((_QWORD *)v4 + 334) = PoolWithTag;
            if ( PoolWithTag )
            {
              sub_1C001D340(PoolWithTag, 0, 0x98uLL);
              if ( *((_QWORD *)v4 + 334) )
              {
                v12 = *((unsigned __int16 *)v4 + 1316);
                *((_QWORD *)v4 + 335) = 0LL;
                if ( (_WORD)v12 )
                {
                  v13 = (__m128 *)ExAllocatePoolWithTag(PoolType, v12, 0x42554855u);
                  *((_QWORD *)v4 + 335) = v13;
                  if ( v13 )
                  {
                    sub_1C001D340(v13, 0, *((unsigned __int16 *)v4 + 1316));
                    if ( *((_QWORD *)v4 + 335) )
                    {
                      *((_QWORD *)v4 + 382) = 0LL;
                      if ( *((_BYTE *)sub_1C000F050((__int64)DeviceObject) + 2938) )
                      {
                        v14 = sub_1C000F050((__int64)DeviceObject);
                        v15 = ExAllocatePoolWithTag(PoolType, 2928LL * *((unsigned __int8 *)v14 + 2938), 0x42554855u);
                        *((_QWORD *)v4 + 382) = v15;
                        if ( v15 )
                        {
                          v16 = sub_1C000F050((__int64)DeviceObject);
                          sub_1C001D340(*((__m128 **)v4 + 382), 0, 2928LL * *((unsigned __int8 *)v16 + 2938));
                        }
                      }
                      if ( *((_QWORD *)v4 + 382) )
                      {
                        v4[763] = *((unsigned __int8 *)sub_1C000F050((__int64)DeviceObject) + 2938);
                        WorkItem = IoAllocateWorkItem(DeviceObject);
                        *((_QWORD *)v4 + 148) = WorkItem;
                        if ( WorkItem )
                        {
                          v18 = (_DWORD *)*((_QWORD *)v4 + 382);
                          for ( i = v18 + 7; ; i += 732 )
                          {
                            if ( v5 >= *((unsigned __int8 *)sub_1C000F050((__int64)DeviceObject) + 2938) )
                            {
                              sub_1C0002AF0(DeviceObject, a2, 4);
                              sub_1C000FD80((__int64)DeviceObject, 4, 1045648466, 0LL, 0LL);
                              return 0LL;
                            }
                            i[93] = 0;
                            *(_QWORD *)(i + 3) = i - 1;
                            i[27] = 1734964085;
                            *(i - 1) = 2017613128;
                            ++v5;
                            i[15] = 1734964085;
                            i[11] = 1734964085;
                            i[7] = 1734964085;
                            i[18] = 1734964085;
                            i[21] = 1734964085;
                            i[24] = 1734964085;
                            i[29] = 1734964085;
                            i[71] = 1734964085;
                            i[59] = 1734964085;
                            i[55] = 1734964085;
                            i[51] = 1734964085;
                            i[62] = 1734964085;
                            i[65] = 1734964085;
                            i[68] = 1734964085;
                            i[73] = 1734964085;
                            i[43] = 2017613128;
                            *(_QWORD *)(i + 47) = i + 43;
                            *v18 = 1146120296;
                            *i = 2;
                            *(_QWORD *)(i + 1) = DeviceObject;
                            i[44] = 7;
                            *(_QWORD *)(i + 45) = DeviceObject;
                            *(_QWORD *)(i - 3) = DeviceObject;
                            *((_WORD *)i - 12) = v5;
                            KeInitializeTimer((PKTIMER)(i + 131));
                            KeInitializeDpc((PRKDPC)(i + 147), sub_1C0038F30, v18);
                            KeInitializeEvent((PRKEVENT)(i + 185), NotificationEvent, 1u);
                            KeInitializeEvent((PRKEVENT)(i + 597), NotificationEvent, 0);
                            i[596] = 0;
                            i[603] = 1;
                            KeInitializeSpinLock((PKSPIN_LOCK)(i + 605));
                            v20 = IoAllocateWorkItem(DeviceObject);
                            *(_QWORD *)(i + 607) = v20;
                            if ( !v20 )
                              break;
                            sub_1C0033B98((__int64)DeviceObject, (__int64)v18);
                            sub_1C002EE4C((__int64)DeviceObject, (__int64)v18);
                            v18 += 732;
                          }
                          v6 = v4 + 680;
                          v5 = 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v22 = (struct _IO_WORKITEM *)*((_QWORD *)v4 + 148);
  if ( v22 )
  {
    IoFreeWorkItem(v22);
    *((_QWORD *)v4 + 148) = 0LL;
  }
  v23 = *((_QWORD *)v4 + 382);
  if ( v23 )
  {
    v24 = (PIO_WORKITEM *)(v23 + 2456);
    while ( v5 < *((unsigned __int8 *)sub_1C000F050((__int64)DeviceObject) + 2938) )
    {
      if ( *v24 )
      {
        IoFreeWorkItem(*v24);
        *v24 = 0LL;
      }
      v24 += 366;
      ++v5;
    }
    v7 = v4 + 692;
  }
  sub_1C003B69C(DeviceObject, v6);
  sub_1C003B69C(DeviceObject, v4 + 682);
  sub_1C003B69C(DeviceObject, v7);
  sub_1C003B69C(DeviceObject, v4 + 694);
  v25 = (IRP *)*((_QWORD *)v4 + 333);
  if ( v25 )
  {
    IoFreeIrp(v25);
    *((_QWORD *)v4 + 333) = 0LL;
  }
  v26 = (void *)*((_QWORD *)v4 + 334);
  if ( v26 )
  {
    ExFreePoolWithTag(v26, 0);
    *((_QWORD *)v4 + 334) = 0LL;
  }
  v27 = (void *)*((_QWORD *)v4 + 335);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0);
    *((_QWORD *)v4 + 335) = 0LL;
  }
  v28 = (void *)*((_QWORD *)v4 + 382);
  if ( v28 )
  {
    ExFreePoolWithTag(v28, 0);
    *((_QWORD *)v4 + 382) = 0LL;
  }
  return 3221225626LL;
}
