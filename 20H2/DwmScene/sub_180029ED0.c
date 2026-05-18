/*
 * XREFs of sub_180029ED0 @ 0x180029ED0
 * Callers:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_180010510 @ 0x180010510 (sub_180010510.c)
 *     sub_180028D60 @ 0x180028D60 (sub_180028D60.c)
 *     sub_180028F70 @ 0x180028F70 (sub_180028F70.c)
 *     sub_180029190 @ 0x180029190 (sub_180029190.c)
 *     sub_180029660 @ 0x180029660 (sub_180029660.c)
 *     sub_180029A60 @ 0x180029A60 (sub_180029A60.c)
 *     sub_180029BC0 @ 0x180029BC0 (sub_180029BC0.c)
 *     sub_180029CB8 @ 0x180029CB8 (sub_180029CB8.c)
 *     sub_18002A260 @ 0x18002A260 (sub_18002A260.c)
 *     sub_18002A670 @ 0x18002A670 (sub_18002A670.c)
 *     sub_18002ADC0 @ 0x18002ADC0 (sub_18002ADC0.c)
 *     sub_18002B270 @ 0x18002B270 (sub_18002B270.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180029ED0(__int64 a1, _QWORD *a2)
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
