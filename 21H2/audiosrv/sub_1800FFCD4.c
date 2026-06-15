/*
 * XREFs of sub_1800FFCD4 @ 0x1800FFCD4
 * Callers:
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 *     sub_1800FA9C8 @ 0x1800FA9C8 (sub_1800FA9C8.c)
 * Callees:
 *     sub_18004BDBC @ 0x18004BDBC (sub_18004BDBC.c)
 */

__int64 __fastcall sub_1800FFCD4(int a1, int a2)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18004BDBC(
           a1,
           a2,
           (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
           0,
           0LL,
           retaddr,
           0,
           -2147024882);
}
