/*
 * XREFs of _xxxMNKeyFilter@12 @ 0x1ACE4B
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 * Callees:
 *     _MNPositionSysMenu@8 @ 0xC069A (_MNPositionSysMenu@8.c)
 *     _xxxMessageBeep@4 @ 0x178F72 (_xxxMessageBeep@4.c)
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMNSwitchToAlternateMenu@8 @ 0x19AA93 (_xxxMNSwitchToAlternateMenu@8.c)
 */

int __fastcall xxxMNKeyFilter(int *a1, int *a2, int a3)
{
  int result; // eax
  char v6; // [esp+Ch] [ebp-4h]

  result = a2[1];
  v6 = result;
  if ( (result & 8) == 0 )
  {
    if ( (result & 4) == 0 )
    {
      result = xxxMNStartMenu(a1, (int)a2, 1);
      if ( !result )
        return result;
      a2[1] |= 4u;
    }
    if ( a3 )
    {
      if ( a3 == 32
        || a3 == 45
        && (!*(_DWORD *)(*(_DWORD *)*a1 + 4)
         || (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a1 + 4) + 20) + 23) & 0xC0) == 0x40) )
      {
        if ( *(_DWORD *)(*(_DWORD *)*a1 + 4)
          && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)*a1 + 4) + 20) + 22) & 8) == 0 )
        {
          xxxMessageBeep(0);
          goto LABEL_19;
        }
        xxxMNCloseHierarchy(*(_DWORD *)*a1, (int)a2);
        if ( (**(_BYTE **)*a1 & 4) == 0 && *(_DWORD *)(*(_DWORD *)*a1 + 24) )
          xxxMNSwitchToAlternateMenu((int **)a1, (int)a2);
        if ( (**(_BYTE **)*a1 & 4) == 0 )
          goto LABEL_19;
        MNPositionSysMenu(*(_DWORD **)(*(_DWORD *)*a1 + 8), *(_DWORD *)(*(_DWORD *)*a1 + 20));
        xxxMNSelectItem((int **)a1, (int)a2, 0);
        xxxMNOpenHierarchy((int **)a1, (int)a2);
        result = *(_DWORD *)*a1;
        *(_DWORD *)result &= ~0x80u;
      }
      else
      {
        xxxMNChar((int)a1, a2, a3);
        result = *(_DWORD *)*a1;
        if ( *(_DWORD *)(result + 40) == -1 )
        {
LABEL_19:
          a2[1] &= ~0x100u;
          result = *(_DWORD *)*a1;
          if ( ((unsigned int)&loc_80000 & *(_DWORD *)result) == 0 )
            return (int)xxxMNCancel(a2, 0, 0, 0);
          return result;
        }
      }
    }
    else
    {
      result = xxxMNSelectItem((int **)a1, (int)a2, 0);
    }
    if ( (v6 & 4) == 0 && (a2[1] & 4) != 0 )
      return xxxMNLoop(a1, a2, 0, 0);
  }
  return result;
}
