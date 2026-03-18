/*
 * XREFs of _GreAnimatePalette@16 @ 0x21E235
 * Callers:
 *     _NtGdiDoPalette@24 @ 0x7B556 (_NtGdiDoPalette@24.c)
 * Callees:
 *     ?ulAnimatePalette@XEPALOBJ@@QAEKKKPBUtagPALETTEENTRY@@@Z @ 0x223193 (-ulAnimatePalette@XEPALOBJ@@QAEKKKPBUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __stdcall GreAnimatePalette(int a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v4; // edi
  int v5; // eax
  int v6; // esi

  v4 = 0;
  v5 = HmgShareLockCheck(a1, 8);
  v6 = v5;
  a1 = v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 16) & 0x100) != 0 )
      v4 = XEPALOBJ::ulAnimatePalette((XEPALOBJ *)&a1, a2, a3, a4);
    DEC_SHARE_REF_CNT(v6);
  }
  return v4;
}
