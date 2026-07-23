/*
 * XREFs of NtCopyFileChunk @ 0x1405CBD40
 * Callers:
 *     <none>
 * Callees:
 *     IopFileObjectRevoked @ 0x140209E48 (IopFileObjectRevoked.c)
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IoIs32bitProcess @ 0x14023F3D0 (IoIs32bitProcess.c)
 *     IopWaitForSynchronousIoEvent @ 0x1403F057C (IopWaitForSynchronousIoEvent.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1403F0D38 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopPopulateCopyWriteWorkerData @ 0x1403F0E1C (IopPopulateCopyWriteWorkerData.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopExceptionFilter @ 0x1404FEEDC (IopExceptionFilter.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     ObReferenceFileObjectForWrite @ 0x1405F8E90 (ObReferenceFileObjectForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x1409B7280 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtCopyFileChunk(
        HANDLE SourceHandle,
        HANDLE DestinationHandle,
        HANDLE EventHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG Length,
        PLARGE_INTEGER SourceOffset,
        PLARGE_INTEGER DestOffset,
        PULONG SourceKey,
        PULONG DestKey,
        ULONG Flags)
{
  KPROCESSOR_MODE PreviousMode; // r15
  PLARGE_INTEGER v13; // r12
  __int64 v14; // rcx
  __int128 v15; // xmm6
  LONGLONG v16; // rdi
  char *Pool2; // rax
  char *v18; // rsi
  NTSTATUS File; // edi
  char *v20; // r13
  __int64 v21; // rcx
  HANDLE v22; // rdx
  ULONG v23; // r13d
  PADAPTER_OBJECT *v24; // rdi
  int Object; // [rsp+20h] [rbp-F8h]
  SIZE_T v26; // [rsp+30h] [rbp-E8h]
  NTSTATUS Status; // [rsp+60h] [rbp-B8h]
  char v28; // [rsp+70h] [rbp-A8h]
  struct _KEVENT *v29; // [rsp+78h] [rbp-A0h]
  LONGLONG QuadPart; // [rsp+80h] [rbp-98h]
  char *v31; // [rsp+90h] [rbp-88h]
  PVOID v32; // [rsp+98h] [rbp-80h] BYREF
  POBJECT_HANDLE_INFORMATION v33; // [rsp+A0h] [rbp-78h]
  PIRP Irp; // [rsp+A8h] [rbp-70h]
  struct _KEVENT Event; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v36; // [rsp+C8h] [rbp-50h]
  ULONG Flagsa; // [rsp+168h] [rbp+50h]

  v36 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v29 = 0LL;
  Irp = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Flags )
    return -1073741811;
  if ( PreviousMode )
  {
    v13 = SourceOffset;
    if ( ((unsigned __int8)SourceOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = 0x7FFFFFFF0000LL;
    QuadPart = SourceOffset->QuadPart;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v14 = (__int64)IoStatusBlock;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = *(_OWORD *)&IoStatusBlock->Status;
    v36 = *(_OWORD *)&IoStatusBlock->Status;
    v16 = QuadPart;
  }
  else
  {
    v13 = SourceOffset;
    v16 = SourceOffset->QuadPart;
    v15 = *(_OWORD *)&IoStatusBlock->Status;
    v36 = *(_OWORD *)&IoStatusBlock->Status;
  }
  Pool2 = (char *)ExAllocatePool2(67LL, Length + 72LL, 1883467593LL);
  v18 = Pool2;
  if ( Pool2 )
  {
    v20 = Pool2;
    v31 = Pool2;
    memset(Pool2, 0, 0x48uLL);
    v18 += 72;
    *((_QWORD *)v20 + 8) = v16;
    v33 = (POBJECT_HANDLE_INFORMATION)(v20 + 56);
    File = IopReferenceFileObject(SourceHandle, 1u, PreviousMode, (PVOID *)v20 + 7, 0LL);
    if ( File < 0 )
      goto LABEL_40;
    File = ObReferenceFileObjectForWrite((ULONG_PTR)DestinationHandle);
    if ( File >= 0 && IopFileObjectRevoked(*((_QWORD *)v20 + 6)) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_40;
    v21 = *((_QWORD *)v20 + 6);
    Flagsa = *(_DWORD *)(v21 + 80) & 2;
    v28 = (*(_DWORD *)(v21 + 80) & 4) != 0;
    v22 = 0LL;
    if ( !Flagsa )
      v22 = EventHandle;
    File = IopPopulateCopyWriteWorkerData(
             v21,
             (__int64)IoStatusBlock,
             (__int64)v18,
             Length,
             Object,
             (__int64)v33,
             (__int64)v22,
             (__int64)DestOffset,
             (__int64)DestKey,
             0,
             (__int64)(v20 + 32));
    if ( File >= 0 )
    {
      v23 = Flagsa;
      if ( Flagsa )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        *(_QWORD *)(*((_QWORD *)v31 + 4) + 80LL) = &Event;
        *(_DWORD *)(*((_QWORD *)v31 + 4) + 16LL) |= 4u;
        if ( EventHandle )
        {
          v32 = 0LL;
          File = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v32, 0LL);
          v29 = (struct _KEVENT *)v32;
          if ( File < 0 )
            goto LABEL_40;
          KeResetEvent((PRKEVENT)v32);
        }
        Irp = (PIRP)*((_QWORD *)v31 + 4);
        v23 = Flagsa;
      }
      *(_OWORD *)&IoStatusBlock->Status = v15;
      v24 = (PADAPTER_OBJECT *)v33;
      ObfReferenceObject(*(PVOID *)v33);
      LODWORD(v26) = Length;
      File = IopReadFile(
               *v24,
               (__int64)IoStatusBlock,
               v18,
               v26,
               (__int64)v13,
               (__int64)SourceKey,
               0x40000000,
               (__int64)v24);
      v18 = 0LL;
      if ( File >= 0 && v23 )
      {
        File = IopWaitForSynchronousIoEvent(Irp, PreviousMode, v28, &Event);
        if ( File >= 0 )
        {
          if ( PreviousMode )
          {
            if ( IoIs32bitProcess(0LL) )
              Status = *(_DWORD *)(unsigned int)IoStatusBlock->Status;
            else
              Status = IoStatusBlock->Status;
            File = Status;
          }
          else if ( IoIs32bitProcess(0LL) )
          {
            File = *(_DWORD *)(unsigned int)IoStatusBlock->Status;
          }
          else
          {
            File = IoStatusBlock->Status;
          }
        }
        if ( v29 )
          KeSetEvent(v29, 0, 0);
      }
      else if ( File >= 0 )
      {
        File = 259;
      }
      goto LABEL_40;
    }
    *((_QWORD *)v20 + 6) = 0LL;
  }
  else
  {
    File = -1073741670;
  }
LABEL_40:
  if ( v18 )
    IopFreeCopyObjectsFromDataBuffer((__int64)v18, 1);
  if ( v29 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v29);
  return File;
}
