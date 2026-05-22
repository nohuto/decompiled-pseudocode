/*
 * XREFs of ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@std@@W4_Button@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@0@V10@V10@AEBW4_Button@@@Z @ 0x180172A10
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x180172EF8 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x180173AEC (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<enum _Button>>>,enum _Button>(
        _QWORD *a1,
        _DWORD *a2,
        unsigned __int64 a3,
        _DWORD *a4)
{
  __int64 v6; // rax
  _DWORD *v7; // rcx
  unsigned __int64 v8; // r9

  if ( a2 != (_DWORD *)a3 )
  {
    do
    {
      if ( *a2 == *a4 )
        break;
      ++a2;
    }
    while ( a2 != (_DWORD *)a3 );
    if ( a2 != (_DWORD *)a3 )
    {
      v6 = 0LL;
      v7 = a2 + 1;
      v8 = (a3 - (unsigned __int64)(a2 + 1) + 3) >> 2;
      if ( (unsigned __int64)(a2 + 1) > a3 )
        v8 = 0LL;
      if ( v8 )
      {
        do
        {
          if ( *v7 != *a4 )
            *a2++ = *v7;
          ++v7;
          ++v6;
        }
        while ( v6 != v8 );
      }
    }
  }
  *a1 = a2;
  return a1;
}
