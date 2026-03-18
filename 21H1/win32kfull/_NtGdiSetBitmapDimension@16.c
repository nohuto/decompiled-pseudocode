/*
 * XREFs of _NtGdiSetBitmapDimension@16 @ 0x214127
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreSetBitmapDimension@16 @ 0x226BE6 (_GreSetBitmapDimension@16.c)
 */

int __stdcall NtGdiSetBitmapDimension(int a1, int a2, int a3, ULONG a4)
{
  int v4; // edx
  _DWORD *v5; // ecx
  int v7; // [esp+10h] [ebp-20h] BYREF
  int v8; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v7 = 0;
  v8 = 0;
  if ( !a1 )
    return 0;
  v4 = GreSetBitmapDimension(a3, &v7);
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
