/*
 * XREFs of _NtGdiGetBoundsRect@12 @ 0xAD184
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetBoundsRect@12 @ 0xAD1EA (_GreGetBoundsRect@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtGdiGetBoundsRect(HDC a1, ULONG a2, int a3)
{
  _DWORD *v3; // edi
  int BoundsRect; // ecx
  _DWORD *v5; // edi

  v3 = (_DWORD *)a2;
  BoundsRect = GreGetBoundsRect(a1, a3);
  if ( BoundsRect )
  {
    if ( a2 >= _MmUserProbeAddress )
      v3 = (_DWORD *)_MmUserProbeAddress;
    *v3 = 0;
    v5 = v3 + 1;
    *v5++ = 0;
    *v5 = 0;
    v5[1] = 0;
  }
  return BoundsRect;
}
