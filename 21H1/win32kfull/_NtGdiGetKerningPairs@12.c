/*
 * XREFs of _NtGdiGetKerningPairs@12 @ 0x21304A
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GreGetKerningPairs@12 @ 0x1EBB0B (_GreGetKerningPairs@12.c)
 */

unsigned int __stdcall NtGdiGetKerningPairs(HDC a1, unsigned int a2, char *a3)
{
  unsigned int v3; // esi
  unsigned int KerningPairs; // eax
  char *v5; // edx
  struct _FD_KERNINGPAIR *Src; // [esp+10h] [ebp-1Ch]

  v3 = 0;
  Src = 0;
  if ( !a3 )
    goto LABEL_5;
  if ( a2 <= 0x4E2000 )
    Src = (struct _FD_KERNINGPAIR *)AllocFreeTmpBuffer(8 * a2);
  if ( Src )
  {
LABEL_5:
    KerningPairs = GreGetKerningPairs(a1, a2, Src);
    v3 = KerningPairs;
    if ( a3 )
    {
      v3 = a2 >= KerningPairs ? KerningPairs : 0;
      if ( v3 )
      {
        v5 = &a3[8 * v3];
        if ( (unsigned int)v5 > _MmUserProbeAddress || v5 <= a3 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a3, Src, 8 * v3);
      }
      FreeTmpBuffer(Src);
    }
  }
  return v3;
}
