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

__int64 __fastcall NtCopyFileChunk(
        void *a1,
        ULONG_PTR a2,
        void *a3,
        int *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v13; // r12
  __int64 v14; // rcx
  __int128 v15; // xmm6
  __int64 v16; // rdi
  char *Pool2; // rax
  char *v18; // rsi
  int File; // edi
  char *v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r13d
  PADAPTER_OBJECT *v24; // rdi
  int Object; // [rsp+20h] [rbp-F8h]
  SIZE_T Length; // [rsp+30h] [rbp-E8h]
  int v27; // [rsp+60h] [rbp-B8h]
  char v28; // [rsp+70h] [rbp-A8h]
  struct _KEVENT *v29; // [rsp+78h] [rbp-A0h]
  __int64 v30; // [rsp+80h] [rbp-98h]
  char *v31; // [rsp+90h] [rbp-88h]
  PVOID v32; // [rsp+98h] [rbp-80h] BYREF
  POBJECT_HANDLE_INFORMATION v33; // [rsp+A0h] [rbp-78h]
  PIRP Irp; // [rsp+A8h] [rbp-70h]
  struct _KEVENT Event; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v36; // [rsp+C8h] [rbp-50h]
  int v40; // [rsp+168h] [rbp+50h]

  v36 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v29 = 0LL;
  Irp = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a10 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    v13 = a6;
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = 0x7FFFFFFF0000LL;
    v30 = *(_QWORD *)a6;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a4;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = *(_OWORD *)a4;
    v36 = *(_OWORD *)a4;
    v16 = v30;
  }
  else
  {
    v13 = a6;
    v16 = *(_QWORD *)a6;
    v15 = *(_OWORD *)a4;
    v36 = *(_OWORD *)a4;
  }
  Pool2 = (char *)ExAllocatePool2(67LL, a5 + 72LL, 1883467593LL);
  v18 = Pool2;
  if ( Pool2 )
  {
    v20 = Pool2;
    v31 = Pool2;
    memset(Pool2, 0, 0x48uLL);
    v18 += 72;
    *((_QWORD *)v20 + 8) = v16;
    v33 = (POBJECT_HANDLE_INFORMATION)(v20 + 56);
    File = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)v20 + 7, 0LL);
    if ( File < 0 )
      goto LABEL_40;
    File = ObReferenceFileObjectForWrite(a2);
    if ( File >= 0 && IopFileObjectRevoked(*((_QWORD *)v20 + 6)) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_40;
    v21 = *((_QWORD *)v20 + 6);
    v40 = *(_DWORD *)(v21 + 80) & 2;
    v28 = (*(_DWORD *)(v21 + 80) & 4) != 0;
    v22 = 0LL;
    if ( !v40 )
      v22 = (__int64)a3;
    File = IopPopulateCopyWriteWorkerData(
             v21,
             (__int64)a4,
             (__int64)v18,
             a5,
             Object,
             (__int64)v33,
             v22,
             a7,
             a9,
             0,
             (__int64)(v20 + 32));
    if ( File >= 0 )
    {
      v23 = v40;
      if ( v40 )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        *(_QWORD *)(*((_QWORD *)v31 + 4) + 80LL) = &Event;
        *(_DWORD *)(*((_QWORD *)v31 + 4) + 16LL) |= 4u;
        if ( a3 )
        {
          v32 = 0LL;
          File = ObReferenceObjectByHandle(a3, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v32, 0LL);
          v29 = (struct _KEVENT *)v32;
          if ( File < 0 )
            goto LABEL_40;
          KeResetEvent((PRKEVENT)v32);
        }
        Irp = (PIRP)*((_QWORD *)v31 + 4);
        v23 = v40;
      }
      *(_OWORD *)a4 = v15;
      v24 = (PADAPTER_OBJECT *)v33;
      ObfReferenceObject(*(PVOID *)v33);
      LODWORD(Length) = a5;
      File = IopReadFile(*v24, (__int64)a4, v18, Length, v13, a8, 0x40000000, (__int64)v24);
      v18 = 0LL;
      if ( File >= 0 && v23 )
      {
        File = IopWaitForSynchronousIoEvent(Irp, PreviousMode, v28, &Event);
        if ( File >= 0 )
        {
          if ( PreviousMode )
          {
            if ( IoIs32bitProcess(0LL) )
              v27 = *(_DWORD *)(unsigned int)*a4;
            else
              v27 = *a4;
            File = v27;
          }
          else if ( IoIs32bitProcess(0LL) )
          {
            File = *(_DWORD *)(unsigned int)*a4;
          }
          else
          {
            File = *a4;
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
  return (unsigned int)File;
}
