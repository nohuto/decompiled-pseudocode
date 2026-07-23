/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x140958900
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwPssCaptureVaSpaceBulk @ 0x1403F5D40 (ZwPssCaptureVaSpaceBulk.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     NtQueryVirtualMemory @ 0x1405FF990 (NtQueryVirtualMemory.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  ULONG v5; // r10d
  _NTPSS_MEMORY_BULK_INFORMATION *MappedSystemVa; // r14
  int v7; // ebx
  struct _MDL *v8; // r15
  int v9; // edi
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v12; // rcx
  struct _MDL *v13; // rax
  _NTPSS_MEMORY_BULK_INFORMATION *v14; // r13
  HANDLE v15; // rcx
  char *BaseAddressa; // [rsp+58h] [rbp-E0h]
  ULONG_PTR v17; // [rsp+60h] [rbp-D8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-D0h]
  ULONG Length[2]; // [rsp+70h] [rbp-C8h]
  PMDL Mdl; // [rsp+78h] [rbp-C0h]
  PVOID Object; // [rsp+80h] [rbp-B8h] BYREF
  ULONG_PTR v22; // [rsp+88h] [rbp-B0h] BYREF
  _NTPSS_MEMORY_BULK_INFORMATION v23; // [rsp+90h] [rbp-A8h]
  HANDLE v24; // [rsp+A0h] [rbp-98h]
  PVOID v25; // [rsp+A8h] [rbp-90h]
  PNTPSS_MEMORY_BULK_INFORMATION v26; // [rsp+B0h] [rbp-88h]
  SIZE_T v27; // [rsp+B8h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-70h] BYREF

  v5 = BulkInformationLength;
  *(_QWORD *)Length = BulkInformationLength;
  MappedSystemVa = BulkInformation;
  BaseAddressa = (char *)BaseAddress;
  Handle = ProcessHandle;
  v24 = ProcessHandle;
  v25 = BaseAddress;
  v26 = BulkInformation;
  v27 = BulkInformationLength;
  Object = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v22 = 0LL;
  v17 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  if ( BulkInformationLength < 0x10 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v23 = 0LL;
    ProbeForWrite(BulkInformation, BulkInformationLength, 8u);
    if ( ReturnLength )
    {
      v12 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    v23 = *MappedSystemVa;
    BaseAddress = BaseAddressa;
    v5 = Length[0];
  }
  else
  {
    v23 = *BulkInformation;
  }
  if ( v23.QueryFlags )
  {
    if ( (v23.QueryFlags & 0xFFFFFFFC) != 0 )
    {
      v9 = -1073741637;
    }
    else
    {
      if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
      {
        if ( PreviousMode )
        {
          v13 = IoAllocateMdl(MappedSystemVa, v5, 0, 0, 0LL);
          v8 = v13;
          Mdl = v13;
          if ( !v13
            || ((MmProbeAndLockPages(v13, 0, IoWriteAccess), (v8->MdlFlags & 5) == 0)
              ? (MappedSystemVa = (_NTPSS_MEMORY_BULK_INFORMATION *)MmMapLockedPagesSpecifyCache(
                                                                      v8,
                                                                      0,
                                                                      MmCached,
                                                                      0LL,
                                                                      0,
                                                                      0x40000010u))
              : (MappedSystemVa = (_NTPSS_MEMORY_BULK_INFORMATION *)v8->MappedSystemVa),
                !MappedSystemVa) )
          {
            v9 = -1073741670;
            goto LABEL_44;
          }
        }
        else
        {
          v8 = 0LL;
        }
        if ( Handle != (HANDLE)-1LL )
        {
          v9 = ObReferenceObjectByHandleWithTag(
                 Handle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 0x41737350u,
                 &Object,
                 0LL);
          if ( v9 < 0 )
            goto LABEL_44;
          if ( (*((_DWORD *)Object + 543) & 0x1000) != 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x41737350u);
            v9 = -1073741790;
            goto LABEL_44;
          }
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          v7 = 1;
        }
        if ( PreviousMode )
        {
          v9 = ZwPssCaptureVaSpaceBulk(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 BaseAddressa,
                 MappedSystemVa,
                 *(SIZE_T *)Length,
                 &v17);
        }
        else
        {
          MappedSystemVa->NumberOfEntries = 0;
          v17 = 16LL;
          Handle = (HANDLE)(*(_QWORD *)Length - 16LL);
          v14 = MappedSystemVa + 1;
          if ( (unsigned __int64)(*(_QWORD *)Length - 16LL) >= 0x30 )
          {
            while ( 1 )
            {
              if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
              {
                v9 = -1073741749;
                goto LABEL_44;
              }
              v9 = NtQueryVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     BaseAddressa,
                     MemoryBasicInformation,
                     v14,
                     0x30uLL,
                     &v22);
              if ( v9 < 0 )
                break;
              Handle = (char *)Handle - v22;
              v15 = Handle;
              v17 += v22;
              BaseAddressa = (char *)v14[1].NextValidAddress + *(_QWORD *)&v14->QueryFlags;
              v14 += 3;
              ++MappedSystemVa->NumberOfEntries;
              MappedSystemVa->NextValidAddress = BaseAddressa;
              if ( (unsigned __int64)v15 < 0x30 )
                goto LABEL_41;
            }
            if ( MappedSystemVa->NumberOfEntries )
              v9 = 0;
          }
LABEL_41:
          if ( v9 >= 0 && MappedSystemVa->NextValidAddress != (PVOID)0x7FFFFFFF0000LL )
            v9 = 261;
        }
        goto LABEL_44;
      }
      v9 = -1073741503;
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_44:
  if ( v7 )
    KeUnstackDetachProcess(&ApcState);
  if ( v8 )
  {
    MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  if ( ReturnLength )
    *ReturnLength = v17;
  return v9;
}
