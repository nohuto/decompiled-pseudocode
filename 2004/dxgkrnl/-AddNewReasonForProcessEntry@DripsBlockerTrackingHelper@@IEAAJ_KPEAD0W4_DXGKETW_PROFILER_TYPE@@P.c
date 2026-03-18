/*
 * XREFs of ?AddNewReasonForProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEAD0W4_DXGKETW_PROFILER_TYPE@@PEAI3@Z @ 0x1C02BF7A0
 * Callers:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1C02BFA5C (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DripsBlockerTrackingHelper::AddNewReasonForProcessEntry(
        __int64 a1,
        __int64 a2,
        const void *a3,
        SIZE_T a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned int v11; // edi
  __int64 i; // rbx
  __int64 v14; // rcx

  v11 = 0;
  for ( i = a1;
        !*(_BYTE *)(i + 104)
     || *(_QWORD *)i != a2
     || RtlCompareMemory((const void *)(4720LL * v11 + a1 + 8), a3, a4) != a4;
        i += 4720LL )
  {
    if ( ++v11 >= 0x40 )
      return 3221226021LL;
  }
  v14 = *(unsigned int *)(4720LL * v11 + a1 + 44);
  if ( (unsigned int)v14 >= 0x40 )
    return 2147483674LL;
  *a6 = v11;
  *a7 = v14;
  *(_DWORD *)(4720LL * v11 + a1 + 44) = v14 + 1;
  *(_DWORD *)(a1 + 4720LL * v11 + 72 * v14 + 172) = a5;
  return 0LL;
}
