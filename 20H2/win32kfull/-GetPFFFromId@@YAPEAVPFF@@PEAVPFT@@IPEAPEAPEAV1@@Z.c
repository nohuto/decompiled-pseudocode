/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0155A8C
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C01558D0 (NtGdiGetFontFileInfo.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C0271C78 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C027C280 (NtGdiAddEmbFontToDC.c)
 *     GreRemoveFontMemResourceEx @ 0x1C028A840 (GreRemoveFontMemResourceEx.c)
 *     NtGdiGetFontFileData @ 0x1C02BA760 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BA6D4 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT **a1, unsigned int a2, struct PFF ***a3)
{
  unsigned int v4; // r8d
  __int64 v5; // r9
  unsigned __int64 v6; // rbx
  struct PFF **v7; // rsi
  unsigned __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_DWORD *)a1 + 6);
  v5 = HIBYTE(a2);
  if ( (unsigned int)v5 >= v4 )
    return 0LL;
  do
  {
    v6 = (unsigned __int64)a1[v5 + 5];
    v7 = &a1[v5 + 5];
    while ( v6 && *(_DWORD *)(v6 + 140) != a2 )
      v6 = *(_QWORD *)(v6 + 8);
    v5 = (unsigned int)(v5 + 256);
  }
  while ( (unsigned int)v5 < v4 );
  if ( v6 )
  {
    if ( a1 == gpPFTPrivate )
    {
      v9[0] = v6;
      v6 &= -(__int64)(PFFOBJ::pPvtDataMatch((PFFOBJ *)v9) != 0LL);
    }
    if ( v6 )
    {
      if ( a3 )
        *a3 = v7;
    }
  }
  return (struct PFF *)v6;
}
