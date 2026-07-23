/*
 * XREFs of RtlpTpImpersonate @ 0x180070130
 * Callers:
 *     RtlpTpWorkCallback @ 0x18006FB60 (RtlpTpWorkCallback.c)
 *     RtlpTpTimerCallback @ 0x1800761B0 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x1800785F0 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlRaiseException @ 0x180051070 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x18009D250 (NtSetInformationThread.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

void __fastcall RtlpTpImpersonate(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // edi
  __int64 ThreadInformation; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  ThreadInformation = a1;
  v1 = 0;
  while ( 1 )
  {
    ++v1;
    v2 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    if ( v2 >= 0 )
      break;
    if ( v1 >= 2 )
    {
      memset(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
      ExceptionRecord.ExceptionCode = v2;
      RtlRaiseException(&ExceptionRecord);
      return;
    }
  }
}
