/*
 * XREFs of sub_180012990 @ 0x180012990
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180012A28 @ 0x180012A28 (sub_180012A28.c)
 */

__int64 __fastcall sub_180012990(__int64 a1, HSTRING *a2)
{
  HRESULT v4; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  HSTRING *newString; // [rsp+48h] [rbp+10h] BYREF

  newString = a2;
  if ( a2 )
  {
    *a2 = 0LL;
    v5[1] = &newString;
    v5[0] = a1;
    if ( (int)sub_180012A28(v5) < 0 )
    {
      v4 = WindowsDuplicateString(*(HSTRING *)(a1 + 64), newString);
      if ( v4 < 0 )
        sub_180012300(
          retaddr,
          245,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
          v4);
    }
    return 0LL;
  }
  else
  {
    sub_180003268(
      retaddr,
      222,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
