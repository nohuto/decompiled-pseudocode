/*
 * XREFs of sub_180126AE8 @ 0x180126AE8
 * Callers:
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180126AE8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( !dword_18019F770[0] )
    return 0LL;
  while ( 1 )
  {
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)&dword_18019F770[2 * v2 + 2] + 16LL))(
                     *(_QWORD *)&dword_18019F770[2 * v2 + 2],
                     v7);
    v5 = *v4 - *a2;
    if ( *v4 == *a2 )
      v5 = v4[1] - a2[1];
    if ( !v5 )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= dword_18019F770[0] )
      return 0LL;
  }
  return *(_QWORD *)&dword_18019F770[2 * v2 + 2];
}
