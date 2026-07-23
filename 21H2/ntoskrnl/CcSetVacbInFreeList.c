/*
 * XREFs of CcSetVacbInFreeList @ 0x14031A94C
 * Callers:
 *     CcGetVacbMiss @ 0x14031B710 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     CcInitializePartitionVacbs @ 0x1403C3758 (CcInitializePartitionVacbs.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB784 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1404EC664 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall CcSetVacbInFreeList(__int64 a1, _QWORD *a2, char a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 *v7; // r8
  __int64 v8; // r9

  --CcNumberOfMappedVacbs;
  result = (unsigned __int64)(a2 + 2);
  if ( a3 )
  {
    v7 = (unsigned __int64 *)(a1 + 904);
    v8 = *(_QWORD *)(a1 + 904);
    if ( *(_QWORD *)(v8 + 8) == a1 + 904 )
    {
      *(_QWORD *)result = v8;
      a2[3] = v7;
      *(_QWORD *)(v8 + 8) = result;
      *v7 = result;
      a2[1] = 0LL;
      ++*(_DWORD *)(a1 + 920);
      return result;
    }
LABEL_7:
    __fastfail(3u);
  }
  v4 = CcVacbFreeList;
  if ( *(__int64 **)(CcVacbFreeList + 8) != &CcVacbFreeList )
    goto LABEL_7;
  *(_QWORD *)result = CcVacbFreeList;
  a2[3] = &CcVacbFreeList;
  *(_QWORD *)(v4 + 8) = result;
  CcVacbFreeList = (__int64)(a2 + 2);
  v5 = a2[4];
  a2[1] = 0LL;
  v6 = *(_DWORD *)(v5 + 4);
  if ( !v6 )
    KeBugCheckEx(0x34u, 0x16EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  result = (unsigned int)(v6 - 1);
  *(_DWORD *)(v5 + 4) = result;
  ++CcNumberOfFreeVacbs;
  return result;
}
