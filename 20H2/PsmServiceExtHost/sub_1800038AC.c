/*
 * XREFs of sub_1800038AC @ 0x1800038AC
 * Callers:
 *     sub_1800037C0 @ 0x1800037C0 (sub_1800037C0.c)
 *     sub_180005EAC @ 0x180005EAC (sub_180005EAC.c)
 * Callees:
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_18002247C @ 0x18002247C (sub_18002247C.c)
 */

__int64 __fastcall sub_1800038AC(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  sub_18000B084(a1, a2, 2LL);
  RtlAcquireSRWLockShared(v2 + 48);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 96)) <= 1 )
    __fastfail(0xEu);
  sub_18000E1BC(v4);
  *(_DWORD *)(a1 + 36) |= 1u;
  sub_18002247C(v4);
  v5 = *(_QWORD *)(a1 + 8);
  sub_18001E830(v7, v6, 2LL);
  RtlReleaseSRWLockShared(v5 + 48);
  sub_18000E244(v4);
  return sub_1800286D8(v4);
}
