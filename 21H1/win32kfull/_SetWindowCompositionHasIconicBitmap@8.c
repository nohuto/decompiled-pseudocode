/*
 * XREFs of _SetWindowCompositionHasIconicBitmap@8 @ 0xACBD2
 * Callers:
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 * Callees:
 *     _SetWindowCompositionInfo@8 @ 0x2550C (_SetWindowCompositionInfo@8.c)
 *     _DwmAsyncSetCompositionAttribute@16 @ 0x2557C (_DwmAsyncSetCompositionAttribute@16.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 */

int __fastcall SetWindowCompositionHasIconicBitmap(int *a1, _DWORD *a2)
{
  int v3; // esi
  int v4; // ebx
  void *v5; // eax
  const void *v7; // [esp-4h] [ebp-3Ch]
  unsigned int v8[9]; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD *v9; // [esp+30h] [ebp-8h]
  int *v10; // [esp+34h] [ebp-4h]

  v10 = a1;
  v9 = a2;
  memset(v8, 0, sizeof(v8));
  v3 = -1073741816;
  v4 = *a2 != 0;
  if ( _GetWindowCompositionInfo((int)a1, v8) )
  {
    if ( (int)(v8[0] << 26) >> 31 == v4 )
      return 0;
    v8[0] = v8[0] & 0xFFFFFFDF | (32 * v4);
    if ( !SetWindowCompositionInfo((int)a1, v8) )
      return -1073741801;
    if ( !IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v7 = v9;
      v5 = (void *)ReferenceDwmApiPort();
      return DwmAsyncSetCompositionAttribute(v5, *a1, 9, v7);
    }
  }
  return v3;
}
