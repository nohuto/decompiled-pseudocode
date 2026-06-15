/*
 * XREFs of sub_18000CFD8 @ 0x18000CFD8
 * Callers:
 *     sub_18000CF70 @ 0x18000CF70 (sub_18000CF70.c)
 * Callees:
 *     sub_18000F0A8 @ 0x18000F0A8 (sub_18000F0A8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000CFD8(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r8
  _DWORD *v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax

  v2 = a2;
  v4 = (_DWORD *)(*a1 - 24);
  if ( v4[3] >= (int)v2
    || (int)v2 <= 0
    || (v5 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, __int64))(**(_QWORD **)v4 + 16LL))(
               *(_QWORD *)v4,
               v4,
               v2,
               2LL)) == 0 )
  {
    sub_18000F0A8();
  }
  result = v5 + 24;
  *a1 = result;
  return result;
}
