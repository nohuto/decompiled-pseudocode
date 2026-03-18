/*
 * XREFs of ?TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ @ 0x180079DE0
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007C608 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     McTemplateU0qNR0_EventWriteTransfer @ 0x1801130B2 (McTemplateU0qNR0_EventWriteTransfer.c)
 *     McTemplateU0xxf_EventWriteTransfer @ 0x18011312E (McTemplateU0xxf_EventWriteTransfer.c)
 */

void __fastcall CScheduleFrameInfoVolatileData::TracePresentStats(
        CScheduleFrameInfoVolatileData *this,
        __int64 a2,
        int a3)
{
  int v4; // edx
  int v5; // r8d
  __m128d v6; // xmm1
  __int64 v7; // rcx
  unsigned __int64 v8; // rax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qNR0_EventWriteTransfer(
      (_DWORD)this,
      (unsigned int)&EVTDESC_SCHEDULE_GETPRESENTSTATS1,
      a3,
      40,
      (__int64)this + 104);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v6 = 0LL;
      v7 = *((_QWORD *)this + 16) - *((_QWORD *)this + 14);
      if ( v7 < 0 )
      {
        v8 = *((_QWORD *)this + 16) - *((_QWORD *)this + 14);
        LODWORD(v7) = v7 & 1;
        v6.m128d_f64[0] = (double)(int)(v7 | (v8 >> 1)) + (double)(int)(v7 | (v8 >> 1));
      }
      else
      {
        v6.m128d_f64[0] = (double)(int)v7;
      }
      v6.m128d_f64[0] = v6.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
      McTemplateU0xxf_EventWriteTransfer(
        v7,
        v4,
        v5,
        *((_DWORD *)this + 30) - *((_DWORD *)this + 27),
        _mm_cvtpd_ps(v6).m128_i8[0]);
    }
  }
}
