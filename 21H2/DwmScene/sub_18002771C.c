/*
 * XREFs of sub_18002771C @ 0x18002771C
 * Callers:
 *     sub_180028970 @ 0x180028970 (sub_180028970.c)
 *     sub_18002C140 @ 0x18002C140 (sub_18002C140.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002771C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rcx

  v2 = (volatile signed __int32 *)a1[16];
  if ( v2 )
  {
    if ( !_InterlockedDecrement(v2 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( !_InterlockedDecrement(v2 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v3 = (volatile signed __int32 *)a1[14];
  if ( v3 )
  {
    if ( !_InterlockedDecrement(v3 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( !_InterlockedDecrement(v3 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = a1[12];
  if ( v4 )
  {
    a1[12] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_1800CC3E0(a1);
}
