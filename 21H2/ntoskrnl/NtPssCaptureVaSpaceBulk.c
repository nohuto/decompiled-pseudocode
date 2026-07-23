/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x14095C110
 * Callers:
 *     <none>
 * Callees:
 *     PsIsThreadTerminating @ 0x140263440 (PsIsThreadTerminating.c)
 *     PsIsSystemProcess @ 0x14027D660 (PsIsSystemProcess.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     Feature_1664289083__private_IsEnabledDeviceUsage @ 0x1403F96F8 (Feature_1664289083__private_IsEnabledDeviceUsage.c)
 *     ZwPssCaptureVaSpaceBulk @ 0x1403FCD20 (ZwPssCaptureVaSpaceBulk.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     NtQueryVirtualMemory @ 0x140688560 (NtQueryVirtualMemory.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  _NTPSS_MEMORY_BULK_INFORMATION *MappedSystemVa; // r14
  int v6; // ebx
  struct _MDL *v7; // r15
  int v8; // edi
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v11; // rcx
  HANDLE v12; // r12
  struct _MDL *Mdl; // rax
  struct _KPROCESS *v14; // r12
  SIZE_T v15; // r12
  _NTPSS_MEMORY_BULK_INFORMATION *v16; // r13
  char *BaseAddressa; // [rsp+60h] [rbp-D8h]
  ULONG_PTR v19[2]; // [rsp+68h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-C0h]
  PVOID Object; // [rsp+80h] [rbp-B8h] BYREF
  ULONG_PTR v22; // [rsp+88h] [rbp-B0h] BYREF
  _NTPSS_MEMORY_BULK_INFORMATION v23; // [rsp+90h] [rbp-A8h]
  HANDLE v24; // [rsp+A0h] [rbp-98h]
  PVOID v25; // [rsp+A8h] [rbp-90h]
  PNTPSS_MEMORY_BULK_INFORMATION v26; // [rsp+B0h] [rbp-88h]
  SIZE_T v27; // [rsp+B8h] [rbp-80h]
  PETHREAD Thread; // [rsp+C0h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-70h] BYREF

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
  v19[0] = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( BulkInformationLength < 0x10 )
    return -1073741820;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  if ( PreviousMode )
  {
    v23 = 0LL;
    ProbeForWrite(BulkInformation, BulkInformationLength, 8u);
    if ( ReturnLength )
    {
      v11 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v11 = *(_QWORD *)v11;
    }
    v23 = *MappedSystemVa;
    BaseAddress = BaseAddressa;
    v12 = Handle;
  }
  else
  {
    v23 = *BulkInformation;
    v12 = ProcessHandle;
  }
  if ( !v23.QueryFlags )
    goto LABEL_11;
  if ( (v23.QueryFlags & 0xFFFFFFFC) != 0 )
  {
    v8 = -1073741637;
    goto LABEL_47;
  }
  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
  {
    v8 = -1073741503;
    goto LABEL_47;
  }
  if ( !PreviousMode )
  {
    v7 = 0LL;
    goto LABEL_27;
  }
  if ( !(unsigned int)Feature_1664289083__private_IsEnabledDeviceUsage() || BulkInformationLength <= 0xFFFFFFFF )
  {
    Mdl = IoAllocateMdl(MappedSystemVa, BulkInformationLength, 0, 0, 0LL);
    v7 = Mdl;
    v19[1] = (ULONG_PTR)Mdl;
    if ( !Mdl
      || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), (v7->MdlFlags & 5) == 0)
        ? (MappedSystemVa = (_NTPSS_MEMORY_BULK_INFORMATION *)MmMapLockedPagesSpecifyCache(
                                                                v7,
                                                                0,
                                                                MmCached,
                                                                0LL,
                                                                0,
                                                                0x40000010u))
        : (MappedSystemVa = (_NTPSS_MEMORY_BULK_INFORMATION *)v7->MappedSystemVa),
          !MappedSystemVa) )
    {
      v8 = -1073741670;
      goto LABEL_47;
    }
LABEL_27:
    if ( v12 != (HANDLE)-1LL )
    {
      v8 = ObReferenceObjectByHandleWithTag(
             v12,
             0x1000u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x41737350u,
             &Object,
             0LL);
      if ( v8 < 0 )
        goto LABEL_47;
      v14 = (struct _KPROCESS *)Object;
      if ( PsIsSystemProcess((__int64)Object) )
      {
        ObfDereferenceObjectWithTag(v14, 0x41737350u);
        v8 = -1073741790;
        goto LABEL_47;
      }
      KeStackAttachProcess(v14, &ApcState);
      v6 = 1;
    }
    if ( PreviousMode )
    {
      v8 = ZwPssCaptureVaSpaceBulk(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BaseAddressa,
             MappedSystemVa,
             BulkInformationLength,
             v19);
    }
    else
    {
      MappedSystemVa->NumberOfEntries = 0;
      v19[0] = 16LL;
      v15 = BulkInformationLength - 16;
      v16 = MappedSystemVa + 1;
      while ( v15 >= 0x30 )
      {
        if ( PsIsThreadTerminating(Thread) )
        {
          v8 = -1073741749;
          goto LABEL_47;
        }
        v8 = NtQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddressa,
               MemoryBasicInformation,
               v16,
               0x30uLL,
               &v22);
        if ( v8 < 0 )
        {
          if ( MappedSystemVa->NumberOfEntries )
            v8 = 0;
          break;
        }
        v15 -= v22;
        v19[0] += v22;
        BaseAddressa = (char *)v16[1].NextValidAddress + *(_QWORD *)&v16->QueryFlags;
        v16 += 3;
        ++MappedSystemVa->NumberOfEntries;
        MappedSystemVa->NextValidAddress = BaseAddressa;
      }
      if ( v8 >= 0 && MappedSystemVa->NextValidAddress != (PVOID)0x7FFFFFFF0000LL )
        v8 = 261;
    }
    goto LABEL_47;
  }
LABEL_11:
  v8 = -1073741811;
LABEL_47:
  if ( v6 )
    KeUnstackDetachProcess(&ApcState);
  if ( v7 )
  {
    MmUnlockPages(v7);
    IoFreeMdl(v7);
  }
  if ( ReturnLength )
    *ReturnLength = v19[0];
  return v8;
}
