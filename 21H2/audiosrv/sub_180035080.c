/*
 * XREFs of sub_180035080 @ 0x180035080
 * Callers:
 *     sub_180075260 @ 0x180075260 (sub_180075260.c)
 *     sub_180075270 @ 0x180075270 (sub_180075270.c)
 *     sub_180075280 @ 0x180075280 (sub_180075280.c)
 *     sub_180075290 @ 0x180075290 (sub_180075290.c)
 *     sub_1800752A0 @ 0x1800752A0 (sub_1800752A0.c)
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180035080(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx

  result = sub_18006D208(a1 + 52);
  v3 = result;
  if ( !(_DWORD)result )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, (unsigned int)(result + 1));
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
    return v3;
  }
  return result;
}
