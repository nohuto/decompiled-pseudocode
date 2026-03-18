/*
 * XREFs of NtUserGetInteractiveControlInfo @ 0x1C01FAC30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00C7554 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C02533D0 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlInfo(unsigned int a1, _OWORD *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v9; // rax
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+48h] [rbp-40h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+60h] [rbp-28h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v4 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( a1 && a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6);
    ProbeForWrite(a2, 0x1CuLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetReportInfo(
                v9,
                (unsigned __int16)a1,
                HIWORD(a1),
                (struct tagINTERACTIVECTRL_INFO *)&v14) < 0 )
    {
      v4 = 0;
    }
    else
    {
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v14;
      *((_QWORD *)a2 + 2) = v15;
      *((_DWORD *)a2 + 6) = v16;
    }
  }
  else
  {
    v4 = 0;
    UserSetLastError(87LL, v5, v7);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  return v4;
}
