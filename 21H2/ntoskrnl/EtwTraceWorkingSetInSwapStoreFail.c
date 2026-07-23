/*
 * XREFs of EtwTraceWorkingSetInSwapStoreFail @ 0x1406BE978
 * Callers:
 *     MiInSwapStoreWorker @ 0x1406BEB20 (MiInSwapStoreWorker.c)
 * Callees:
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     EtwProviderEnabled @ 0x14027E6F0 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceWorkingSetInSwapStoreFail(PEPROCESS Process, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  unsigned int ProcessId; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]
  int v10; // [rsp+78h] [rbp+10h] BYREF

  v10 = a2;
  v2 = EtwpMemoryProvRegHandle;
  result = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x80uLL);
  if ( result )
  {
    UserData.Reserved = 0;
    v9 = 0;
    ProcessId = (unsigned int)PsGetProcessId(Process);
    UserData.Size = 4;
    UserData.Ptr = (ULONGLONG)&ProcessId;
    v7 = &v10;
    v8 = 4;
    return EtwWrite(v2, &KERNEL_MEM_EVENT_WS_INSWAP_STORE_FAIL, 0LL, 2u, &UserData);
  }
  return result;
}
