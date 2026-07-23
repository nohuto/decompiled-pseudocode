/*
 * XREFs of RtlFindMessage @ 0x1406FC510
 * Callers:
 *     PiGetDefaultMessageString @ 0x1407562E4 (PiGetDefaultMessageString.c)
 *     IopInitializeBootLogging @ 0x14088D370 (IopInitializeBootLogging.c)
 *     ExpSystemErrorHandler2 @ 0x1409AF330 (ExpSystemErrorHandler2.c)
 *     ResFwFindMessage @ 0x1409F17C0 (ResFwFindMessage.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpFindMessageInTable @ 0x14033B458 (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x1406F8B20 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x1406FC428 (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  int v8; // [rsp+30h] [rbp-40h] BYREF
  ULONG *v9; // [rsp+38h] [rbp-38h] BYREF
  int *v10; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11[4]; // [rsp+48h] [rbp-28h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v8 = 0;
  v11[0] = MessageTableId;
  v11[2] = MessageLanguageId;
  v11[1] = 1LL;
  v11[3] = MessageId;
  result = LdrpSearchResourceSection_U((char *)DllHandle, v11, 4u, 0x40u, &v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData((unsigned __int64)DllHandle, v9, (unsigned __int64 *)&v10, &v8);
    if ( result >= 0 )
      return RtlpFindMessageInTable(v10, v8, MessageId, (unsigned __int16 **)MessageEntry);
  }
  return result;
}
