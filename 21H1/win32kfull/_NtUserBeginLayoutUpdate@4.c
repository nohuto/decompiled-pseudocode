/*
 * XREFs of _NtUserBeginLayoutUpdate@4 @ 0xAD520
 * Callers:
 *     <none>
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _GreWindowBeginLayoutUpdate@8 @ 0xC536E (_GreWindowBeginLayoutUpdate@8.c)
 */

int __stdcall NtUserBeginLayoutUpdate(int a1)
{
  int v1; // edi
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  _DWORD *TopLevelWindow; // eax
  int v7; // edx
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v8 = 0;
  v9 = 0;
  v10 = 0;
  v1 = 1;
  EnterCrit(0, 1);
  v2 = (_DWORD *)ValidateHwnd(a1);
  v3 = v2;
  if ( !v2 || (v4 = *(_WORD *)(v2[5] + 30) & 0x3FFF, v4 == 669) || v4 == 671 )
  {
    v1 = 0;
  }
  else
  {
    v8 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v8;
    v9 = v3;
    HMLockObject(v3);
    if ( !_IsTopLevelWindow(v3) && *(char *)(v3[5] + 17) < 0 )
    {
      TopLevelWindow = (_DWORD *)_GetTopLevelWindow((int)v3);
      if ( TopLevelWindow )
      {
        v7 = TopLevelWindow[5];
        if ( (*(_WORD *)(v7 + 30) & 0x3FFF) != 0x29D && *(char *)(v7 + 17) < 0 )
          GreWindowBeginLayoutUpdate(*TopLevelWindow);
      }
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
