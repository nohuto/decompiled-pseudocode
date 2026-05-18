/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x18000AD44
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000B088 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, volatile signed __int32 *a2, int a3)
{
  int v6; // r11d
  int v7; // edx
  signed __int32 i; // ecx
  signed __int32 v9; // r8d
  signed __int32 v10; // eax
  unsigned int v11; // r8d
  unsigned __int32 v12; // eax
  BOOL v13; // ecx
  unsigned __int32 v14; // ett
  signed __int32 v15; // edx
  BOOL v16; // esi
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // r8d
  int v20; // ebx
  unsigned __int64 v21; // r8
  signed __int32 v22; // eax
  BOOL v23; // esi
  unsigned int v24; // ecx
  int v25; // r8d
  int v26; // ebx
  unsigned __int64 v27; // r8
  signed __int32 v28; // eax

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = 1;
  if ( !a3 )
    goto LABEL_48;
  if ( a3 == 1 )
    goto LABEL_34;
  if ( a3 <= 1 )
    goto LABEL_25;
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
    for ( i = *a2; ; i = v10 )
    {
      *(_DWORD *)(a1 + 16) = (i | v7) == i;
      v9 = i | v7 | 1;
      if ( (i | v7) == i )
        v9 = i | v7;
      v10 = _InterlockedCompareExchange(a2, v9, i);
      if ( i == v10 )
        break;
    }
    if ( (v9 & 1) == 0 || (i & 1) != 0 )
      v6 = 0;
    *(_DWORD *)a1 = v6;
    return a1;
  }
  if ( a3 == 4 )
  {
LABEL_48:
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
    goto LABEL_60;
  }
  if ( a3 == 5 )
  {
LABEL_34:
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
LABEL_60:
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)a1 = (v15 & 1) == 0;
    return a1;
  }
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_25:
  v11 = a3 - 320;
  if ( v11 >= 0x40 )
    goto LABEL_33;
  v12 = *((_DWORD *)a2 + 1);
  do
  {
    v13 = (v12 & 0x10) != 0 && ((v12 >> 5) & 0x3F) == v11;
    *(_DWORD *)(a1 + 16) = v13;
    v14 = v12;
    v12 = _InterlockedCompareExchange(a2 + 1, (32 * (v11 & 0x3F)) | v12 & 0xFFFFF81F | 0x10, v12);
  }
  while ( v14 != v12 );
  if ( !*(_DWORD *)(a1 + 16) )
  {
LABEL_33:
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 4) = 1;
  }
  return a1;
}
