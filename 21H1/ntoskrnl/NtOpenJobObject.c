/*
 * XREFs of NtOpenJobObject @ 0x1405CE6F0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405EB090 (ObOpenObjectByName.c)
 *     EtwTraceJob @ 0x140931498 (EtwTraceJob.c)
 */

NTSTATUS __cdecl NtOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  __int64 v6; // rdx
  NTSTATUS v7; // ebx
  void *v9; // [rsp+78h] [rbp+20h] BYREF

  v3 = (int)ObjectAttributes;
  v9 = 0LL;
  LOBYTE(ObjectAttributes) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)ObjectAttributes )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)JobHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)JobHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  v7 = ObOpenObjectByName(v3, (_DWORD)PsJobType, (_DWORD)ObjectAttributes, 0, DesiredAccess, 0LL, (__int64)&v9);
  if ( v7 >= 0 )
    *JobHandle = v9;
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(0LL, 0LL, (unsigned int)v7, 1826LL);
  return v7;
}
