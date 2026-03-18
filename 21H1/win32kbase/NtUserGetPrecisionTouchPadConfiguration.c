/*
 * XREFs of NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004BE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0010D30 (_GetPrecisionTouchPadConfiguration.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C01D42BC (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetPrecisionTouchPadConfiguration(char *Address)
{
  __int64 v2; // rcx
  int PrecisionTouchPadConfiguration; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v5; // rcx
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]
  char v9; // [rsp+78h] [rbp+10h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  if ( ((((__int64 (*)(void))PsGetCurrentProcessWow64Process)() == 0 ? 3 : 0) & (unsigned __int8)Address) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(Address + 4) > MmUserProbeAddress || Address + 4 < Address )
    *(_BYTE *)MmUserProbeAddress = 0;
  LODWORD(v7) = *(_DWORD *)Address;
  if ( (_DWORD)v7 )
  {
    PrecisionTouchPadConfiguration = 0;
    UserSetLastStatus(-1073741822);
  }
  else
  {
    PrecisionTouchPadConfiguration = GetPrecisionTouchPadConfiguration(&v7);
    if ( PrecisionTouchPadConfiguration )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v2);
      ProbeForWrite(Address, 0x18uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      *(_OWORD *)Address = v7;
      *((_QWORD *)Address + 2) = v8;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v5);
  return PrecisionTouchPadConfiguration;
}
