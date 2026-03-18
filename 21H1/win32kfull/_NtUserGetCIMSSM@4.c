/*
 * XREFs of _NtUserGetCIMSSM@4 @ 0x161CDC
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?_GetCurrentInputMessageSource@@YGHHPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xA1F08 (-_GetCurrentInputMessageSource@@YGHHPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetCIMSSM(ULONG a1)
{
  int CurrentInputMessageSource; // esi
  int v3; // [esp+10h] [ebp-28h] BYREF
  int v4; // [esp+14h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v3 = 0;
  v4 = 0;
  EnterSharedCrit(0, 1);
  if ( !a1 || !_GetCurrentInputMessageSource(0, &v3) || v3 || v4 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    CurrentInputMessageSource = 0;
  }
  else
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(1, &v3);
    if ( CurrentInputMessageSource )
    {
      if ( v3 == 18 || v3 == 34 )
        v3 = 2;
      ms_exc.registration.TryLevel = 0;
      if ( a1 >= _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      *(_BYTE *)a1 = *(_BYTE *)a1;
      *(_BYTE *)(a1 + 7) = *(_BYTE *)(a1 + 7);
      *(_DWORD *)a1 = v3;
      *(_DWORD *)(a1 + 4) = v4;
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  return CurrentInputMessageSource;
}
