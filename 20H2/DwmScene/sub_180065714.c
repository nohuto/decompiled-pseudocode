/*
 * XREFs of sub_180065714 @ 0x180065714
 * Callers:
 *     sub_1800657A4 @ 0x1800657A4 (sub_1800657A4.c)
 *     sub_180065C20 @ 0x180065C20 (sub_180065C20.c)
 *     sub_180124C22 @ 0x180124C22 (sub_180124C22.c)
 * Callees:
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180065714(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 72);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  sub_1800618F0((__int64 *)(a1 + 40));
  if ( *(_BYTE *)(a1 + 24) )
    sub_180061A34(*(_QWORD *)(a1 + 16));
  return sub_1801168D0(a1 + 8);
}
