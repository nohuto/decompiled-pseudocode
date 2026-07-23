/*
 * XREFs of CcInitializePartition @ 0x1403C2D94
 * Callers:
 *     CcCreatePartition @ 0x1403C2D40 (CcCreatePartition.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     CcInitializeAsyncRead @ 0x1403C33A0 (CcInitializeAsyncRead.c)
 *     CcInitializePartitionVacbs @ 0x1403C3758 (CcInitializePartitionVacbs.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsCreateSystemThread @ 0x1406A7420 (PsCreateSystemThread.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1407BD0B4 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcInitializePartition(char *StartContext, _QWORD *a2)
{
  char v2; // si
  char *v5; // r14
  char *v6; // r15
  char *v7; // r12
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  unsigned __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // rbx
  void *v14; // r9
  unsigned int v15; // ebx
  _DWORD *PoolWithTag; // rax
  char **v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  _DWORD *v20; // rax
  char **v21; // rcx
  unsigned int v22; // ebx
  _DWORD *v23; // rax
  char **v24; // rcx
  PVOID v25; // rax
  PVOID v26; // rbx
  bool v28; // cf
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  ULONG v31; // edx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(StartContext, 0, 0x440uLL);
  *(_DWORD *)StartContext = 71303927;
  *((_QWORD *)StartContext + 1) = a2;
  *((_QWORD *)StartContext + 5) = StartContext + 32;
  v5 = StartContext + 208;
  *((_QWORD *)StartContext + 4) = StartContext + 32;
  v6 = StartContext + 304;
  *((_QWORD *)StartContext + 121) = 1LL;
  *((_QWORD *)StartContext + 3) = StartContext + 16;
  v7 = StartContext + 328;
  *((_QWORD *)StartContext + 2) = StartContext + 16;
  *((_DWORD *)StartContext + 16) = 2048;
  *((_QWORD *)StartContext + 13) = StartContext + 96;
  *((_QWORD *)StartContext + 12) = StartContext + 96;
  *((_QWORD *)StartContext + 9) = StartContext + 48;
  *((_QWORD *)StartContext + 10) = StartContext + 48;
  *((_QWORD *)StartContext + 6) = StartContext + 72;
  *((_QWORD *)StartContext + 7) = StartContext + 72;
  *((_DWORD *)StartContext + 22) = 2048;
  *((_QWORD *)StartContext + 16) = 0LL;
  *((_QWORD *)StartContext + 24) = 0LL;
  *((_QWORD *)StartContext + 29) = StartContext + 224;
  *((_QWORD *)StartContext + 28) = StartContext + 224;
  *((_QWORD *)StartContext + 31) = StartContext + 240;
  *((_QWORD *)StartContext + 30) = StartContext + 240;
  *((_QWORD *)StartContext + 33) = StartContext + 256;
  *((_QWORD *)StartContext + 32) = StartContext + 256;
  *((_QWORD *)StartContext + 35) = StartContext + 272;
  *((_QWORD *)StartContext + 34) = StartContext + 272;
  *((_QWORD *)StartContext + 37) = StartContext + 288;
  *((_QWORD *)StartContext + 36) = StartContext + 288;
  *((_QWORD *)StartContext + 27) = StartContext + 208;
  *((_QWORD *)StartContext + 26) = StartContext + 208;
  *((_QWORD *)StartContext + 39) = StartContext + 304;
  *((_QWORD *)StartContext + 38) = StartContext + 304;
  *((_QWORD *)StartContext + 42) = StartContext + 328;
  *((_QWORD *)StartContext + 41) = StartContext + 328;
  *((_QWORD *)StartContext + 49) = StartContext + 384;
  *((_QWORD *)StartContext + 48) = StartContext + 384;
  *((_WORD *)StartContext + 188) = 1;
  StartContext[378] = 6;
  *((_DWORD *)StartContext + 95) = 0;
  *((_QWORD *)StartContext + 52) = StartContext + 408;
  *((_QWORD *)StartContext + 51) = StartContext + 408;
  *((_WORD *)StartContext + 200) = 1;
  StartContext[402] = 6;
  *((_DWORD *)StartContext + 101) = 0;
  *((_QWORD *)StartContext + 55) = StartContext + 432;
  *((_QWORD *)StartContext + 54) = StartContext + 432;
  *((_WORD *)StartContext + 212) = 1;
  StartContext[426] = 6;
  *((_DWORD *)StartContext + 107) = 0;
  *((_QWORD *)StartContext + 58) = StartContext + 456;
  *((_QWORD *)StartContext + 57) = StartContext + 456;
  *((_WORD *)StartContext + 224) = 1;
  StartContext[450] = 6;
  *((_DWORD *)StartContext + 113) = 0;
  *((_WORD *)StartContext + 236) = 1;
  StartContext[474] = 6;
  *((_DWORD *)StartContext + 119) = 0;
  *((_QWORD *)StartContext + 61) = StartContext + 480;
  *((_QWORD *)StartContext + 60) = StartContext + 480;
  *((_WORD *)StartContext + 488) = 0;
  *((_QWORD *)StartContext + 124) = StartContext + 984;
  *((_QWORD *)StartContext + 123) = StartContext + 984;
  StartContext[978] = 6;
  *((_DWORD *)StartContext + 245) = 0;
  *((_QWORD *)StartContext + 127) = StartContext + 1008;
  *((_QWORD *)StartContext + 126) = StartContext + 1008;
  *((_WORD *)StartContext + 500) = 0;
  StartContext[1002] = 6;
  *((_DWORD *)StartContext + 251) = 0;
  *((_OWORD *)StartContext + 40) = 0LL;
  *((_QWORD *)StartContext + 82) = 0LL;
  *(_OWORD *)(StartContext + 664) = 0LL;
  *(_OWORD *)(StartContext + 680) = 0LL;
  *(_OWORD *)(StartContext + 696) = 0LL;
  *((_QWORD *)StartContext + 89) = 0LL;
  memset(StartContext + 504, 0, 0x88uLL);
  *((_DWORD *)StartContext + 126) = 275;
  *((_QWORD *)StartContext + 66) = CcScanDpc;
  *((_QWORD *)StartContext + 67) = StartContext;
  *((_QWORD *)StartContext + 70) = 0LL;
  *((_QWORD *)StartContext + 65) = 0LL;
  *((_QWORD *)StartContext + 71) = 0LL;
  *((_QWORD *)StartContext + 73) = StartContext + 576;
  *((_QWORD *)StartContext + 72) = StartContext + 576;
  StartContext[568] = 8;
  *((_QWORD *)StartContext + 74) = 0LL;
  *((_DWORD *)StartContext + 157) = 0;
  *((_WORD *)StartContext + 312) = 0;
  NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject(a2);
  if ( (_BYTE)dword_140CFB19C )
  {
    v28 = (unsigned int)CcAzure_TopBottomDPTEqual < 2;
    *((_QWORD *)StartContext + 84) = NumberOfPhysicalPagesForPartitionObject >> 1;
    if ( v28 )
      v29 = (unsigned __int64)MmGetNumberOfPhysicalPagesForPartitionObject(a2) >> 1;
    else
      v29 = (unsigned __int64)MmGetNumberOfPhysicalPagesForPartitionObject(a2) >> 3;
    *((_QWORD *)StartContext + 85) = v29;
    *((_QWORD *)StartContext + 83) = v30;
    v10 = ExCriticalWorkerThreads - 1;
  }
  else
  {
    v9 = NumberOfPhysicalPagesForPartitionObject >> 3;
    *((_QWORD *)StartContext + 85) = v9;
    *((_QWORD *)StartContext + 84) = v9;
    *((_QWORD *)StartContext + 83) = v9;
    v10 = 1;
  }
  *((_DWORD *)StartContext + 81) = v10;
  *((_DWORD *)StartContext + 178) = 10;
  *((_QWORD *)StartContext + 88) = 0LL;
  v11 = 10 * MmGetNumberOfPhysicalPagesForPartitionObject(a2);
  v12 = ExCriticalWorkerThreads - 1;
  *((_QWORD *)StartContext + 87) = v11;
  *((_DWORD *)StartContext + 50) = v12;
  *((_DWORD *)StartContext + 87) = CcMaxCachemapUninitWorkerThreads;
  v13 = (*((_QWORD *)StartContext + 83) >> 1) + (*((_QWORD *)StartContext + 83) >> 2);
  if ( CcAzure_LazyWriterPercentageOfNumProcs )
  {
    v31 = KeQueryActiveProcessorCountEx(0xFFFFu) * CcAzure_LazyWriterPercentageOfNumProcs / 0x64;
    if ( *((_DWORD *)StartContext + 50) < v31 )
      *((_DWORD *)StartContext + 50) = v31;
  }
  StartContext[966] = 0;
  *((_DWORD *)StartContext + 34) = 0;
  StartContext[140] = 0;
  *((_QWORD *)StartContext + 104) = 0LL;
  *((_DWORD *)StartContext + 240) = -1;
  if ( v13 > 0xFFFFFFFF )
    LODWORD(v13) = -1;
  *((_QWORD *)StartContext + 116) = 0LL;
  *((_DWORD *)StartContext + 172) = v13;
  *((_QWORD *)StartContext + 99) = StartContext + 784;
  *((_QWORD *)StartContext + 98) = StartContext + 784;
  *((_QWORD *)StartContext + 114) = StartContext + 904;
  *((_QWORD *)StartContext + 113) = StartContext + 904;
  *((_QWORD *)StartContext + 117) = 0LL;
  *((_DWORD *)StartContext + 236) = 32;
  *((_DWORD *)StartContext + 237) = 5;
  *((_QWORD *)StartContext + 119) = 0LL;
  v14 = (void *)a2[14];
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( PsCreateSystemThread(
         (PHANDLE)StartContext + 128,
         0x1FFFFFu,
         &ObjectAttributes,
         v14,
         0LL,
         (PKSTART_ROUTINE)CcQueueLazyWriteScanThread,
         StartContext) >= 0
    && (unsigned __int8)CcInitializePartitionVacbs(StartContext) )
  {
    v15 = 0;
    if ( *((_DWORD *)StartContext + 50) )
    {
      while ( 1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
        if ( !PoolWithTag )
          break;
        PoolWithTag[8] = 1;
        PoolWithTag[9] = -1;
        *((_QWORD *)PoolWithTag + 7) = StartContext;
        PoolWithTag[10] = v15;
        *((_QWORD *)PoolWithTag + 2) = CcWorkerThread;
        *((_QWORD *)PoolWithTag + 3) = PoolWithTag;
        *(_QWORD *)PoolWithTag = 0LL;
        v17 = (char **)*((_QWORD *)StartContext + 27);
        if ( *v17 != v5 )
LABEL_31:
          __fastfail(3u);
        *(_QWORD *)PoolWithTag = v5;
        ++v15;
        *((_QWORD *)PoolWithTag + 1) = v17;
        *v17 = (char *)PoolWithTag;
        *((_QWORD *)StartContext + 27) = PoolWithTag;
        if ( v15 >= *((_DWORD *)StartContext + 50) )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v18 = *((_DWORD *)StartContext + 81);
      v19 = 0;
      if ( v18 )
      {
        while ( 1 )
        {
          v20 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
          if ( !v20 )
            break;
          v20[8] = 2;
          *((_QWORD *)v20 + 7) = StartContext;
          v20[10] = v19;
          v20[9] = -1;
          *((_QWORD *)v20 + 2) = CcWorkerThread;
          *((_QWORD *)v20 + 3) = v20;
          *(_QWORD *)v20 = 0LL;
          v21 = (char **)*((_QWORD *)StartContext + 39);
          if ( *v21 != v6 )
            goto LABEL_31;
          *(_QWORD *)v20 = v6;
          ++v19;
          *((_QWORD *)v20 + 1) = v21;
          *v21 = (char *)v20;
          *((_QWORD *)StartContext + 39) = v20;
          v18 = *((_DWORD *)StartContext + 81);
          if ( v19 >= v18 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        v22 = 0;
        if ( *((_DWORD *)StartContext + 87) )
        {
          while ( 1 )
          {
            v23 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
            if ( !v23 )
              break;
            v23[8] = 5;
            *((_QWORD *)v23 + 7) = StartContext;
            v23[10] = v22;
            v23[9] = -1;
            *((_QWORD *)v23 + 2) = CcCachemapUninitWorkerThread;
            *((_QWORD *)v23 + 3) = v23;
            *(_QWORD *)v23 = 0LL;
            v24 = (char **)*((_QWORD *)StartContext + 42);
            if ( *v24 != v7 )
              goto LABEL_31;
            *(_QWORD *)v23 = v7;
            ++v22;
            *((_QWORD *)v23 + 1) = v24;
            *v24 = (char *)v23;
            *((_QWORD *)StartContext + 42) = v23;
            if ( v22 >= *((_DWORD *)StartContext + 87) )
            {
              v18 = *((_DWORD *)StartContext + 81);
              goto LABEL_21;
            }
          }
        }
        else
        {
LABEL_21:
          v25 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (v18 + 1), 0x70546343u);
          v26 = v25;
          if ( v25 )
          {
            memset(v25, 0, 8LL * (unsigned int)(*((_DWORD *)StartContext + 81) + 1));
            *((_QWORD *)StartContext + 90) = v26;
            if ( (unsigned __int8)CcInitializeAsyncRead(StartContext) )
            {
              v2 = 1;
              DbgPrintEx(
                0x7Fu,
                2u,
                "CcInitializePartition: Initialized Partition=%p, PartitionObject=%p \n",
                StartContext,
                a2);
            }
          }
        }
      }
    }
  }
  return v2;
}
