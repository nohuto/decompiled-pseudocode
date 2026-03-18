/*
 * XREFs of _NtGdiScaleWindowExtEx@24 @ 0x21406E
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreScaleWindowExtEx@24 @ 0x21D696 (_GreScaleWindowExtEx@24.c)
 */

int __stdcall NtGdiScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, ULONG a6)
{
  int v6; // edx
  _DWORD *v7; // ecx
  int v9; // [esp+10h] [ebp-20h] BYREF
  int v10; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v9 = 0;
  v10 = 0;
  v6 = GreScaleWindowExtEx(a1, a3, a4, a5, (int)&v9);
  if ( v6 )
  {
    v7 = (_DWORD *)a6;
    if ( a6 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( a6 >= _MmUserProbeAddress )
        v7 = (_DWORD *)_MmUserProbeAddress;
      *v7 = v9;
      v7[1] = v10;
      ms_exc.registration.TryLevel = -2;
    }
  }
  return v6;
}
