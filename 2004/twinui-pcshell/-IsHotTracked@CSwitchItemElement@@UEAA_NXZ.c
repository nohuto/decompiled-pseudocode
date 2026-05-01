/*
 * XREFs of ?IsHotTracked@CSwitchItemElement@@UEAA_NXZ @ 0x1803A1380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSwitchItemElement::IsHotTracked(CSwitchItemElement *this)
{
  return *((_DWORD *)this - 34) == 1;
}
