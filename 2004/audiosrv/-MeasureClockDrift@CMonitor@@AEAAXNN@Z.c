/*
 * XREFs of ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x180102610
 * Callers:
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180103BC0 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_g @ 0x1800C30C0 (WPP_SF_g.c)
 *     WPP_SF_gg @ 0x180105474 (WPP_SF_gg.c)
 *     WPP_SF_gggg @ 0x1801054D0 (WPP_SF_gggg.c)
 */

void __fastcall CMonitor::MeasureClockDrift(CMonitor *this, double a2, double a3)
{
  double v4; // xmm7_8
  __int64 v5; // rcx
  double v6; // xmm2_8
  __int64 v7; // rdx
  double v8; // xmm6_8
  double v9; // xmm6_8
  double v10; // xmm0_8
  double v11; // xmm6_8
  CAudioSessionManager *v12; // r9
  double v13; // xmm1_8

  v4 = a3 / a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_gggg(*((_QWORD *)WPP_GLOBAL_Control + 2));
  }
  v5 = *((_QWORD *)this + 61);
  v6 = *((double *)this + 60);
  v7 = v5 + 1;
  *((_QWORD *)this + 61) = v5 + 1;
  if ( v5 < 0 )
    v8 = (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1)) + (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1));
  else
    v8 = (double)(int)v5;
  v9 = v8 * v6 + v4;
  if ( v7 < 0 )
    v10 = (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1)) + (double)(int)(v7 & 1 | ((unsigned __int64)v7 >> 1));
  else
    v10 = (double)(int)v7;
  v11 = v9 / v10;
  v12 = WPP_GLOBAL_Control;
  v13 = v6;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids, v11);
    v13 = *((double *)this + 60);
    v12 = WPP_GLOBAL_Control;
  }
  if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11 - v13) & _xmm) > 0.00001 )
  {
    if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v12 + 7) & 0x800000) != 0
      && *((_BYTE *)v12 + 25) >= 4u )
    {
      WPP_SF_gg(*((_QWORD *)v12 + 2));
    }
    *((double *)this + 60) = v11;
  }
}
