/*
 * XREFs of sub_180066F10 @ 0x180066F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800642C4 @ 0x1800642C4 (sub_1800642C4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_UNKNOWN **__fastcall sub_180066F10(__int64 *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rsi
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rcx
  __int64 v7; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a2;
  v4 = a1 + 16;
  v5 = a1[17];
  if ( a1[18] == v5 )
  {
    result = (_UNKNOWN **)sub_1800642C4(a1 + 16, a1[17], a2);
  }
  else
  {
    *(_QWORD *)(v5 + 56) = 0LL;
    v6 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
    if ( v6 )
    {
      result = (_UNKNOWN **)(**v6)(v6, v5);
      *(_QWORD *)(v5 + 56) = result;
    }
    v4[1] += 64LL;
  }
  v7 = *(_QWORD *)(v3 + 56);
  if ( v7 )
  {
    LOBYTE(a2) = v7 != v3;
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  return result;
}
