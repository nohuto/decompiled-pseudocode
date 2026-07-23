/*
 * XREFs of IopValidateAndGetWriteParameters @ 0x1403F11C0
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1403F0E1C (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1405CCA7C (IopWriteFile.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140211810 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IopExceptionFilter @ 0x1404FEEDC (IopExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopValidateAndGetWriteParameters(__int64 a1, void *a2, _QWORD *a3, _DWORD *a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _FILE_OBJECT *v10; // r8
  int v11; // ecx
  char v12; // al
  KPROCESSOR_MODE v13; // r11
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  KPROCESSOR_MODE v18; // al
  __int64 v19; // r8
  int v20; // r9d
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // r10d
  int v24; // edx
  NTSTATUS v25; // eax
  struct _KEVENT *v26; // rcx
  volatile __int32 *v27; // r15
  struct _KTHREAD *v28; // rax
  __int64 v29; // rax
  int v30; // eax
  _QWORD *v31; // rdx
  int v32; // eax
  struct _DMA_ADAPTER *v33; // rcx
  char v35; // [rsp+30h] [rbp-38h] BYREF
  int v36; // [rsp+34h] [rbp-34h]
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF

  v36 = 0;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)a1 = CurrentThread;
  *(_BYTE *)(a1 + 8) = CurrentThread->PreviousMode;
  v10 = *(struct _FILE_OBJECT **)(a1 + 16);
  v11 = *(_DWORD *)(a1 + 92);
  if ( (v10->Flags & 2) == 0 || (v12 = 1, v11 < 0) )
    v12 = 0;
  *(_BYTE *)(a1 + 9) = v12;
  *(_BYTE *)(a1 + 10) = (v11 & 0x40000000) == 0;
  *(_QWORD *)(a1 + 24) = IoGetRelatedDeviceObject(v10);
  v13 = *(_BYTE *)(a1 + 8);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 56);
    v15 = 0x7FFFFFFF0000LL;
    if ( v14 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)(a1 + 56), (__int64 *)(a1 + 40), *(_BYTE *)(a1 + 9));
    if ( !*(_QWORD *)(a1 + 96) )
    {
      v16 = *(unsigned int *)(a1 + 72);
      if ( (_DWORD)v16 )
      {
        v17 = *(_QWORD *)(a1 + 64);
        if ( v17 + v16 > 0x7FFFFFFF0000LL || v17 + v16 < v17 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 176LL) && (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v36 = -1073741811;
      goto LABEL_68;
    }
    if ( a3 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)(a1 + 80) = *a3;
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a4;
      *(_DWORD *)(a1 + 88) = *(_DWORD *)v15;
    }
    v13 = *(_BYTE *)(a1 + 8);
    v18 = v13;
  }
  else
  {
    if ( a3 )
      *(_QWORD *)(a1 + 80) = *a3;
    v18 = 0;
    if ( a4 )
    {
      *(_DWORD *)(a1 + 88) = *a4;
      v18 = 0;
    }
  }
  if ( v18 && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 8) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 24);
    v20 = *(unsigned __int16 *)(v19 + 304);
    if ( (_WORD)v20 )
    {
      v21 = *(unsigned __int16 *)(v19 + 304);
      v22 = v21;
      v23 = v21;
      if ( ((v20 - 1) & *(_DWORD *)(a1 + 72)) != 0 )
      {
LABEL_34:
        if ( (_WORD)v20 && *(_DWORD *)(a1 + 72) % v23 || (*(unsigned int *)(v19 + 152) & *(_QWORD *)(a1 + 64)) != 0LL )
          goto LABEL_75;
LABEL_37:
        if ( a3 )
        {
          v24 = *(_DWORD *)(a1 + 80);
          if ( (v24 != -1 || *(_DWORD *)(a1 + 84) != -1)
            && (v24 != -2 || *(_DWORD *)(a1 + 84) != -1 || !*(_BYTE *)(a1 + 9))
            && (_WORD)v20
            && ((v21 - 1) & v24) != 0 )
          {
            goto LABEL_75;
          }
        }
        goto LABEL_45;
      }
    }
    else
    {
      v21 = 0;
      v22 = 0;
    }
    v23 = v22;
    if ( (*(unsigned int *)(v19 + 152) & *(_QWORD *)(a1 + 64)) == 0LL )
      goto LABEL_37;
    goto LABEL_34;
  }
LABEL_45:
  if ( (a5 & 6) == 4 )
  {
    *(_DWORD *)(a1 + 80) = -1;
    *(_DWORD *)(a1 + 84) = -1;
  }
  if ( a2 )
  {
    Object = 0LL;
    v25 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v13, &Object, 0LL);
    v26 = (struct _KEVENT *)Object;
    *(_QWORD *)(a1 + 32) = Object;
    v36 = v25;
    if ( v25 < 0 )
      goto LABEL_68;
    KeResetEvent(v26);
  }
  if ( *(_BYTE *)(a1 + 9) )
  {
    v27 = *(volatile __int32 **)(a1 + 16);
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    v29 = KeAbPreAcquire((ULONG_PTR)(v27 + 32), 0LL, 0);
    v35 = 0;
    if ( _InterlockedExchange(v27 + 29, 1) )
    {
      v30 = IopWaitAndAcquireFileObjectLock((PVOID)v27, (__int64)&v35);
    }
    else
    {
      if ( v29 )
        *(_BYTE *)(v29 + 26) |= 1u;
      ObfReferenceObject((PVOID)v27);
      v30 = 0;
    }
    v36 = v30;
    if ( v35 )
    {
LABEL_68:
      if ( v36 >= 0 )
        return (unsigned int)v36;
      goto LABEL_69;
    }
    v31 = (_QWORD *)(a1 + 80);
    if ( !a3 && !*(_DWORD *)v31 || *(_DWORD *)v31 == -2 && *(_DWORD *)(a1 + 84) == -1 )
      *v31 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL);
LABEL_62:
    v32 = *(_DWORD *)(a1 + 84);
    if ( v32 < 0 && (v32 != -1 || *(_DWORD *)(a1 + 80) != -1) )
    {
      if ( *(_BYTE *)(a1 + 9) )
        IopReleaseFileObjectLock(*(PADAPTER_OBJECT *)(a1 + 16));
      v36 = -1073741811;
    }
    goto LABEL_68;
  }
  if ( a3 || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 0x280) != 0 )
    goto LABEL_62;
LABEL_75:
  v36 = -1073741811;
LABEL_69:
  v33 = *(struct _DMA_ADAPTER **)(a1 + 32);
  if ( v33 )
  {
    HalPutDmaAdapter(v33);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  return (unsigned int)v36;
}
