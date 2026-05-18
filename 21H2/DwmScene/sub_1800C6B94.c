/*
 * XREFs of sub_1800C6B94 @ 0x1800C6B94
 * Callers:
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 * Callees:
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_1800A5C64 @ 0x1800A5C64 (sub_1800A5C64.c)
 *     sub_1800F5908 @ 0x1800F5908 (sub_1800F5908.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C6B94(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int32 *v2; // rbx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v1 = sub_18007B2B4(a1);
  sub_1800A5C64(v1, &v3);
  sub_1800F5908(v3);
  v2 = (volatile signed __int32 *)*((_QWORD *)&v3 + 1);
  if ( *((_QWORD *)&v3 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v3 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
