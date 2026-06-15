/*
 * XREFs of ?wil_details_FeatureReporting_IncrementOpportunityInCache@@YAXPEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@IPEAUwil_details_RecordUsageResult@@@Z @ 0x1800459D4
 * Callers:
 *     ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180012690 (-wil_details_FeatureReporting_RecordUsageInCache@@YA-AUwil_details_RecordUsageResult@@PEAUwil_de.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  signed __int32 v4; // r8d
  BOOL v7; // ebx
  unsigned int v8; // ecx
  int v9; // r10d
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  int v12; // eax
  int v13; // edx

  v4 = *a1;
  v7 = a2 == 5;
  while ( 1 )
  {
    a4[1] = 0;
    v8 = v4 | 1;
    if ( (((v4 | 1u) >> 22) & 1) != v7 )
    {
      if ( ((v8 >> 15) & 0x7F) != 0 )
      {
        a4[1] = (v8 >> 15) & 0x7F;
        v12 = 5;
        if ( a2 != 1 )
          v12 = 1;
        v8 = v4 & 0xFFC07FFE | 1;
        a4[2] = v12;
      }
      v13 = 0;
      if ( a2 == 5 )
        v13 = 0x400000;
      v8 = v8 & 0xFFBFFFFF | v13;
    }
    v9 = (v8 >> 15) & 0x7F;
    v10 = (unsigned int)(v9 + 1);
    if ( v10 > 0x7F || v10 < ((v8 >> 15) & 0x7F) )
    {
      LODWORD(v10) = 1;
      a4[2] = a2;
      a4[1] = v9;
    }
    result = (unsigned int)_InterlockedCompareExchange(a1, (v8 ^ ((_DWORD)v10 << 15)) & 0x3F8000 ^ v8, v4);
    if ( v4 == (_DWORD)result )
      break;
    v4 = result;
  }
  a4[4] = 0;
  *a4 = (v4 & 1) == 0;
  return result;
}
