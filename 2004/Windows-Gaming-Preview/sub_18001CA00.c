/*
 * XREFs of sub_18001CA00 @ 0x18001CA00
 * Callers:
 *     sub_18001B090 @ 0x18001B090 (sub_18001B090.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001DDD8 @ 0x18001DDD8 (sub_18001DDD8.c)
 */

__int64 __fastcall sub_18001CA00(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 )
  {
    v2 = -2147467261;
    v3 = 482;
LABEL_5:
    sub_180003268(retaddr, v3, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v2);
    return v2;
  }
  v4 = sub_18001DDD8(v1 + 40);
  v2 = v4;
  if ( v4 < 0 )
  {
    sub_180003268(
      retaddr,
      38,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentryupdatehandler.cpp",
      v4);
    v3 = 483;
    goto LABEL_5;
  }
  return v2;
}
