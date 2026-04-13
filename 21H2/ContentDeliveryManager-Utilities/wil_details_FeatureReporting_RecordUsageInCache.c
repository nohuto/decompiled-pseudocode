/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x180008370
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000CC94 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4)
{
  int v7; // ebx
  int v8; // edx
  signed __int32 i; // ecx
  signed __int32 v10; // r8d
  signed __int32 v11; // eax
  unsigned int v12; // r8d
  unsigned __int32 v13; // eax
  BOOL v14; // ecx
  unsigned __int32 v15; // ett
  signed __int32 v16; // edx
  BOOL v17; // esi
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  unsigned __int64 v22; // r8
  signed __int32 v23; // eax
  BOOL v24; // esi
  unsigned int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  unsigned __int64 v28; // r8
  signed __int32 v29; // eax

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = 1;
  if ( !a3 )
    goto LABEL_48;
  if ( a3 == 1 )
    goto LABEL_34;
  if ( a3 <= 1 )
    goto LABEL_25;
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
    for ( i = *a2; ; i = v11 )
    {
      *(_DWORD *)(a1 + 16) = (i | v8) == i;
      v10 = i | v8 | 1;
      if ( (i | v8) == i )
        v10 = i | v8;
      v11 = _InterlockedCompareExchange(a2, v10, i);
      if ( i == v11 )
        break;
    }
    if ( (v10 & 1) == 0 || (i & 1) != 0 )
      v7 = 0;
    *(_DWORD *)a1 = v7;
    return a1;
  }
  if ( a3 == 4 )
  {
LABEL_48:
    v16 = *a2;
    v24 = a3 == 4;
    while ( 1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      v25 = v16 | 1;
      if ( (((v16 | 1u) >> 14) & 1) != v24 )
      {
        if ( ((v25 >> 5) & 0x1FF) != 0 )
        {
          *(_DWORD *)(a1 + 4) = (v25 >> 5) & 0x1FF;
          *(_DWORD *)(a1 + 8) = a3 == 0 ? 4 : 0;
          v25 = v16 & 0xFFFFC01E | 1;
        }
        v26 = 0;
        if ( a3 == 4 )
          v26 = 0x4000;
        v25 = v25 & 0xFFFFBFFF | v26;
      }
      v27 = (v25 >> 5) & 0x1FF;
      v28 = (unsigned int)(v27 + 1);
      if ( v28 > 0x1FF || v28 < (((unsigned __int64)v25 >> 5) & 0x1FF) )
      {
        LOWORD(v28) = 1;
        *(_DWORD *)(a1 + 8) = a3;
        *(_DWORD *)(a1 + 4) = v27;
      }
      v29 = _InterlockedCompareExchange(a2, ((unsigned __int16)v25 ^ (unsigned __int16)(32 * v28)) & 0x3FE0 ^ v25, v16);
      if ( v16 == v29 )
        break;
      v16 = v29;
    }
    goto LABEL_60;
  }
  if ( a3 == 5 )
  {
LABEL_34:
    v16 = *a2;
    v17 = a3 == 5;
    while ( 1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      v18 = v16 | 1;
      if ( (((v16 | 1u) >> 22) & 1) != v17 )
      {
        if ( ((v18 >> 15) & 0x7F) != 0 )
        {
          *(_DWORD *)(a1 + 4) = (v18 >> 15) & 0x7F;
          v19 = 1;
          if ( a3 == 1 )
            v19 = 5;
          v18 = v16 & 0xFFC07FFE | 1;
          *(_DWORD *)(a1 + 8) = v19;
        }
        v20 = 0;
        if ( a3 == 5 )
          v20 = 0x400000;
        v18 = v18 & 0xFFBFFFFF | v20;
      }
      v21 = (v18 >> 15) & 0x7F;
      v22 = (unsigned int)(v21 + 1);
      if ( v22 > 0x7F || v22 < ((v18 >> 15) & 0x7F) )
      {
        LODWORD(v22) = 1;
        *(_DWORD *)(a1 + 8) = a3;
        *(_DWORD *)(a1 + 4) = v21;
      }
      v23 = _InterlockedCompareExchange(a2, (v18 ^ ((_DWORD)v22 << 15)) & 0x3F8000 ^ v18, v16);
      if ( v16 == v23 )
        break;
      v16 = v23;
    }
LABEL_60:
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)a1 = (v16 & 1) == 0;
    return a1;
  }
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_25:
  v12 = a3 - 320;
  if ( v12 >= 0x40 )
    goto LABEL_33;
  v13 = *((_DWORD *)a2 + 1);
  do
  {
    v14 = (v13 & 0x10) != 0 && ((v13 >> 5) & 0x3F) == v12;
    *(_DWORD *)(a1 + 16) = v14;
    v15 = v13;
    v13 = _InterlockedCompareExchange(a2 + 1, (32 * (v12 & 0x3F)) | v13 & 0xFFFFF81F | 0x10, v13);
  }
  while ( v15 != v13 );
  if ( !*(_DWORD *)(a1 + 16) )
  {
LABEL_33:
    *(_DWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 4) = 1;
    *(_DWORD *)(a1 + 12) = a4;
  }
  return a1;
}
