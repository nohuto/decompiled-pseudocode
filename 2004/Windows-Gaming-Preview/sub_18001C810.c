/*
 * XREFs of sub_18001C810 @ 0x18001C810
 * Callers:
 *     sub_18001B040 @ 0x18001B040 (sub_18001B040.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001E00C @ 0x18001E00C (sub_18001E00C.c)
 */

__int64 __fastcall sub_18001C810(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = sub_18001E00C(a1 + 80);
  v2 = v1;
  if ( v1 < 0 )
    sub_180003268(retaddr, 434, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v1);
  return v2;
}
