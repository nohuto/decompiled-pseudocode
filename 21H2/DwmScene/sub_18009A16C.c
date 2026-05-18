/*
 * XREFs of sub_18009A16C @ 0x18009A16C
 * Callers:
 *     sub_1800143A0 @ 0x1800143A0 (sub_1800143A0.c)
 *     sub_180015200 @ 0x180015200 (sub_180015200.c)
 * Callees:
 *     sub_18009DB1C @ 0x18009DB1C (sub_18009DB1C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_18009A16C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  volatile signed __int32 *v4; // rbx

  *a1 = &Spectre::Engine::MeshInstance::`vftable';
  v2 = (volatile signed __int32 *)a1[20];
  if ( v2 && !_InterlockedDecrement(v2 + 3) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[18];
  if ( v3 && !_InterlockedDecrement(v3 + 3) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  sub_18009DB1C(a1 + 13);
  v4 = (volatile signed __int32 *)a1[12];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return sub_18008FE00(a1);
}
