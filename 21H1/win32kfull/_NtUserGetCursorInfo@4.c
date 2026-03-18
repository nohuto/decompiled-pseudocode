/*
 * XREFs of _NtUserGetCursorInfo@4 @ 0x7F2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetCursorInfo@@YGXPAUtagCURSORINFO@@@Z @ 0x7F38E (-_GetCursorInfo@@YGXPAUtagCURSORINFO@@@Z.c)
 *     _CheckWinstaAttributeAccess@4 @ 0x7FB22 (_CheckWinstaAttributeAccess@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetCursorInfo(_BYTE *a1)
{
  int v1; // ebx
  int v2; // esi
  int v3; // ecx
  struct tagCURSORINFO *v5; // [esp+0h] [ebp-4Ch]
  _BYTE v6[20]; // [esp+10h] [ebp-3Ch] BYREF
  int v7; // [esp+28h] [ebp-24h]
  int v8; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  memset(v6, 0, sizeof(v6));
  v1 = 0;
  v2 = EnterSharedCrit(0, 1);
  v7 = v2;
  if ( CheckWinstaAttributeAccess(2u) && ((v3 = *(_DWORD *)(v2 + 248)) == 0 || v3 == _grpdeskRitInput) )
  {
    _GetCursorInfo(v5);
    v8 = 1;
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a1 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *a1 = *a1;
    a1[19] = a1[19];
    if ( *(_DWORD *)a1 == 20 )
    {
      qmemcpy(a1, v6, 0x14u);
      v1 = v8;
    }
    else
    {
      UserSetLastError(87);
      v8 = 0;
    }
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
