/*
 * XREFs of _NtGdiSetMiterLimit@12 @ 0x2143A1
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreSetMiterLimit@12 @ 0x211440 (_GreSetMiterLimit@12.c)
 */

int __stdcall NtGdiSetMiterLimit(HDC a1, unsigned int a2, unsigned int a3)
{
  int v3; // ecx
  int v4; // esi
  int v6; // [esp+10h] [ebp-20h] BYREF
  int v7; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v6 = 0;
  v7 = 0;
  v3 = bConvertDwordToFloat(a2, (unsigned int *)&v7);
  if ( v3 )
  {
    v3 = GreSetMiterLimit(a1, v7, &v6);
    v4 = v6;
    if ( v3 )
    {
      if ( a3 )
      {
        ms_exc.registration.TryLevel = 0;
        if ( a3 + 4 > _MmUserProbeAddress || a3 + 4 <= a3 || (a3 & 3) != 0 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        *(_DWORD *)a3 = v4;
        ms_exc.registration.TryLevel = -2;
      }
    }
  }
  return v3;
}
