/*
 * XREFs of _SetWindowCompositionFreezeSWR@8 @ 0xAC91A
 * Callers:
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 * Callees:
 *     _SetWindowCompositionInfo@8 @ 0x2550C (_SetWindowCompositionInfo@8.c)
 *     _DwmAsyncSetCompositionAttribute@16 @ 0x2557C (_DwmAsyncSetCompositionAttribute@16.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 */

int __fastcall SetWindowCompositionFreezeSWR(int *a1, _DWORD *a2)
{
  int v3; // esi
  int v4; // ebx
  void *v5; // eax
  const void *v7; // [esp-4h] [ebp-40h]
  unsigned int v8[9]; // [esp+Ch] [ebp-30h] BYREF
  int v9; // [esp+30h] [ebp-Ch]
  _DWORD *v10; // [esp+34h] [ebp-8h]
  int *v11; // [esp+38h] [ebp-4h]

  v11 = a1;
  v10 = a2;
  memset(v8, 0, sizeof(v8));
  v9 = *a2;
  v3 = -1073741816;
  v4 = v9 != 0;
  if ( _GetWindowCompositionInfo((int)a1, v8) )
  {
    if ( (int)(v8[0] << 19) >> 31 == v4 )
    {
      return 0;
    }
    else
    {
      v8[0] = v8[0] & 0xFFFFEFFF | (v4 << 12);
      if ( SetWindowCompositionInfo((int)a1, v8) )
      {
        if ( IsWindowDesktopComposed(a1) )
        {
          v7 = v10;
          v5 = (void *)ReferenceDwmApiPort();
          v3 = DwmAsyncSetCompositionAttribute(v5, *a1, 20, v7);
        }
        else
        {
          v3 = 0;
        }
        if ( !v9 )
          PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 36, *a1);
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return v3;
}
