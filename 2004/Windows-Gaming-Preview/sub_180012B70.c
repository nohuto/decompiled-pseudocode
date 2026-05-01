/*
 * XREFs of sub_180012B70 @ 0x180012B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 */

__int64 __fastcall sub_180012B70(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v5 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    v6[1] = &v5;
    v6[0] = a1;
    v6[2] = &v8;
    v4 = sub_180012BF8(v6);
    if ( v4 < 0 )
      sub_180012300(
        retaddr,
        283,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        v4);
    return 0LL;
  }
  else
  {
    sub_180003268(
      retaddr,
      269,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
