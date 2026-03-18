/*
 * XREFs of IopCallDriverReference @ 0x1402F8AE0
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 * Callees:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObpIncrPointerCount @ 0x14030F6D0 (ObpIncrPointerCount.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 */

__int64 __fastcall IopCallDriverReference(PDEVICE_OBJECT DeviceObject, PIRP Irp, char a3, _QWORD *a4, int a5)
{
  __int64 v9; // rax
  int v10; // r8d
  struct _KTHREAD *CurrentThread; // r9
  unsigned int v12; // eax
  ULONG v13; // ecx
  int v14; // eax
  ULONG v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // edi
  PETHREAD Thread; // rcx
  ULONG Flags; // eax
  PETHREAD v22; // rax
  struct _KTHREAD *v23; // rax
  struct _LIST_ENTRY *Flink; // rbx
  __int128 v25; // [rsp+20h] [rbp-48h] BYREF

  if ( !a3 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)a4 - 48);
    ObpIncrPointerCount(a4 - 6);
  }
  v9 = a4[26];
  v10 = 2;
  if ( !v9 || !*(_DWORD *)(v9 + 80) )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v12 = 0;
    }
    else if ( v12 >= 2 )
    {
LABEL_8:
      v13 = Irp->Flags & 0xFFF1FFFF;
      v14 = (v12 << 17) + 0x20000;
      goto LABEL_9;
    }
    if ( CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
      v12 = 2;
    goto LABEL_8;
  }
  v13 = Irp->Flags & 0xFFF1FFFF;
  Irp->Flags = v13;
  v14 = *(_DWORD *)(v9 + 80) << 17;
LABEL_9:
  v15 = v13 | v14;
  Irp->Flags = v15;
  v16 = (v15 >> 17) & 7;
  if ( !v16
    || (v10 = v16 - 1, v16 - 1 >= 2)
    || (v22 = Irp->Tail.Overlay.Thread) == 0LL
    || !LODWORD(v22[1].Timer.TimerListEntry.Flink) )
  {
    if ( v10 < 2 )
    {
      if ( Irp->RequestorMode
        || (Thread = Irp->Tail.Overlay.Thread) != 0LL
        && ((Thread->MiscFlags & 0x400) != 0 || (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) != 0) )
      {
        if ( a5 )
        {
          if ( a5 == 1 )
            ++IoLowPriorityWriteOperationCount;
        }
        else
        {
          ++IoLowPriorityReadOperationCount;
        }
      }
      else
      {
        Flags = Irp->Flags;
        ++IoKernelIssuedIoBoostedCount;
        Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
      }
    }
  }
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v17 = *((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0
    && (*(_BYTE *)v17 & 2) != 0 )
  {
    v25 = *(_OWORD *)(v17 + 24);
    v23 = KeGetCurrentThread();
    Flink = v23[1].WaitBlock[1].WaitListEntry.Flink;
    v23[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v25;
    v18 = IofCallDriver(DeviceObject, Irp);
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = Flink;
  }
  else
  {
    v18 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a3 )
    ObDereferenceObjectDeferDeleteWithTag(a4, 0x746C6644u);
  return v18;
}
