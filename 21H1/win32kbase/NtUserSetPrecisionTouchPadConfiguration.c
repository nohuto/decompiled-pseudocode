/*
 * XREFs of NtUserSetPrecisionTouchPadConfiguration @ 0x1C013EC10
 * Callers:
 *     <none>
 * Callees:
 *     CheckAccessEx @ 0x1C00713D8 (CheckAccessEx.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     EtwTraceUIPISystemError @ 0x1C009FDF0 (EtwTraceUIPISystemError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0128BF0 (_SetPrecisionTouchPadConfiguration.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A99A8 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     UserSetLastStatus @ 0x1C01D42BC (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserSetPrecisionTouchPadConfiguration(unsigned __int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  int v8[4]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v8[0] = 0x2000;
  v8[1] = -1;
  EnterCrit(0LL, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
  if ( CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 52) + 880LL), v8, 0) )
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
      v10 = *(_OWORD *)a1;
      v11 = *(_QWORD *)(a1 + 16);
      LODWORD(v10) = 0;
      v3 = SetPrecisionTouchPadConfiguration(&v10);
      if ( v3 )
        PTPTelemetry::PTPConfigUpdateEx(0LL);
    }
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 52), 0LL);
    v3 = 0;
    UserSetLastError(5LL, v4);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
  UserSessionSwitchLeaveCrit(v6);
  return v3;
}
