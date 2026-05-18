/*
 * XREFs of sub_18006AFE4 @ 0x18006AFE4
 * Callers:
 *     sub_18006B074 @ 0x18006B074 (sub_18006B074.c)
 *     sub_18006B4F0 @ 0x18006B4F0 (sub_18006B4F0.c)
 *     sub_18012A53A @ 0x18012A53A (sub_18012A53A.c)
 * Callees:
 *     sub_1800671C0 @ 0x1800671C0 (sub_1800671C0.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006AFE4(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 72);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  sub_1800671C0((__int64 *)(a1 + 40));
  if ( *(_BYTE *)(a1 + 24) )
    sub_180067304(*(_QWORD *)(a1 + 16));
  return sub_18011C1A0(a1 + 8);
}
