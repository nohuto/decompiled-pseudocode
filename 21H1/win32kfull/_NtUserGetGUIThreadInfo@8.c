/*
 * XREFs of _NtUserGetGUIThreadInfo@8 @ 0x813EA
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __GetGUIThreadInfo@8 @ 0x81494 (__GetGUIThreadInfo@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserGetGUIThreadInfo(int a1, _BYTE *a2)
{
  int GUIThreadInfo; // ebx
  _DWORD v4[12]; // [esp+10h] [ebp-58h] BYREF
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]

  GUIThreadInfo = 0;
  memset(v4, 0, sizeof(v4));
  EnterSharedCrit(0, 1);
  if ( a1 && !PtiFromThreadId(a1) )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a2 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *a2 = *a2;
    a2[47] = a2[47];
    v4[0] = *(_DWORD *)a2;
    ms_exc.registration.TryLevel = -2;
    GUIThreadInfo = _GetGUIThreadInfo();
    if ( GUIThreadInfo )
    {
      qmemcpy(a2, v4, 0x30u);
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  return GUIThreadInfo;
}
