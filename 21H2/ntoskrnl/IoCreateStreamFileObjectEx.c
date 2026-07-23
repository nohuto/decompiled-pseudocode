/*
 * XREFs of IoCreateStreamFileObjectEx @ 0x140773460
 * Callers:
 *     <none>
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x1406C9360 (IoCreateStreamFileObjectEx2.c)
 */

PFILE_OBJECT __stdcall IoCreateStreamFileObjectEx(
        PFILE_OBJECT FileObject,
        PDEVICE_OBJECT DeviceObject,
        PHANDLE FileHandle)
{
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF
  struct _FILE_OBJECT *v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  LODWORD(v4) = 65552;
  IoCreateStreamFileObjectEx2(
    (__int64)&v4,
    (__int64)FileObject,
    (ULONG_PTR)DeviceObject,
    (struct _DMA_ADAPTER **)&v5,
    FileHandle);
  return v5;
}
