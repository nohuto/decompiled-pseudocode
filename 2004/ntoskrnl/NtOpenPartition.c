/*
 * XREFs of NtOpenPartition @ 0x1407BEE80
 * Callers:
 *     <none>
 * Callees:
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     ObOpenObjectByName @ 0x1406945D0 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenPartition(HANDLE *a1, int a2, __int64 a3)
{
  char PreviousMode; // di
  __int64 v5; // rcx
  __int64 result; // rax
  HANDLE Handle[4]; // [rsp+48h] [rbp-20h] BYREF

  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a1;
    *(_QWORD *)v5 = *(_QWORD *)v5;
  }
  result = ObOpenObjectByName(a3, (__int64)PsPartitionType, PreviousMode, 0LL, a2, 0LL, (__int64)Handle);
  if ( (int)result >= 0 )
  {
    *a1 = Handle[0];
    return (unsigned int)result;
  }
  return result;
}
