/*
 * XREFs of _NtUserDeferWindowDpiChanges@4 @ 0xCC608
 * Callers:
 *     <none>
 * Callees:
 *     __SetDeferredDpiStateForWindowAndChildren@12 @ 0x25A48 (__SetDeferredDpiStateForWindowAndChildren@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserDeferWindowDpiChanges(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v7; // esi
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v8 = 0;
  v1 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v2 = ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(_WORD *)(*(_DWORD *)(v2 + 20) + 30) & 0x3FFF;
    if ( v4 != 669 && v4 != 671 )
    {
      v8 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v8;
      v9 = v3;
      HMLockObject(v3);
      v5 = *(_DWORD *)(v3 + 20);
      if ( (*(_DWORD *)(v5 + 184) & 0xF) == 2 )
      {
        if ( *(_WORD *)(v5 + 182) )
        {
          v7 = ~*(_DWORD *)(v3 + 176);
          *(_DWORD *)(v3 + 176) |= 1u;
          v1 = v7 & 1;
        }
        else
        {
          v1 = _SetDeferredDpiStateForWindowAndChildren(v3, 1, 1);
        }
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)0x57);
      }
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
