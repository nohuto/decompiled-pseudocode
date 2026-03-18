/*
 * XREFs of _UserIsWindowDesktopComposed@8 @ 0xBFB24
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

int __stdcall UserIsWindowDesktopComposed(unsigned int a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // eax

  v2 = 0;
  v3 = HMValidateHandleNoSecure(a1, 1);
  if ( v3 )
  {
    v2 = 1;
    *a2 = IsWindowDesktopComposed(v3);
  }
  return v2;
}
