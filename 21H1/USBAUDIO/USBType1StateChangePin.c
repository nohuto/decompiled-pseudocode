/*
 * XREFs of USBType1StateChangePin @ 0x1C00061F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0001524 (WPP_RECORDER_SF_qdd.c)
 *     PinWaitForStarvationTimeout @ 0x1C0003068 (PinWaitForStarvationTimeout.c)
 *     USBType1AsyncEndpointAbortFeedback @ 0x1C0005028 (USBType1AsyncEndpointAbortFeedback.c)
 *     USBType1ClearLeftovers @ 0x1C0005F04 (USBType1ClearLeftovers.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002D74C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C002E1A0 (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C00321E0 (USBType1SetSampleRate.c)
 *     USBType1NeedLockDelay @ 0x1C0032438 (USBType1NeedLockDelay.c)
 */

__int64 __fastcall USBType1StateChangePin(PKSPIN Pin, __int64 a2, int a3)
{
  _QWORD *Context; // r15
  int v5; // edi
  unsigned int v7; // esi
  _QWORD *v8; // r13
  __int64 v9; // r14
  int v10; // ebx
  int v11; // ebx
  KIRQL v12; // al
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  KIRQL v20; // al
  KIRQL v21; // bl
  __int64 v23; // [rsp+30h] [rbp-38h]
  union _LARGE_INTEGER v24; // [rsp+70h] [rbp+8h] BYREF

  Context = Pin->Context;
  v5 = a2;
  v7 = 0;
  v8 = (_QWORD *)Context[18];
  v9 = Context[19];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      8u,
      0x13u,
      (__int64)&WPP_a4e21c92228837c2a2fdb65655c567d9_Traceguids,
      Pin,
      a2,
      a3);
  if ( a3 )
  {
    v10 = a3 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          *(_BYTE *)(v9 + 100) = 1;
          *(_BYTE *)(v9 + 98) = 1;
        }
        return v7;
      }
      if ( v5 != 3 )
        return v7;
      KsPinAcquireProcessingMutex(Pin);
      v12 = KeAcquireSpinLockRaiseToDpc(Context + 14);
      *(_BYTE *)(v9 + 100) = 0;
      KeReleaseSpinLock(Context + 14, v12);
      v24.QuadPart = -50000000LL;
      v7 = PinWaitForStarvationTimeout((__int64)Pin, &v24);
      if ( v7 == 258 )
      {
        USBHwDataPipeReset(Pin);
        PinWaitForStarvationTimeout((__int64)Pin, 0LL);
      }
      if ( *(_BYTE *)(v9 + 96) )
        USBType1AsyncEndpointAbortFeedback((__int64)Pin);
      KsPinReleaseProcessingMutex(Pin);
      *(_BYTE *)(v9 + 99) = USBType1NeedLockDelay(Context);
      goto LABEL_38;
    }
    if ( v5 )
    {
      if ( v5 != 2 )
        return v7;
      if ( !*((_BYTE *)Context + 46) )
        v7 = USBHwSelectStreamingAudioInterface(Pin, v8[18]);
      goto LABEL_38;
    }
    v13 = USBHwSelectStreamingAudioInterface(Pin, v8[17]);
    v7 = v13;
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v7;
      LODWORD(v23) = v13;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        8u,
        0x14u,
        (__int64)&WPP_a4e21c92228837c2a2fdb65655c567d9_Traceguids,
        Pin,
        v23);
      goto LABEL_39;
    }
    if ( !*(_BYTE *)(v9 + 96) )
      goto LABEL_30;
    v15 = *(_DWORD *)(v9 + 56);
    v16 = 0LL;
    if ( v15 )
    {
      v17 = *(_QWORD *)(v9 + 72);
      while ( *(_BYTE *)(v17 + 24 * v16 + 2) != *(_BYTE *)(v8[22] + 2LL) )
      {
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v15 )
          goto LABEL_25;
      }
      *(_QWORD *)(v9 + 888) = *(_QWORD *)(v17 + 24 * v16 + 8);
    }
LABEL_25:
    if ( !*(_QWORD *)(v9 + 888) )
    {
      v7 = -1073741668;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_33;
      LODWORD(v23) = -1073741668;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        8u,
        0x15u,
        (__int64)&WPP_a4e21c92228837c2a2fdb65655c567d9_Traceguids,
        Pin,
        v23);
    }
    if ( (v7 & 0x80000000) == 0 )
    {
      *((_DWORD *)Context + 26) = *(_DWORD *)(v9 + 856);
LABEL_30:
      v18 = USBType1SetSampleRate(Pin, *((unsigned int *)Context + 26));
      v7 = v18;
      if ( v18 >= 0 )
        return v7;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = v18;
        WPP_RECORDER_SF_qd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v19,
          8u,
          0x16u,
          (__int64)&WPP_a4e21c92228837c2a2fdb65655c567d9_Traceguids,
          Pin,
          v23);
      }
    }
LABEL_33:
    USBHwSelectStreamingAudioInterface(Pin, v8[18]);
    goto LABEL_38;
  }
  v20 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  *((_BYTE *)Context + 45) = 0;
  v21 = v20;
  USBType1ClearLeftovers(Context);
  Context[10] = 0LL;
  Context[11] = 0LL;
  Context[12] = 0LL;
  *(_BYTE *)(v9 + 97) = 0;
  KeReleaseSpinLock(Context + 14, v21);
LABEL_38:
  if ( (v7 & 0x80000000) == 0 )
    return v7;
LABEL_39:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v23) = v7;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      8u,
      0x17u,
      (__int64)&WPP_a4e21c92228837c2a2fdb65655c567d9_Traceguids,
      Pin,
      v23);
  }
  return v7;
}
