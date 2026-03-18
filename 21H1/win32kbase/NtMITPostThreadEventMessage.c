/*
 * XREFs of NtMITPostThreadEventMessage @ 0x1C01360B0
 * Callers:
 *     <none>
 * Callees:
 *     PtiFromThreadId @ 0x1C001B650 (PtiFromThreadId.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0073320 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     PostThreadEvent @ 0x1C01B1A2C (PostThreadEvent.c)
 */

__int64 __fastcall NtMITPostThreadEventMessage(int a1, __int64 *a2, int a3, int a4, unsigned int a5)
{
  CInputThread *v9; // rcx
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax

  EnterCrit(0LL, 1);
  v11 = 0;
  if ( CInputThread::IsInputThread(v9) )
  {
    LODWORD(v14) = 0;
    if ( a2 )
    {
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        a2 = (__int64 *)MmUserProbeAddress;
      v14 = *a2;
    }
    v15 = PtiFromThreadId(a1);
    if ( v15 )
    {
      LOBYTE(v11) = (unsigned __int8)PostThreadEvent(v15, v14, a3, a4, a5, 0LL) != 0;
      goto LABEL_12;
    }
    v12 = 87LL;
  }
  else
  {
    v12 = 5LL;
  }
  UserSetLastError(v12, v10);
LABEL_12:
  UserSessionSwitchLeaveCrit(v13);
  return v11;
}
