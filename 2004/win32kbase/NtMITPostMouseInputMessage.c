/*
 * XREFs of NtMITPostMouseInputMessage @ 0x1C012FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0076260 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     PostMouseInputMessage @ 0x1C01ABC00 (PostMouseInputMessage.c)
 */

__int64 __fastcall NtMITPostMouseInputMessage(__int64 *a1, unsigned int a2, __int64 *a3)
{
  CInputThread *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  char v14; // al
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 1);
  v8 = 0;
  if ( CInputThread::IsInputThread(v6) )
  {
    v16 = 0LL;
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v13 = *a1;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (__int64 *)MmUserProbeAddress;
      v16 = *a3;
      a3 = &v16;
    }
    v14 = -(char)PostMouseInputMessage(v13, a2, a3);
    v10 = v14 == 0 ? 0xC0000001 : 0;
    v8 = v14 == 0 ? 0xC0000001 : 0;
  }
  else
  {
    UserSetLastError(5LL, v7);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v8;
}
