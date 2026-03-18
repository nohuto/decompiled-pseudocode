/*
 * XREFs of _NtUserForceWindowToDpiForTest@8 @ 0x16182C
 * Callers:
 *     <none>
 * Callees:
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxForceWindowToDpiForTest@8 @ 0x15258A (_xxxForceWindowToDpiForTest@8.c)
 */

int __stdcall NtUserForceWindowToDpiForTest(int a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v8; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v2 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v3 = (_DWORD *)ValidateHwnd(a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_WORD *)(v3[5] + 30) & 0x3FFF;
    if ( v5 != 669 && v5 != 671 )
    {
      v8 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v8;
      v9 = v4;
      HMLockObject(v4);
      if ( (*(_DWORD *)(v4[5] + 184) & 0xF) == 2 && _IsTopLevelWindow(v4) && GetDpiCacheSlot(a2) != -1 )
        v2 = xxxForceWindowToDpiForTest((int)v4, v6);
      else
        UserSetLastError((struct _NT_TIB *)0x57);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
