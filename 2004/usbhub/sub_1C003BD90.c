/*
 * XREFs of sub_1C003BD90 @ 0x1C003BD90
 * Callers:
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 * Callees:
 *     sub_1C0002978 @ 0x1C0002978 (sub_1C0002978.c)
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C0015EB4 @ 0x1C0015EB4 (sub_1C0015EB4.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C001BCC4 @ 0x1C001BCC4 (sub_1C001BCC4.c)
 *     sub_1C002AD90 @ 0x1C002AD90 (sub_1C002AD90.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 *     sub_1C003A1BC @ 0x1C003A1BC (sub_1C003A1BC.c)
 *     sub_1C003D1D8 @ 0x1C003D1D8 (sub_1C003D1D8.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C003BD90(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  int v4; // esi
  __int16 v5; // bp
  unsigned __int16 i; // di
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r15
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  int v12; // eax
  int v13; // eax
  int v14; // r8d
  unsigned __int16 j; // di
  __int64 v16; // rax
  unsigned __int16 k; // di
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // r10
  __int64 v21; // rax
  struct _DEVICE_OBJECT *v22; // rbp
  _DWORD *v23; // rax
  _DWORD *v24; // r14
  _DWORD *v25; // rax
  __int16 v26; // r9
  int v27; // eax
  unsigned int v29; // [rsp+50h] [rbp-48h] BYREF
  _DWORD *v30; // [rsp+58h] [rbp-40h]
  int v31; // [rsp+B0h] [rbp+18h] BYREF
  int v32; // [rsp+B8h] [rbp+20h] BYREF

  v29 = 0;
  v31 = 0;
  v30 = sub_1C000F050((__int64)DeviceObject);
  v4 = 0;
  sub_1C000FD80((__int64)DeviceObject, 16, 2002874989, 0LL, 0LL);
  v5 = 1;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0x1Cu, (__int64)&unk_1C0062DE8);
  sub_1C0012400((__int64)DeviceObject, 0LL, 0LL, &stru_1C00629E8);
  for ( i = 1; i <= *((unsigned __int8 *)sub_1C000F050((__int64)DeviceObject) + 2938); ++i )
  {
    v7 = sub_1C0016CA0((__int64)DeviceObject, i);
    if ( v7 )
    {
      v4 = sub_1C000A080((__int64)DeviceObject, i, (__int64)&v31, &v32);
      if ( v4 >= 0 )
      {
        v8 = sub_1C0016B5C((__int64)DeviceObject, i, 0LL, 0x574D5253u);
        v9 = v8;
        if ( v8 )
        {
          v10 = sub_1C0011220(v8);
          v11 = v10;
          if ( (v31 & 1) != 0 && (v31 & 0x10000) != 0 )
          {
            sub_1C000FD80((__int64)DeviceObject, 16, 2003986028, i, 0LL);
            v4 = sub_1C002AD90((__int64)DeviceObject, i, &v32);
            if ( v4 >= 0 )
            {
              v12 = v11[355];
              if ( (v12 & 0x8000000) == 0 )
                v11[355] = v12 | 0x4000;
            }
            goto LABEL_14;
          }
          if ( (v31 & 3) == 1 )
          {
            v13 = v10[355];
            if ( (v13 & 0x8000000) == 0 )
            {
              v14 = 2003985970;
              v11[355] = v13 | 0x4000;
              goto LABEL_18;
            }
          }
          if ( (v31 & 0x10000) == 0 && (v31 & 1) == 0 )
          {
            *(_DWORD *)(v7 + 2408) |= 4u;
            v14 = 2003985971;
LABEL_18:
            sub_1C000FD80((__int64)DeviceObject, 16, v14, i, 0LL);
          }
LABEL_14:
          sub_1C00171A0((__int64)DeviceObject, v9, 0LL, 0x574D5253u);
          goto LABEL_25;
        }
        if ( (v31 & 0x10000) == 0 && (v31 & 1) != 0 )
        {
          *(_DWORD *)(v7 + 2408) |= 4u;
          sub_1C000FD80((__int64)DeviceObject, 16, 2003985972, i, 0LL);
        }
      }
    }
LABEL_25:
    v5 = 1;
  }
  sub_1C000FD80((__int64)DeviceObject, 16, 1651724877, 0LL, 0LL);
  sub_1C0002978((__int64)DeviceObject, a2);
  for ( j = 1; j <= *((unsigned __int8 *)sub_1C000F050((__int64)DeviceObject) + 2938); ++j )
  {
    v16 = sub_1C0016CA0((__int64)DeviceObject, j);
    if ( v16 )
    {
      v4 = sub_1C003A1BC(DeviceObject, v16, a2);
      if ( (v4 & 0xC0000000) == 0xC0000000 )
      {
        sub_1C0012400((__int64)DeviceObject, 0LL, 0LL, &stru_1C0062838);
        v5 = 1;
        break;
      }
    }
    v5 = 1;
  }
  if ( (v4 & 0xC0000000) != 0xC0000000 )
  {
    sub_1C001853C((__int64)DeviceObject, 0xAu);
    v4 = sub_1C0015EB4((__int64)DeviceObject, &v29);
    if ( (v4 & 0xC0000000) != 0xC0000000 )
    {
      for ( k = 1; k <= *((unsigned __int8 *)sub_1C000F050((__int64)DeviceObject) + 2938); k += v5 )
      {
        v18 = sub_1C0016CA0((__int64)DeviceObject, k);
        if ( v18 )
        {
          v19 = 0;
          if ( (*(_DWORD *)(v18 + 2408) & 4) != 0 )
          {
            sub_1C000FD80((__int64)DeviceObject, 16, 2003989347, k, 0LL);
            *(_DWORD *)(v20 + 2408) &= ~4u;
            sub_1C0034AF8((__int64)DeviceObject, k, a2, v5);
          }
          else
          {
            v21 = sub_1C0016B5C((__int64)DeviceObject, k, 0LL, 0x574D5253u);
            v22 = (struct _DEVICE_OBJECT *)v21;
            if ( !v21 )
              goto LABEL_46;
            v23 = sub_1C0011220(v21);
            v24 = v23;
            if ( (v23[358] & 0x1000) != 0 || (v23[355] & 0x4000) != 0 )
            {
              v23[355] = v23[355] & 0xFDFFBFFF | 0x2000000;
              sub_1C0011220((__int64)v22);
              sub_1C0012400((__int64)DeviceObject, 0LL, 0LL, &stru_1C0062A70);
              v25 = sub_1C0011220((__int64)v22);
              v19 = sub_1C00162A8(DeviceObject, (__int64)(v25 + 236), (__int64)v22);
              if ( (v24[355] & 4) != 0 )
                sub_1C001BCC4((__int64)DeviceObject, v22, 0x220FA7u);
            }
            sub_1C00171A0((__int64)DeviceObject, (__int64)v22, 0LL, 0x574D5253u);
            if ( (v19 & 0xC0000000) == 0xC0000000 )
            {
              sub_1C000FD80((__int64)DeviceObject, 16, 1466782291, 0LL, v19);
              v5 = v26 + 1;
              sub_1C0034AF8((__int64)DeviceObject, k, a2, v26 + 1);
              sub_1C004A608((_DWORD)DeviceObject, 0, 138, 0, 0, v19, 0, (__int64)aFdopwrC, 3687, 0);
            }
            else
            {
LABEL_46:
              v5 = 1;
            }
          }
        }
      }
      v27 = v30[640];
      if ( (v27 & 0x10) != 0 )
      {
        v30[640] = v27 & 0xFFFFFFEF;
        sub_1C004A608((_DWORD)DeviceObject, 0, 113, 0, 0, 0, 0, (__int64)aFdopwrC, 3702, 0);
        v4 = -1073741823;
      }
    }
  }
  sub_1C003D1D8(DeviceObject, a2);
  sub_1C0012400((__int64)DeviceObject, 0LL, 0LL, &stru_1C0062BE8);
  return (unsigned int)v4;
}
