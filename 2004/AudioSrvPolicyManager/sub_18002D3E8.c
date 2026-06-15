/*
 * XREFs of sub_18002D3E8 @ 0x18002D3E8
 * Callers:
 *     sub_18002D14C @ 0x18002D14C (sub_18002D14C.c)
 * Callees:
 *     sub_18000F3E8 @ 0x18000F3E8 (sub_18000F3E8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18002D3E8(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v12; // [rsp+28h] [rbp-20h]

  *a1 = off_18003F400;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = sub_18000F3E8(&v11, a2);
  v5 = *v4;
  v6 = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  a1[1] = v5;
  v7 = (volatile signed __int32 *)a1[2];
  a1[2] = v6;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = v12;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = *(_QWORD *)(a2 + 56);
  if ( v9 )
  {
    LOBYTE(v6) = v9 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v6);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return a1;
}
