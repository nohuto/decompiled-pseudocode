/*
 * XREFs of sub_18008495C @ 0x18008495C
 * Callers:
 *     sub_18008495C @ 0x18008495C (sub_18008495C.c)
 *     sub_180087204 @ 0x180087204 (sub_180087204.c)
 * Callees:
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_18008495C @ 0x18008495C (sub_18008495C.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18008495C(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 i; // rbx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v10 = *a2;
  *((_QWORD *)&v10 + 1) = v4;
  v5 = *(_QWORD *)(a1 + 56);
  if ( !v5 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x180084A3BLL);
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 16LL))(v5, &v10);
  v6 = (volatile signed __int32 *)*((_QWORD *)&v10 + 1);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = *a2;
  sub_1800839A4(*a2);
  v8 = *(_QWORD *)(v7 + 40);
  for ( i = *(_QWORD *)(v7 + 32); i != v8; i += 16LL )
    sub_18008495C(a1, i);
}
