/*
 * XREFs of sub_180070FC4 @ 0x180070FC4
 * Callers:
 *     sub_1800635C4 @ 0x1800635C4 (sub_1800635C4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180070FC4(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = a1[5];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = a1[6];
  if ( v4 )
    result = TpReleaseTimer(v4);
  v5 = a1[16];
  if ( v5 )
    result = TpReleaseTimer(v5);
  v6 = a1[20];
  if ( v6 )
    result = TpReleaseTimer(v6);
  v7 = a1[24];
  if ( v7 )
    return TpReleaseTimer(v7);
  return result;
}
