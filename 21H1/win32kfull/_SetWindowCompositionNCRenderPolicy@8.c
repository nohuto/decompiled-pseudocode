/*
 * XREFs of _SetWindowCompositionNCRenderPolicy@8 @ 0x179299
 * Callers:
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 * Callees:
 *     _SetWindowCompositionInfo@8 @ 0x2550C (_SetWindowCompositionInfo@8.c)
 *     _DwmAsyncSetCompositionAttribute@16 @ 0x2557C (_DwmAsyncSetCompositionAttribute@16.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 */

int __fastcall SetWindowCompositionNCRenderPolicy(int *a1, unsigned int *a2)
{
  int v3; // esi
  unsigned int *v4; // esi
  void *v5; // eax
  unsigned int v7[9]; // [esp+Ch] [ebp-28h] BYREF
  unsigned int *v8; // [esp+30h] [ebp-4h]

  v8 = a2;
  memset(v7, 0, sizeof(v7));
  v3 = -1073741816;
  if ( _GetWindowCompositionInfo((int)a1, v7) )
  {
    v4 = v8;
    if ( v7[1] == *v8 )
      return 0;
    v7[1] = *v8;
    if ( !SetWindowCompositionInfo((int)a1, v7) )
      return -1073741801;
    if ( !IsWindowDesktopComposed(a1) )
    {
      return 0;
    }
    else
    {
      v5 = (void *)ReferenceDwmApiPort();
      return DwmAsyncSetCompositionAttribute(v5, *a1, 2, v4);
    }
  }
  return v3;
}
