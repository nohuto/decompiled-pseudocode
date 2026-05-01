/*
 * XREFs of sub_180034B40 @ 0x180034B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180034B40(volatile signed __int32 *a1)
{
  int v1; // ebx

  v1 = _InterlockedDecrement(a1 + 54);
  if ( v1 < 0 )
    __fastfail(0x80004005);
  if ( !v1 && a1 )
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, 1LL);
  return (unsigned int)v1;
}
