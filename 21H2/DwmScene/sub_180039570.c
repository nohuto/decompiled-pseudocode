/*
 * XREFs of sub_180039570 @ 0x180039570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_180039570(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0;
  if ( v1 )
    return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v1 + 896LL))(v1) == 0;
  return v2;
}
