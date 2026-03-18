/*
 * XREFs of ??$IsHotkeyQueryMatch@PAUtagCHILDHOTKEY@@@@YG_NPAUtagCHILDHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x155CB4
 * Callers:
 *     ?HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x830D0 (-HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     ?HKRemoveMatchingChildHotkeys@@YG_NPAUtagHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0xB550A (-HKRemoveMatchingChildHotkeys@@YG_NPAUtagHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType.c)
 * Callees:
 *     <none>
 */

char __fastcall IsHotkeyQueryMatch<tagCHILDHOTKEY *>(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  char v6; // cl
  bool v7; // zf

  v6 = 0;
  switch ( a5 )
  {
    case 0:
      return *a1 == a2;
    case 1:
      return a1[1] == a3;
    case 2:
LABEL_9:
      if ( a1[1] != a3 )
        return v6;
      v7 = a1[3] == a4;
      goto LABEL_6;
    case 3:
      if ( *a1 != a2 )
        return v6;
      goto LABEL_9;
  }
  v7 = a5 == 4;
LABEL_6:
  if ( v7 )
    return 1;
  return v6;
}
