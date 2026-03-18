/*
 * XREFs of ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x1C003A0BC
 * Callers:
 *     ?DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C003CF50 (-DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0pqqxxx_EtwWriteTransfer @ 0x1C003A1F4 (McTemplateK0pqqxxx_EtwWriteTransfer.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C003A49C (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::PerformClockCalibration(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  unsigned int i; // ebx
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rax
  _DXGK_GPUCLOCKDATA v12; // [rsp+50h] [rbp-38h] BYREF

  v1 = *((_QWORD *)this + 2);
  for ( i = 0; i < *(_DWORD *)(v1 + 280); ++i )
  {
    v4 = 0;
    v5 = 360LL * i;
    v6 = *(_QWORD *)(v1 + 2560);
    v7 = *(unsigned __int16 *)(v5 + v6);
    if ( *(_WORD *)(v5 + v6) )
    {
      do
      {
        if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
        {
          memset(&v12, 0, sizeof(v12));
          if ( (unsigned int)ADAPTER_RENDER::DdiCalibrateGpuClock(this, v4, i, &v12) )
          {
            v11 = WdLogNewEntry5_WdAssertion(v9, v8);
            *(_QWORD *)(v11 + 24) = 3881LL;
            WdLogEvent5_WdAssertion(v11);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0pqqxxx_EtwWriteTransfer(
              v9,
              v8,
              v10,
              *((_QWORD *)this + 2),
              v4,
              i,
              v12.GpuFrequency,
              v12.GpuClockCounter,
              v12.CpuClockCounter);
        }
        ++v4;
      }
      while ( v4 < v7 );
      v1 = *((_QWORD *)this + 2);
    }
  }
}
