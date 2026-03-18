/*
 * XREFs of sub_1C0001B60 @ 0x1C0001B60
 * Callers:
 *     sub_1C000A210 @ 0x1C000A210 (sub_1C000A210.c)
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 *     sub_1C000B290 @ 0x1C000B290 (sub_1C000B290.c)
 *     sub_1C000B440 @ 0x1C000B440 (sub_1C000B440.c)
 *     sub_1C000B570 @ 0x1C000B570 (sub_1C000B570.c)
 * Callees:
 *     sub_1C0002A80 @ 0x1C0002A80 (sub_1C0002A80.c)
 *     sub_1C000B990 @ 0x1C000B990 (sub_1C000B990.c)
 *     sub_1C000B9D0 @ 0x1C000B9D0 (sub_1C000B9D0.c)
 *     sub_1C000BA10 @ 0x1C000BA10 (sub_1C000BA10.c)
 */

void __fastcall sub_1C0001B60(volatile signed __int64 *P)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rcx
  bool v4; // zf
  signed __int64 v5; // rax
  bool v6; // cc
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  v1 = P;
  _m_prefetchw((const void *)(P + 6));
  v2 = *((_QWORD *)P + 6);
  v3 = v2 - 1;
  v4 = v2 == 1;
  if ( v2 - 1 > 0 )
  {
    while ( 1 )
    {
      v8 = v2;
      v2 = _InterlockedCompareExchange64(v1 + 6, v3, v2);
      if ( v8 == v2 )
        break;
      v3 = v2 - 1;
      v4 = v2 == 1;
      if ( v2 - 1 <= 0 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    if ( !v4 )
      __fastfail(0xEu);
    sub_1C000B9D0();
    v5 = _InterlockedExchangeAdd64(v1 + 6, 0xFFFFFFFFFFFFFFFFuLL);
    v6 = v5 <= 1;
    v7 = v5 - 1;
    if ( v6 )
    {
      if ( v7 )
        __fastfail(0xEu);
      sub_1C000B990(v1);
    }
    else
    {
      v1 = 0LL;
    }
    sub_1C000BA10();
    if ( v1 )
    {
      sub_1C0002A80(v1);
      ExFreePoolWithTag((PVOID)v1, 0);
    }
  }
}
