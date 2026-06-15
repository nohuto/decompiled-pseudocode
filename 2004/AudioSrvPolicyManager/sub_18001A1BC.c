/*
 * XREFs of sub_18001A1BC @ 0x18001A1BC
 * Callers:
 *     sub_18003BA7A @ 0x18003BA7A (sub_18003BA7A.c)
 * Callees:
 *     sub_18000F960 @ 0x18000F960 (sub_18000F960.c)
 */

__int64 __fastcall sub_18001A1BC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18000F960(
           a1,
           2521,
           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
           a4,
           v5,
           retaddr,
           2);
}
