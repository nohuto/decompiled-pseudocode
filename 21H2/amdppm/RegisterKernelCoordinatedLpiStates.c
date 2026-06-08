/*
 * XREFs of RegisterKernelCoordinatedLpiStates @ 0x1C003070C
 * Callers:
 *     RegisterIdleComplete @ 0x1C00301C0 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C00285A8 (AcpiGetCoordinatedLpiStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C00338EC (PepNotifyCoordinatedLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0037700 (LpiTranslateCoordinatedIdleStates.c)
 */

__int64 __fastcall RegisterKernelCoordinatedLpiStates(__int64 a1)
{
  int CoordinatedLpiStates; // ebx
  unsigned __int16 v3; // r9
  __int64 v4; // rsi
  __int64 v5; // rbx
  void *v6; // rax
  __int64 v7; // rbp
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  CoordinatedLpiStates = AcpiGetCoordinatedLpiStates(a1, &qword_1C00149C8);
  if ( CoordinatedLpiStates >= 0 )
  {
    v4 = qword_1C00149C8;
    if ( !*(_DWORD *)qword_1C00149C8 )
      return 0;
    CoordinatedLpiStates = LpiTranslateCoordinatedIdleStates(
                             a1,
                             qword_1C00149C8,
                             (unsigned int)&v10,
                             (unsigned int)&v11,
                             (__int64)&v12);
    if ( CoordinatedLpiStates < 0 )
      return (unsigned int)CoordinatedLpiStates;
    v5 = v10;
    *(_QWORD *)(v10 + 32) = PepQueryPlatformStateResidency;
    if ( (*(_QWORD *)(a1 + 272) & 0x100000000000LL) != 0 )
    {
      *(_QWORD *)(v5 + 16) = PepNotifyLpiPreExecute;
      v6 = PepNotifyLpiComplete;
    }
    else
    {
      v6 = AcpiCStateIdleCancel;
    }
    v7 = v11;
    *(_QWORD *)(v5 + 24) = v6;
    if ( (*(_QWORD *)(a1 + 272) & 0x100000000000LL) != 0 )
      PepNotifyCoordinatedLpiStates(a1, v4, v5, v7);
    qword_1C00149C0 = v12;
    qword_1C00149B0 = v5;
    qword_1C00149B8 = v7;
    CoordinatedLpiStates = ((__int64 (__fastcall *)(__int64))qword_1C0014648)(v5);
    if ( CoordinatedLpiStates >= 0 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)CoordinatedLpiStates;
    v3 = 24;
    goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 23;
LABEL_4:
    v9 = CoordinatedLpiStates;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v3,
      (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids,
      v9);
  }
  return (unsigned int)CoordinatedLpiStates;
}
