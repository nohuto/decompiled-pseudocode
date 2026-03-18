/*
 * XREFs of ?bCaptureLINEATTRS@@YGHPAPAU_LINEATTRS@@PAU1@@Z @ 0x21684C
 * Callers:
 *     _NtGdiEngStrokeAndFillPath@40 @ 0x219580 (_NtGdiEngStrokeAndFillPath@40.c)
 *     _NtGdiEngStrokePath@32 @ 0x219789 (_NtGdiEngStrokePath@32.c)
 *     _NtGdiPATHOBJ_vEnumStartClipLines@16 @ 0x21AAAC (_NtGdiPATHOBJ_vEnumStartClipLines@16.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall bCaptureLINEATTRS(const void **a1, unsigned int *a2)
{
  int v2; // ebx
  const void *v3; // esi
  unsigned int v4; // edx
  unsigned int v5; // ecx
  int v7; // eax
  void *v8; // edi

  v2 = 1;
  v3 = *a1;
  if ( *a1 )
  {
    if ( (unsigned int)v3 >= _MmUserProbeAddress )
      v3 = (const void *)_MmUserProbeAddress;
    qmemcpy(a2, v3, 0x20u);
    v4 = a2[6];
    if ( v4 )
    {
      v5 = a2[5];
      if ( v5 > 0x9C4000 )
        return 0;
      v7 = 4 * v5;
      if ( 4 * v5 && (v7 + v4 > _MmUserProbeAddress || v7 + v4 < v4) )
      {
        *(_BYTE *)_MmUserProbeAddress = 0;
        v5 = a2[5];
      }
      v8 = PALLOCMEM2(4 * v5, 1886221639, 0);
      if ( v8 )
      {
        memcpy(v8, (const void *)a2[6], 4 * a2[5]);
        a2[6] = (unsigned int)v8;
      }
      else
      {
        a2[6] = 0;
        v2 = 0;
      }
    }
    *a1 = a2;
  }
  return v2;
}
