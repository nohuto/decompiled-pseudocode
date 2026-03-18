/*
 * XREFs of _NtGdiGetBitmapDimension@8 @ 0x212700
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreGetBitmapDimension@8 @ 0x226B65 (_GreGetBitmapDimension@8.c)
 */

int __stdcall NtGdiGetBitmapDimension(int a1, ULONG a2)
{
  int BitmapDimension; // ecx
  _DWORD *v3; // edx
  int v5; // [esp+10h] [ebp-20h] BYREF
  int v6; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v5 = 0;
  v6 = 0;
  BitmapDimension = a1;
  if ( a1 )
  {
    BitmapDimension = GreGetBitmapDimension(a1, &v5);
    if ( BitmapDimension )
    {
      ms_exc.registration.TryLevel = 0;
      v3 = (_DWORD *)a2;
      if ( a2 >= _MmUserProbeAddress )
        v3 = (_DWORD *)_MmUserProbeAddress;
      *v3 = v5;
      v3[1] = v6;
      ms_exc.registration.TryLevel = -2;
    }
  }
  return BitmapDimension;
}
