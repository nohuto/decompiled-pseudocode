/*
 * XREFs of _IsHotKey@8 @ 0xB1CD0
 * Callers:
 *     _IsUninterceptable@8 @ 0xB17D0 (_IsUninterceptable@8.c)
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 *     _EditionIsHotKey@8 @ 0x156049 (_EditionIsHotKey@8.c)
 * Callees:
 *     _GetDesktopView@8 @ 0x6FBFA (_GetDesktopView@8.c)
 *     _WPP_RECORDER_SF_DDqq@36 @ 0x156063 (_WPP_RECORDER_SF_DDqq@36.c)
 */

struct tagHOTKEY **__fastcall IsHotKey(int a1, unsigned int a2)
{
  char v3; // di
  struct tagHOTKEY **i; // esi
  int v6; // [esp-1Ch] [ebp-28h]
  int v7; // [esp-18h] [ebp-24h]
  int v8; // [esp-14h] [ebp-20h]

  v3 = a1;
  for ( i = (&gphkHashTable)[a2 & 0x7F]; ; i = (struct tagHOTKEY **)i[6] )
  {
    if ( !i )
      return i;
    if ( *((unsigned __int16 *)i + 6) == a1 && i[4] == (struct tagHOTKEY *)a2 && (*((_WORD *)i + 7) & 0x100) == 0 )
      break;
  }
  if ( (*((_BYTE *)*i + 264) & 0xC) != 0 )
    return i;
  if ( GetDesktopView(*((_DWORD *)*i + 58), _grpdeskRitInput) )
  {
    if ( ((_BYTE)i[3] & 0xB) == 0
      && _gpqForeground
      && (a2 < 0xAD || a2 > 0xB3)
      && a2 != 7
      && !(unsigned __int8)CheckAccess(*((_DWORD *)*i + 58) + 496, _gpqForeground + 316) )
    {
      EtwTraceUIPIInputError(
        *i,
        0,
        _gpqForeground,
        *(_DWORD *)(_gpqForeground + 316),
        *(_DWORD *)(_gpqForeground + 320),
        7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqq(v6, v7, v8, a2, v3, (char)*i, _gpqForeground);
      return 0;
    }
    return i;
  }
  return 0;
}
