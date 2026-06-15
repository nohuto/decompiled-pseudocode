/*
 * XREFs of sub_180017070 @ 0x180017070
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 */

__int64 __fastcall sub_180017070(__int64 a1)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 720) )
    return sub_1800301A0();
  sub_180003AB0(
    retaddr,
    4654,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    -2147418113);
  return 2147549183LL;
}
