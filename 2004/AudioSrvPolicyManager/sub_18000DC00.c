/*
 * XREFs of sub_18000DC00 @ 0x18000DC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_18000DC00(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  int result; // eax
  __int64 v6; // rcx

  v4 = a1[3];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v6 = a1[1];
  if ( v6 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( a2 )
    return sub_180039D98(a1);
  return result;
}
