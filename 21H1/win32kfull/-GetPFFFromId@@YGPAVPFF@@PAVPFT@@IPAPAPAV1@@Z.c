/*
 * XREFs of ?GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z @ 0xACE02
 * Callers:
 *     _NtGdiGetFontFileInfo@20 @ 0xACC7C (_NtGdiGetFontFileInfo@20.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QAEHPAXH@Z @ 0x1D02C3 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QAEHPAXH@Z.c)
 *     _NtGdiAddEmbFontToDC@8 @ 0x1D9099 (_NtGdiAddEmbFontToDC@8.c)
 *     _GreRemoveFontMemResourceEx@4 @ 0x1EBC87 (_GreRemoveFontMemResourceEx@4.c)
 *     _NtGdiGetFontFileData@20 @ 0x221DD2 (_NtGdiGetFontFileData@20.c)
 * Callees:
 *     ?pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ @ 0x221D76 (-pPvtDataMatch@PFFOBJ@@QAEPAUtagPvtData@@XZ.c)
 */

struct PFF *__userpurge GetPFFFromId@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct PFT *a3,
        unsigned int a4,
        struct PFF ***a5)
{
  unsigned int v5; // eax
  unsigned int v7; // ebx
  int *v8; // ecx
  int v9; // esi
  int v11; // [esp+8h] [ebp-Ch] BYREF
  int *v12; // [esp+10h] [ebp-4h]

  v5 = HIBYTE(a1);
  v7 = *(_DWORD *)(a2 + 12);
  if ( HIBYTE(a1) >= v7 )
    return 0;
  v8 = (int *)(a2 + 24 + 4 * v5);
  do
  {
    v9 = *v8;
    v12 = v8;
    while ( v9 && *(_DWORD *)(v9 + 88) != a1 )
      v9 = *(_DWORD *)(v9 + 4);
    v5 += 256;
    v8 += 256;
  }
  while ( v5 < v7 );
  if ( v9 )
  {
    if ( (struct PFT *)a2 == gpPFTPrivate )
    {
      v11 = v9;
      v9 = PFFOBJ::pPvtDataMatch((PFFOBJ *)&v11) != 0 ? v9 : 0;
    }
    if ( v9 )
    {
      if ( a3 )
        *(_DWORD *)a3 = v12;
    }
  }
  return (struct PFF *)v9;
}
