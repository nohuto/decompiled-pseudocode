/*
 * XREFs of _RtlpTpImpersonate@4 @ 0x4B385B57
 * Callers:
 *     _RtlpTpWaitCallback@16 @ 0x4B2A8970 (_RtlpTpWaitCallback@16.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _RtlpTpTimerCallback@12 @ 0x4B385320 (_RtlpTpTimerCallback@12.c)
 * Callees:
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

NTSTATUS __thiscall RtlpTpImpersonate(void *this)
{
  unsigned int v1; // esi
  NTSTATUS result; // eax
  int v3; // edi
  size_t v4; // [esp-4h] [ebp-64h]
  void *ThreadInformation; // [esp+8h] [ebp-58h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [esp+Ch] [ebp-54h] BYREF

  ThreadInformation = this;
  v1 = 0;
  while ( 1 )
  {
    result = ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, &ThreadInformation, 4u);
    v3 = result;
    ++v1;
    if ( result >= 0 )
      break;
    if ( v1 >= 2 )
    {
      LODWORD(v4) = 80;
      memset(&ExceptionRecord, 0, v4);
      ExceptionRecord.ExceptionCode = v3;
      RtlRaiseException(&ExceptionRecord);
    }
  }
  return result;
}
