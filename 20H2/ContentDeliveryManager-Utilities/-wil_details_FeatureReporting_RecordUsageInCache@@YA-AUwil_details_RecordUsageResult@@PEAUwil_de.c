/*
 * XREFs of ?wil_details_FeatureReporting_RecordUsageInCache@@YA?AUwil_details_RecordUsageResult@@PEAUwil_details_FeatureReportingCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180008330
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000CAF4 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, signed __int32 *a2, int a3, int a4)
{
  int v4; // ebx
  int v8; // edx
  unsigned int v9; // edx
  signed __int32 v10; // eax
  unsigned int v11; // r8d
  unsigned __int32 v12; // eax
  int v13; // ecx
  unsigned __int32 v14; // ett
  signed __int32 v15; // edx
  BOOL v16; // esi
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  unsigned __int64 v21; // r8
  signed __int32 v22; // eax
  BOOL v23; // esi
  unsigned int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  unsigned __int64 v27; // r8
  signed __int32 v28; // eax

  v4 = 0;
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
    v8 = 0;
    switch ( a3 )
    {
      case 2:
        v8 = 2;
        break;
      case 3:
        v8 = 8;
        break;
      case 6:
        v8 = 4;
        break;
      case 7:
        v8 = 16;
        break;
    }
    v9 = v8 | 1;
    _m_prefetchw(a2);
    v10 = _InterlockedOr(a2, v9);
    *(_DWORD *)a1 = (v10 & 1) == 0;
    LOBYTE(v4) = (v9 & 0xFFFFFFFE & v10) == (v9 & 0xFFFFFFFE);
    goto LABEL_51;
  }
  if ( a3 == 4 )
  {
LABEL_38:
    v15 = *a2;
    v23 = a3 == 4;
    while ( 1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      v24 = v15 | 1;
      if ( (((v15 | 1u) >> 14) & 1) != v23 )
      {
        if ( ((v24 >> 5) & 0x1FF) != 0 )
        {
          *(_DWORD *)(a1 + 4) = (v24 >> 5) & 0x1FF;
          *(_DWORD *)(a1 + 8) = a3 == 0 ? 4 : 0;
          v24 = v15 & 0xFFFFC01E | 1;
        }
        v25 = 0;
        if ( a3 == 4 )
          v25 = 0x4000;
        v24 = v24 & 0xFFFFBFFF | v25;
      }
      v26 = (v24 >> 5) & 0x1FF;
      v27 = (unsigned int)(v26 + 1);
      if ( v27 > 0x1FF || v27 < (((unsigned __int64)v24 >> 5) & 0x1FF) )
      {
        LOWORD(v27) = 1;
        *(_DWORD *)(a1 + 8) = a3;
        *(_DWORD *)(a1 + 4) = v26;
      }
      v28 = _InterlockedCompareExchange(a2, ((unsigned __int16)v24 ^ (unsigned __int16)(32 * v27)) & 0x3FE0 ^ v24, v15);
      if ( v15 == v28 )
        break;
      v15 = v28;
    }
    goto LABEL_50;
  }
  if ( a3 == 5 )
  {
LABEL_24:
    v15 = *a2;
    v16 = a3 == 5;
    while ( 1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      v17 = v15 | 1;
      if ( (((v15 | 1u) >> 22) & 1) != v16 )
      {
        if ( ((v17 >> 15) & 0x7F) != 0 )
        {
          *(_DWORD *)(a1 + 4) = (v17 >> 15) & 0x7F;
          v18 = 1;
          if ( a3 == 1 )
            v18 = 5;
          v17 = v15 & 0xFFC07FFE | 1;
          *(_DWORD *)(a1 + 8) = v18;
        }
        v19 = 0;
        if ( a3 == 5 )
          v19 = 0x400000;
        v17 = v17 & 0xFFBFFFFF | v19;
      }
      v20 = (v17 >> 15) & 0x7F;
      v21 = (unsigned int)(v20 + 1);
      if ( v21 > 0x7F || v21 < ((v17 >> 15) & 0x7F) )
      {
        LODWORD(v21) = 1;
        *(_DWORD *)(a1 + 8) = a3;
        *(_DWORD *)(a1 + 4) = v20;
      }
      v22 = _InterlockedCompareExchange(a2, (v17 ^ ((_DWORD)v21 << 15)) & 0x3F8000 ^ v17, v15);
      if ( v15 == v22 )
        break;
      v15 = v22;
    }
LABEL_50:
    *(_DWORD *)a1 = (v15 & 1) == 0;
LABEL_51:
    *(_DWORD *)(a1 + 16) = v4;
    return a1;
  }
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_17:
  v11 = a3 - 320;
  if ( v11 < 0x40 )
  {
    v12 = a2[1];
    do
    {
      if ( (v12 & 0x10) == 0 || (v13 = 1, ((v12 >> 5) & 0x3F) != v11) )
        v13 = 0;
      *(_DWORD *)(a1 + 16) = v13;
      v14 = v12;
      v12 = _InterlockedCompareExchange(a2 + 1, (32 * (v11 & 0x3F)) | v12 & 0xFFFFF81F | 0x10, v12);
    }
    while ( v14 != v12 );
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 12) = a4;
  return a1;
}
