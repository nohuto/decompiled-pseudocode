/*
 * XREFs of sub_1C001C580 @ 0x1C001C580
 * Callers:
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 * Callees:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002AD90 @ 0x1C002AD90 (sub_1C002AD90.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 *     sub_1C003A0A8 @ 0x1C003A0A8 (sub_1C003A0A8.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C001C580(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // r13
  _DWORD *v9; // r14
  __int64 v10; // rbx
  int v11; // edx
  int v12; // r11d
  unsigned __int16 v13; // ax
  __int64 v14; // r10
  int v15; // r11d
  _DWORD *v16; // rax
  int v18; // r9d
  __int64 v19; // rcx
  int v20; // eax
  _DWORD *v21; // r14
  int v22; // eax
  int v23; // ecx
  bool v24; // zf
  char v25; // al
  int v26; // [rsp+40h] [rbp-20h]
  _DWORD v27[4]; // [rsp+50h] [rbp-10h] BYREF
  int v28; // [rsp+A8h] [rbp+48h] BYREF

  v28 = 0;
  v27[0] = 0;
  v8 = sub_1C000F050(a1);
  v9 = sub_1C0011220(a3);
  v10 = (int)sub_1C000A080(a1, *(_WORD *)(a4 + 4), (__int64)&v28, v27);
  sub_1C000FD80(a1, 16, 1667518513, *(unsigned __int16 *)(a4 + 4), v10);
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
    sub_1C000FD80(a1, v12, 1668035141, 0LL, v10);
    if ( !(unsigned __int8)sub_1C001CEB4((unsigned int)v10) )
    {
      v26 = 3079;
LABEL_13:
      sub_1C004A608(a1, *(unsigned __int16 *)(a4 + 4), 48, v18, 0, v10, v27[0], (__int64)aFdopwrC, v26, 0);
      return (unsigned int)v10;
    }
LABEL_11:
    v19 = a1;
    goto LABEL_12;
  }
  if ( !*((_BYTE *)v9 + 2740) )
  {
LABEL_3:
    v13 = v28;
    goto LABEL_4;
  }
  v13 = v28;
  if ( (v28 & 1) == 0 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      sub_1C002E62C(DeviceObject->DeviceExtension, v11, 3, 26, (__int64)&unk_1C0062DE8, a1);
      v12 = 16;
    }
    sub_1C000FD80(a1, v12, 1397899853, 0LL, a1);
    sub_1C003A0A8(a1, a3, 1LL, 0xFFFFFFFFLL);
    v20 = sub_1C000A080(a1, *(_WORD *)(a4 + 4), (__int64)&v28, v27);
    LODWORD(v10) = v20;
    if ( (v20 & 0xC0000000) != 0xC0000000 )
    {
      v12 = 16;
      goto LABEL_3;
    }
    sub_1C000FD80(a1, 16, 1668035397, 0LL, v20);
    if ( !(unsigned __int8)sub_1C001CEB4((unsigned int)v10) )
    {
      v26 = 3120;
      goto LABEL_13;
    }
    goto LABEL_11;
  }
LABEL_4:
  sub_1C000FD80(a1, v12, 1667510577, v13, HIWORD(v28));
  if ( (v28 & 1) == 0 )
  {
    sub_1C000FD80(a1, v15, 1667518516, *(unsigned __int16 *)(a4 + 4), 0LL);
    if ( (v28 & 0x10000) != 0 )
    {
      LODWORD(v10) = 0;
    }
    else
    {
      sub_1C0012400(a1, 0LL, 0LL, &stru_1C0062918);
      sub_1C004A608(a1, *(unsigned __int16 *)(a4 + 4), 127, 0, 0, 0, 0, (__int64)aFdopwrC, 3197, 0);
      sub_1C0034AF8(a1, *(unsigned __int16 *)(a4 + 4), a2, 0LL);
      sub_1C000FD80(a1, 16, 1667518517, *(unsigned __int16 *)(a4 + 4), (int)v10);
    }
    return (unsigned int)v10;
  }
  if ( (v28 & 0x10000) == 0 )
  {
    if ( (v9[355] & 0x8000000) == 0 )
    {
      sub_1C000FD80(a1, v15, 1667518515, *(unsigned __int16 *)(a4 + 4), v14);
      v16 = sub_1C0011220(a3);
      v16[355] |= 0x4000u;
      LODWORD(v10) = 0;
    }
    return (unsigned int)v10;
  }
  sub_1C000FD80(a1, v15, 1667518514, *(unsigned __int16 *)(a4 + 4), 0LL);
  v21 = sub_1C0011220(a3);
  v22 = sub_1C002AD90(a1, *(unsigned __int16 *)(a4 + 4), v27);
  LODWORD(v10) = v22;
  if ( v22 >= 0 )
  {
    v23 = v21[355];
    if ( (v23 & 0x8000000) == 0 )
    {
      v24 = v21[596] == 1;
      v21[355] = v23 | 0x4000;
      if ( v24 )
      {
        sub_1C0012400(a1, 0LL, 0LL, &stru_1C00626A0);
        sub_1C004A608(a1, *(unsigned __int16 *)(a4 + 4), 114, 0, 0, v10, v27[0], (__int64)aFdopwrC, 3156, 0);
        v21[596] = v8[1054];
      }
      return (unsigned int)v10;
    }
  }
  v25 = sub_1C001CEB4((unsigned int)v22);
  v19 = a1;
  if ( !v25 )
  {
    sub_1C004A608(a1, *(unsigned __int16 *)(a4 + 4), 52, 0, 0, v10, v27[0], (__int64)aFdopwrC, 3172, 0);
    return (unsigned int)v10;
  }
LABEL_12:
  sub_1C0012400(v19, 0LL, 0LL, &stru_1C0062068);
  return 0LL;
}
