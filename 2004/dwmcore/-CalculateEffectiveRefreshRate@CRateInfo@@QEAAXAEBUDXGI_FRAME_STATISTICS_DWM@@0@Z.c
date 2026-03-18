/*
 * XREFs of ?CalculateEffectiveRefreshRate@CRateInfo@@QEAAXAEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x180059850
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005B5B0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     McTemplateU0qff_EventWriteTransfer @ 0x180164088 (McTemplateU0qff_EventWriteTransfer.c)
 *     McTemplateU0qxxff_EventWriteTransfer @ 0x180164108 (McTemplateU0qxxff_EventWriteTransfer.c)
 */

void __fastcall CRateInfo::CalculateEffectiveRefreshRate(
        CRateInfo *this,
        const struct DXGI_FRAME_STATISTICS_DWM *a2,
        const struct DXGI_FRAME_STATISTICS_DWM *a3)
{
  __int64 v3; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned int v8; // eax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rbx
  __m128d v13; // xmm0
  double LowPart; // xmm1_8
  char v15; // xmm2_1
  __m128d v16; // xmm0
  __m128d v17; // xmm0
  __int64 v18; // rcx
  char v19; // xmm2_1

  v3 = *((_QWORD *)a2 + 3);
  if ( v3 > 0 )
  {
    v5 = *((_QWORD *)a3 + 3);
    if ( v5 > v3 )
    {
      LODWORD(v6) = *((_DWORD *)a2 + 4);
      v7 = v5 - v3;
      v8 = *((_DWORD *)a3 + 4);
      if ( v8 < (unsigned int)v6 )
      {
        LODWORD(v6) = ~(_DWORD)v6;
        v9 = (unsigned int)v6 + (unsigned __int64)(v8 + 1);
      }
      else
      {
        v9 = v8 - (unsigned int)v6;
      }
      v10 = (v7 + (*((_QWORD *)this + 2) >> 1)) / *((_QWORD *)this + 2);
      v11 = v7 / v9;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v13 = 0LL;
        LowPart = (double)(int)g_qpcFrequency.LowPart;
        if ( v11 < 0 )
        {
          v6 = (v7 / v9) & 1 | ((unsigned __int64)v11 >> 1);
          v13.m128d_f64[0] = (double)(int)v6 + (double)(int)v6;
        }
        else
        {
          v13.m128d_f64[0] = (double)(int)v11;
        }
        v13.m128d_f64[0] = v13.m128d_f64[0] * 1000.0 / LowPart;
        v15 = _mm_cvtpd_ps(v13).m128_u8[0];
        v16 = 0LL;
        if ( (v7 & 0x8000000000000000uLL) != 0LL )
          v16.m128d_f64[0] = (double)(int)(v7 & 1 | (v7 >> 1)) + (double)(int)(v7 & 1 | (v7 >> 1));
        else
          v16.m128d_f64[0] = (double)(int)v7;
        v16.m128d_f64[0] = v16.m128d_f64[0] * 1000.0 / LowPart;
        McTemplateU0qxxff_EventWriteTransfer(v6, v7 % v9, v9, v9, v10, _mm_cvtpd_ps(v16).m128_i8[0], v15);
      }
      if ( v11 && v10 <= 7 )
      {
        if ( *((_BYTE *)this + 24) )
        {
          v12 = *(_QWORD *)this;
          *((_BYTE *)this + 24) = 0;
        }
        else
        {
          v12 = (unsigned __int64)(v11 + 15LL * *((_QWORD *)this + 2)) >> 4;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
        {
          v17 = 0LL;
          if ( v12 < 0 )
            v17.m128d_f64[0] = (double)(int)(v12 & 1 | ((unsigned __int64)v12 >> 1))
                             + (double)(int)(v12 & 1 | ((unsigned __int64)v12 >> 1));
          else
            v17.m128d_f64[0] = (double)(int)v12;
          v18 = *((_QWORD *)this + 2);
          v17.m128d_f64[0] = v17.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
          v19 = _mm_cvtpd_ps(v17).m128_u8[0];
          if ( v18 < 0 )
            v18 = *((_QWORD *)this + 2) & 1LL;
          McTemplateU0qff_EventWriteTransfer(
            v18,
            (unsigned int)&EVTDESC_SCHEDULE_NEW_EFFECTIVE_REFRESH_PERIOD,
            0,
            v7,
            v19);
        }
        if ( v12 )
          *((_QWORD *)this + 2) = v12;
      }
    }
  }
}
