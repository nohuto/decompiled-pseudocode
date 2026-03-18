/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C0009B60
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C0009680 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     GreEnableEUDC @ 0x1C0009C00 (GreEnableEUDC.c)
 *     bUnloadEudcFont @ 0x1C0011CF8 (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0012808 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  PFTOBJ *v1; // rcx
  unsigned int v2; // edi
  char *v3; // rbx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C033B088 |= 2u;
  if ( v0 )
    GreEnableEUDC(0LL);
  if ( qword_1C033A888 )
  {
    Win32FreePool(qword_1C033A888);
    qword_1C033A888 = 0LL;
  }
  if ( qword_1C033C8A8 )
  {
    Win32FreePool(qword_1C033C8A8);
    qword_1C033C8A8 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v2 = 0;
    v3 = (char *)&unk_1C0334A9C;
    do
    {
      if ( *((_DWORD *)v3 - 31) && *(_WORD *)v3 && *(_QWORD *)(v3 + 524) )
        bUnloadEudcFont((char *)&unk_1C0334CA8 + 664 * v2);
      ++v2;
      v3 += 664;
    }
    while ( v2 < 7 );
  }
  v1 = pFontAssocSubs;
  if ( pFontAssocSubs )
  {
    Win32FreePool(pFontAssocSubs);
    pFontAssocSubs = 0LL;
  }
  if ( gbSystemDBCSFontEnabled )
    PFTOBJ::bUnloadEUDCFont(v1, &gawcSystemDBCSFontPath);
}
