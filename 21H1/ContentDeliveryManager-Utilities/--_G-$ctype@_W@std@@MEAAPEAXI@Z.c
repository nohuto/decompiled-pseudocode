/*
 * XREFs of ??_G?$ctype@_W@std@@MEAAPEAXI@Z @ 0x180028180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall std::ctype<wchar_t>::`scalar deleting destructor'(void *a1, char a2)
{
  bool v2; // zf

  v2 = *((_DWORD *)a1 + 8) == 0;
  *(_QWORD *)a1 = &std::ctype<unsigned short>::`vftable';
  if ( !v2 )
    free(*((void **)a1 + 3));
  free(*((void **)a1 + 5));
  *(_QWORD *)a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
