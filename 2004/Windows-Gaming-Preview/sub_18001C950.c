/*
 * XREFs of sub_18001C950 @ 0x18001C950
 * Callers:
 *     sub_18001B070 @ 0x18001B070 (sub_18001B070.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001DDD8 @ 0x18001DDD8 (sub_18001DDD8.c)
 */

__int64 __fastcall sub_18001C950(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = sub_18001DDD8(a1 + 104);
  v2 = v1;
  if ( v1 < 0 )
    sub_180003268(retaddr, 462, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v1);
  return v2;
}
