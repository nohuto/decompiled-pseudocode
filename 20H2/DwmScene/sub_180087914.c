/*
 * XREFs of sub_180087914 @ 0x180087914
 * Callers:
 *     sub_1800BCC2C @ 0x1800BCC2C (sub_1800BCC2C.c)
 * Callees:
 *     sub_1800874EC @ 0x1800874EC (sub_1800874EC.c)
 *     sub_1800876A0 @ 0x1800876A0 (sub_1800876A0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180087914(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // r9
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp-20h]

  v10 = 0LL;
  v5 = a3[1];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a3[1];
  }
  *(_QWORD *)&v10 = *a3;
  *((_QWORD *)&v10 + 1) = v5;
  v6 = sub_1800876A0(a1, &v11, (__int64 *)&v10);
  sub_1800874EC(*v6, a2);
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
