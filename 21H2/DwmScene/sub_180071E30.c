/*
 * XREFs of sub_180071E30 @ 0x180071E30
 * Callers:
 *     sub_180071E30 @ 0x180071E30 (sub_180071E30.c)
 *     sub_180071EE8 @ 0x180071EE8 (sub_180071EE8.c)
 * Callees:
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_180071E30 @ 0x180071E30 (sub_180071E30.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18012524C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180071E30(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 i; // rbx

  sub_1800670E0(a1 + 16);
  v6 = *a3;
  sub_180089274(*a3);
  v7 = *(_QWORD *)(v6 + 376);
  v8 = *(_QWORD *)(v6 + 384);
  while ( v7 != v8 )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x180071EE4LL);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v7);
    v7 += 16LL;
  }
  v10 = *a3;
  result = sub_180089274(*a3);
  v12 = *(_QWORD *)(v10 + 40);
  for ( i = *(_QWORD *)(v10 + 32); i != v12; i += 16LL )
    result = sub_180071E30(a1, a2, i);
  return result;
}
