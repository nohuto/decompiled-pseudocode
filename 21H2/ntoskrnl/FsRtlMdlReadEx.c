/*
 * XREFs of FsRtlMdlReadEx @ 0x14061F460
 * Callers:
 *     <none>
 * Callees:
 *     IoSynchronousCallDriver @ 0x14023D110 (IoSynchronousCallDriver.c)
 *     IoBuildAsynchronousFsdRequest @ 0x140298BA0 (IoBuildAsynchronousFsdRequest.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     FsRtlMdlRead @ 0x14061F4E0 (FsRtlMdlRead.c)
 */

__int64 __fastcall FsRtlMdlReadEx(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartingOffset,
        ULONG Length,
        ULONG a4,
        PMDL *a5,
        __int64 a6)
{
  NTSTATUS v10; // edi
  __int64 result; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbp
  PIRP v13; // rax
  IRP *v14; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax

  if ( (unsigned __int8)FsRtlMdlRead((_DWORD)FileObject, (_DWORD)StartingOffset, Length, a4, (__int64)a5, a6) )
    return 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v13 = IoBuildAsynchronousFsdRequest(3u, RelatedDeviceObject, 0LL, Length, StartingOffset, 0LL);
  v14 = v13;
  if ( v13 )
  {
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].FileObject = FileObject;
    CurrentStackLocation[-1].MinorFunction = 2;
    CurrentStackLocation[-1].Parameters.Create.Options = a4;
    v14->Flags |= 4u;
    v10 = IoSynchronousCallDriver(RelatedDeviceObject, v14);
    *(_DWORD *)a6 = v14->IoStatus.Status;
    *(_QWORD *)(a6 + 8) = v14->IoStatus.Information;
    if ( v10 >= 0 )
    {
      *a5 = v14->MdlAddress;
      v14->MdlAddress = 0LL;
    }
    IoFreeIrp(v14);
    return (unsigned int)v10;
  }
  result = 3221225626LL;
  *(_DWORD *)a6 = -1073741670;
  return result;
}
