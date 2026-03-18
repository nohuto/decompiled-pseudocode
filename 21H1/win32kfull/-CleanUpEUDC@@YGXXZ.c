/*
 * XREFs of ?CleanUpEUDC@@YGXXZ @ 0xCE864
 * Callers:
 *     _GdiMultiUserFontCleanup@0 @ 0xCD5AC (_GdiMultiUserFontCleanup@0.c)
 * Callees:
 *     bUnloadEudcFont @ 0xCD8F6 (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z @ 0xCD9B6 (-bUnloadEUDCFont@PFTOBJ@@QAEHPAG@Z.c)
 *     _GreEnableEUDC@4 @ 0xEBCF6 (_GreEnableEUDC@4.c)
 */

void __stdcall CleanUpEUDC()
{
  PFTOBJ *v0; // ecx
  char v1; // al
  unsigned __int16 **v2; // esi
  int v3; // ebx

  v0 = 0;
  if ( !gpPFTPublic || (v1 = 1, !_ghsemPublicPFT) )
    v1 = 0;
  dword_27436C |= 2u;
  if ( v1 )
  {
    GreEnableEUDC(0);
    v0 = 0;
  }
  if ( dword_273FFC )
  {
    Win32FreePool(dword_273FFC);
    v0 = 0;
    dword_273FFC = 0;
  }
  if ( dword_2756D0 )
  {
    Win32FreePool(dword_2756D0);
    v0 = 0;
    dword_2756D0 = 0;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v2 = (unsigned __int16 **)dword_26CDF8;
    v3 = 7;
    do
    {
      if ( *(v2 - 162) && *((_WORD *)v2 - 262) && *v2 )
      {
        bUnloadEudcFont(v2);
        v0 = 0;
      }
      v2 += 164;
      --v3;
    }
    while ( v3 );
  }
  if ( pFontAssocSubs )
  {
    Win32FreePool(pFontAssocSubs);
    pFontAssocSubs = 0;
  }
  if ( gbSystemDBCSFontEnabled )
    PFTOBJ::bUnloadEUDCFont(v0, &gawcSystemDBCSFontPath);
}
