/*
 * XREFs of sub_180092B60 @ 0x180092B60
 * Callers:
 *     sub_18010FEE0 @ 0x18010FEE0 (sub_18010FEE0.c)
 * Callees:
 *     sub_1800F295C @ 0x1800F295C (sub_1800F295C.c)
 *     sub_1800F540C @ 0x1800F540C (sub_1800F540C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180092B60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rax
  unsigned __int16 v9; // r14
  volatile signed __int32 *v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-10h]

  v8 = (_QWORD *)sub_1800F540C(*(_QWORD *)(a1 + 120), &v12);
  v9 = sub_1800F295C(*v8, a2);
  v10 = v13;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return sub_180092C14(a1, v9, a3, a4);
}
