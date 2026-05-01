/*
 * XREFs of ?IsFocused@CSwitchItemElement@@UEAA_NXZ @ 0x18008B850
 * Callers:
 *     ?IsFocused@CSwitchItemElement@@WOI@EAA_NXZ @ 0x1800FCE70 (-IsFocused@CSwitchItemElement@@WOI@EAA_NXZ.c)
 *     ?IsFocused@CScrollButtonContainer@@WNA@EAA_NXZ @ 0x1800FD4E0 (-IsFocused@CScrollButtonContainer@@WNA@EAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSwitchItemElement::IsFocused(CSwitchItemElement *this)
{
  return *((_BYTE *)this + 176);
}
