/*
 * XREFs of NtQueryDirectoryFileEx @ 0x14064FBF0
 * Callers:
 *     NtQueryDirectoryFile @ 0x14064E910 (NtQueryDirectoryFile.c)
 * Callees:
 *     BuildQueryDirectoryIrp @ 0x14064FCB0 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x1406FED80 (IopSynchronousServiceTail.c)
 */

__int64 __fastcall NtQueryDirectoryFileEx(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        volatile void *a6,
        SIZE_T a7,
        __int64 a8,
        char a9,
        __int64 a10)
{
  __int64 result; // rax
  SIZE_T Length; // [rsp+38h] [rbp-49h]
  __int64 v12; // [rsp+40h] [rbp-41h]
  char v13; // [rsp+58h] [rbp-29h]
  char v14; // [rsp+88h] [rbp+7h] BYREF
  char v15; // [rsp+89h] [rbp+8h] BYREF
  __int64 v16; // [rsp+90h] [rbp+Fh] BYREF
  PIRP Irp; // [rsp+98h] [rbp+17h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+1Fh] BYREF

  DeviceObject = 0LL;
  Irp = 0LL;
  v16 = 0LL;
  LODWORD(v12) = a8;
  LODWORD(Length) = a7;
  v14 = 0;
  v15 = 0;
  result = BuildQueryDirectoryIrp(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             Length,
             v12,
             a9,
             a10,
             v13,
             (__int64)&v14,
             (__int64)&DeviceObject,
             (__int64)&Irp,
             (__int64)&v16,
             (PIRP)&v15);
  if ( !(_DWORD)result )
    return IopSynchronousServiceTail(DeviceObject, Irp, v15, v14, 2);
  return result;
}
