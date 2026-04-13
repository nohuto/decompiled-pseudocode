/*
 * XREFs of ??_G?$numpunct@_W@std@@MEAAPEAXI@Z @ 0x180097160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall std::numpunct<wchar_t>::`scalar deleting destructor'(void **a1, char a2)
{
  *a1 = &std::numpunct<wchar_t>::`vftable';
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
