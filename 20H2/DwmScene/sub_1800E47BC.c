/*
 * XREFs of sub_1800E47BC @ 0x1800E47BC
 * Callers:
 *     sub_1800E4880 @ 0x1800E4880 (sub_1800E4880.c)
 *     sub_1800E7F98 @ 0x1800E7F98 (sub_1800E7F98.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E47BC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    v6[0] = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(a1 + 56);
    if ( !v4 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x1800E481DLL);
    }
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 16LL))(v4, v6);
  }
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
