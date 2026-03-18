/*
 * XREFs of NtMITPostThreadEventMessage @ 0x1C012DD70
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C00549F8 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     PtiFromThreadId @ 0x1C0094E10 (PtiFromThreadId.c)
 *     PostThreadEvent @ 0x1C01A994C (PostThreadEvent.c)
 */

__int64 __fastcall NtMITPostThreadEventMessage(int a1, __int64 *a2, int a3, int a4, unsigned int a5)
{
  CInputThread *v9; // rcx
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rax

  EnterCrit(0, 1);
  v11 = 0;
  if ( CInputThread::IsInputThread(v9) )
  {
    LODWORD(v17) = 0;
    if ( a2 )
    {
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        a2 = (__int64 *)MmUserProbeAddress;
      v17 = *a2;
    }
    v18 = PtiFromThreadId(a1);
    if ( v18 )
    {
      LOBYTE(v11) = (unsigned __int8)PostThreadEvent(v18, v17, a3, a4, a5, 0LL) != 0;
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
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v11;
}
