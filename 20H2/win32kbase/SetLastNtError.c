/*
 * XREFs of SetLastNtError @ 0x1C00D234C
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C000D570 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0134BF0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSystemParametersInfo @ 0x1C01377E0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1, v2);
}
