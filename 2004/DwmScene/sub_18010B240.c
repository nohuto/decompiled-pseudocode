/*
 * XREFs of sub_18010B240 @ 0x18010B240
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008CB24 @ 0x18008CB24 (sub_18008CB24.c)
 *     sub_18008CE5C @ 0x18008CE5C (sub_18008CE5C.c)
 *     sub_18008D1E4 @ 0x18008D1E4 (sub_18008D1E4.c)
 *     sub_180095AEC @ 0x180095AEC (sub_180095AEC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010B240(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // eax
  char v4; // bl
  bool v5; // bp
  bool v6; // si
  bool v7; // di
  char v8; // r8
  char v9; // r8
  char v10; // r8
  __int64 result; // rax
  volatile signed __int32 *v12; // rbx
  signed __int32 v13; // eax
  bool v14; // zf
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF

  v15 = 0LL;
  sub_180095AEC(a2, &v15, a3);
  v3 = sub_18008CB24(v15);
  v4 = 1;
  v5 = v3 == 1;
  v6 = v3 == 3;
  v7 = v3 == 2;
  v8 = v3 == 1 || v3 == 2;
  sub_18008D1E4(v15, 9, v8);
  v9 = v6 || v7;
  sub_18008D1E4(v15, 8, v9);
  v10 = v5 || v7;
  sub_18008CE5C(v15, (__int64)&qword_18020C460, v10);
  if ( !v6 && !v7 )
    v4 = 0;
  result = sub_18008CE5C(v15, (__int64)&qword_18020C480, v4);
  v12 = (volatile signed __int32 *)*((_QWORD *)&v15 + 1);
  if ( *((_QWORD *)&v15 + 1) )
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL), 0xFFFFFFFF);
    v14 = v13 == 1;
    result = (unsigned int)(v13 - 1);
    if ( v14 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return result;
}
