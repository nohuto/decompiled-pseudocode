/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x1405F3380
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObWaitForMultipleObjects @ 0x1406EC520 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __cdecl NtWaitForMultipleObjects32(
        ULONG Count,
        LONG Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  __int64 v8; // rbx
  int v9; // r8d
  unsigned int v10; // r10d
  __int64 v11; // rax
  LONG *v12; // rax
  PLARGE_INTEGER v14; // [rsp+48h] [rbp-230h]
  __int64 v15; // [rsp+50h] [rbp-228h] BYREF
  _QWORD v16[64]; // [rsp+60h] [rbp-218h] BYREF

  v8 = Count;
  v14 = Timeout;
  memset(v16, 0, sizeof(v16));
  v10 = 0;
  v15 = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  LOBYTE(v9) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)v9 )
  {
    v11 = (__int64)Timeout;
    if ( Timeout )
    {
      if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      v15 = *(_QWORD *)v11;
      v14 = (PLARGE_INTEGER)&v15;
    }
    if ( 4 * v8 )
    {
      v12 = &Handles[v8];
      if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  while ( v10 < (unsigned int)v8 )
  {
    v16[v10] = Handles[v10];
    ++v10;
  }
  return ObWaitForMultipleObjects(v8, (unsigned int)v16, v9, WaitType, v9, Alertable, (__int64)v14);
}
