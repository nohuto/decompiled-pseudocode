/*
 * XREFs of sub_18008713C @ 0x18008713C
 * Callers:
 *     sub_18008709C @ 0x18008709C (sub_18008709C.c)
 * Callees:
 *     sub_18007B2BC @ 0x18007B2BC (sub_18007B2BC.c)
 *     sub_180083F74 @ 0x180083F74 (sub_180083F74.c)
 *     sub_180083FF0 @ 0x180083FF0 (sub_180083FF0.c)
 *     sub_180084098 @ 0x180084098 (sub_180084098.c)
 *     sub_180084204 @ 0x180084204 (sub_180084204.c)
 *     sub_18008429C @ 0x18008429C (sub_18008429C.c)
 *     sub_180085CD8 @ 0x180085CD8 (sub_180085CD8.c)
 *     sub_1800860A8 @ 0x1800860A8 (sub_1800860A8.c)
 *     sub_180088C78 @ 0x180088C78 (sub_180088C78.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn sub_18008713C(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdx
  signed __int32 v4; // eax

  sub_180089274(a1);
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( !v4 )
        goto LABEL_7;
    }
    while ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) );
    v2 = *(volatile signed __int32 **)(a1 + 80);
  }
LABEL_7:
  if ( v2 && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  sub_18007B2BC();
}
