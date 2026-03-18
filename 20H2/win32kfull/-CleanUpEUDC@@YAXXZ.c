/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C0022500
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00225A0 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C001F7B8 (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00202C8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     GreEnableEUDC @ 0x1C00220CC (GreEnableEUDC.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  PFTOBJ *v1; // rcx
  unsigned int v2; // edi
  char *v3; // rbx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C033A0B8 |= 2u;
  if ( v0 )
    GreEnableEUDC(0);
  if ( qword_1C03398B8 )
  {
    Win32FreePool(qword_1C03398B8);
    qword_1C03398B8 = 0LL;
  }
  if ( qword_1C033B8E0 )
  {
    Win32FreePool(qword_1C033B8E0);
    qword_1C033B8E0 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v2 = 0;
    v3 = (char *)&unk_1C0333ACC;
    do
    {
      if ( *((_DWORD *)v3 - 31) && *(_WORD *)v3 && *(_QWORD *)(v3 + 524) )
        bUnloadEudcFont(&qword_1C0333CD8[83 * v2]);
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
