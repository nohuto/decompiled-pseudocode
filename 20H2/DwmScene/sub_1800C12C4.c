/*
 * XREFs of sub_1800C12C4 @ 0x1800C12C4
 * Callers:
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 * Callees:
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     sub_1800A0394 @ 0x1800A0394 (sub_1800A0394.c)
 *     sub_1800F0038 @ 0x1800F0038 (sub_1800F0038.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C12C4(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int32 *v2; // rbx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v1 = sub_1800759E4(a1);
  sub_1800A0394(v1, &v3);
  sub_1800F0038(v3);
  v2 = (volatile signed __int32 *)*((_QWORD *)&v3 + 1);
  if ( *((_QWORD *)&v3 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v3 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
