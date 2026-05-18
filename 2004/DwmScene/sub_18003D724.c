/*
 * XREFs of sub_18003D724 @ 0x18003D724
 * Callers:
 *     sub_18003D7B4 @ 0x18003D7B4 (sub_18003D7B4.c)
 *     sub_18003D830 @ 0x18003D830 (sub_18003D830.c)
 *     sub_1800F3BB0 @ 0x1800F3BB0 (sub_1800F3BB0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003D724(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
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
  v3 = (volatile signed __int32 *)a1[10];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_180062318(a1);
}
