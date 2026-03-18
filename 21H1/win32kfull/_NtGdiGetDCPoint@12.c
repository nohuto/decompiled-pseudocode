/*
 * XREFs of _NtGdiGetDCPoint@12 @ 0xC1F42
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiGetDCPoint(int a1, int a2, ULONG a3)
{
  int DCPoint; // edx
  _DWORD *v4; // ecx
  int v6; // [esp+10h] [ebp-20h] BYREF
  int v7; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v6 = 0;
  v7 = 0;
  DCPoint = GreGetDCPoint(a1, a2, &v6);
  if ( DCPoint )
  {
    ms_exc.registration.TryLevel = 0;
    v4 = (_DWORD *)a3;
    if ( a3 >= _MmUserProbeAddress )
      v4 = (_DWORD *)_MmUserProbeAddress;
    *v4 = v6;
    v4[1] = v7;
    ms_exc.registration.TryLevel = -2;
  }
  return DCPoint;
}
