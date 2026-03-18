/*
 * XREFs of _xxxSystemTimerProc@16 @ 0xCA358
 * Callers:
 *     <none>
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     __PostTransformableMessage@20 @ 0x7F9FE (__PostTransformableMessage@20.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     _GetActiveTrackPwnd@4 @ 0x14E1E4 (_GetActiveTrackPwnd@4.c)
 *     _InvalidateWEFCOMPOSITEDDCEs@0 @ 0x153838 (_InvalidateWEFCOMPOSITEDDCEs@0.c)
 *     _zzzAnimateFade@0 @ 0x153DEC (_zzzAnimateFade@0.c)
 */

int __stdcall xxxSystemTimerProc(int *BugCheckParameter2, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx
  __int64 v7; // kr00_8
  int MouseKeyFlags; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // ecx
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  switch ( a3 )
  {
    case 65525:
      return InvalidateWEFCOMPOSITEDDCEs();
    case 65526:
      return zzzAnimateFade();
    case 65527:
      v11 = BugCheckParameter2[2];
      v12 = *(_DWORD *)(*(_DWORD *)(v11 + 248) + 100);
      if ( v12 && BugCheckParameter2 == (int *)GetActiveTrackPwnd(v12) )
      {
        *(_DWORD *)(*(_DWORD *)(v11 + 236) + 284) |= (unsigned int)&loc_20001E + 2;
        SetWakeBit(v11, 2);
      }
      return FindTimer((unsigned int)BugCheckParameter2, a3, 2u, 1, 0);
    case 65528:
      return xxxFlashWindow((ULONG_PTR)BugCheckParameter2, 0);
  }
  if ( a3 != 65530 )
    return FindTimer((unsigned int)BugCheckParameter2, a3, 2u, 1, 0);
  result = BugCheckParameter2[2];
  v14 = result;
  v5 = *(_DWORD *)(result + 248);
  if ( (*(_BYTE *)(v5 + 24) & 0x40) != 0 )
  {
    result = *BugCheckParameter2;
    if ( *BugCheckParameter2 == **(_DWORD **)(v5 + 100) )
    {
      v7 = LogicalCursorPosFromDpiAwarenessContext(*(_DWORD *)(BugCheckParameter2[5] + 184));
      LOWORD(v6) = v7;
      result = PtInRect((_DWORD *)(v5 + 108), v7, SHIDWORD(v7));
      if ( result )
      {
        if ( *(_DWORD *)(v5 + 104) == 1 )
        {
          v13 = 673;
          MouseKeyFlags = GetMouseKeyFlags(*(_DWORD *)(v14 + 236));
          v9 = BugCheckParameter2[5];
          if ( (*(_BYTE *)(v9 + 18) & 0x40) != 0 )
            LOWORD(v6) = *(_DWORD *)(v9 + 76) - v7 - 1;
          else
            v6 = v7 - *(_DWORD *)(v9 + 68);
          v10 = HIDWORD(v7) - *(_DWORD *)(v9 + 72);
          goto LABEL_17;
        }
        MouseKeyFlags = *(unsigned __int16 *)(v5 + 104);
        v13 = 672;
        if ( (unsigned int)(MouseKeyFlags - 65) > 4 )
        {
          if ( (unsigned int)(MouseKeyFlags - 60) <= 4 )
          {
            LOWORD(v10) = WORD2(v7);
            MouseKeyFlags = (*(_WORD *)(v5 + 106) != 0) + 6;
            goto LABEL_17;
          }
        }
        else
        {
          MouseKeyFlags = 5;
        }
        LOWORD(v10) = WORD2(v7);
LABEL_17:
        _PostTransformableMessage(
          BugCheckParameter2,
          v13,
          MouseKeyFlags,
          (unsigned __int16)v6 | ((unsigned __int16)v10 << 16),
          0);
        *(_DWORD *)(v5 + 24) &= ~0x40u;
        return FindTimer((unsigned int)BugCheckParameter2, a3, 2u, 1, 0);
      }
    }
  }
  return result;
}
