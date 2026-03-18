/*
 * XREFs of _NtUserHandleDelegatedInput@8 @ 0x164E8C
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?_HandleDelegatedInput@@YGHPAUtagTHREADINFO@@W4HDIOPTION@@QAUtagMSG@@@Z @ 0x14DECE (-_HandleDelegatedInput@@YGHPAUtagTHREADINFO@@W4HDIOPTION@@QAUtagMSG@@@Z.c)
 */

int __stdcall NtUserHandleDelegatedInput(ULONG a1, int a2)
{
  int v2; // esi
  const void *v3; // esi
  _DWORD v5[7]; // [esp+10h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v2 = 0;
  EnterCrit(0, 1);
  if ( a2 == 1 || a2 == 2 || a2 == 3 )
  {
    if ( (*(_DWORD *)(_gptiCurrent + 688) & 0x2000) != 0 )
    {
      if ( a2 == 3 )
      {
        v2 = 1;
      }
      else
      {
        ms_exc.registration.TryLevel = 0;
        v3 = (const void *)_MmUserProbeAddress;
        if ( a1 < _MmUserProbeAddress )
          v3 = (const void *)a1;
        qmemcpy(v5, v3, sizeof(v5));
        ms_exc.registration.TryLevel = -2;
        v2 = _HandleDelegatedInput(_gptiCurrent, v5);
      }
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)5);
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
