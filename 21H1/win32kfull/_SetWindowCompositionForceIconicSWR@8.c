/*
 * XREFs of _SetWindowCompositionForceIconicSWR@8 @ 0xC54E8
 * Callers:
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 * Callees:
 *     _SetWindowCompositionInfo@8 @ 0x2550C (_SetWindowCompositionInfo@8.c)
 *     _DwmAsyncSetCompositionAttribute@16 @ 0x2557C (_DwmAsyncSetCompositionAttribute@16.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 */

int __fastcall SetWindowCompositionForceIconicSWR(int *a1, _DWORD *a2)
{
  bool v2; // zf
  int v4; // esi
  void *v6; // eax
  const void *v7; // [esp-4h] [ebp-3Ch]
  unsigned int v8[9]; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD *v9; // [esp+30h] [ebp-8h]
  int v10; // [esp+34h] [ebp-4h]

  v9 = a2;
  v2 = *a2 == 0;
  memset(v8, 0, sizeof(v8));
  v4 = -1073741816;
  v10 = !v2;
  if ( _GetWindowCompositionInfo((int)a1, v8) )
  {
    if ( (int)(v8[0] << 28) >> 31 == v10 )
      return 0;
    v8[0] = v8[0] & 0xFFFFFFF7 | (8 * v10);
    if ( !SetWindowCompositionInfo((int)a1, v8) )
      return -1073741801;
    if ( !IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v7 = v9;
      v6 = (void *)ReferenceDwmApiPort();
      return DwmAsyncSetCompositionAttribute(v6, *a1, 7, v7);
    }
  }
  return v4;
}
