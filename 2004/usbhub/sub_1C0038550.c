/*
 * XREFs of sub_1C0038550 @ 0x1C0038550
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00033C0 @ 0x1C00033C0 (sub_1C00033C0.c)
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0038E18 @ 0x1C0038E18 (sub_1C0038E18.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

int __fastcall sub_1C0038550(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  _DWORD *v6; // rdi
  _QWORD *v7; // r14
  _UNKNOWN **v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  struct _KEVENT *v11; // r9
  __int64 v12; // rdx
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  __int64 v16; // [rsp+28h] [rbp-50h]

  v4 = a2;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E188((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0x1Fu, (__int64)"FKh&", a2);
  sub_1C000FD80((__int64)DeviceObject, 4, 1769107794, a3, v4);
  v6 = sub_1C000F050((__int64)DeviceObject);
  v7 = (_QWORD *)sub_1C0004060((__int64)DeviceObject, a3, (__int64)DeviceObject, 1380086643, 0);
  _InterlockedAdd(v6 + 684, 1u);
  LODWORD(v8) = v6[640];
  if ( ((unsigned __int16)v8 & 0x1000) != 0 )
  {
    v6[640] = (unsigned int)v8 & 0xFFFFEFFF;
    sub_1C000FD80((__int64)DeviceObject, 4, 1769107794, 0LL, 0LL);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    {
      LODWORD(v16) = v4;
      sub_1C002E188((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0x20u, (__int64)"FKh&", v16);
    }
    v9 = (int)sub_1C0038E18(DeviceObject);
    sub_1C000FD80((__int64)DeviceObject, 4, 1766999379, 0LL, v9);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
    {
      if ( sub_1C001CEB4(v9) )
      {
        KeSetEvent(v11, 0, 0);
        _InterlockedDecrement(v6 + 684);
        if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
          goto LABEL_14;
        v13 = ::DeviceObject;
        if ( !LOWORD(::DeviceObject->DeviceType) )
          goto LABEL_14;
        v14 = 33;
      }
      else
      {
        _InterlockedDecrement(v6 + 684);
        KeSetEvent(v11, 0, 0);
        if ( !*((_BYTE *)v6 + 5268) )
          sub_1C004A608((_DWORD)DeviceObject, 0, 7, 0, 0, v9, 0, (__int64)aBusC, 2768, 1);
        if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
          goto LABEL_14;
        v13 = ::DeviceObject;
        if ( !LOWORD(::DeviceObject->DeviceType) )
          goto LABEL_14;
        v14 = 34;
      }
      LODWORD(v16) = v4;
      sub_1C002E188((__int64)v13->DeviceExtension, 0, 1u, v14, (__int64)"FKh&", v16);
LABEL_14:
      LODWORD(v8) = sub_1C0003610((__int64)DeviceObject, v12, v7);
      return (int)v8;
    }
    _InterlockedDecrement(v6 + 684);
    sub_1C0003610((__int64)DeviceObject, v10, v7);
    sub_1C00033C0(DeviceObject);
    v8 = &off_1C006B000;
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    {
      LODWORD(v16) = v4;
      LODWORD(v8) = sub_1C002E188((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0x23u, (__int64)"FKh&", v16);
    }
  }
  return (int)v8;
}
