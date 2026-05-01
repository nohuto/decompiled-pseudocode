/*
 * XREFs of ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x180079FB0
 * Callers:
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x180079E60 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 *     ?s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x180079F70 (-s_ShouldHaveAppView@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x180079FA0 (-ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ.c)
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x180163F20 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::s_ShouldShowInSwitchers(char a1)
{
  return (a1 & 3) != 0 && (a1 & 8) == 0;
}
