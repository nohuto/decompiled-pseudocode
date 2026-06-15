/*
 * XREFs of ??_G?$codecvt@_WDU_Mbstatet@@@std@@MEAAPEAXI@Z @ 0x180109C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall std::codecvt<wchar_t,char,_Mbstatet>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = off_18014ADD0;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
