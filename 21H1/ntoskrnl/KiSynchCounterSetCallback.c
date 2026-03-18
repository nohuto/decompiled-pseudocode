/*
 * XREFs of KiSynchCounterSetCallback @ 0x1408B6A80
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14025B494 (RtlStringCbPrintfW.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x14065C6D0 (PcwAddInstance.c)
 *     EtwDereferenceSpinLockCounters @ 0x1409385B4 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x140938610 (EtwReferenceSpinLockCounters.c)
 */

NTSTATUS __fastcall KiSynchCounterSetCallback(int a1, __int64 a2)
{
  int v2; // ecx
  struct _PCW_BUFFER *v3; // r14
  ULONG v4; // edi
  ULONG ActiveProcessorCount; // ebp
  __int64 *i; // rsi
  __int64 v7; // rbx
  NTSTATUS result; // eax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  wchar_t pszDest[12]; // [rsp+50h] [rbp-38h] BYREF

  DestinationString = 0LL;
  if ( !a1 )
  {
    EtwReferenceSpinLockCounters();
    return 0;
  }
  v2 = a1 - 1;
  if ( !v2 )
  {
    EtwDereferenceSpinLockCounters();
    return 0;
  }
  if ( (unsigned int)(v2 - 1) > 1 )
    return 0;
  v3 = *(struct _PCW_BUFFER **)(a2 + 24);
  v4 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( !ActiveProcessorCount )
    return 0;
  for ( i = KiProcessorBlock; ; ++i )
  {
    v7 = *i;
    RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u", v4);
    RtlInitUnicodeString(&DestinationString, pszDest);
    Data.Size = 184;
    Data.Data = (const void *)(v7 + 33984);
    result = PcwAddInstance(v3, &DestinationString, v4, 1u, &Data);
    if ( result < 0 )
      break;
    if ( ++v4 >= ActiveProcessorCount )
      return 0;
  }
  return result;
}
