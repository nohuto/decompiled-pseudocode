/*
 * XREFs of _NtUserGetWindowFeedbackSetting@20 @ 0x164D2B
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _FeedbackGetWindowSetting@16 @ 0x148DC2 (_FeedbackGetWindowSetting@16.c)
 */

int __stdcall NtUserGetWindowFeedbackSetting(volatile void *a1, int a2, int a3, volatile void *Address, _DWORD *a5)
{
  int WindowSetting; // esi
  volatile void **v6; // edi
  volatile void *v7; // eax
  _DWORD *v8; // edi
  _DWORD *v10; // [esp+20h] [ebp-20h]

  WindowSetting = 0;
  EnterSharedCrit(0, 1);
  v10 = (_DWORD *)ValidateHwnd(a1);
  if ( v10 )
  {
    if ( a2 && a2 <= 13 && (v6 = (volatile void **)Address) != 0 && (a3 & 0xFFFFFFFE) == 0 )
    {
      ProbeForRead(Address, 4u, 1u);
      v7 = *v6;
      a1 = v7;
      Address = v7;
      if ( v7 != (volatile void *)4 )
      {
        ProbeForWrite(v6, 4u, 1u);
        *v6 = (volatile void *)4;
        v7 = a1;
      }
      v8 = a5;
      if ( a5 && (unsigned int)v7 < 4 )
      {
        UserSetLastError((struct _NT_TIB *)0x7A);
      }
      else
      {
        a1 = 0;
        WindowSetting = FeedbackGetWindowSetting(v10, a2, a3, (BOOL *)&a1);
        if ( v8 )
        {
          ProbeForWrite(v8, 4u, 1u);
          *v8 = a1;
        }
      }
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
  }
  UserSessionSwitchLeaveCrit();
  return WindowSetting;
}
