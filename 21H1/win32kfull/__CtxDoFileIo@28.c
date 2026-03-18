/*
 * XREFs of __CtxDoFileIo@28 @ 0x23A656
 * Callers:
 *     _EngFileWrite@16 @ 0x1E7D38 (_EngFileWrite@16.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall _CtxDoFileIo(int a1, int a2, PVOID Buffer, ULONG Length, int a5, int a6, int a7)
{
  NTSTATUS result; // eax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // ebx
  PIRP v10; // eax
  IRP *v11; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // eax
  union _LARGE_INTEGER StartingOffset; // [esp+4h] [ebp-8h] BYREF

  if ( (*(_BYTE *)(a2 + 44) & 2) != 0 )
    return -1073741776;
  StartingOffset.QuadPart = -1LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)a2);
  v10 = IoBuildAsynchronousFsdRequest(4u, RelatedDeviceObject, Buffer, Length, &StartingOffset, &IoStatusBlock);
  v11 = v10;
  if ( !v10 )
    return -1073741670;
  v10->UserEvent = 0;
  v10->Flags |= 4u;
  ObfReferenceObject((PVOID)a2);
  CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
  v11->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)a2;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)a2;
  v11->Tail.Overlay.Thread = KeGetCurrentThread();
  IoQueueThreadIrp(v11);
  result = IofCallDriver(RelatedDeviceObject, v11);
  if ( result == 259 )
  {
    KeWaitForSingleObject((PVOID)(a2 + 92), Executive, 0, 0, 0);
    return *(_DWORD *)(a2 + 28);
  }
  return result;
}
