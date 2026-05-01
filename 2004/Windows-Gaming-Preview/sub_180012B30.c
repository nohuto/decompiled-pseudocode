/*
 * XREFs of sub_180012B30 @ 0x180012B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_180012B30(__int64 a1, _QWORD *a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = 0LL;
    return 0LL;
  }
  else
  {
    sub_180003268(
      retaddr,
      257,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
