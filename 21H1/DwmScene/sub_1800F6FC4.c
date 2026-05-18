/*
 * XREFs of sub_1800F6FC4 @ 0x1800F6FC4
 * Callers:
 *     sub_1800F6930 @ 0x1800F6930 (sub_1800F6930.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800F6FC4(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rcx
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  v6 = a1 + 56;
  *(_QWORD *)(a1 + 112) = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 112);
  if ( v7 )
    *(_QWORD *)(v6 + 56) = (**v7)(v7, v6);
  *(_QWORD *)(a1 + 176) = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 176);
  if ( v8 )
    *(_QWORD *)(a1 + 176) = (**v8)(v8, a1 + 120);
  return a1;
}
