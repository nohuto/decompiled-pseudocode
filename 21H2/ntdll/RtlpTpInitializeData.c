/*
 * XREFs of RtlpTpInitializeData @ 0x18000BDF8
 * Callers:
 *     RtlCreateTimer @ 0x180009D50 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18000BE70 (RtlRegisterWait.c)
 * Callees:
 *     NtDuplicateToken @ 0x18009DE40 (NtDuplicateToken.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111D70 (TpSetDefaultPoolMaxThreads.c)
 */

NTSTATUS __fastcall RtlpTpInitializeData(HANDLE *NewTokenHandle, unsigned int a2, void *a3)
{
  __int16 v4; // bx
  NTSTATUS result; // eax

  *NewTokenHandle = 0LL;
  *((_DWORD *)NewTokenHandle + 2) = a2;
  v4 = a2;
  if ( (a2 & 0xFFFF0000) != 0 )
    TpSetDefaultPoolMaxThreads(HIWORD(a2));
  if ( !a3 )
    return 0;
  if ( (v4 & 0x100) == 0 )
    return 0;
  result = NtDuplicateToken(a3, 4u, 0LL, 0, TokenImpersonation, NewTokenHandle);
  if ( result >= 0 )
    return 0;
  return result;
}
