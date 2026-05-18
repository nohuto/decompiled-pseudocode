/*
 * XREFs of sub_18006C4D4 @ 0x18006C4D4
 * Callers:
 *     sub_180030690 @ 0x180030690 (sub_180030690.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18012524C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006C4D4(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(_QWORD *)(a1 + 136);
  while ( v1 != v2 )
  {
    v3 = *(_QWORD *)(v1 + 56);
    if ( !v3 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x18006C51DLL);
    }
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v1 += 64LL;
  }
  return result;
}
