/*
 * XREFs of sub_180090060 @ 0x180090060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008FBE4 @ 0x18008FBE4 (sub_18008FBE4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180090060(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rbx
  __int64 v9; // xmm6_8
  volatile signed __int32 *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-78h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-68h]
  __int128 v14; // [rsp+40h] [rbp-58h] BYREF

  v13 = a4;
  v14 = 0LL;
  sub_18008FBE4((__int64)&v14, a4);
  v12 = 0LL;
  v8 = *((_QWORD *)&v14 + 1);
  if ( *((_QWORD *)&v14 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
    v8 = *((_QWORD *)&v14 + 1);
  }
  v9 = v14;
  v12 = v14;
  (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 144LL))(a1, &v12, a3);
  *a2 = v9;
  a2[1] = v8;
  v10 = (volatile signed __int32 *)a4[1];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return a2;
}
