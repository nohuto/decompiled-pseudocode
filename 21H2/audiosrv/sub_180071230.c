/*
 * XREFs of sub_180071230 @ 0x180071230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180071230(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *a2;
  v5 = *a2;
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 16LL))(v2, &v5);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 176LL))(v3);
  return result;
}
