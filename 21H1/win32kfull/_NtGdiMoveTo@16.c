/*
 * XREFs of _NtGdiMoveTo@16 @ 0x213A4F
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreMoveTo@16 @ 0x1FFBFA (_GreMoveTo@16.c)
 */

int __stdcall NtGdiMoveTo(HDC a1, int a2, int a3, ULONG a4)
{
  int v4; // edx
  _DWORD *v5; // ecx
  int v7; // [esp+10h] [ebp-20h] BYREF
  int v8; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v7 = 0;
  v8 = 0;
  v4 = GreMoveTo(a1, a2, a3, &v7);
  if ( v4 )
  {
    v5 = (_DWORD *)a4;
    if ( a4 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( a4 >= _MmUserProbeAddress )
        v5 = (_DWORD *)_MmUserProbeAddress;
      *v5 = v7;
      v5[1] = v8;
      ms_exc.registration.TryLevel = -2;
    }
  }
  return v4;
}
