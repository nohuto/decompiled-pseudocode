/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18000586C
 * Callers:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005B18 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, signed __int32 *a2, int a3)
{
  int v3; // r11d
  int v7; // edx
  unsigned int v8; // edx
  signed __int32 v9; // eax
  unsigned int v10; // r8d
  unsigned __int32 v11; // eax
  int v12; // ecx
  unsigned __int32 v13; // ett
  signed __int32 v14; // edx
  BOOL v15; // esi
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // r8d
  int v19; // edi
  unsigned __int64 v20; // r8
  signed __int32 v21; // eax
  BOOL v22; // esi
  unsigned int v23; // ecx
  int v24; // r8d
  int v25; // edi
  unsigned __int64 v26; // r8
  signed __int32 v27; // eax

  v3 = 0;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a3 )
    goto LABEL_38;
  if ( a3 == 1 )
    goto LABEL_24;
  if ( a3 <= 1 )
    goto LABEL_17;
  if ( a3 <= 3 )
  {
LABEL_8:
    v7 = 0;
    switch ( a3 )
    {
      case 2:
        v7 = 2;
        break;
      case 3:
        v7 = 8;
        break;
      case 6:
        v7 = 4;
        break;
      case 7:
        v7 = 16;
        break;
    }
    v8 = v7 | 1;
    _m_prefetchw(a2);
    v9 = _InterlockedOr(a2, v8);
    *(_DWORD *)a1 = (v9 & 1) == 0;
    LOBYTE(v3) = (v8 & 0xFFFFFFFE & v9) == (v8 & 0xFFFFFFFE);
    goto LABEL_51;
  }
  if ( a3 == 4 )
  {
LABEL_38:
    v14 = *a2;
    v22 = a3 == 4;
    while ( 1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      v23 = v14 | 1;
      if ( (((v14 | 1u) >> 14) & 1) != v22 )
      {
        if ( ((v23 >> 5) & 0x1FF) != 0 )
        {
          *(_DWORD *)(a1 + 4) = (v23 >> 5) & 0x1FF;
          *(_DWORD *)(a1 + 8) = a3 == 0 ? 4 : 0;
          v23 = v14 & 0xFFFFC01E | 1;
        }
        v24 = 0;
        if ( a3 == 4 )
          v24 = 0x4000;
        v23 = v23 & 0xFFFFBFFF | v24;
      }
      v25 = (v23 >> 5) & 0x1FF;
      v26 = (unsigned int)(v25 + 1);
      if ( v26 > 0x1FF || v26 < (((unsigned __int64)v23 >> 5) & 0x1FF) )
      {
        LOWORD(v26) = 1;
        *(_DWORD *)(a1 + 8) = a3;
        *(_DWORD *)(a1 + 4) = v25;
      }
      v27 = _InterlockedCompareExchange(a2, ((unsigned __int16)v23 ^ (unsigned __int16)(32 * v26)) & 0x3FE0 ^ v23, v14);
      if ( v14 == v27 )
        break;
      v14 = v27;
    }
    goto LABEL_50;
  }
  if ( a3 == 5 )
  {
LABEL_24:
    v14 = *a2;
    v15 = a3 == 5;
    while ( 1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      v16 = v14 | 1;
      if ( (((v14 | 1u) >> 22) & 1) != v15 )
      {
        if ( ((v16 >> 15) & 0x7F) != 0 )
        {
          *(_DWORD *)(a1 + 4) = (v16 >> 15) & 0x7F;
          v17 = 1;
          if ( a3 == 1 )
            v17 = 5;
          v16 = v14 & 0xFFC07FFE | 1;
          *(_DWORD *)(a1 + 8) = v17;
        }
        v18 = 0;
        if ( a3 == 5 )
          v18 = 0x400000;
        v16 = v16 & 0xFFBFFFFF | v18;
      }
      v19 = (v16 >> 15) & 0x7F;
      v20 = (unsigned int)(v19 + 1);
      if ( v20 > 0x7F || v20 < ((v16 >> 15) & 0x7F) )
      {
        LODWORD(v20) = 1;
        *(_DWORD *)(a1 + 8) = a3;
        *(_DWORD *)(a1 + 4) = v19;
      }
      v21 = _InterlockedCompareExchange(a2, (v16 ^ ((_DWORD)v20 << 15)) & 0x3F8000 ^ v16, v14);
      if ( v14 == v21 )
        break;
      v14 = v21;
    }
LABEL_50:
    *(_DWORD *)a1 = (v14 & 1) == 0;
LABEL_51:
    *(_DWORD *)(a1 + 16) = v3;
    return a1;
  }
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_17:
  v10 = a3 - 320;
  if ( v10 < 0x40 )
  {
    v11 = a2[1];
    do
    {
      if ( (v11 & 0x10) == 0 || (v12 = 1, ((v11 >> 5) & 0x3F) != v10) )
        v12 = 0;
      *(_DWORD *)(a1 + 16) = v12;
      v13 = v11;
      v11 = _InterlockedCompareExchange(a2 + 1, (32 * (v10 & 0x3F)) | v11 & 0xFFFFF81F | 0x10, v11);
    }
    while ( v13 != v11 );
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 12) = 0;
  return a1;
}
