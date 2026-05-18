/*
 * XREFs of sub_1800F73EC @ 0x1800F73EC
 * Callers:
 *     sub_1800F7560 @ 0x1800F7560 (sub_1800F7560.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_1800F73EC(_QWORD *a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx

  *a1 = &Spectre::Engine::ViewerCamera::`vftable';
  v3 = (volatile signed __int32 *)a1[224];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[222];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return sub_1800A7698((__int64)a1, a2);
}
