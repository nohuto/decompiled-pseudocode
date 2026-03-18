/*
 * XREFs of sub_1C00139C0 @ 0x1C00139C0
 * Callers:
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0015F10 @ 0x1C0015F10 (sub_1C0015F10.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002BCB8 @ 0x1C002BCB8 (sub_1C002BCB8.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C00139C0(__int64 a1)
{
  _DWORD *v2; // rbp
  PVOID PoolWithTag; // rax
  void *v4; // rsi
  __int64 v5; // rbx
  int v6; // r8d
  __int64 v7; // rcx
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  __int64 v13; // [rsp+20h] [rbp-48h]
  unsigned int v14; // [rsp+78h] [rbp+10h] BYREF

  v14 = 0;
  v2 = sub_1C000F050(a1);
  PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x47uLL, 0x42554855u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0LL, 71LL);
    v5 = (int)sub_1C0015F10(a1, 2228243LL, &v14, 0LL);
    sub_1C000FD80(a1, 8, 1970303827, v14, v5);
    if ( (int)v5 >= 0 && (v2[1054] & 0xFFFFFFFD) == 0 )
    {
      v13 = v5;
      v6 = 810571602;
      v7 = a1;
LABEL_5:
      sub_1C000FD80(v7, 16, v6, 0LL, v13);
      goto LABEL_6;
    }
    if ( (unsigned __int8)sub_1C001CEB4((unsigned int)v5) )
    {
      v13 = v5;
      v7 = a1;
      if ( (v14 & 2) == 0 )
      {
        v6 = 1347900018;
        goto LABEL_5;
      }
      sub_1C000FD80(a1, 16, 1347892082, 0LL, v5);
      sub_1C004A608(a1, 0, 112, v9, 0, v5, 0, (__int64)aFdopwrC, 3869, 0);
    }
    else if ( (v5 & 0xC0000000) == 0xC0000000 )
    {
      sub_1C000FD80(a1, 16, 1347899937, 0LL, v5);
      sub_1C004A608(a1, 0, v10 + 110, v10, 0, v5, 0, (__int64)aFdopwrC, 3889, 0);
    }
    else if ( (int)v5 < 0 || (v14 & 1) != 0 )
    {
      LODWORD(v5) = sub_1C002BCB8(a1, v4);
      sub_1C000FD80(a1, 16, 1666209618, 0LL, (int)v5);
      if ( (v5 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)sub_1C001CEB4((unsigned int)v5) )
        sub_1C004A608(a1, 0, v12 + 109, v12, 0, v5, 0, (__int64)aFdopwrC, 3923, 0);
    }
    else
    {
      LODWORD(v5) = -1073741823;
      sub_1C000FD80(a1, 16, 1699764050, 0LL, -1073741823LL);
      sub_1C004A608(a1, 0, v11 + 111, v11, 0, -1073741823, 0, (__int64)aFdopwrC, 3905, 0);
    }
  }
  else
  {
    LODWORD(v5) = -1073741670;
  }
LABEL_6:
  sub_1C000FD80(a1, 16, 1348825714, 0LL, (int)v5);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v5;
}
