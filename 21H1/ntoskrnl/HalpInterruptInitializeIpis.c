/*
 * XREFs of HalpInterruptInitializeIpis @ 0x1403A5C74
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x1403A5B60 (HalpInitializeInterruptsPn.c)
 *     HalpInitializeInterrupts @ 0x140A3667C (HalpInitializeInterrupts.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1402C1310 (KeGetProcessorNumberFromIndex.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403B6FE8 (HalpMmAllocateMemoryInternal.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS HalpInterruptInitializeIpis()
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  _QWORD *v2; // rdx
  _DWORD *v3; // r8
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // edi
  _DWORD *MemoryInternal; // rax
  _DWORD *v8; // rbx
  _DWORD *v9; // rax
  ULONG v10; // edi
  _DWORD *v11; // rbx
  int *v12; // rsi
  int v13; // r8d
  unsigned __int64 v14; // rdx
  unsigned __int16 Group; // ax
  __int64 v16; // rcx
  __int64 v17; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  if ( HalpInterruptIpiLines )
    goto LABEL_2;
  v1 = 0LL;
  v2 = *(_QWORD **)(HalpInterruptController + 240);
  while ( v2 != (_QWORD *)(HalpInterruptController + 240) )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    v4 = v3[6] - v3[5];
    v5 = v3[8];
    if ( v5 == 5 && v4 )
    {
      HalpInterruptIpiLines = (__int64)v3;
      goto LABEL_2;
    }
    if ( v5 == 4 && v4 && !v1 )
      v1 = (__int64)v3;
  }
  HalpInterruptIpiLines = v1;
  if ( v1 )
  {
LABEL_2:
    if ( HalpInterruptClusterModeEnabled )
    {
      if ( !HalpInterruptClusterData )
      {
        v6 = HalpInterruptMaxProcessors;
        if ( (_DWORD)HalpInterruptMaxCluster
          && 20 * (int)HalpInterruptMaxCluster < (unsigned int)HalpInterruptMaxProcessors )
        {
          v6 = 20 * HalpInterruptMaxCluster;
        }
        MemoryInternal = (_DWORD *)HalpMmAllocateMemoryInternal(24 * v6, 1LL);
        HalpInterruptClusterData = (__int64)MemoryInternal;
        v8 = MemoryInternal;
        if ( !MemoryInternal )
          return -1073741801;
        memset(MemoryInternal, 0, 24 * v6);
        v9 = &v8[6 * v6];
        while ( v8 < v9 )
        {
          *v8 = -1;
          v8 += 6;
        }
        HalpInterruptClusterDataEnd = HalpInterruptClusterData;
        HalpInterruptClusterDataLimit = HalpInterruptClusterData + 24LL * v6;
      }
      v10 = 0;
      if ( (_DWORD)HalpInterruptProcessorCount )
      {
        v11 = (_DWORD *)HalpInterruptTargets;
        v12 = KiProcessorIndexToNumberMappingTable;
        do
        {
          if ( *v11 == 6 )
          {
            result = KeGetProcessorNumberFromIndex(v10, &ProcNumber);
            if ( result < 0 )
              return result;
            v13 = v11[2];
            v14 = HalpInterruptClusterData;
            Group = ProcNumber.Group;
            while ( v14 < HalpInterruptClusterDataEnd
                 && (*(_WORD *)(v14 + 16) != ProcNumber.Group || *(_DWORD *)v14 != v13) )
              v14 += 24LL;
            if ( v14 == HalpInterruptClusterDataEnd )
            {
              if ( v14 >= HalpInterruptClusterDataLimit )
                KeBugCheckEx(0x5Cu, 0x201uLL, 0LL, 0xFFFFFFFF80000005uLL, (unsigned int)HalpInterruptMaxCluster);
              ++HalpInterruptClusterDataCount;
              v16 = HalpInterruptClusterDataEnd + 24;
              *(_DWORD *)v14 = v13;
              HalpInterruptClusterDataEnd = v16;
              *(_WORD *)(v14 + 16) = Group;
            }
            v17 = *(_QWORD *)(v14 + 8);
            _bittestandset64(&v17, *v12 & 0x3F);
            *(_QWORD *)(v14 + 8) = v17;
          }
          ++v10;
          v11 += 6;
          ++v12;
        }
        while ( v10 < (unsigned int)HalpInterruptProcessorCount );
      }
    }
  }
  else
  {
    HalpInterruptMaxProcessors = 1;
  }
  return 0;
}
