/*
 * XREFs of USBCaptureCompleteCallback @ 0x1C0007150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0006CC4 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall USBCaptureCompleteCallback(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KSPIN *v3; // r15
  int *v5; // rsi
  PVOID Context; // rbp
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int32 v11; // et0
  __int64 v12; // rdx
  bool v13; // r12
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int *v16; // rcx
  _QWORD *v17; // rcx
  PKSGATE i; // rax
  struct _IO_WORKITEM *v19; // rcx
  int v21; // [rsp+20h] [rbp-48h]
  KIRQL NewIrql; // [rsp+78h] [rbp+10h]

  v3 = (struct _KSPIN *)a3[5];
  v5 = (int *)a3[3];
  Context = v3->Context;
  v8 = *((_QWORD *)Context + 19);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
  v11 = _InterlockedAdd((volatile signed __int32 *)Context + 14, 0xFFFFFFFF);
  v12 = *(unsigned int *)(a2 + 48);
  v13 = v11 == 0;
  if ( ((int)v12 < 0 || v5[1] < 0)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_dD((__int64)WPP_GLOBAL_Control->DeviceExtension, v12, v9, v10, v21);
  }
  if ( v13 )
  {
    v14 = *((_QWORD *)Context + 19);
    if ( !*(_BYTE *)(v14 + 12) )
    {
      *(_DWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v14 + 32) = 0LL;
      *(_DWORD *)(v14 + 40) = 0;
      *(_QWORD *)(v14 + 48) = 0LL;
      *(_QWORD *)(v14 + 16) = 0LL;
    }
    KeSetEvent((PRKEVENT)Context + 5, 0, 0);
    if ( !*(_BYTE *)(v8 + 96) )
      goto LABEL_37;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        4u,
        0xDu,
        (__int64)&WPP_26ea32ae020134248ddb7b587958131d_Traceguids);
  }
  if ( *(_BYTE *)(v8 + 96) && !*(_BYTE *)v8 )
  {
    v15 = (unsigned int)v5[1] >> 31;
    *(_BYTE *)v8 = v5[1] < 0;
    if ( !(_BYTE)v15 )
    {
      *((_BYTE *)Context + 45) = 1;
      v12 = 0LL;
      *(_DWORD *)(v8 + 104) = v5[33] + v5[32];
      if ( v5[33] )
      {
        v16 = (unsigned int *)(v5 + 36);
        do
        {
          if ( (v16[1] & 0x80000000) == 0 )
            *((_QWORD *)Context + 11) += *v16;
          v12 = (unsigned int)(v12 + 1);
          v16 += 3;
        }
        while ( (unsigned int)v12 < v5[33] );
      }
      v17 = *(_QWORD **)(v8 + 144);
      if ( *v17 != v8 + 136 )
        __fastfail(3u);
      *a3 = v8 + 136;
      a3[1] = v17;
      *v17 = a3;
      *(_QWORD *)(v8 + 144) = a3;
      if ( !*(_BYTE *)(v8 + 97) )
      {
        *(_BYTE *)(v8 + 97) = 1;
        for ( i = KsPinGetAndGate(v3); i && _InterlockedIncrement(&i->Count) == 1; i = i->NextGate )
          ;
        KsPinAttemptProcessing(v3, 1u);
      }
    }
    if ( v13 )
    {
      *(_BYTE *)v8 = 1;
    }
    else if ( !*(_BYTE *)v8 )
    {
      goto LABEL_37;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        4u,
        0xFu,
        (__int64)&WPP_26ea32ae020134248ddb7b587958131d_Traceguids);
    *((_BYTE *)Context + 45) = 0;
    *(_BYTE *)(v8 + 99) = 1;
    if ( !*(_BYTE *)(v8 + 208) )
    {
      v19 = *(struct _IO_WORKITEM **)(v8 + 240);
      *(_BYTE *)(v8 + 208) = 1;
      IoQueueWorkItem(v19, (PIO_WORKITEM_ROUTINE)USBCaptureResetWorker, CriticalWorkQueue, v3);
    }
  }
LABEL_37:
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, NewIrql);
  return 3221225494LL;
}
