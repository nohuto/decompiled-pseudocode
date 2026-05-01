/*
 * XREFs of ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x1800413D8
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180040BE4 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004132C (-RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x18006D174 (-RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerGetCpuSetInformation(struct _SYSTEM_CPU_SET_INFORMATION **a1, unsigned int *a2)
{
  struct _SYSTEM_CPU_SET_INFORMATION *Heap; // rbx
  int i; // eax
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  SIZE_T Size; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  Heap = 0LL;
  for ( i = 0; ; i = Size )
  {
    v11 = 0LL;
    v6 = NtQuerySystemInformationEx(175LL, &v11, 8LL, Heap, i, &Size);
    v7 = v6;
    if ( v6 >= 0 )
      break;
    if ( v6 != -1073741789 )
      goto LABEL_9;
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    Heap = (struct _SYSTEM_CPU_SET_INFORMATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
    if ( !Heap )
      return (unsigned int)-1073741801;
  }
  v8 = Size;
  *a1 = Heap;
  Heap = 0LL;
  *a2 = v8;
LABEL_9:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v7;
}
