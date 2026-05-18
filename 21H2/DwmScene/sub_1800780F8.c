/*
 * XREFs of sub_1800780F8 @ 0x1800780F8
 * Callers:
 *     sub_180078490 @ 0x180078490 (sub_180078490.c)
 *     sub_180080D50 @ 0x180080D50 (sub_180080D50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800780F8(__int64 a1)
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
  return sub_18008B63C(a1);
}
