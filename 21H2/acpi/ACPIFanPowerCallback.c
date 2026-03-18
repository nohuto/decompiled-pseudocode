/*
 * XREFs of ACPIFanPowerCallback @ 0x1C0003020
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceFanEvent @ 0x1C00030C0 (AcpiDiagTraceFanEvent.c)
 *     ACPIFanLoop @ 0x1C0003664 (ACPIFanLoop.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIFanPowerCallback(__int64 a1, __int64 a2, int a3)
{
  bool v4; // al
  char v6; // r10
  void *v7; // rax
  void *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp-58h]
  __int16 v11; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v12[32]; // [rsp+58h] [rbp-40h] BYREF
  __int16 *v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+80h] [rbp-18h]
  int v15; // [rsp+84h] [rbp-14h]

  if ( a3 < 0 )
  {
    v6 = 0;
    v7 = &unk_1C006FB8B;
    v8 = &unk_1C006FB8B;
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v6 = a1;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v7 = *(void **)(a1 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v8 = *(void **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = (__int64)v8;
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v8,
        16,
        13,
        (__int64)&WPP_91517f0b10833e548608c253cc4d22bc_Traceguids,
        a3,
        v6,
        (__int64)v7,
        v10);
    }
  }
  v14 = 2;
  v4 = *(_DWORD *)(a1 + 384) == 1;
  v15 = 0;
  v11 = v4;
  v13 = &v11;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_POWER_STATE_CHANGE, 3LL, v12);
  return ACPIFanLoop(a1, 2LL);
}
