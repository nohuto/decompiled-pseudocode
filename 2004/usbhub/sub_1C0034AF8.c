/*
 * XREFs of sub_1C0034AF8 @ 0x1C0034AF8
 * Callers:
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 *     sub_1C001C580 @ 0x1C001C580 (sub_1C001C580.c)
 *     sub_1C002F8C0 @ 0x1C002F8C0 (sub_1C002F8C0.c)
 *     sub_1C0036CFC @ 0x1C0036CFC (sub_1C0036CFC.c)
 *     sub_1C0037328 @ 0x1C0037328 (sub_1C0037328.c)
 *     sub_1C0038920 @ 0x1C0038920 (sub_1C0038920.c)
 *     sub_1C003BD90 @ 0x1C003BD90 (sub_1C003BD90.c)
 *     sub_1C003C654 @ 0x1C003C654 (sub_1C003C654.c)
 *     sub_1C004D180 @ 0x1C004D180 (sub_1C004D180.c)
 *     sub_1C004D520 @ 0x1C004D520 (sub_1C004D520.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0037200 @ 0x1C0037200 (sub_1C0037200.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

_UNKNOWN **__fastcall sub_1C0034AF8(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  int v4; // esi
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int16 v10; // dx
  int v11; // ecx
  _UNKNOWN **result; // rax
  __int64 v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+54h] [rbp-Ch] BYREF
  __int64 v17; // [rsp+58h] [rbp-8h]

  v4 = a2;
  v17 = 1LL;
  v16 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v14 = a2;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x54u, (__int64)&unk_1C0062098, v14);
  }
  v8 = sub_1C0016CA0(a1, v4);
  v9 = v8;
  if ( v8 )
  {
    if ( a4
      && (sub_1C0037200(a1, v8), (sub_1C000F050(a1)[640] & 1) != 0)
      && ((v10 = *(_WORD *)(v9 + 4), v15 = 0, v11 = sub_1C000A080(a1, v10, (__int64)&v15, &v16), v11 < 0)
       || (v15 & 2) != 0
       && ((sub_1C001853C(a1, 0xAu), v11 = sub_1C000A080(a1, *(_WORD *)(v9 + 4), (__int64)&v15, &v16), v11 < 0)
        || (v15 & 2) != 0)) )
    {
      sub_1C004A608(a1, *(unsigned __int16 *)(v9 + 4), 20, 0, 0, v11, v16, (__int64)aPchangeC, 5286, 0);
    }
    else
    {
      sub_1C0007840(a1, v9, 4, a3, v17, 0, 0LL, 0LL);
    }
  }
  result = &off_1C006B000;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v13) = v4;
      return (_UNKNOWN **)sub_1C002E188(
                            (__int64)DeviceObject->DeviceExtension,
                            0,
                            1u,
                            0x55u,
                            (__int64)&unk_1C0062098,
                            v13);
    }
  }
  return result;
}
