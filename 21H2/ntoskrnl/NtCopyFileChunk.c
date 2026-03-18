/*
 * XREFs of NtCopyFileChunk @ 0x1406588A0
 * Callers:
 *     <none>
 * Callees:
 *     IopExceptionFilter @ 0x14025E7A8 (IopExceptionFilter.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     IopFileObjectRevoked @ 0x1402AC840 (IopFileObjectRevoked.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     IoIs32bitProcess @ 0x1402DF4A0 (IoIs32bitProcess.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopWaitForSynchronousIoEvent @ 0x140417B94 (IopWaitForSynchronousIoEvent.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x140418218 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopPopulateCopyWriteWorkerData @ 0x1404182FC (IopPopulateCopyWriteWorkerData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceFileObjectForWrite @ 0x14071E230 (ObReferenceFileObjectForWrite.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  struct _KEVENT *v11; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v14; // r13
  __int64 v15; // rcx
  __int128 v16; // xmm6
  __int64 v17; // rdi
  char *Pool2; // rax
  char *v19; // rsi
  int File; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  char *v23; // rcx
  PVOID *v24; // rdi
  int Object; // [rsp+20h] [rbp-108h]
  SIZE_T Length; // [rsp+30h] [rbp-F8h]
  int v27; // [rsp+70h] [rbp-B8h]
  char *v28; // [rsp+78h] [rbp-B0h]
  char v29; // [rsp+90h] [rbp-98h]
  __int64 v30; // [rsp+98h] [rbp-90h]
  _DWORD v31[3]; // [rsp+A4h] [rbp-84h] BYREF
  POBJECT_HANDLE_INFORMATION v32; // [rsp+B0h] [rbp-78h]
  PIRP v33; // [rsp+B8h] [rbp-70h]
  struct _KEVENT Event; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v35; // [rsp+D8h] [rbp-50h]
  int v39; // [rsp+178h] [rbp+50h]

  v35 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v11 = 0LL;
  v33 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a10 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    v14 = a6;
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = 0x7FFFFFFF0000LL;
    v30 = *(_QWORD *)a6;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a4;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = *(_OWORD *)a4;
    v35 = *(_OWORD *)a4;
    v17 = v30;
  }
  else
  {
    v14 = a6;
    v17 = *(_QWORD *)a6;
    v16 = *(_OWORD *)a4;
    v35 = *(_OWORD *)a4;
  }
  Pool2 = (char *)ExAllocatePool2(67LL, a5 + 72LL, 1883467593LL);
  v19 = Pool2;
  if ( Pool2 )
  {
    v28 = Pool2;
    memset(Pool2, 0, 0x48uLL);
    v19 += 72;
    *((_QWORD *)v28 + 8) = v17;
    v32 = (POBJECT_HANDLE_INFORMATION)(v28 + 56);
    File = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)v28 + 7, 0LL);
    if ( File < 0 )
      goto LABEL_40;
    File = ObReferenceFileObjectForWrite(a2);
    if ( File >= 0 && IopFileObjectRevoked(*((_QWORD *)v28 + 6)) )
      File = -1073739504;
    if ( File < 0 )
      goto LABEL_40;
    v21 = *((_QWORD *)v28 + 6);
    v39 = *(_DWORD *)(v21 + 80) & 2;
    v29 = (*(_DWORD *)(v21 + 80) & 4) != 0;
    v22 = 0LL;
    if ( !v39 )
      v22 = (__int64)a3;
    File = IopPopulateCopyWriteWorkerData(
             v21,
             (__int64)a4,
             (__int64)v19,
             a5,
             Object,
             (__int64)v32,
             v22,
             a7,
             a9,
             0,
             (__int64)(v28 + 32));
    if ( File >= 0 )
    {
      if ( v39 )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v23 = v28;
        *(_QWORD *)(*((_QWORD *)v28 + 4) + 80LL) = &Event;
        *(_DWORD *)(*((_QWORD *)v28 + 4) + 16LL) |= 4u;
        if ( a3 )
        {
          *(_QWORD *)&v31[1] = 0LL;
          File = ObReferenceObjectByHandle(a3, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, (PVOID *)&v31[1], 0LL);
          v11 = *(struct _KEVENT **)&v31[1];
          if ( File < 0 )
            goto LABEL_40;
          KeResetEvent(*(PRKEVENT *)&v31[1]);
          v23 = v28;
        }
        v33 = (PIRP)*((_QWORD *)v23 + 4);
      }
      *(_OWORD *)a4 = v16;
      v24 = (PVOID *)v32;
      ObfReferenceObject(*(PVOID *)v32);
      LODWORD(Length) = a5;
      File = IopReadFile(*v24, (__int64)a4, v19, Length, v14, a8, 0LL, 0LL, 0x40000000, (__int64)v24);
      v19 = 0LL;
      if ( File >= 0 && v39 )
      {
        File = IopWaitForSynchronousIoEvent(v33, PreviousMode, v29, &Event);
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
        if ( v11 )
          KeSetEvent(v11, 0, 0);
      }
      else if ( File >= 0 )
      {
        File = 259;
      }
      goto LABEL_40;
    }
    *((_QWORD *)v28 + 6) = 0LL;
  }
  else
  {
    File = -1073741670;
  }
LABEL_40:
  if ( v19 )
    IopFreeCopyObjectsFromDataBuffer((__int64)v19, 1);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)File;
}
