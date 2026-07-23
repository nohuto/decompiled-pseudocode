/*
 * XREFs of NtLoadEnclaveData @ 0x1408D45B0
 * Callers:
 *     <none>
 * Callees:
 *     MmSizeOfMdl @ 0x140219160 (MmSizeOfMdl.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     DbgkMapViewOfSection @ 0x1406C0FF4 (DbgkMapViewOfSection.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D22E8 (MiCopyPagesIntoEnclave.c)
 *     MiDereferenceEnclaveModule @ 0x1408D305C (MiDereferenceEnclaveModule.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3324 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D36D0 (MiLoadSectionIntoVsmEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtLoadEnclaveData(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        ULONG Protect,
        PVOID PageInformation,
        ULONG PageInformationLength,
        PSIZE_T NumberOfBytesWritten,
        PULONG EnclaveError)
{
  HANDLE v9; // rbx
  PSIZE_T v10; // r9
  char *v11; // r13
  struct _MDL *v12; // r14
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  NTSTATUS DataIntoVsmEnclave; // edi
  SIZE_T v17; // rax
  struct _MDL *Pool; // rax
  __int64 v19; // rdi
  struct _KPROCESS *Process; // rbx
  PVOID v21; // r15
  ULONG_PTR v22; // rax
  struct _DMA_ADAPTER *v23; // rbx
  int v24; // r15d
  PULONG v25; // r12
  volatile signed __int32 *v26; // rbx
  __int64 Tag; // [rsp+20h] [rbp-168h]
  KPROCESSOR_MODE AccessMode; // [rsp+60h] [rbp-128h]
  NTSTATUS v30; // [rsp+64h] [rbp-124h] BYREF
  int v31; // [rsp+68h] [rbp-120h]
  PULONG v32; // [rsp+70h] [rbp-118h]
  HANDLE Handle; // [rsp+78h] [rbp-110h]
  PVOID Object; // [rsp+80h] [rbp-108h] BYREF
  _DWORD v35[3]; // [rsp+8Ch] [rbp-FCh] BYREF
  PMDL MemoryDescriptorList; // [rsp+98h] [rbp-F0h]
  PSIZE_T v37; // [rsp+A0h] [rbp-E8h]
  __int64 v38[4]; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-C0h]
  void *Src; // [rsp+D0h] [rbp-B8h]
  _QWORD v41[4]; // [rsp+D8h] [rbp-B0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-90h] BYREF
  int v43[8]; // [rsp+128h] [rbp-60h] BYREF

  v39 = BufferSize;
  Src = Buffer;
  *(_QWORD *)&v35[1] = BaseAddress;
  v9 = ProcessHandle;
  Handle = ProcessHandle;
  v38[3] = (__int64)ProcessHandle;
  v10 = NumberOfBytesWritten;
  v37 = NumberOfBytesWritten;
  v32 = EnclaveError;
  v38[1] = (__int64)EnclaveError;
  memset(&ApcState, 0, sizeof(ApcState));
  v30 = 0;
  v38[0] = 0LL;
  v35[0] = 0;
  v11 = 0LL;
  v31 = 0;
  Object = 0LL;
  v12 = 0LL;
  v41[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( EnclaveError )
    {
      v14 = (__int64)EnclaveError;
      if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    if ( NumberOfBytesWritten )
    {
      v15 = (__int64)NumberOfBytesWritten;
      if ( (unsigned __int64)NumberOfBytesWritten >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v15 = *(_QWORD *)v15;
    }
  }
  if ( !PageInformationLength )
    goto LABEL_23;
  if ( PageInformationLength <= 0xFFFF )
  {
    if ( PreviousMode == 1
      && ((unsigned __int64)PageInformation + PageInformationLength > 0x7FFFFFFF0000LL
       || (char *)PageInformation + PageInformationLength < PageInformation) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( PageInformationLength > 0x20 )
    {
      v17 = MmSizeOfMdl(PageInformation, PageInformationLength);
      Pool = (struct _MDL *)MiAllocatePool(64, v17, 0x6C646D4Du);
      v12 = Pool;
      MemoryDescriptorList = Pool;
      if ( !Pool )
      {
        DataIntoVsmEnclave = -1073741670;
        goto LABEL_13;
      }
      Pool->Next = 0LL;
      Pool->Size = 8
                 * (((((unsigned __int16)PageInformation & 0xFFF) + (unsigned __int64)PageInformationLength + 4095) >> 12)
                  + 6);
      Pool->MdlFlags = 0;
      Pool->StartVa = (PVOID)((unsigned __int64)PageInformation & 0xFFFFFFFFFFFFF000uLL);
      Pool->ByteOffset = (unsigned __int16)PageInformation & 0xFFF;
      Pool->ByteCount = PageInformationLength;
      MmProbeAndLockPages(Pool, PreviousMode, IoReadAccess);
    }
    else
    {
      memmove(v43, PageInformation, PageInformationLength);
    }
LABEL_23:
    if ( (v35[1] & 0xFFF) != 0 )
    {
      DataIntoVsmEnclave = -1073741584;
    }
    else
    {
      v19 = v39;
      if ( (v39 & 0xFFF) == 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Handle == (HANDLE)-1LL )
        {
          Object = Process;
        }
        else
        {
          DataIntoVsmEnclave = ObReferenceObjectByHandleWithTag(
                                 Handle,
                                 8u,
                                 (POBJECT_TYPE)PsProcessType,
                                 PreviousMode,
                                 0x6D566D4Du,
                                 &Object,
                                 0LL);
          v30 = DataIntoVsmEnclave;
          if ( DataIntoVsmEnclave < 0 )
          {
LABEL_43:
            v9 = Handle;
            goto LABEL_44;
          }
          v19 = v39;
        }
        v21 = Object;
        KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
        v31 = 1;
        v22 = MiObtainReferencedVadEx(*(unsigned __int64 *)&v35[1], 0, &v30);
        v11 = (char *)v22;
        if ( !v22 || (*(_DWORD *)(v22 + 48) & 0x3100000) != 0x2100000 )
        {
          DataIntoVsmEnclave = -1073741800;
          goto LABEL_42;
        }
        if ( (*(_DWORD *)(v22 + 64) & 1) == 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v22 + 72) + 76LL) )
          {
            DataIntoVsmEnclave = MiLoadDataIntoVsmEnclave(
                                   (__int64)Object,
                                   (ULONG_PTR)Process,
                                   v22,
                                   AccessMode,
                                   *(__int64 *)&v35[1],
                                   PageInformationLength,
                                   v43,
                                   (unsigned __int64)Src,
                                   v19,
                                   Protect,
                                   v38);
          }
          else
          {
            v23 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
            DataIntoVsmEnclave = MiLoadSectionIntoVsmEnclave(
                                   (__int64)v21,
                                   (ULONG_PTR)v11,
                                   AccessMode,
                                   (__int64)v23,
                                   *(unsigned __int64 *)&v35[1],
                                   PageInformationLength,
                                   v43,
                                   v12,
                                   v41);
            v11 = 0LL;
            HalPutDmaAdapter(v23);
          }
          goto LABEL_42;
        }
        if ( PageInformationLength )
        {
          DataIntoVsmEnclave = -1073741820;
          goto LABEL_42;
        }
        if ( v19 )
        {
          KeUnstackDetachProcess(&ApcState);
          v24 = 0;
          DataIntoVsmEnclave = MiCopyPagesIntoEnclave(
                                 (_KPROCESS *)Object,
                                 (__int64)v11,
                                 AccessMode,
                                 *(unsigned __int64 *)&v35[1],
                                 Src,
                                 v19,
                                 Protect,
                                 v38,
                                 v35);
          v30 = DataIntoVsmEnclave;
          v9 = Handle;
          goto LABEL_45;
        }
      }
      DataIntoVsmEnclave = -1073741582;
    }
LABEL_42:
    v30 = DataIntoVsmEnclave;
    goto LABEL_43;
  }
  DataIntoVsmEnclave = -1073741820;
LABEL_13:
  v30 = DataIntoVsmEnclave;
LABEL_44:
  v24 = v31;
LABEL_45:
  v25 = v32;
  if ( v11 )
    MiUnlockAndDereferenceVad(v11);
  if ( v24 )
    KeUnstackDetachProcess(&ApcState);
  if ( Object && v9 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( v12 )
  {
    if ( (v12->MdlFlags & 2) != 0 )
      MmUnlockPages(v12);
    ExFreePoolWithTag(v12, 0);
  }
  v26 = (volatile signed __int32 *)v41[0];
  if ( v41[0] )
  {
    DbgkMapViewOfSection(
      (_KPROCESS *)Object,
      0LL,
      *(void **)(v41[0] + 16LL),
      (__int64)v10,
      Tag,
      *(_DWORD *)(v41[0] + 36LL),
      *(_DWORD *)(v41[0] + 40LL));
    MiDereferenceEnclaveModule(v26);
  }
  if ( v37 )
    *v37 = v38[0];
  if ( v25 )
    *v25 = v35[0];
  return DataIntoVsmEnclave;
}
