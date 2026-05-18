/*
 * XREFs of sub_1800391CC @ 0x1800391CC
 * Callers:
 *     sub_180028C30 @ 0x180028C30 (sub_180028C30.c)
 *     sub_180029210 @ 0x180029210 (sub_180029210.c)
 *     sub_18002E630 @ 0x18002E630 (sub_18002E630.c)
 *     sub_180038F20 @ 0x180038F20 (sub_180038F20.c)
 *     sub_1800440E0 @ 0x1800440E0 (sub_1800440E0.c)
 *     sub_180048510 @ 0x180048510 (sub_180048510.c)
 *     sub_180048760 @ 0x180048760 (sub_180048760.c)
 *     sub_180048950 @ 0x180048950 (sub_180048950.c)
 *     sub_180048C20 @ 0x180048C20 (sub_180048C20.c)
 * Callees:
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800391CC(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  signed __int32 v8; // eax
  __int128 v9; // [rsp+20h] [rbp-18h]

  v9 = 0LL;
  v4 = a1[10];
  if ( v4 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v4 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v8 + 1, v8) )
      {
        *(_QWORD *)&v9 = a1[9];
        v5 = a1[10];
        *((_QWORD *)&v9 + 1) = v5;
        goto LABEL_3;
      }
    }
  }
  v5 = 0LL;
LABEL_3:
  sub_18006714C(v9 + 24);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
    }
  }
  v6 = a1[18];
  *a2 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return a2;
}
