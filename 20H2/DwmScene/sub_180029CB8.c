/*
 * XREFs of sub_180029CB8 @ 0x180029CB8
 * Callers:
 *     sub_18002ADC0 @ 0x18002ADC0 (sub_18002ADC0.c)
 *     sub_18002B270 @ 0x18002B270 (sub_18002B270.c)
 * Callees:
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_180029ED0 @ 0x180029ED0 (sub_180029ED0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180029CB8(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  sub_180029ED0(a1, &v6);
  if ( (_QWORD)v6 )
  {
    sub_180024694(v6, a2);
    if ( *((_QWORD *)&v6 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v6 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v3 = *((_QWORD *)&v6 + 1);
        (***((void (__fastcall ****)(_QWORD))&v6 + 1))(*((_QWORD *)&v6 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v6 + 1) + 8LL))(*((_QWORD *)&v6 + 1));
      }
    }
  }
  else
  {
    if ( *((_QWORD *)&v6 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v6 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v4 = *((_QWORD *)&v6 + 1);
        (***((void (__fastcall ****)(_QWORD))&v6 + 1))(*((_QWORD *)&v6 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v6 + 1) + 8LL))(*((_QWORD *)&v6 + 1));
      }
    }
    *a2 = 0LL;
  }
  return a2;
}
