/*
 * XREFs of sub_1800128B0 @ 0x1800128B0
 * Callers:
 *     sub_18002CF54 @ 0x18002CF54 (sub_18002CF54.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_1800128B0(__int64 a1, HSTRING a2, HSTRING a3)
{
  HSTRING *v3; // rbx
  HRESULT v7; // ebx
  int v8; // edx
  HSTRING *v10; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = (HSTRING *)(a1 + 64);
  if ( !a3 || a3 != *v3 )
  {
    WindowsDeleteString(*v3);
    *v3 = 0LL;
    v7 = WindowsDuplicateString(a3, v3);
    if ( v7 < 0 )
    {
      v8 = 210;
LABEL_5:
      sub_180003268(
        retaddr,
        v8,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        v7);
      return (unsigned int)v7;
    }
  }
  v10 = (HSTRING *)(a1 + 72);
  if ( !a2 || a2 != *v10 )
  {
    WindowsDeleteString(*v10);
    *v10 = 0LL;
    v7 = WindowsDuplicateString(a2, (HSTRING *)(a1 + 72));
    if ( v7 < 0 )
    {
      v8 = 211;
      goto LABEL_5;
    }
  }
  return 0LL;
}
