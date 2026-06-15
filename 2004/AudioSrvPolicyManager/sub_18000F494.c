/*
 * XREFs of sub_18000F494 @ 0x18000F494
 * Callers:
 *     sub_18000F6B8 @ 0x18000F6B8 (sub_18000F6B8.c)
 * Callees:
 *     sub_18000F3E8 @ 0x18000F3E8 (sub_18000F3E8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000F494(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v15; // [rsp+28h] [rbp-10h]

  a1[2] = a3;
  v5 = sub_18000F3E8(&v14, a2);
  v7 = *v5;
  v8 = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  *a1 = v7;
  v9 = (volatile signed __int32 *)a1[1];
  a1[1] = v8;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = v15;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = *a1 == 0LL ? 0x8007000E : 0;
  v12 = *(_QWORD *)(a2 + 56);
  if ( v12 )
  {
    LOBYTE(v6) = v12 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v6);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v11;
}
