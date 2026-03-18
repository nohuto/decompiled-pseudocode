/*
 * XREFs of _NtGdiGetNearestPaletteIndex@8 @ 0x21E893
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiGetNearestPaletteIndex(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edx
  int v4; // esi

  v2 = HmgShareLockCheck(a1, 8);
  a1 = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 20);
    if ( !v3 )
    {
      v4 = a2;
      goto LABEL_9;
    }
    if ( (a2 & 0x1000000) != 0 )
    {
      v4 = (unsigned __int16)a2 < v3 ? (unsigned __int16)a2 : 0;
      goto LABEL_9;
    }
    v4 = XEPALOBJ::ulDispatchGFPEFunction(&a1, *(_DWORD *)(v2 + 64), a2 & 0xFFFFFF);
  }
  else
  {
    EngSetLastError(6u);
    v4 = -1;
  }
  v2 = a1;
LABEL_9:
  if ( v2 )
    DEC_SHARE_REF_CNT(v2);
  return v4;
}
