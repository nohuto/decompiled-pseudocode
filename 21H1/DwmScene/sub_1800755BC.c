/*
 * XREFs of sub_1800755BC @ 0x1800755BC
 * Callers:
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 * Callees:
 *     sub_180061744 @ 0x180061744 (sub_180061744.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800755BC(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  sub_180061744(a1 + 112, (__int64)&v6);
  v4 = 0;
  if ( (unsigned int)sub_180075490(a1) )
  {
    while ( *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * v4) != *a2 )
    {
      if ( ++v4 >= (unsigned int)sub_180075490(a1) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v4 = -1;
  }
  if ( BYTE8(v6) )
    sub_180061A3C(v6);
  return v4;
}
