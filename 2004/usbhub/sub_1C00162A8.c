/*
 * XREFs of sub_1C00162A8 @ 0x1C00162A8
 * Callers:
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 *     sub_1C00304E0 @ 0x1C00304E0 (sub_1C00304E0.c)
 *     sub_1C0038920 @ 0x1C0038920 (sub_1C0038920.c)
 *     sub_1C003BD90 @ 0x1C003BD90 (sub_1C003BD90.c)
 *     sub_1C003C654 @ 0x1C003C654 (sub_1C003C654.c)
 *     sub_1C0055C3C @ 0x1C0055C3C (sub_1C0055C3C.c)
 *     sub_1C0056620 @ 0x1C0056620 (sub_1C0056620.c)
 * Callees:
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00126A8 @ 0x1C00126A8 (sub_1C00126A8.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C0013F80 @ 0x1C0013F80 (sub_1C0013F80.c)
 *     sub_1C0015C80 @ 0x1C0015C80 (sub_1C0015C80.c)
 *     sub_1C0016670 @ 0x1C0016670 (sub_1C0016670.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C0017B0C @ 0x1C0017B0C (sub_1C0017B0C.c)
 *     sub_1C0018840 @ 0x1C0018840 (sub_1C0018840.c)
 *     sub_1C001890C @ 0x1C001890C (sub_1C001890C.c)
 *     sub_1C0018990 @ 0x1C0018990 (sub_1C0018990.c)
 *     sub_1C00192F4 @ 0x1C00192F4 (sub_1C00192F4.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C002E8F0 @ 0x1C002E8F0 (sub_1C002E8F0.c)
 *     sub_1C003A0A8 @ 0x1C003A0A8 (sub_1C003A0A8.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0050D40 @ 0x1C0050D40 (sub_1C0050D40.c)
 *     sub_1C00513E0 @ 0x1C00513E0 (sub_1C00513E0.c)
 */

