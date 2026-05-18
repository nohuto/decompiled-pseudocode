/*
 * XREFs of sub_180087160 @ 0x180087160
 * Callers:
 *     sub_180085E34 @ 0x180085E34 (sub_180085E34.c)
 *     sub_1800870D4 @ 0x1800870D4 (sub_1800870D4.c)
 * Callees:
 *     sub_180061810 @ 0x180061810 (sub_180061810.c)
 *     sub_180086F58 @ 0x180086F58 (sub_180086F58.c)
 *     sub_180087B70 @ 0x180087B70 (sub_180087B70.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180087160(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  volatile signed __int32 *v8; // rdi

  sub_180061810(a1 + 16);
  if ( a4 )
    sub_180086F58(a1, a2, a4);
  else
    sub_180087B70(*a3, a2);
  v8 = (volatile signed __int32 *)a3[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a2;
}
