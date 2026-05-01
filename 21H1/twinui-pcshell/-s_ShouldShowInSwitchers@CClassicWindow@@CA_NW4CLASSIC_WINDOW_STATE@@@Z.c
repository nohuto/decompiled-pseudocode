/*
 * XREFs of ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x180079820
 * Callers:
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x1800796D0 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 *     ?s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x1800797E0 (-s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x180079810 (-ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ.c)
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x18013F970 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::s_ShouldShowInSwitchers(char a1)
{
  return (a1 & 3) != 0 && (a1 & 8) == 0;
}
