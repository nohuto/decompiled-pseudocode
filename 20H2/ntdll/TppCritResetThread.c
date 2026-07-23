/*
 * XREFs of TppCritResetThread @ 0x1800547C4
 * Callers:
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D250 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtSetInformationObject @ 0x18009DC20 (NtSetInformationObject.c)
 */

NTSTATUS __fastcall TppCritResetThread(void *a1)
{
  NTSTATUS result; // eax
  HANDLE ThreadInformation; // [rsp+30h] [rbp+8h] BYREF
  __int16 ObjectInformation; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    ThreadInformation = a1;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    v4 = 0;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination, &v4, 4u);
    ObjectInformation = 0;
    NtSetInformationObject(ThreadInformation, ObjectHandleFlagInformation, &ObjectInformation, 2u);
    NtClose(ThreadInformation);
    ThreadInformation = 0LL;
    return NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}
