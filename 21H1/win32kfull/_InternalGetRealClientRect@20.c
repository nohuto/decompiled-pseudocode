/*
 * XREFs of _InternalGetRealClientRect@20 @ 0xA23FA
 * Callers:
 *     _SetTiledRect@12 @ 0x6FF46 (_SetTiledRect@12.c)
 *     _ParkIcon@8 @ 0xB4C44 (_ParkIcon@8.c)
 *     _xxxArrangeIconicWindows@4 @ 0x1AEB2A (_xxxArrangeIconicWindows@4.c)
 * Callees:
 *     _GetMonitorRectForDpi@8 @ 0x15588 (_GetMonitorRectForDpi@8.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     _GetMonitorWorkRectForDpi@8 @ 0x71FAA (_GetMonitorWorkRectForDpi@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

INT *__fastcall InternalGetRealClientRect(int a1, int *a2, char a3, int a4, int a5)
{
  int v7; // edi
  unsigned int v8; // eax
  INT *result; // eax
  INT DpiForSystem; // eax
  INT v11; // eax
  int v12[4]; // [esp+10h] [ebp-3Ch] BYREF
  INT v13[5]; // [esp+20h] [ebp-2Ch] BYREF
  int v14; // [esp+34h] [ebp-18h]
  int v15; // [esp+38h] [ebp-14h]
  int v16; // [esp+3Ch] [ebp-10h]
  int v17; // [esp+40h] [ebp-Ch]

  v7 = a4;
  if ( (*(_WORD *)(*(_DWORD *)(a1 + 20) + 30) & 0x3FFF) == 0x29D )
  {
    if ( !a4 )
      v7 = *(_DWORD *)(GetDispInfo() + 52);
    if ( a5 )
      LOWORD(v8) = 0;
    else
      v8 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8) & 0x1FF;
    if ( (a3 & 4) != 0 )
      result = GetMonitorRectForDpi(v7, v8, v13);
    else
      result = GetMonitorWorkRectForDpi(v7, v8, v12);
    v14 = *result;
    v15 = result[1];
    v16 = result[2];
    v17 = result[3];
    *a2 = v14;
    a2[1] = v15;
    a2[2] = v16;
    a2[3] = v17;
  }
  else
  {
    result = (INT *)GetRect(a1, a2, 17);
    if ( (a3 & 1) != 0 )
    {
      result = *(INT **)(a1 + 20);
      if ( (result[2] & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem();
        a2[3] += GetDpiDependentMetric(1, DpiForSystem);
        result = *(INT **)(a1 + 20);
      }
      if ( (result[2] & 2) != 0 )
      {
        v11 = GetDpiForSystem();
        result = (INT *)GetDpiDependentMetric(0, v11);
        a2[2] += (int)result;
      }
    }
  }
  if ( (a3 & 2) != 0 )
  {
    result = (INT *)_gpsi;
    switch ( *(_DWORD *)(_gpsi + 1720) & 0xFFFFFFF7 )
    {
      case 0u:
      case 1u:
        result = *(INT **)(_gpsi + 1688);
        a2[3] -= (int)result;
        break;
      case 2u:
      case 3u:
        result = *(INT **)(_gpsi + 1688);
        a2[1] += (int)result;
        break;
      case 4u:
      case 6u:
        result = *(INT **)(_gpsi + 1684);
        *a2 += (int)result;
        break;
      case 5u:
      case 7u:
        result = *(INT **)(_gpsi + 1684);
        a2[2] -= (int)result;
        break;
      default:
        return result;
    }
  }
  return result;
}
