/*
 * XREFs of sub_1C002CA30 @ 0x1C002CA30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0015F10 @ 0x1C0015F10 (sub_1C0015F10.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C00298F8 @ 0x1C00298F8 (sub_1C00298F8.c)
 *     sub_1C002BAB8 @ 0x1C002BAB8 (sub_1C002BAB8.c)
 *     sub_1C002BCB8 @ 0x1C002BCB8 (sub_1C002BCB8.c)
 *     sub_1C002C018 @ 0x1C002C018 (sub_1C002C018.c)
 *     sub_1C002C0A0 @ 0x1C002C0A0 (sub_1C002C0A0.c)
 *     sub_1C002C474 @ 0x1C002C474 (sub_1C002C474.c)
 *     sub_1C002C930 @ 0x1C002C930 (sub_1C002C930.c)
 *     sub_1C002CE78 @ 0x1C002CE78 (sub_1C002CE78.c)
 *     sub_1C002CF78 @ 0x1C002CF78 (sub_1C002CF78.c)
 *     sub_1C002D07C @ 0x1C002D07C (sub_1C002D07C.c)
 *     sub_1C002E028 @ 0x1C002E028 (sub_1C002E028.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0052290 @ 0x1C0052290 (sub_1C0052290.c)
 *     sub_1C0059CB4 @ 0x1C0059CB4 (sub_1C0059CB4.c)
 *     sub_1C005B388 @ 0x1C005B388 (sub_1C005B388.c)
 */

__int64 __fastcall sub_1C002CA30(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  unsigned int v3; // r14d
  _DWORD *v5; // rbx
  unsigned int v6; // esi
  const char *v7; // rax
  int v8; // r9d
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // r10d
  int v13; // r11d
  EVENT_TYPE v14; // ebp
  __int32 v15; // ecx
  __int32 v16; // ecx
  int v17; // eax
  unsigned int v18; // eax
  _DWORD *v19; // rax
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = 0;
  v3 = 0;
  v5 = sub_1C000F050((__int64)DeviceObject);
  sub_1C000FD80((__int64)DeviceObject, 8, 1749634633, 0LL, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E0B4(::DeviceObject->DeviceExtension, 0, 1, 44, (__int64)&unk_1C0062088);
  v6 = sub_1C002C930((__int64)DeviceObject);
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    v7 = "GetRootHubPdo";
    v8 = 5505;
    goto LABEL_6;
  }
  v6 = sub_1C002C018((__int64)DeviceObject, &v20);
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    v7 = "GetHubCount";
    v8 = 5516;
    goto LABEL_6;
  }
  if ( v20 > 6 )
  {
    sub_1C002D07C(
      (_DWORD)DeviceObject,
      -1073741823,
      7,
      5523,
      (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
      (__int64)"hubCount > 6");
    return 3221225473LL;
  }
  v6 = sub_1C002C0A0((__int64)DeviceObject, a2);
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    v7 = "GetHubDeviceInformation";
    v8 = 5533;
    goto LABEL_6;
  }
  if ( v5[633] == 1 )
  {
    if ( v5[634] == 2 )
      v5[640] |= 0x40u;
    if ( (unsigned __int8)sub_1C002CF78(DeviceObject) )
      v5[640] |= 0x8000u;
  }
  sub_1C0052290(v5);
  v6 = sub_1C00298F8((__int64)DeviceObject);
  if ( (v6 & 0xC0000000) != 0xC0000000 )
  {
    do
    {
      v6 = sub_1C002BCB8((__int64)DeviceObject, (__m128 *)(v5 + 734));
      if ( sub_1C001CEB4(v6) )
        return v6;
      v11 = v10 >> 30;
      if ( v10 >> 30 == 3 && v3 > 3 )
      {
        v7 = "GetHubClassDescriptor";
        v8 = 5585;
        goto LABEL_6;
      }
      if ( v3 )
        sub_1C001853C((__int64)DeviceObject, 0xAu);
      ++v3;
    }
    while ( v11 == 3 );
    sub_1C000FD80(
      (__int64)DeviceObject,
      8,
      1749634633,
      *(unsigned __int16 *)((char *)v5 + 2939),
      *((unsigned __int16 *)v5 + 1276));
    v14 = v13 - 7;
    if ( *((_WORD *)v5 + 1271) >= 0x200u )
    {
      if ( ((unsigned __int8)v12 & (unsigned __int8)v14) != 0 )
        *((_BYTE *)v5 + 3007) = v14;
      if ( ((unsigned __int8)v12 & (unsigned __int8)v13) != 0 )
        *((_BYTE *)v5 + 3009) = v14;
      if ( (v12 & 0x80u) != 0 )
        *((_BYTE *)v5 + 3008) = v14;
      if ( (v5[640] & 0x40) != 0 )
      {
        if ( ((v12 >> 5) & 3) != 0 )
        {
          v15 = ((v12 >> 5) & 3) - v14;
          if ( !v15 )
          {
            v5[753] = 16;
            goto LABEL_44;
          }
          v16 = v15 - v14;
          if ( !v16 )
          {
            v5[753] = 24;
            goto LABEL_44;
          }
          if ( v16 == v14 )
          {
            v5[753] = 32;
            goto LABEL_44;
          }
        }
        v5[753] = v13;
      }
    }
LABEL_44:
    sub_1C002C474((__int64)DeviceObject);
    if ( (v5[640] & 0x40) != 0 )
    {
      v6 = sub_1C002CE78(DeviceObject, a2);
      if ( (v6 & 0xC0000000) == 0xC0000000 )
      {
        v7 = "InitializeTtHub";
        v8 = 5653;
        goto LABEL_6;
      }
    }
    v6 = sub_1C002BAB8((__int64)DeviceObject);
    if ( (v6 & 0xC0000000) == 0xC0000000 )
    {
      v7 = "Get Port attributes";
      v8 = 5664;
      goto LABEL_6;
    }
    sub_1C002E028(DeviceObject);
    v17 = v5[640];
    if ( LODWORD(stru_1C006B480.DeviceQueue.Lock) )
      v18 = v17 & 0xFFEFFFFF;
    else
      v18 = v17 | 0x100000;
    v5[640] = v18;
    sub_1C000F050((__int64)DeviceObject)[1053] = v14;
    sub_1C000F050((__int64)DeviceObject)[1052] = v14;
    v5[1043] = 201;
    KeInitializeSpinLock((PKSPIN_LOCK)v5 + 522);
    *((_BYTE *)v5 + 4184) = 0;
    *((_QWORD *)v5 + 525) = v5 + 1048;
    *((_QWORD *)v5 + 524) = v5 + 1048;
    KeInitializeEvent((PRKEVENT)v5 + 204, NotificationEvent, v14);
    KeInitializeEvent((PRKEVENT)v5 + 205, v14, v14);
    v5[1221] = v14;
    sub_1C005B388(DeviceObject);
    v19 = sub_1C000F050((__int64)DeviceObject);
    sub_1C0015F10((__int64)DeviceObject, 0x22043Fu, (ULONG_PTR)(v19 + 1298), 0LL);
    v5[1314] = dword_1C006B690;
    sub_1C0059CB4(DeviceObject);
    v5[640] |= 0x40000000u;
    return v6;
  }
  v7 = "ConfigureUsbHub";
  v8 = 5566;
LABEL_6:
  sub_1C002D07C((_DWORD)DeviceObject, v6, 3, v8, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c", (__int64)v7);
  return v6;
}
