/*
 * XREFs of IopCallDriverReference @ 0x1402D0580
 * Callers:
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x1402C08C0 (ObpIncrPointerCount.c)
 *     PsGetBaseIoPriorityThread @ 0x1402D0980 (PsGetBaseIoPriorityThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 */

__int64 __fastcall IopCallDriverReference(PDEVICE_OBJECT DeviceObject, PIRP Irp, char a3, _QWORD *a4, int a5)
{
  __int64 v9; // rax
  int v10; // edx
  int BaseIoPriorityThread; // eax
  __int64 v12; // r8
  ULONG v13; // ecx
  int v14; // eax
  ULONG v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // edi
  PETHREAD v21; // rcx
  ULONG Flags; // eax
  PETHREAD Thread; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rbx
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF

  if ( !a3 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)a4 - 48);
    ObpIncrPointerCount(a4 - 6);
  }
  v9 = a4[26];
  v10 = 2;
  if ( v9 && *(_DWORD *)(v9 + 80) )
  {
    v13 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v13;
    v14 = *(_DWORD *)(v9 + 80) << 17;
  }
  else
  {
    BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread(), 2LL);
    if ( BaseIoPriorityThread < v10 && (struct _KTHREAD *)v12 == KeGetCurrentThread() && *(_DWORD *)(v12 + 1360) )
      BaseIoPriorityThread = v10;
    v13 = Irp->Flags & 0xFFF1FFFF;
    v14 = (BaseIoPriorityThread << 17) + 0x20000;
  }
  v15 = v13 | v14;
  Irp->Flags = v15;
  v16 = (v15 >> 17) & 7;
  if ( !v16 )
  {
    v17 = v10;
LABEL_7:
    v10 = v17;
    goto LABEL_8;
  }
  v17 = v16 - 1;
  if ( v17 >= v10 )
    goto LABEL_7;
  Thread = Irp->Tail.Overlay.Thread;
  if ( !Thread || !LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
    goto LABEL_7;
LABEL_8:
  if ( !Irp->RequestorMode )
  {
    if ( v10 >= 2 )
      goto LABEL_10;
    v21 = Irp->Tail.Overlay.Thread;
    if ( !v21 || (v21->MiscFlags & 0x400) == 0 && (*((_DWORD *)&v21[1].SwapListEntry + 3) & 0x80u) == 0 )
    {
      Flags = Irp->Flags;
      ++IoKernelIssuedIoBoostedCount;
      Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
      goto LABEL_10;
    }
  }
  if ( v10 < 2 )
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
LABEL_10:
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v18 = *((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0
    && (*(_BYTE *)v18 & 2) != 0 )
  {
    v26 = *(_OWORD *)(v18 + 24);
    CurrentThread = KeGetCurrentThread();
    Flink = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
    CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v26;
    v19 = IofCallDriver(DeviceObject, Irp);
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = Flink;
  }
  else
  {
    v19 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a3 )
    ObDereferenceObjectDeferDeleteWithTag(a4, 0x746C6644u);
  return v19;
}
