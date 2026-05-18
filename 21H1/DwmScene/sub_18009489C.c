/*
 * XREFs of sub_18009489C @ 0x18009489C
 * Callers:
 *     sub_1800142C0 @ 0x1800142C0 (sub_1800142C0.c)
 *     sub_180015120 @ 0x180015120 (sub_180015120.c)
 * Callees:
 *     sub_18009824C @ 0x18009824C (sub_18009824C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_18009489C(_QWORD *a1)
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
  sub_18009824C(a1 + 13);
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
  return sub_18008A530(a1);
}
