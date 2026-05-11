/*
 * XREFs of USBType1RenderBytePosition @ 0x1C0004870
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetCurrentFrame @ 0x1C0003CF8 (USBHwGetCurrentFrame.c)
 *     USBMidiInGetCurrentTime @ 0x1C0003D50 (USBMidiInGetCurrentTime.c)
 *     USBHwGetClockRatio @ 0x1C0003F14 (USBHwGetClockRatio.c)
 *     WPP_RECORDER_SF_di @ 0x1C00043FC (WPP_RECORDER_SF_di.c)
 *     WPP_RECORDER_SF_id @ 0x1C00044C8 (WPP_RECORDER_SF_id.c)
 *     USBType1AdjustPositionWithin1Ms @ 0x1C0004794 (USBType1AdjustPositionWithin1Ms.c)
 */

__int64 __fastcall USBType1RenderBytePosition(__int64 a1, union _LARGE_INTEGER *a2)
{
  int CurrentFrame; // r12d
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rsi
  KIRQL v8; // al
  KIRQL v9; // r13
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  __int64 v15; // rdx
  __int64 *i; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  LONGLONG QuadPart; // rcx
  unsigned __int64 v20; // rax
  union _LARGE_INTEGER v21; // rax
  union _LARGE_INTEGER v22; // rcx
  union _LARGE_INTEGER v23; // rdx
  int v25; // [rsp+20h] [rbp-68h]
  _OWORD v26[4]; // [rsp+40h] [rbp-48h] BYREF
  int v27; // [rsp+90h] [rbp+8h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+18h] BYREF

  v27 = 0;
  v28 = 0LL;
  CurrentFrame = 0;
  v4 = 0LL;
  v26[0] = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
    return 3221225860LL;
  v6 = *(_QWORD *)(v5 + 16);
  if ( !v6 )
    return 3221225860LL;
  v7 = *(_QWORD *)(v5 + 152);
  if ( !v7 )
    return 3221225860LL;
  a2[2].QuadPart = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 112));
  v9 = v8;
  if ( !*(_BYTE *)(v7 + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 112), v8);
    USBHwGetClockRatio(v5, v26, &v28);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 112));
    v4 = v28;
    v9 = v10;
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  if ( *(_BYTE *)(v5 + 45) )
  {
    CurrentFrame = USBHwGetCurrentFrame(v6, &v27);
    if ( CurrentFrame >= 0 )
    {
      USBMidiInGetCurrentTime();
      v14 = v27;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_di((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13, v25);
      v15 = v5 + 64;
      for ( i = *(__int64 **)(v5 + 64); i != (__int64 *)v15; i = (__int64 *)*i )
      {
        v17 = i[3];
        v18 = *(unsigned int *)(v17 + 128);
        if ( (_DWORD)v18 )
        {
          if ( (unsigned int)(v14 - v18) < *(_DWORD *)(v17 + 132) )
          {
            QuadPart = a2[2].QuadPart + *(unsigned int *)(v17 + 12LL * (unsigned int)(v14 - v18) + 140);
            a2[2].QuadPart = QuadPart;
            if ( v4 )
            {
              v20 = USBType1AdjustPositionWithin1Ms(v5, v4, (__int64)v26, v14);
              QuadPart = a2[2].QuadPart;
            }
            else
            {
              v20 = 0LL;
            }
            a2[2].QuadPart = QuadPart + v20;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_id((__int64)WPP_GLOBAL_Control->DeviceExtension, v15, v17, v18, v25);
            }
            break;
          }
          if ( (unsigned int)(v14 - v18) < 0x7FFFFFFF )
            a2[2].QuadPart += *((unsigned int *)i + 9);
        }
      }
      v21.QuadPart = a2[2].QuadPart + *(_QWORD *)(v5 + 88);
      a2[2] = v21;
      v22 = *(union _LARGE_INTEGER *)(v5 + 80);
      if ( v21.QuadPart > (unsigned __int64)v22.QuadPart
        || (v22 = *(union _LARGE_INTEGER *)(v5 + 96), v21.QuadPart < (unsigned __int64)v22.QuadPart) )
      {
        a2[2] = v22;
      }
    }
  }
  else
  {
    v23 = *(union _LARGE_INTEGER *)(v5 + 88);
    if ( v23.QuadPart <= *(_QWORD *)(v5 + 96) )
      v23 = *(union _LARGE_INTEGER *)(v5 + 96);
    a2[2] = v23;
  }
  a2[4] = KeQueryPerformanceCounter(0LL);
  *(union _LARGE_INTEGER *)(v5 + 96) = a2[2];
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 112), v9);
  return (unsigned int)CurrentFrame;
}
