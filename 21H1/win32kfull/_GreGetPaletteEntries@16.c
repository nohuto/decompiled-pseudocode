/*
 * XREFs of _GreGetPaletteEntries@16 @ 0xAD8B4
 * Callers:
 *     <none>
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z @ 0xAD8F8 (-ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z.c)
 */

unsigned int __stdcall GreGetPaletteEntries(int a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  int v4; // esi
  unsigned int Entries; // edi

  v4 = HmgShareLockCheck(a1, 8);
  a1 = v4;
  if ( v4 )
  {
    Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)&a1, a2, a3, a4, 0);
    DEC_SHARE_REF_CNT(v4);
  }
  else
  {
    EngSetLastError(6u);
    return 0;
  }
  return Entries;
}
