/*
 * XREFs of ??_G?$_Ref_count_obj@VCRegion@@@std@@UEAAPEAXI@Z @ 0x18017B980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count_obj<CRegion>::`scalar deleting destructor'(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
