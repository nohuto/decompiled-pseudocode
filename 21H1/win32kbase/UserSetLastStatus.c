/*
 * XREFs of UserSetLastStatus @ 0x1C01D42BC
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004BE0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserGetDpiForMonitor @ 0x1C006DA80 (NtUserGetDpiForMonitor.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C013EC10 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status)
{
  NTSTATUS v2; // ebx
  struct _NT_TIB *result; // rax
  __int64 v4; // rcx
  ULONG v5; // eax
  __int64 v6; // rdx

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
  {
    v2 = 0;
    if ( Status < 0 )
      v2 = -1073741823;
  }
  else
  {
    v2 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess(536805376LL);
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    if ( PsGetCurrentProcessWow64Process(v4) )
      HIDWORD(KeGetPcr()->NtTib.Self[200].Self) = Status;
    v5 = RtlNtStatusToDosError(v2);
    return UserSetLastError(v5, v6);
  }
  return result;
}
