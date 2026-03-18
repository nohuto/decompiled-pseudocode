/*
 * XREFs of _NtGdiForceUFIMapping@8 @ 0x212692
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreForceUFIMapping@8 @ 0x1D8D49 (_GreForceUFIMapping@8.c)
 */

int __stdcall NtGdiForceUFIMapping(HDC a1, ULONG a2)
{
  int result; // eax
  int *v3; // ecx
  int v4; // [esp+10h] [ebp-24h] BYREF
  int v5; // [esp+14h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  result = 0;
  v3 = (int *)a2;
  if ( a2 )
  {
    ms_exc.registration.TryLevel = 0;
    v4 = 0;
    v5 = 0;
    if ( a2 >= _MmUserProbeAddress )
      v3 = (int *)_MmUserProbeAddress;
    v4 = *v3;
    v5 = v3[1];
    return GreForceUFIMapping(a1, &v4);
  }
  return result;
}
