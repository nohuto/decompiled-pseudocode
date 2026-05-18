/*
 * XREFs of sub_18002F588 @ 0x18002F588
 * Callers:
 *     sub_180030690 @ 0x180030690 (sub_180030690.c)
 *     sub_180030B40 @ 0x180030B40 (sub_180030B40.c)
 * Callees:
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002F7A0 @ 0x18002F7A0 (sub_18002F7A0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18002F588(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  sub_18002F7A0(a1, &v6);
  if ( (_QWORD)v6 )
  {
    sub_180029F64(v6, a2);
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
