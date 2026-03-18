/*
 * XREFs of sub_1C004B8A0 @ 0x1C004B8A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C004C0C0 @ 0x1C004C0C0 (sub_1C004C0C0.c)
 *     sub_1C004C3AC @ 0x1C004C3AC (sub_1C004C3AC.c)
 */

__int64 __fastcall sub_1C004B8A0(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  unsigned __int16 v3; // r15
  unsigned __int16 v4; // r14
  __int64 v5; // rsi
  unsigned __int16 v6; // r15
  unsigned __int16 v7; // r14
  BOOL v8; // ecx
  unsigned int v9; // eax
  int v10; // r10d
  int v11; // r10d
  char v13; // [rsp+90h] [rbp+18h] BYREF

  v2 = sub_1C000F050((__int64)DeviceObject);
  v3 = 328;
  v4 = 9;
  while ( 1 )
  {
    sub_1C000FD80((__int64)DeviceObject, 8, 1198090289, v3, v4);
    LODWORD(v5) = sub_1C004C0C0(DeviceObject, v4);
    sub_1C000FD80((__int64)DeviceObject, 8, 1198090290, (int)v5, v4);
    if ( (int)v5 >= 0 )
      break;
    sub_1C004A608((__int64)DeviceObject, 0, 0x1Au, 0LL, 0, v5, 0, aBusifC, 243, 0);
    if ( v4 == 9 )
    {
      v3 = 312;
      v4 = 8;
      LODWORD(v5) = 0;
    }
    if ( (int)v5 < 0 )
      goto LABEL_8;
  }
  v2[640] |= 4u;
LABEL_8:
  v6 = 96;
  v7 = 3;
  if ( (int)v5 >= 0 )
  {
    while ( 1 )
    {
      sub_1C000FD80((__int64)DeviceObject, 8, 1198093617, v6, v7);
      v5 = (int)sub_1C004C0C0(DeviceObject, v7);
      sub_1C000FD80((__int64)DeviceObject, 8, 1198093618, v5, v7);
      if ( (int)v5 >= 0 )
        break;
      sub_1C004A608((__int64)DeviceObject, 0, 0x1Bu, 0LL, 0, v5, 0, aBusifC, 281, 0);
      if ( v7 == 3 )
      {
        v6 = 80;
        LODWORD(v5) = 0;
        v7 = 2;
      }
      if ( (int)v5 < 0 )
        goto LABEL_15;
    }
    v2[640] |= 8u;
LABEL_15:
    if ( (int)v5 >= 0 )
    {
      v13 = 0;
      v5 = (int)sub_1C004C3AC(DeviceObject, &v13);
      v8 = v13 != 0;
      v9 = v2[640] & 0xFFFFFFFE;
      *((_WORD *)v2 + 2400) = v7;
      v2[640] = v8 | v9;
      if ( (int)v5 >= 0 )
      {
        sub_1C000FD80((__int64)DeviceObject, 8, 1198091569, 40LL, 0LL);
        sub_1C004C0C0(DeviceObject, 0);
        sub_1C000FD80((__int64)DeviceObject, 8, 1198091570, v5, 0LL);
        if ( v10 >= 0 )
          v2[640] |= 0x20000000u;
        sub_1C000FD80((__int64)DeviceObject, 8, 1198093105, 48LL, 0LL);
        sub_1C004C0C0(DeviceObject, 0);
        sub_1C000FD80((__int64)DeviceObject, 8, 1198093106, v5, 0LL);
        if ( v11 >= 0 )
          v2[640] |= 0x800000u;
        sub_1C000FD80((__int64)DeviceObject, 8, 1197895729, 64LL, 0LL);
        LODWORD(v5) = sub_1C004C0C0(DeviceObject, 0);
        sub_1C000FD80((__int64)DeviceObject, 8, 1197895730, (int)v5, 0LL);
        if ( (int)v5 >= 0 )
          v2[640] |= 0x80000000;
      }
    }
  }
  sub_1C000FD80((__int64)DeviceObject, 8, 1651730790, 0LL, (int)v5);
  return (unsigned int)v5;
}
