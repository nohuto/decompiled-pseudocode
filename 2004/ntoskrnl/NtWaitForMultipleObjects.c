/*
 * XREFs of NtWaitForMultipleObjects @ 0x14066F7B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __cdecl NtWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  __int64 v8; // r14
  unsigned __int8 v9; // di
  __int64 v10; // rbx
  HANDLE *v11; // rax
  __int64 v13; // [rsp+48h] [rbp-240h] BYREF
  _BYTE v14[512]; // [rsp+50h] [rbp-238h] BYREF

  v8 = Count;
  memset(v14, 0, sizeof(v14));
  v13 = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  v9 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  v10 = (__int64)Timeout;
  if ( v9 )
  {
    if ( Timeout )
    {
      if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v13 = *(_QWORD *)v10;
      v10 = (__int64)&v13;
    }
    if ( 8 * v8 )
    {
      v11 = &Handles[v8];
      if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  memmove(v14, Handles, 8 * v8);
  return ObWaitForMultipleObjects(v8, (unsigned int)v14, v9, WaitType, v9, Alertable, v10);
}
