/*
 * XREFs of NtUserGetCurrentInputMessageSource @ 0x1C01004D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C01005B8 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

__int64 __fastcall NtUserGetCurrentInputMessageSource(ULONG64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  _BYTE *v5; // rdx
  ULONG64 v6; // rcx
  int CurrentInputMessageSource; // edi
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h]

  v2 = 0LL;
  v12 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(0, (struct tagINPUT_MESSAGE_SOURCE *)&v12);
    if ( CurrentInputMessageSource )
    {
      v9 = v12;
      v10 = (unsigned int)(v12 - 18);
      if ( (v10 & 0xFFFFFFEF) == 0 )
        v9 = 2;
      LODWORD(v12) = v9;
      if ( PsGetCurrentProcessWow64Process(v10) )
      {
        v13 = 1LL;
      }
      else
      {
        v13 = 4LL;
        v2 = 3LL;
      }
      if ( (v2 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = MmUserProbeAddress;
      v5 = (_BYTE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v5 = (_BYTE *)MmUserProbeAddress;
      *v5 = *v5;
      v5[7] = v5[7];
      *(_QWORD *)a1 = v12;
    }
  }
  else
  {
    UserSetLastError(87LL, v3, v4);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8);
  return CurrentInputMessageSource;
}
