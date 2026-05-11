/*
 * XREFs of USBType1ChangePowerState @ 0x1C0006580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002D7CC (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C002E220 (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C0032260 (USBType1SetSampleRate.c)
 */

__int64 __fastcall USBType1ChangePowerState(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebp
  unsigned int v5; // ebx
  __int64 v6; // r14
  KIRQL v7; // al
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v5 = -1073741584;
  v6 = *(_QWORD *)(v2 + 144);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      8u,
      0x1Bu,
      (__int64)&WPP_a4e21c92228837c2a2fdb65655c567d9_Traceguids,
      a1,
      a2 - 1);
  if ( v3 != 1 )
  {
    if ( (unsigned int)(v3 - 2) <= 2 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 112));
      *(_BYTE *)(v2 + 45) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 112), v7);
      v5 = USBHwDataPipeReset(a1);
      if ( (v5 & 0x80000000) == 0 )
        return (unsigned int)USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v6 + 144));
    }
    return v5;
  }
  v8 = USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v6 + 136));
  v5 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v5;
    v10 = 28;
LABEL_15:
    LODWORD(v14) = v8;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      8u,
      v10,
      (__int64)&WPP_a4e21c92228837c2a2fdb65655c567d9_Traceguids,
      a1,
      v14);
    return v5;
  }
  v11 = *(_QWORD *)(v2 + 152);
  v12 = *(unsigned int *)(v2 + 104);
  if ( *(_BYTE *)(v11 + 96) )
    v12 = *(unsigned int *)(v11 + 856);
  v8 = USBType1SetSampleRate(a1, v12);
  v5 = v8;
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 29;
    goto LABEL_15;
  }
  return v5;
}
