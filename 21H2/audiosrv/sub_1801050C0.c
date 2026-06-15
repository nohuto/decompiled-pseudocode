/*
 * XREFs of sub_1801050C0 @ 0x1801050C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801050C0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = *a2;
  if ( !*a2 )
    v4 = a2[1] - 0x46000000000000C0LL;
  if ( v4 )
  {
    v5 = *a2 - 0x4D21C709A09513EDLL;
    if ( *a2 == 0x4D21C709A09513EDLL )
      v5 = a2[1] - 0x47397FC4345F7BBDLL;
    if ( v5 )
      return 2147500034LL;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
