/*
 * XREFs of ?v_SetDesiredPosition_HasViewDataChanged@UAPViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180022680
 * Callers:
 *     <none>
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180022A4C (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 */

bool __fastcall UAPViewWrapper::v_SetDesiredPosition_HasViewDataChanged(
        UAPViewWrapper *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  return !ImmersiveApplicationLayout::AreAppViewDataEqual(a2, a3, a3);
}
