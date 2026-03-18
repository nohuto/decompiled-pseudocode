/*
 * XREFs of _EngQueryPalette@16 @ 0x1EE329
 * Callers:
 *     <none>
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z @ 0xAD8F8 (-ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z.c)
 */

ULONG __stdcall EngQueryPalette(HPALETTE hPal, ULONG *piMode, ULONG cColors, ULONG *pulColors)
{
  ULONG Entries; // edi
  HPALETTE v5; // esi
  ULONG *v6; // ecx

  Entries = 0;
  v5 = (HPALETTE)HmgShareLockCheck(hPal, 8);
  hPal = v5;
  if ( v5 )
  {
    *piMode = (_DWORD)v5[4] & 0xF;
    if ( *((_DWORD *)v5 + 5) )
    {
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)&hPal, 0, cColors, (struct tagPALETTEENTRY *)pulColors, 1);
    }
    else
    {
      Entries = 3;
      if ( cColors >= 3 )
      {
        v6 = pulColors;
        if ( pulColors )
        {
          *pulColors = **((_DWORD **)v5 + 19);
          v6[1] = *(_DWORD *)(*((_DWORD *)v5 + 19) + 4);
          v6[2] = *(_DWORD *)(*((_DWORD *)v5 + 19) + 8);
        }
      }
    }
    DEC_SHARE_REF_CNT(v5);
  }
  return Entries;
}
