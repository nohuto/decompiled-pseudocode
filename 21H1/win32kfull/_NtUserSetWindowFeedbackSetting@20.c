/*
 * XREFs of _NtUserSetWindowFeedbackSetting@20 @ 0xA25DE
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _FeedbackSetWindowSetting@12 @ 0xA26BC (_FeedbackSetWindowSetting@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _FeedbackClearWindowSetting@8 @ 0x148D82 (_FeedbackClearWindowSetting@8.c)
 */

int __stdcall NtUserSetWindowFeedbackSetting(int a1, int a2, int a3, int a4, _DWORD *Address)
{
  int v5; // esi
  int v6; // edi
  int v7; // edi
  int v8; // eax
  int v10; // ecx
  int v11; // [esp+40h] [ebp+8h]

  v5 = 0;
  EnterCrit(0, 1);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  if ( v6 )
  {
    if ( !a2 || a2 > 13 || a4 && !Address || a3 || a4 != 4 && a4 )
    {
      v10 = 87;
LABEL_19:
      UserSetLastError((struct _NT_TIB *)v10);
      goto LABEL_14;
    }
    if ( PsGetCurrentProcessWin32Process() != *(_DWORD *)(*(_DWORD *)(v6 + 8) + 232) )
    {
      UserSetLastError((struct _NT_TIB *)5);
      v10 = 0;
      goto LABEL_19;
    }
    if ( Address )
    {
      v7 = 0;
      ProbeForRead(Address, 4u, 1u);
      v5 = *Address;
    }
    else
    {
      v7 = 1;
    }
    if ( v7 )
      v8 = FeedbackClearWindowSetting(v11, a2);
    else
      v8 = FeedbackSetWindowSetting(v5);
    v5 = v8;
  }
LABEL_14:
  UserSessionSwitchLeaveCrit();
  return v5;
}