__int64 __fastcall sub_1C00162A8(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  char v4; // r13
  int v6; // r8d
  _DWORD *v7; // r14
  _DWORD *v8; // rbx
  KSPIN_LOCK *v9; // rbx
  KIRQL v10; // si
  __int64 v11; // r12
  int v12; // edx
  __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rsi
  __int64 v17; // r10
  KIRQL v18; // al
  int v19; // edx
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rbx
  __int64 v24; // r10
  int v25; // edx
  KSPIN_LOCK *SpinLock; // [rsp+50h] [rbp-30h]
  SIZE_T Length[2]; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+58h]

  v4 = 0;
  memset(&Event, 0, sizeof(Event));
  v7 = sub_1C0011220(a3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(::DeviceObject->DeviceType) )
      sub_1C002E0B4(::DeviceObject->DeviceExtension, 0, 1, 71, (__int64)"FKh&");
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
      sub_1C002E55C(
        ::DeviceObject->DeviceExtension,
        (unsigned int)"FKh&",
        v6,
        72,
        (__int64)"FKh&",
        *((_WORD *)v7 + 714),
        a3);
  }
  v8 = sub_1C000F050((__int64)DeviceObject);
  sub_1C0013F80((__int64)v7, 0LL, &stru_1C0061EA8, 0);
  v9 = (KSPIN_LOCK *)(v8 + 1292);
  SpinLock = v9;
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( !*((_QWORD *)v7 + 108) )
  {
    v7[218] = -1;
    *((_QWORD *)v7 + 108) = &Event;
    *((_QWORD *)v7 + 110) = KeGetCurrentThread();
    KeReleaseSpinLock(v9, v10);
    v11 = sub_1C0015C80((__int64)DeviceObject, a3, a3, 0x48446C6Fu);
    sub_1C0018990(DeviceObject, a3, 2017740898LL, 0LL);
    sub_1C000FD80((__int64)DeviceObject, 4, 1869374568, 0LL, v11);
    sub_1C0012810(DeviceObject, 6u, a2);
    v12 = *((unsigned __int16 *)v7 + 714);
    v7[355] &= ~0x8000u;
    sub_1C0018840((_DWORD)DeviceObject, v12, 0x20000, a2, a3);
    sub_1C000FD80((__int64)DeviceObject, 4, 1380218740, 0LL, 0LL);
    v13 = sub_1C0016CA0(DeviceObject, *((unsigned __int16 *)v7 + 714));
    sub_1C00038F0((__int64)DeviceObject, &Event, 0, 1380210548, 0xBu, v13);
    v16 = (int)v7[218];
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
      sub_1C002E8F0(::DeviceObject->DeviceExtension, v14, v15, 73, (__int64)"FKh&", a3, v7[218]);
    if ( (v16 & 0xC0000000) == 0xC0000000 )
    {
      sub_1C000FD80((__int64)DeviceObject, 4, 1380214124, 0LL, v16);
      sub_1C0018990(DeviceObject, a3, 2017740856LL, 1LL);
      if ( v11 )
      {
        sub_1C00192F4(DeviceObject, a3, v11);
        sub_1C0016670(DeviceObject, v11, a3, 1212443759LL);
      }
      if ( !(unsigned __int8)sub_1C001CEB4((unsigned int)v16) )
      {
        sub_1C004A608(
          (_DWORD)DeviceObject,
          *((unsigned __int16 *)v7 + 714),
          67,
          0,
          v21,
          v16,
          -1,
          (__int64)aBusC,
          6797,
          v21);
        v21 = 0;
      }
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) != (_WORD)v21 )
        sub_1C002E8F0(::DeviceObject->DeviceExtension, v21, v22, 74, (__int64)"FKh&", a3, v16);
    }
    else
    {
      sub_1C00126A8((__int64)DeviceObject, a2, *((_WORD *)v7 + 714));
      v30 = sub_1C0015C80((__int64)DeviceObject, a3, a3, 0x4844776Eu);
      if ( v30 )
      {
        if ( v11 )
        {
          sub_1C0016670(DeviceObject, v11, a3, 1212443759LL);
          sub_1C000FD80((__int64)DeviceObject, 4, 1381192786, v11, v30);
          v16 = (int)sub_1C001890C(DeviceObject, a3, v11, v17);
          if ( *((_BYTE *)v7 + 2740) )
          {
            if ( (int)v16 >= 0 && (v7[355] & 0x204) == 0x200 )
            {
              *(_OWORD *)Length = 0LL;
              sub_1C00513E0(DeviceObject, a3, Length);
              if ( HIDWORD(Length[0]) == v7[533] )
              {
                if ( Length[1] )
                {
                  v23 = HIDWORD(Length[0]);
                  if ( RtlCompareMemory((const void *)Length[1], *((const void **)v7 + 267), HIDWORD(Length[0])) != v23 )
                    v4 = 1;
                }
              }
              else
              {
                v4 = 1;
              }
              sub_1C0050D40(Length);
            }
            if ( (_DWORD)v16 == -1073741823 )
              v4 = 1;
          }
          sub_1C000FD80((__int64)DeviceObject, 4, 1380217445, 0LL, v16);
          sub_1C0016670(DeviceObject, v30, a3, 1212446574LL);
          if ( (v16 & 0xC0000000) == 0xC0000000 )
          {
            sub_1C004A608(
              (_DWORD)DeviceObject,
              *((unsigned __int16 *)v7 + 714),
              66,
              0,
              0,
              v16,
              -1,
              (__int64)aBusC,
              6876,
              0);
            sub_1C0018990(DeviceObject, a3, 2017740899LL, 1LL);
            sub_1C00192F4(DeviceObject, a3, v11);
          }
        }
        else
        {
          sub_1C000FD80((__int64)DeviceObject, 4, 1380216684, 0LL, v16);
          LODWORD(v16) = 0;
          sub_1C0016670(DeviceObject, v24, a3, 1212446574LL);
        }
      }
      else
      {
        sub_1C000FD80((__int64)DeviceObject, 4, 1380200497, 0LL, v11);
        sub_1C00192F4(DeviceObject, a3, v11);
        sub_1C0016670(DeviceObject, v11, a3, 1212443759LL);
        LODWORD(v16) = -1073741823;
      }
      if ( (int)v16 >= 0 )
      {
        if ( *((_BYTE *)v7 + 2740) )
        {
          if ( !v4 )
          {
            if ( byte_1C006B688 )
            {
              if ( (v7[355] & 4) == 0 )
              {
                WmiFireEvent(DeviceObject, &Guid, 0, 0, 0LL);
                LODWORD(v16) = sub_1C0017B0C(
                                 (_DWORD)DeviceObject,
                                 1,
                                 (unsigned int)sub_1C0046CA0,
                                 (unsigned int)&byte_1C006B688,
                                 *((unsigned __int16 *)v7 + 714),
                                 2001555795,
                                 0LL);
                if ( (v16 & 0xC0000000) == 0xC0000000 )
                {
                  byte_1C006B688 = 0;
                  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                  {
                    if ( LOWORD(::DeviceObject->DeviceType) )
                      sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 75, (__int64)"FKh&", v16);
                  }
                }
              }
            }
          }
        }
      }
      sub_1C00029EC((__int64)DeviceObject, a2, *((_WORD *)v7 + 714));
    }
    v18 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    *((_QWORD *)v7 + 108) = 0LL;
    KeReleaseSpinLock(SpinLock, v18);
    if ( v4 )
    {
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
        sub_1C002E62C(::DeviceObject->DeviceExtension, v19, 3, 76, (__int64)"FKh&", (char)DeviceObject);
      sub_1C000FD80((__int64)DeviceObject, 4, 1397905220, (int)v16, (__int64)DeviceObject);
      sub_1C003A0A8(DeviceObject, a3, 0xFFFFFFFFLL, 1LL);
      if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
        goto LABEL_24;
      if ( LOWORD(::DeviceObject->DeviceType) )
        sub_1C002E62C(::DeviceObject->DeviceExtension, v25, 3, 77, (__int64)"FKh&", (char)DeviceObject);
    }
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(::DeviceObject->DeviceType) )
        sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 78, (__int64)"FKh&", v16);
    }
LABEL_24:
    sub_1C0013F80((__int64)v7, 0LL, &stru_1C0061E98, v16);
    return (unsigned int)v16;
  }
  sub_1C000FD80((__int64)DeviceObject, 4, 1380214068, 0LL, *((_QWORD *)v7 + 108));
  KeReleaseSpinLock(v9, v10);
  sub_1C0013F80((__int64)v7, 0LL, &stru_1C0061E98, -2147483631);
  return 2147483665LL;
}
