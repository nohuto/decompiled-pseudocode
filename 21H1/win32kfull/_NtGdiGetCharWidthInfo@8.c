/*
 * XREFs of _NtGdiGetCharWidthInfo@8 @ 0xC3E28
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetCharWidthInfo@8 @ 0xC3E8C (_GreGetCharWidthInfo@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiGetCharWidthInfo(HDC a1, _DWORD *a2)
{
  int CharWidthInfo; // ecx

  CharWidthInfo = GreGetCharWidthInfo(a1);
  if ( CharWidthInfo )
  {
    if ( (unsigned int)(a2 + 3) > _MmUserProbeAddress || a2 + 3 <= a2 )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
  }
  return CharWidthInfo;
}
