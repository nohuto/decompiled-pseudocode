/*
 * XREFs of sub_180092224 @ 0x180092224
 * Callers:
 *     sub_180092E28 @ 0x180092E28 (sub_180092E28.c)
 *     sub_18010FD30 @ 0x18010FD30 (sub_18010FD30.c)
 * Callees:
 *     sub_1800922F4 @ 0x1800922F4 (sub_1800922F4.c)
 *     sub_1800F295C @ 0x1800F295C (sub_1800F295C.c)
 *     sub_1800F540C @ 0x1800F540C (sub_1800F540C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180092224(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  unsigned __int16 v5; // di
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-20h]
  _BYTE v11[8]; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp-10h]

  v3 = (_QWORD *)sub_1800922F4(a1, v11);
  v4 = (_QWORD *)sub_1800F540C(*v3, v9);
  v5 = sub_1800F295C(*v4, a2);
  v6 = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = v12;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return v5;
}
