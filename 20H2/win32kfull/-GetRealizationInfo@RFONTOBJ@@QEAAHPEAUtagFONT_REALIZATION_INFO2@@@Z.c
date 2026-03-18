/*
 * XREFs of ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x1C00AA0A4
 * Callers:
 *     GreGetRealizationInfo @ 0x1C015D9E8 (GreGetRealizationInfo.c)
 * Callees:
 *     ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C005CC28 (-IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C015AB04 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 __fastcall RFONTOBJ::GetRealizationInfo(RFONTOBJ *this, struct tagFONT_REALIZATION_INFO2 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned int v6; // r9d
  int v7; // ecx
  char v8; // cl
  int v9; // ebp
  _DWORD *v10; // r11
  __int16 v11; // r10
  unsigned __int16 v12; // dx
  __int64 *v13; // r8
  __int64 v14; // rax
  int v15; // ecx
  __int16 v16; // ax
  unsigned int v17; // r8d
  __int16 v18; // ax
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  unsigned int v23; // r10d
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx

  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_Servicing_Type1_Telemetry__private_reporting,
    37097400LL,
    0LL,
    0LL,
    &Feature_AtomicCheckFailure_logged_traits,
    0);
  v6 = 1;
  v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 48LL);
  if ( (v7 & 2) != 0 )
    v8 = 1;
  else
    v8 = ((v7 & 4) == 0) | 2;
  *((_BYTE *)a2 + 4) = v8;
  *((_DWORD *)a2 + 2) = **(_DWORD **)this;
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v5 + 140);
  *((_WORD *)a2 + 3) = 0;
  *((_BYTE *)a2 + 5) = ((*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x40000000) != 0) + 1;
  v9 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 != 16 )
  {
    v10 = *(_DWORD **)this;
    v11 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 8LL);
    v12 = v11 - 1;
    if ( v11 != 1 )
    {
      v13 = (__int64 *)(*((_QWORD *)v10 + 16) + 216LL + 8LL * v12);
      do
      {
        v14 = *v13--;
        v15 = *(_DWORD *)(v14 + 12);
        v16 = v11 - 1;
        if ( (v15 & 0x100) == 0 )
          v16 = v11;
        v11 = v16;
        --v12;
      }
      while ( v12 );
    }
    v17 = v10[3];
    v18 = (v17 >> 13) & 1 | 2;
    *((_DWORD *)a2 + 4) = *(_DWORD *)(*((_QWORD *)v10 + 16) + 36LL);
    *((_WORD *)a2 + 10) = v11 - 1;
    if ( (v17 & 0x4000) == 0 )
      v18 = (v17 >> 13) & 1;
    *((_WORD *)a2 + 11) = v18;
    if ( v9 != 24 )
    {
      if ( IsVariableFont(*(struct _IFIMETRICS **)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL)) )
      {
        v20 = v19 + *(unsigned int *)(v19 + 204);
        v21 = 0;
        for ( *((_DWORD *)a2 + 7) = *(_DWORD *)(v20 + 4);
              v21 < *(_DWORD *)(v20 + 4);
              *((_DWORD *)a2 + v22 + 8) = *(_DWORD *)(v20 + 4 * v22 + 8) )
        {
          v22 = v21;
          v21 += v6;
        }
        v23 = 0;
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL)
            + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 208LL);
        *((_DWORD *)a2 + 25) = *(_DWORD *)(v24 + 4);
        if ( *(_DWORD *)(v24 + 4) )
        {
          do
          {
            v25 = v23;
            v23 += v6;
            v26 = 5 * v25;
            *(_OWORD *)((char *)a2 + 8 * v26 + 104) = *(_OWORD *)(v24 + 40 * v25 + 8);
            *(_OWORD *)((char *)a2 + 8 * v26 + 120) = *(_OWORD *)(v24 + 40 * v25 + 24);
            *((_QWORD *)a2 + v26 + 17) = *(_QWORD *)(v24 + 40 * v25 + 40);
          }
          while ( v23 < *(_DWORD *)(v24 + 4) );
        }
        *((_DWORD *)a2 + 186) = *(_DWORD *)(v20 + 72);
        if ( *(_DWORD *)(v20 + 4) )
        {
          do
          {
            *((_DWORD *)a2 + v4 + 187) = *(_DWORD *)(v20 + 4 * v4 + 76);
            v4 = v6 + (unsigned int)v4;
          }
          while ( (unsigned int)v4 < *(_DWORD *)(v20 + 4) );
        }
      }
      else
      {
        *((_DWORD *)a2 + 7) = 0;
        *((_DWORD *)a2 + 25) = 0;
        *((_DWORD *)a2 + 186) = 0;
      }
    }
  }
  return v6;
}
