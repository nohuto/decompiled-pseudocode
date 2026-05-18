/*
 * XREFs of sub_180066C04 @ 0x180066C04
 * Callers:
 *     sub_18002ADC0 @ 0x18002ADC0 (sub_18002ADC0.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180066C04(__int64 a1)
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
      JUMPOUT(0x180066C4DLL);
    }
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v1 += 64LL;
  }
  return result;
}
