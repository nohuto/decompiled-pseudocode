/*
 * XREFs of sub_1800FBCB4 @ 0x1800FBCB4
 * Callers:
 *     sub_1800FBD20 @ 0x1800FBD20 (sub_1800FBD20.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_1800FBCB4(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx

  *a1 = &Spectre::Engine::Aimer::`vftable';
  v2 = (volatile signed __int32 *)a1[13];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return sub_18008A530(a1);
}
