/*
 * XREFs of NtLoadEnclaveData @ 0x1408D4450
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x1402075C0 (KeUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140209710 (MmProbeAndLockPages.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     KeStackAttachProcess @ 0x14025C110 (KeStackAttachProcess.c)
 *     MmSizeOfMdl @ 0x1402986E0 (MmSizeOfMdl.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406F0B80 (ObReferenceObjectByHandleWithTag.c)
 *     PsReferencePrimaryToken @ 0x140706D00 (PsReferencePrimaryToken.c)
 *     DbgkMapViewOfSection @ 0x1407129A4 (DbgkMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D2188 (MiCopyPagesIntoEnclave.c)
 *     MiDereferenceEnclaveModule @ 0x1408D2EFC (MiDereferenceEnclaveModule.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D31C4 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D3570 (MiLoadSectionIntoVsmEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtLoadEnclaveData(
        void *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        unsigned __int64 Src,
        size_t Size,
        unsigned __int64 a8,
        unsigned __int64 a9)
{
  HANDLE v9; // rbx
  __int64 v10; // r9
  char *v11; // r13
  struct _MDL *v12; // r14
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  int DataIntoVsmEnclave; // edi
  SIZE_T v17; // rax
  struct _MDL *Pool; // rax
  __int64 v19; // rdi
  struct _KPROCESS *Process; // rbx
  PVOID v21; // r15
  volatile signed __int32 *v22; // rax
  struct _DMA_ADAPTER *v23; // rbx
  int v24; // r15d
  _DWORD *v25; // r12
  volatile signed __int32 *v26; // rbx
  __int64 Tag; // [rsp+20h] [rbp-168h]
  KPROCESSOR_MODE AccessMode; // [rsp+60h] [rbp-128h]
  int v30; // [rsp+64h] [rbp-124h] BYREF
  int v31; // [rsp+68h] [rbp-120h]
  unsigned __int64 v32; // [rsp+70h] [rbp-118h]
  HANDLE Handle; // [rsp+78h] [rbp-110h]
  PVOID Object; // [rsp+80h] [rbp-108h] BYREF
  _DWORD v35[3]; // [rsp+8Ch] [rbp-FCh] BYREF
  PMDL MemoryDescriptorList; // [rsp+98h] [rbp-F0h]
  _QWORD *v37; // [rsp+A0h] [rbp-E8h]
  __int64 v38[4]; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-C0h]
  PVOID Base; // [rsp+D0h] [rbp-B8h]
  _QWORD v41[4]; // [rsp+D8h] [rbp-B0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-90h] BYREF
  int v43[8]; // [rsp+128h] [rbp-60h] BYREF

  v39 = a4;
  Base = a3;
  *(_QWORD *)&v35[1] = a2;
  v9 = a1;
  Handle = a1;
  v38[3] = (__int64)a1;
  v10 = a8;
  v37 = (_QWORD *)a8;
  v32 = a9;
  v38[1] = a9;
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
    if ( a9 )
    {
      v14 = a9;
      if ( a9 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    if ( a8 )
    {
      v15 = a8;
      if ( a8 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v15 = *(_QWORD *)v15;
    }
  }
  if ( !(_DWORD)Size )
    goto LABEL_23;
  if ( (unsigned int)Size <= 0xFFFF )
  {
    if ( PreviousMode == 1 && (Src + (unsigned int)Size > 0x7FFFFFFF0000LL || Src + (unsigned int)Size < Src) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( (unsigned int)Size > 0x20 )
    {
      v17 = MmSizeOfMdl((PVOID)Src, (unsigned int)Size);
      Pool = (struct _MDL *)MiAllocatePool(64, v17, 0x6C646D4Du);
      v12 = Pool;
      MemoryDescriptorList = Pool;
      if ( !Pool )
      {
        DataIntoVsmEnclave = -1073741670;
        goto LABEL_13;
      }
      Pool->Next = 0LL;
      Pool->Size = 8 * ((((Src & 0xFFF) + (unsigned int)Size + 4095LL) >> 12) + 6);
      Pool->MdlFlags = 0;
      Pool->StartVa = (PVOID)(Src & 0xFFFFFFFFFFFFF000uLL);
      Pool->ByteOffset = Src & 0xFFF;
      Pool->ByteCount = Size;
      MmProbeAndLockPages(Pool, PreviousMode, IoReadAccess);
    }
    else
    {
      memmove(v43, (const void *)Src, (unsigned int)Size);
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
        if ( !v22 || (v22[12] & 0x3100000) != 0x2100000 )
        {
          DataIntoVsmEnclave = -1073741800;
          goto LABEL_42;
        }
        if ( (v22[16] & 1) == 0 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v22 + 9) + 76LL) )
          {
            DataIntoVsmEnclave = MiLoadDataIntoVsmEnclave(
                                   (__int64)Object,
                                   (ULONG_PTR)Process,
                                   (ULONG_PTR)v22,
                                   AccessMode,
                                   *(__int64 *)&v35[1],
                                   Size,
                                   v43,
                                   (unsigned __int64)Base,
                                   v19,
                                   a5,
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
                                   Size,
                                   v43,
                                   v12,
                                   v41);
            v11 = 0LL;
            HalPutDmaAdapter(v23);
          }
          goto LABEL_42;
        }
        if ( (_DWORD)Size )
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
                                 Base,
                                 v19,
                                 a5,
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
  v25 = (_DWORD *)v32;
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
      *(_QWORD *)(v41[0] + 16LL),
      v10,
      Tag,
      *(_DWORD *)(v41[0] + 36LL),
      *(_DWORD *)(v41[0] + 40LL));
    MiDereferenceEnclaveModule(v26);
  }
  if ( v37 )
    *v37 = v38[0];
  if ( v25 )
    *v25 = v35[0];
  return (unsigned int)DataIntoVsmEnclave;
}
