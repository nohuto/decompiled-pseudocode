/*
 * XREFs of sub_1800FC58C @ 0x1800FC58C
 * Callers:
 *     sub_1800FC200 @ 0x1800FC200 (sub_1800FC200.c)
 * Callees:
 *     sub_1800FC7E8 @ 0x1800FC7E8 (sub_1800FC7E8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FC58C(__int64 a1, __int64 a2, float a3, float a4, char a5)
{
  volatile signed __int32 *v7; // rbx
  _BYTE v9[8]; // [rsp+38h] [rbp-30h] BYREF
  float v10; // [rsp+80h] [rbp+18h] BYREF
  float v11; // [rsp+88h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v9[0] = a5;
  sub_1800FC7E8(a1, a2, &v10, &v11, v9);
  v7 = *(volatile signed __int32 **)(a2 + 8);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return a1;
}
