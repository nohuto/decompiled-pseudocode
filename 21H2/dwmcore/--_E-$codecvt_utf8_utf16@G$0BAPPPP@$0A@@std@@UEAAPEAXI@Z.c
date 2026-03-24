/*
 * XREFs of ??_E?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@UEAAPEAXI@Z @ 0x180197940
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::codecvt_utf8_utf16<unsigned short,1114111,0>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::codecvt_utf8_utf16<unsigned short,1114111,0>::`vftable';
  std::codecvt<unsigned short,char,_Mbstatet>::~codecvt<unsigned short,char,_Mbstatet>();
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
