/*
 * XREFs of sub_18008CBC4 @ 0x18008CBC4
 * Callers:
 *     sub_180017CFC @ 0x180017CFC (sub_180017CFC.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_18008A1B4 @ 0x18008A1B4 (sub_18008A1B4.c)
 *     sub_18008CDE8 @ 0x18008CDE8 (sub_18008CDE8.c)
 *     sub_18008D440 @ 0x18008D440 (sub_18008D440.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008CBC4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rbx
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v11[8]; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp-38h]
  _QWORD v13[5]; // [rsp+40h] [rbp-30h] BYREF

  v13[4] = a3;
  sub_18006714C(a1 + 16, a2);
  v10 = 0LL;
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_18001277C(v13, (__int64)a3);
  sub_18008CDE8(a1, &v10, v13);
  v6 = (__int64 *)sub_18008D440(v10, v11);
  sub_18008A1B4(a2, v6);
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
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v8 = *((_QWORD *)&v10 + 1);
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
  }
  return unknown_libname_103(a3);
}
