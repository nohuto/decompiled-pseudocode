/*
 * XREFs of sub_180045FE4 @ 0x180045FE4
 * Callers:
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BABDC @ 0x1800BABDC (sub_1800BABDC.c)
 */

__int64 __fastcall sub_180045FE4(__int64 *a1, unsigned int a2)
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
    sub_1800BABDC();
  }
  result = v5 + 24;
  *a1 = result;
  return result;
}
