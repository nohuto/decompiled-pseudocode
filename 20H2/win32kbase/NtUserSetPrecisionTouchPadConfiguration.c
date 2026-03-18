/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C0136C20
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     CheckAccessEx @ 0x1C0056E08 (CheckAccessEx.c)
 *     EtwTraceUIPISystemError @ 0x1C00774A0 (EtwTraceUIPISystemError.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C01208C0 (_SetPrecisionTouchPadConfiguration.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A18C8 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     UserSetLastStatus @ 0x1C01CBFBC (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11[4]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v11[0] = 0x2000;
  v11[1] = -1;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v11, 0) )
  {
    if ( ((PsGetCurrentProcessWow64Process(v2) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = a1 + 4;
    if ( a1 + 4 > MmUserProbeAddress || v5 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( *(_DWORD *)a1 )
    {
      v3 = 0;
      UserSetLastStatus(-1073741822);
    }
    else
    {
      if ( ((PsGetCurrentProcessWow64Process(v5) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + 24 > MmUserProbeAddress || a1 + 24 < a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v13 = *(_OWORD *)a1;
      v14 = *(_QWORD *)(a1 + 16);
      LODWORD(v13) = 0;
      v3 = SetPrecisionTouchPadConfiguration(&v13);
      if ( v3 )
        PTPTelemetry::PTPConfigUpdateEx(0LL);
    }
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 53), 0LL);
    v3 = 0;
    UserSetLastError(5LL, v4);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v3;
}
