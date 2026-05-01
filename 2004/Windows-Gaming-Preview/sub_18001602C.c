/*
 * XREFs of sub_18001602C @ 0x18001602C
 * Callers:
 *     sub_18001F500 @ 0x18001F500 (sub_18001F500.c)
 *     sub_18001F6B0 @ 0x18001F6B0 (sub_18001F6B0.c)
 *     sub_18001FE90 @ 0x18001FE90 (sub_18001FE90.c)
 *     sub_180033FD0 @ 0x180033FD0 (sub_180033FD0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001602C(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  result = RoGetMatchingRestrictedErrorInfo(a1, &v3);
  if ( (int)result >= 0 )
    result = SetRestrictedErrorInfo(v3);
  v2 = v3;
  if ( v3 )
  {
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
