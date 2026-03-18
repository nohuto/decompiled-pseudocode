/*
 * XREFs of _NtUserGetCurrentInputMessageSource@4 @ 0xA1E72
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?_GetCurrentInputMessageSource@@YGHHPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xA1F08 (-_GetCurrentInputMessageSource@@YGHHPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetCurrentInputMessageSource(ULONG a1)
{
  int CurrentInputMessageSource; // edi
  int v3; // [esp+0h] [ebp-38h]
  struct tagINPUT_MESSAGE_SOURCE *v4; // [esp+4h] [ebp-34h]

  EnterSharedCrit(0, 1);
  if ( a1 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(v3, v4);
    if ( CurrentInputMessageSource )
    {
      if ( a1 >= _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      *(_BYTE *)a1 = *(_BYTE *)a1;
      *(_BYTE *)(a1 + 7) = *(_BYTE *)(a1 + 7);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = 0;
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit();
  return CurrentInputMessageSource;
}
