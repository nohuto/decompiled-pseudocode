/*
 * XREFs of SetLastNtError @ 0x1C00D242C
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C00B4150 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0136F40 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSystemParametersInfo @ 0x1C0139B30 (NtUserSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1, v2);
}
