/*
 * XREFs of _SetWindowCompositionAccentPolicy@8 @ 0xAAC88
 * Callers:
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 * Callees:
 *     _SetWindowCompositionInfo@8 @ 0x2550C (_SetWindowCompositionInfo@8.c)
 *     _DwmAsyncSetCompositionAttribute@16 @ 0x2557C (_DwmAsyncSetCompositionAttribute@16.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 */

int __fastcall SetWindowCompositionAccentPolicy(int a1, unsigned int *a2)
{
  int v3; // esi
  int *v5; // esi
  void *v6; // eax
  unsigned int v7[9]; // [esp+Ch] [ebp-28h] BYREF
  int *v8; // [esp+30h] [ebp-4h]

  v8 = (int *)a1;
  memset(v7, 0, sizeof(v7));
  v3 = -1073741816;
  if ( _GetWindowCompositionInfo(a1, v7) )
  {
    if ( v7[2] == *a2 && v7[3] == a2[1] && v7[4] == a2[2] )
      return 0;
    v7[2] = *a2;
    v7[3] = a2[1];
    v7[4] = a2[2];
    v7[5] = a2[3];
    v5 = v8;
    if ( !SetWindowCompositionInfo((int)v8, v7) )
      return -1073741801;
    if ( !IsWindowDesktopComposed(v5) )
    {
      return 0;
    }
    else
    {
      v6 = (void *)ReferenceDwmApiPort();
      return DwmAsyncSetCompositionAttribute(v6, *v5, 19, a2);
    }
  }
  return v3;
}
