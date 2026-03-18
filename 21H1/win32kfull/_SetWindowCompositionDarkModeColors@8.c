/*
 * XREFs of _SetWindowCompositionDarkModeColors@8 @ 0xF3D60
 * Callers:
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 * Callees:
 *     _SetWindowCompositionInfo@8 @ 0x2550C (_SetWindowCompositionInfo@8.c)
 *     _DwmAsyncSetCompositionAttribute@16 @ 0x2557C (_DwmAsyncSetCompositionAttribute@16.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 */

int __fastcall SetWindowCompositionDarkModeColors(int *a1, _DWORD *a2)
{
  int v3; // esi
  const void *v4; // edi
  int v5; // ecx
  void *v6; // eax
  unsigned int v8[9]; // [esp+Ch] [ebp-28h] BYREF
  _DWORD *v9; // [esp+30h] [ebp-4h]

  v9 = a2;
  memset(v8, 0, sizeof(v8));
  v3 = -1073741816;
  if ( _GetWindowCompositionInfo((int)a1, v8) )
  {
    v4 = v9;
    v3 = 0;
    v5 = *v9 != 0;
    if ( (int)(v8[0] << 15) >> 31 != v5 )
    {
      v8[0] = v8[0] & 0xFFFEFFFF | (v5 << 16);
      if ( SetWindowCompositionInfo((int)a1, v8) )
      {
        if ( IsWindowDesktopComposed(a1) )
        {
          v6 = (void *)ReferenceDwmApiPort();
          return DwmAsyncSetCompositionAttribute(v6, *a1, 26, v4);
        }
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return v3;
}
