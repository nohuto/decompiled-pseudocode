/*
 * XREFs of sub_180072828 @ 0x180072828
 * Callers:
 *     sub_180072BC0 @ 0x180072BC0 (sub_180072BC0.c)
 *     sub_18007B480 @ 0x18007B480 (sub_18007B480.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180072828(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  volatile signed __int32 *v3; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 32);
  if ( v1 )
  {
    if ( !_InterlockedDecrement(v1 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( !_InterlockedDecrement(v1 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  v3 = *(volatile signed __int32 **)(a1 + 16);
  if ( v3 )
  {
    if ( !_InterlockedDecrement(v3 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( !_InterlockedDecrement(v3 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return sub_180085D6C(a1);
}
