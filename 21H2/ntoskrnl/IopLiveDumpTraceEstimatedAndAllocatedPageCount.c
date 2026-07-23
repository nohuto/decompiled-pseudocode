/*
 * XREFs of IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14050993C
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1408973B4 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140508C5C (IopLiveDumpIsTracingEnabled.c)
 */

char __fastcall IopLiveDumpTraceEstimatedAndAllocatedPageCount(__int64 a1, __int64 a2)
{
  int v2; // edx
  char result; // al
  __int64 v4; // rcx
  int v5; // [rsp+40h] [rbp-19h] BYREF
  int v6; // [rsp+44h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  __int64 v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  int *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  __int64 v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  int *v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+98h] [rbp+3Fh]
  __int64 v16; // [rsp+C8h] [rbp+6Fh] BYREF

  v16 = a2;
  v2 = (*(_DWORD *)(a1 + 80) >> 10) & 1;
  v5 = (*(_DWORD *)(a1 + 80) >> 9) & 1;
  v6 = v2;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (ULONGLONG)&v16;
    v9 = 8LL;
    v8 = v4 + 680;
    v11 = 4LL;
    v10 = &v5;
    v12 = v4 + 1048;
    v14 = &v6;
    v13 = 8LL;
    v15 = 4LL;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_ESTIMATED_AND_ALLOCATED_MEMORY_PAGES,
             0LL,
             0,
             0LL,
             0LL,
             5u,
             &UserData);
  }
  return result;
}
