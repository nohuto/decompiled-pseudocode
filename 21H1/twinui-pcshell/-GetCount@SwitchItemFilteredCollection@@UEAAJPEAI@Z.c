/*
 * XREFs of ?GetCount@SwitchItemFilteredCollection@@UEAAJPEAI@Z @ 0x18008A140
 * Callers:
 *     ?GetCount@SwitchItemFilteredCollection@@WKI@EAAJPEAI@Z @ 0x1800D8060 (-GetCount@SwitchItemFilteredCollection@@WKI@EAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SwitchItemFilteredCollection::GetCount(SwitchItemFilteredCollection *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 6);
  return 0LL;
}
