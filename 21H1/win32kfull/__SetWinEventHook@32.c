/*
 * XREFs of __SetWinEventHook@32 @ 0x148F0
 * Callers:
 *     _NtUserSetWinEventHook@32 @ 0x13974 (_NtUserSetWinEventHook@32.c)
 * Callees:
 *     _CategoryMaskFromEventRange@8 @ 0x14AC0 (_CategoryMaskFromEventRange@8.c)
 *     _AddHmodDependency@4 @ 0x15F82 (_AddHmodDependency@4.c)
 *     _GetHmodTableIndex@4 @ 0x15FAE (_GetHmodTableIndex@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__fastcall _SetWinEventHook(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  int v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  unsigned int v12; // esi
  int v14; // ecx
  int v15; // eax
  int HmodTableIndex; // [esp+30h] [ebp+1Ch]

  if ( (*(_BYTE *)(_gptiCurrent + 264) & 1) != 0 )
    return 0;
  if ( !a5 )
  {
    v14 = 1427;
    goto LABEL_21;
  }
  if ( a1 > a2 )
  {
    v14 = 1426;
    goto LABEL_21;
  }
  v9 = a8 & 4;
  if ( (a8 & 4) == 0 )
  {
    HmodTableIndex = -1;
    a3 &= v9;
    goto LABEL_6;
  }
  if ( !a3 )
  {
    v14 = 1428;
    goto LABEL_21;
  }
  if ( !a4 )
  {
    v14 = 1157;
    goto LABEL_21;
  }
  HmodTableIndex = GetHmodTableIndex(a4);
  if ( HmodTableIndex == -1 )
  {
    v14 = 126;
LABEL_21:
    UserSetLastError(v14);
    return 0;
  }
LABEL_6:
  if ( a7 )
  {
    v15 = PtiFromThreadId(a7);
    if ( !v15 || (*(_DWORD *)(v15 + 264) & 0x1000000) == 0 )
    {
      v14 = 1444;
      goto LABEL_21;
    }
  }
  v10 = (_DWORD *)HMAllocObject(_gptiCurrent, 0, 15, 52);
  v11 = v10;
  if ( !v10 )
    return 0;
  v10[4] = a1;
  v10[5] = a2;
  v12 = v10[6] & 0xFFFFFFF0 | (v9 != 0 ? 8 : 0);
  v10[7] = a6;
  v10[8] = a7;
  v10[6] = (2 * (a8 & 3)) | v12 & 0xFFFFFFEF;
  v10[10] = HmodTableIndex;
  if ( HmodTableIndex >= 0 )
    AddHmodDependency(HmodTableIndex);
  v11[9] = a5 - a3;
  v11[3] = _gpWinEventHooks;
  _gpWinEventHooks = v11;
  *(_DWORD *)(_gpsi + 1492) |= CategoryMaskFromEventRange(a1, a2);
  v11[12] = W32GetCurrentThreadDpiAwarenessContext();
  return v11;
}
