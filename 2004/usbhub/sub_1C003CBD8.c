/*
 * XREFs of sub_1C003CBD8 @ 0x1C003CBD8
 * Callers:
 *     sub_1C003D4C8 @ 0x1C003D4C8 (sub_1C003D4C8.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000CF10 @ 0x1C000CF10 (sub_1C000CF10.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C0015EB4 @ 0x1C0015EB4 (sub_1C0015EB4.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C0031390 @ 0x1C0031390 (sub_1C0031390.c)
 *     sub_1C0031404 @ 0x1C0031404 (sub_1C0031404.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C003CBD8(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _QWORD *v5; // r14
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v11; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+A8h] [rbp+20h] BYREF

  v11 = 20;
  v12 = 0;
  v4 = sub_1C000F050((__int64)a1);
  sub_1C000FD80((__int64)a1, 4, 1215460146, 0LL, (__int64)a1);
  v5 = (_QWORD *)sub_1C0004060((__int64)a1, a2, (__int64)a1, 1430418024, 0);
  if ( *((_BYTE *)v4 + 5268) )
    KeWaitForSingleObject(v4 + 846, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    if ( *((_BYTE *)v4 + 5268) )
      _InterlockedExchange(v4 + 1315, 0);
    v6 = sub_1C0015EB4((__int64)a1, &v12);
    v7 = v6;
    if ( sub_1C001CEB4(v6) )
      break;
    sub_1C0031404(a1, a2, 6);
    sub_1C0031390(a1, a2);
    v4[640] &= ~0x10u;
    LODWORD(v7) = sub_1C0012810(a1, 4u, a2);
    if ( (v7 & 0xC0000000) == 0xC0000000 )
      goto LABEL_13;
    v9 = sub_1C000CF10(a1, a2, 1);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v4[1238] = 0;
      goto LABEL_13;
    }
    sub_1C004A608((_DWORD)a1, 0, 71, (unsigned int)&v11, 4, v9, 0, (__int64)aResetC, 1073, 0);
    if ( (_DWORD)v7 != -1073741637 )
    {
      sub_1C000FD80((__int64)a1, 4, 1215460147, v7, (__int64)a1);
      ++v4[1238];
      v4[640] |= 0x10u;
      sub_1C001853C((__int64)a1, v11);
      v11 *= 2;
      if ( v4[1238] < HIDWORD(stru_1C006B480.DeviceQueue.Lock) )
        continue;
    }
    goto LABEL_13;
  }
  sub_1C000FD80((__int64)a1, 4, 1382314851, v7, v12);
LABEL_13:
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    if ( !sub_1C001CEB4(v7) )
      sub_1C004A608((_DWORD)a1, 0, 126, 0, 0, v7, 0, (__int64)aResetC, 1109, 0);
    if ( *((_BYTE *)v4 + 5268) )
      KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 2uLL, 0LL);
  }
  sub_1C0003610((__int64)a1, v8, v5);
  return (unsigned int)v7;
}
