/*
 * XREFs of ?s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x1800797E0
 * Callers:
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x1800796D0 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 *     ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x1800797D0 (-ShouldHaveAppView@CClassicWindow@@UEBA_NXZ.c)
 * Callees:
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x180079820 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 */

char __fastcall CClassicWindow::s_ShouldHaveAppView(__int64 a1)
{
  char ShouldShowInSwitchers; // al
  char v2; // cl
  char v3; // dl

  ShouldShowInSwitchers = CClassicWindow::s_ShouldShowInSwitchers(a1);
  v3 = 0;
  if ( ShouldShowInSwitchers || (v2 & 5) != 0 )
    return 1;
  return v3;
}
