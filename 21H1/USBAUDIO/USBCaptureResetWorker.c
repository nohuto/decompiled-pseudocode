/*
 * XREFs of USBCaptureResetWorker @ 0x1C0006860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     PinWaitForStarvationTimeout @ 0x1C0003068 (PinWaitForStarvationTimeout.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C00067BC (USBCaptureWaitForWorkerComplete.c)
 *     USBCaptureStartTransfers @ 0x1C0032AD4 (USBCaptureStartTransfers.c)
 */

void __fastcall USBCaptureResetWorker(PDEVICE_OBJECT DeviceObject, struct _KSPIN *Context)
{
  _QWORD *v2; // r14
  __int64 v4; // rdi
  KIRQL v5; // bp
  KSPIN_LOCK *v6; // rcx
  _QWORD **v7; // rdx
  _QWORD *v8; // rcx
  unsigned int v9; // r8d
  __int64 v10; // r9
  unsigned int *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int started; // eax
  __int64 v15; // rdx
  KIRQL v16; // bl
  __int64 v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+30h] [rbp-28h]

  v2 = Context->Context;
  v4 = v2[19];
  KsPinAcquireProcessingMutex(Context);
  USBCaptureWaitForWorkerComplete((__int64)v2, (_BYTE *)(v4 + 248), (struct _KEVENT *)(v4 + 256));
  v5 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v18 = *(unsigned __int8 *)(v4 + 96);
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)WPP_GLOBAL_Control,
      3u,
      0xAu,
      (__int64)&WPP_26ea32ae020134248ddb7b587958131d_Traceguids,
      Context,
      v18);
  }
  v6 = v2 + 14;
  if ( *(_BYTE *)(v4 + 96) )
  {
    KeReleaseSpinLock(v6, v5);
    PinWaitForStarvationTimeout((__int64)Context, 0LL);
    *(_QWORD *)(v4 + 128) = v4 + 120;
    v7 = (_QWORD **)(v4 + 136);
    *(_QWORD *)(v4 + 120) = v4 + 120;
    while ( 1 )
    {
      v12 = *v7;
      if ( *v7 == v7 )
        break;
      if ( (_QWORD **)v12[1] != v7 || (v8 = (_QWORD *)*v12, *(_QWORD **)(*v12 + 8LL) != v12) )
        __fastfail(3u);
      *v7 = v8;
      v9 = 0;
      v8[1] = v7;
      v10 = v12[3];
      if ( *(_DWORD *)(v10 + 132) )
      {
        v11 = (unsigned int *)(v10 + 144);
        do
        {
          if ( (v11[1] & 0x80000000) == 0 )
            v2[11] -= *v11;
          ++v9;
          v11 += 3;
        }
        while ( v9 < *(_DWORD *)(v10 + 132) );
      }
    }
  }
  else
  {
    KeReleaseSpinLock(v6, v5);
  }
  KsPinReleaseProcessingMutex(Context);
  if ( *(_BYTE *)(v4 + 96) )
  {
    LOBYTE(v13) = 1;
    started = USBCaptureStartTransfers(Context, v13);
    if ( started < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = started;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        8u,
        0xBu,
        (__int64)&WPP_26ea32ae020134248ddb7b587958131d_Traceguids,
        Context,
        v17);
    }
  }
  v16 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  KeSetEvent((PRKEVENT)(v4 + 216), 0, 0);
  *(_BYTE *)(v4 + 208) = 0;
  KeReleaseSpinLock(v2 + 14, v16);
}
