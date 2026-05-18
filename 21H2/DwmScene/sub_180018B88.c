/*
 * XREFs of sub_180018B88 @ 0x180018B88
 * Callers:
 *     sub_18001AC20 @ 0x18001AC20 (sub_18001AC20.c)
 *     sub_180028C30 @ 0x180028C30 (sub_180028C30.c)
 *     sub_180029210 @ 0x180029210 (sub_180029210.c)
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 *     sub_1800321A0 @ 0x1800321A0 (sub_1800321A0.c)
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_180038680 @ 0x180038680 (sub_180038680.c)
 *     sub_180038950 @ 0x180038950 (sub_180038950.c)
 *     sub_180038AF0 @ 0x180038AF0 (sub_180038AF0.c)
 *     sub_180039610 @ 0x180039610 (sub_180039610.c)
 *     sub_18003C320 @ 0x18003C320 (sub_18003C320.c)
 *     sub_18003EDE0 @ 0x18003EDE0 (sub_18003EDE0.c)
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 *     sub_18003FE78 @ 0x18003FE78 (sub_18003FE78.c)
 *     sub_18010A840 @ 0x18010A840 (sub_18010A840.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180018B88(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx

  v3 = *a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = a2[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *a1 = v3;
  a1[1] = a2[1];
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
