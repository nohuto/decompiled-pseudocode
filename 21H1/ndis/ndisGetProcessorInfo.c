/*
 * XREFs of ndisGetProcessorInfo @ 0x1C0145ACC
 * Callers:
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ndisGetLogicalProcessorInformation @ 0x1C0145CA4 (ndisGetLogicalProcessorInformation.c)
 */

__int64 ndisGetProcessorInfo()
{
  SIZE_T v0; // rbx
  PVOID PoolWithTag; // rax
  _DWORD *v2; // rdi
  char *v8; // rcx
  NTSTATUS LogicalProcessorInformation; // ebx
  ULONG v10; // esi
  __int64 v11; // rdi
  __int64 j; // rbp
  ULONG ProcessorIndexFromNumber; // eax
  _PROCESSOR_NUMBER *v14; // rdx
  ULONG v16; // edi
  __int64 i; // rbx

  v0 = 20 * (ndisMaxNumberOfProcessors + 2LL + 2LL * ndisMaxNumRssCpus);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x2020444Eu);
  ndisSystemProcessorInfo = PoolWithTag;
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v0);
  _RAX = 0LL;
  *v2 = 2621824;
  __asm { cpuid }
  if ( (_DWORD)_RBX == 1970169159 )
  {
    if ( (_DWORD)_RDX == 1231384169 && (_DWORD)_RCX == 1818588270 )
    {
      v2[2] = 1;
      goto LABEL_6;
    }
  }
  else if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RDX == 1769238117 && (_DWORD)_RCX == 1145913699 )
  {
    v2[2] = 2;
    goto LABEL_6;
  }
  v2[2] = 0;
LABEL_6:
  ndisRssProcessors = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * ndisMaxNumRssCpus, 0x2020444Eu);
  if ( !ndisRssProcessors )
    return (unsigned int)-1073741670;
  v8 = (char *)ndisSystemProcessorInfo;
  *((_DWORD *)ndisSystemProcessorInfo + 8) = ndisNumberOfActiveProcessorsAtBoot;
  ndisCpuInfo = (struct _NDIS_PROCESSOR_INFO_EX *)(v8 + 40);
  *((_DWORD *)v8 + 3) = 1;
  *((_DWORD *)v8 + 4) = 1;
  *((_DWORD *)v8 + 6) = 1;
  *((_DWORD *)v8 + 5) = 1;
  *((_DWORD *)v8 + 7) = 40;
  *((_DWORD *)v8 + 9) = 20;
  LogicalProcessorInformation = ndisGetLogicalProcessorInformation();
  if ( LogicalProcessorInformation < 0 )
  {
    v16 = ndisRssBaseCpu;
    for ( i = 0LL;
          v16 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)i < ndisMaxNumRssCpus;
          i = (unsigned int)(i + 1) )
    {
      KeGetProcessorNumberFromIndex(v16++, (PPROCESSOR_NUMBER)ndisRssProcessors + i);
    }
    LODWORD(ndisRssCpuCount) = i;
    return 0;
  }
  else
  {
    v10 = ndisRssBaseCpu;
    v11 = 0LL;
    while ( v10 < ndisNumberOfActiveProcessorsAtBoot && (unsigned int)v11 < ndisMaxNumRssCpus )
    {
      for ( j = 0LL; (unsigned int)j < (unsigned int)v11; j = (unsigned int)(j + 1) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)ndisRssProcessors + j);
        if ( ndisCpuInfo[ProcessorIndexFromNumber].SocketId == ndisCpuInfo[v10].SocketId
          && ndisCpuInfo[ProcessorIndexFromNumber].CoreId == ndisCpuInfo[v10].CoreId )
        {
          break;
        }
      }
      if ( (_DWORD)j == (_DWORD)v11 )
      {
        v14 = (_PROCESSOR_NUMBER *)((char *)ndisRssProcessors + 4 * v11);
        v11 = (unsigned int)(v11 + 1);
        LogicalProcessorInformation = KeGetProcessorNumberFromIndex(v10, v14);
      }
      ++v10;
    }
    LODWORD(ndisRssCpuCount) = v11;
  }
  return (unsigned int)LogicalProcessorInformation;
}
