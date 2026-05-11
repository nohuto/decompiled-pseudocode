/*
 * XREFs of USBCaptureBytePosition @ 0x1C00073F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ii @ 0x1C000340C (WPP_RECORDER_SF_ii.c)
 *     USBHwGetCurrentFrame @ 0x1C0003CF8 (USBHwGetCurrentFrame.c)
 *     USBMidiInGetCurrentTime @ 0x1C0003D50 (USBMidiInGetCurrentTime.c)
 *     USBHwGetClockRatio @ 0x1C0003F14 (USBHwGetClockRatio.c)
 */

__int64 __fastcall USBCaptureBytePosition(struct _KSPIN *a1, union _LARGE_INTEGER *a2)
{
  __int64 Context; // rdi
  __int64 v4; // rsi
  __int64 v5; // r14
  int AvailableByteCount; // r15d
  KIRQL v7; // al
  KIRQL v8; // al
  union _LARGE_INTEGER v9; // rcx
  union _LARGE_INTEGER v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned __int64 v14; // rsi
  unsigned __int64 CurrentTime; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  union _LARGE_INTEGER v19; // rax
  bool v20; // cc
  __int64 v22; // [rsp+40h] [rbp-28h] BYREF
  __int128 v23; // [rsp+48h] [rbp-20h] BYREF
  KIRQL NewIrql; // [rsp+B0h] [rbp+48h]
  unsigned int v25; // [rsp+B8h] [rbp+50h] BYREF
  LONG OutputBufferBytes; // [rsp+C0h] [rbp+58h] BYREF
  LONG InputDataBytes; // [rsp+C8h] [rbp+60h] BYREF

  Context = (__int64)a1->Context;
  v25 = 0;
  v22 = 0LL;
  v4 = *(_QWORD *)(Context + 152);
  v5 = 0LL;
  InputDataBytes = 0;
  OutputBufferBytes = 0;
  v23 = 0LL;
  AvailableByteCount = KsPinGetAvailableByteCount(a1, &InputDataBytes, &OutputBufferBytes);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 112));
  NewIrql = v7;
  if ( !*(_BYTE *)(v4 + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(Context + 112), v7);
    USBHwGetClockRatio(Context, &v23, &v22);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 112));
    v5 = v22;
    NewIrql = v8;
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  v9 = *(union _LARGE_INTEGER *)(Context + 80);
  a2[3] = v9;
  a2[2] = v9;
  if ( *(_BYTE *)(Context + 45) )
  {
    AvailableByteCount = USBHwGetCurrentFrame(*(_QWORD *)(Context + 16), &v25);
    if ( AvailableByteCount < 0 )
      goto LABEL_21;
    v10 = *(union _LARGE_INTEGER *)(Context + 88);
    v11 = v25;
    a2[2] = v10;
    v12 = *(unsigned int *)(v4 + 104);
    if ( v11 - v12 >= 0 )
    {
      v13 = *(unsigned int *)(v4 + 100);
      if ( v5 )
      {
        if ( (unsigned int)v12 <= (unsigned int)v23 )
          v14 = *((_QWORD *)&v23 + 1) - v5 * (unsigned int)(v23 - v12);
        else
          v14 = *((_QWORD *)&v23 + 1) + v5 * (unsigned int)(v12 - v23);
        CurrentTime = USBMidiInGetCurrentTime();
        if ( v14 > CurrentTime )
          v14 = CurrentTime;
        v16 = CurrentTime - v14;
        v17 = (CurrentTime - v14) * v13;
        v18 = v17 / 0x989680;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_ii(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            (v17 * (unsigned __int128)0xD6BF94D5E57A42BDuLL) >> 64,
            v16,
            0x1Bu,
            (__int64)&WPP_26ea32ae020134248ddb7b587958131d_Traceguids,
            v18,
            v16);
        a2[2].QuadPart += v18;
        v10 = a2[2];
      }
      else
      {
        v10.QuadPart += (int)v13 * ((int)v11 - (int)v12) / 0x3E8u;
        a2[2] = v10;
      }
    }
    v19 = *(union _LARGE_INTEGER *)(Context + 96);
    v20 = v19.QuadPart <= (unsigned __int64)v10.QuadPart;
  }
  else
  {
    v19 = *(union _LARGE_INTEGER *)(Context + 96);
    v20 = v19.QuadPart <= (unsigned __int64)v9.QuadPart;
  }
  if ( !v20 )
    a2[2] = v19;
LABEL_21:
  a2[4] = KeQueryPerformanceCounter(0LL);
  *(union _LARGE_INTEGER *)(Context + 96) = a2[2];
  KeReleaseSpinLock((PKSPIN_LOCK)(Context + 112), NewIrql);
  return (unsigned int)AvailableByteCount;
}
