/*
 * XREFs of ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x18006DB44
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006C4A0 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x180040E88 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     ?RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_KAFFINITY_EX@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x18006D740 (-RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU.c)
 */

__int64 __fastcall RmpCpuSetManagerRankCpuSets(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        struct _RM_CPU_SET_SCORE **a3,
        unsigned int *a4)
{
  rsize_t v4; // r14
  unsigned int v8; // edi
  PVOID ProcessHeap; // rcx
  struct _RM_CPU_SET_SCORE *Heap; // rbp
  PVOID v11; // rbx
  unsigned int *v12; // rax
  unsigned int v14; // [rsp+40h] [rbp-128h] BYREF
  PVOID P; // [rsp+48h] [rbp-120h] BYREF
  unsigned int *v16; // [rsp+50h] [rbp-118h]
  _BYTE SystemInformation[176]; // [rsp+60h] [rbp-108h] BYREF

  v4 = *((unsigned int *)a1 + 230);
  v16 = a4;
  v8 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v14 = 0;
  P = 0LL;
  Heap = (struct _RM_CPU_SET_SCORE *)RtlAllocateHeap(ProcessHeap, 0, 16LL * (unsigned int)v4);
  if ( Heap )
  {
    memset_0(SystemInformation, 0, 0xA8uLL);
    if ( (*((_BYTE *)a2 + 172) & 1) != 0
      && NtQuerySystemInformation(SystemLookasideInformation|0x80, SystemInformation, 0xA8u, 0LL) < 0 )
    {
      memset_0(SystemInformation, 0, 0xA8uLL);
    }
    if ( (*((_BYTE *)a2 + 172) & 4) != 0 )
      RmpCpuSetManagerGetCpuSetInformation((struct _SYSTEM_CPU_SET_INFORMATION **)&P, &v14);
    v11 = P;
    RmpCpuSetManagerPopulateScores(
      a1,
      Heap,
      v4,
      a2,
      (struct _KAFFINITY_EX *)SystemInformation,
      (struct _SYSTEM_CPU_SET_INFORMATION *)P,
      v14);
    qsort_s(Heap, v4, 0x10uLL, (_CoreCrtSecureSearchSortCompareFunction)RmpCpuSetManagerCompareScores, a2);
    v12 = v16;
    *a3 = Heap;
    *v12 = v4;
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
