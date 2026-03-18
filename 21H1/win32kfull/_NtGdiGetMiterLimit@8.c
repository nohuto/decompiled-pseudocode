/*
 * XREFs of _NtGdiGetMiterLimit@8 @ 0x213104
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreGetMiterLimit@8 @ 0x2113EF (_GreGetMiterLimit@8.c)
 */

int __stdcall NtGdiGetMiterLimit(HDC a1, unsigned int a2)
{
  int MiterLimit; // edx
  int v4; // [esp+10h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h]

  v4 = 0;
  MiterLimit = GreGetMiterLimit(a1, &v4);
  if ( MiterLimit )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a2 + 4 > _MmUserProbeAddress || a2 + 4 <= a2 || (a2 & 3) != 0 )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_DWORD *)a2 = v4;
    ms_exc.registration.TryLevel = -2;
  }
  return MiterLimit;
}
