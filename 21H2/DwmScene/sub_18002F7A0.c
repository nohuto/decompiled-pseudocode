/*
 * XREFs of sub_18002F7A0 @ 0x18002F7A0
 * Callers:
 *     sub_1800101B0 @ 0x1800101B0 (sub_1800101B0.c)
 *     sub_1800105F0 @ 0x1800105F0 (sub_1800105F0.c)
 *     sub_18002E630 @ 0x18002E630 (sub_18002E630.c)
 *     sub_18002E840 @ 0x18002E840 (sub_18002E840.c)
 *     sub_18002EA60 @ 0x18002EA60 (sub_18002EA60.c)
 *     sub_18002EF30 @ 0x18002EF30 (sub_18002EF30.c)
 *     sub_18002F330 @ 0x18002F330 (sub_18002F330.c)
 *     sub_18002F490 @ 0x18002F490 (sub_18002F490.c)
 *     sub_18002F588 @ 0x18002F588 (sub_18002F588.c)
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 *     sub_18002FF40 @ 0x18002FF40 (sub_18002FF40.c)
 *     sub_180030690 @ 0x180030690 (sub_180030690.c)
 *     sub_180030B40 @ 0x180030B40 (sub_180030B40.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18002F7A0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // r8
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rcx
  _QWORD *v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]

  v10 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)a1 + 376LL))(a1, &v10);
  v6 = v5[1];
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
      {
        v3 = *v5;
        v4 = (volatile signed __int32 *)v5[1];
        break;
      }
    }
  }
  v8 = v11;
  if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 8LL))(v8, v6, v5);
  if ( v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v4 )
      _InterlockedIncrement(v4 + 2);
    *a2 = v3;
    a2[1] = v4;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64 *))v4)(v4, v6, v5);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
  else
  {
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64 *))v4)(v4, v6, v5);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
