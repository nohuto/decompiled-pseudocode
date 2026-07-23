/*
 * XREFs of PnprQuiesceProcessors @ 0x1409AF6A4
 * Callers:
 *     PnprQuiesce @ 0x14050F958 (PnprQuiesce.c)
 * Callees:
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403461F0 (KeRemoveProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeSuspendClockTimerSafe @ 0x140514030 (KeSuspendClockTimerSafe.c)
 *     PnprGetMillisecondCounter @ 0x1409AE6CC (PnprGetMillisecondCounter.c)
 */

__int64 PnprQuiesceProcessors()
{
  void *v0; // rbx
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  __int128 v3; // xmm1
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  _DWORD *v12; // rcx
  int v13; // edx
  int v14; // eax
  int v15; // eax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 result; // rax
  unsigned int MillisecondCounter; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int128 v30; // xmm1
  unsigned int v31; // r8d
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  int v45; // ebx
  int v46; // eax
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // rax
  int i; // edx
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v59[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v60; // [rsp+40h] [rbp-C8h]
  int v61; // [rsp+42h] [rbp-C6h]
  __int16 v62; // [rsp+46h] [rbp-C2h]
  struct _KDPC Dpc; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v64[11]; // [rsp+88h] [rbp-80h] BYREF

  memset(v64, 0, 0xA8uLL);
  v61 = 0;
  v62 = 0;
  DeferredContext_4 = 0;
  memset(&Dpc, 0, sizeof(Dpc));
  v0 = (void *)*(unsigned int *)(PnprContext + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PnprQuiesceProcessorDpc, &DeferredContext);
  Dpc.Importance = 2;
  v3 = *(_OWORD *)&KeActiveProcessors[8];
  v4 = *(_QWORD *)&KeActiveProcessors[80];
  v64[0] = *(_OWORD *)KeActiveProcessors;
  v5 = *(_OWORD *)&KeActiveProcessors[16];
  v64[1] = v3;
  v6 = *(_OWORD *)&KeActiveProcessors[24];
  v64[2] = v5;
  v7 = *(_OWORD *)&KeActiveProcessors[32];
  v64[3] = v6;
  v8 = *(_OWORD *)&KeActiveProcessors[40];
  v64[4] = v7;
  v9 = *(_OWORD *)&KeActiveProcessors[48];
  v64[5] = v8;
  v10 = *(_OWORD *)&KeActiveProcessors[64];
  v64[6] = v9;
  v64[7] = *(_OWORD *)&KeActiveProcessors[56];
  v11 = *(_OWORD *)&KeActiveProcessors[72];
  v64[8] = v10;
  v64[9] = v11;
  *(_QWORD *)&v64[10] = v4;
  KeRemoveProcessorAffinityEx((unsigned __int16 *)v64, *(_DWORD *)(PnprContext + 180));
  v59[1] = *((unsigned __int16 **)&v64[0] + 1);
  v59[0] = (unsigned __int16 *)v64;
  v60 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v59) )
  {
    if ( !Dpc.DpcData )
      Dpc.Number = DeferredContext_4 + 1280;
    DeferredContext = 0;
    KeInsertQueueDpc(&Dpc, v0, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && (int)off_140C006D8[0]() < 0 )
  {
    v12 = (_DWORD *)PnprContext;
    v13 = 2447;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD))off_140C00688[0])(0LL, *(_QWORD *)(PnprContext + 20872));
    KeSuspendClockTimerSafe();
    MillisecondCounter = PnprGetMillisecondCounter(0);
    v26 = PnprContext;
    *(_QWORD *)(PnprContext + 20992) = MillisecondCounter;
    _InterlockedAdd((volatile signed __int32 *)(v26 + 184), 1u);
    while ( *(_DWORD *)(PnprContext + 184) < (int)v0 )
      _mm_pause();
    v27 = PnprContext;
    if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
      while ( *(_DWORD *)(PnprContext + 192) < (int)v0 )
        _mm_pause();
      LOBYTE(v27) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(PnprContext + 20976))(*(_QWORD *)(PnprContext + 20880), v27);
      v28 = PnprGetMillisecondCounter(0);
      v27 = PnprContext;
      *(_DWORD *)(PnprContext + 21000) = v28;
    }
    v29 = *(_QWORD *)&KeActiveProcessors[80];
    v30 = *(_OWORD *)&KeActiveProcessors[8];
    v31 = 0;
    v64[0] = *(_OWORD *)KeActiveProcessors;
    v32 = *(_OWORD *)&KeActiveProcessors[16];
    v64[1] = v30;
    v33 = *(_OWORD *)&KeActiveProcessors[24];
    v64[2] = v32;
    v34 = *(_OWORD *)&KeActiveProcessors[32];
    v64[3] = v33;
    v35 = *(_OWORD *)&KeActiveProcessors[40];
    v64[4] = v34;
    v36 = *(_OWORD *)&KeActiveProcessors[48];
    v64[5] = v35;
    v37 = *(_OWORD *)&KeActiveProcessors[56];
    v64[6] = v36;
    v38 = *(_OWORD *)&KeActiveProcessors[64];
    v64[7] = v37;
    v39 = *(_OWORD *)&KeActiveProcessors[72];
    v64[8] = v38;
    v64[9] = v39;
    *(_QWORD *)&v64[10] = v29;
    v40 = *(_QWORD *)(v27 + 16);
    if ( *(_DWORD *)(v40 + 8) )
    {
      do
      {
        v41 = v31++;
        *(_QWORD *)&KeActiveProcessors[4 * v41 + 4] &= ~*(_QWORD *)(*(_QWORD *)v40 + 8 * v41);
      }
      while ( v31 < *(_DWORD *)(v40 + 8) );
    }
    v12 = (_DWORD *)PnprContext;
    v42 = *(_QWORD *)(PnprContext + 16);
    *(_QWORD *)(PnprContext + 200) = 1LL;
    if ( !*(_DWORD *)(v42 + 16)
      || (v43 = PnprGetMillisecondCounter(0),
          v44 = PnprContext,
          *(_DWORD *)(PnprContext + 21004) = v43,
          v45 = ((__int64 (__fastcall *)(__int64, _QWORD))off_140C00688[0])(1LL, *(_QWORD *)(v44 + 20872)),
          v46 = PnprGetMillisecondCounter(0),
          v12 = (_DWORD *)PnprContext,
          *(_DWORD *)(PnprContext + 21008) = v46,
          v45 >= 0) )
    {
      *(_OWORD *)KeActiveProcessors = v64[0];
      v47 = v64[2];
      *(_OWORD *)&KeActiveProcessors[8] = v64[1];
      v48 = v64[3];
      *(_OWORD *)&KeActiveProcessors[16] = v47;
      v49 = v64[4];
      *(_OWORD *)&KeActiveProcessors[24] = v48;
      v50 = v64[5];
      *(_OWORD *)&KeActiveProcessors[32] = v49;
      v51 = v64[6];
      *(_OWORD *)&KeActiveProcessors[40] = v50;
      v52 = v64[7];
      *(_OWORD *)&KeActiveProcessors[48] = v51;
      v53 = v64[8];
      *(_OWORD *)&KeActiveProcessors[56] = v52;
      v54 = v64[9];
      v55 = *(_QWORD *)&v64[10];
      *(_OWORD *)&KeActiveProcessors[64] = v53;
      *(_OWORD *)&KeActiveProcessors[72] = v54;
      *(_QWORD *)&KeActiveProcessors[80] = v55;
      for ( i = v12[51]; ; i = *(_DWORD *)(PnprContext + 204) )
      {
        result = PnprContext;
        if ( i >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
          break;
        _mm_pause();
      }
      return result;
    }
    v13 = 2532;
  }
  v14 = v12[5246];
  if ( !v14 )
    v14 = v13;
  v12[5246] = v14;
  v15 = v12[5247];
  if ( !v15 )
    v15 = 1;
  v12[5247] = v15;
  *(_OWORD *)KeActiveProcessors = v64[0];
  v16 = v64[2];
  *(_OWORD *)&KeActiveProcessors[8] = v64[1];
  v17 = v64[3];
  *(_OWORD *)&KeActiveProcessors[16] = v16;
  v18 = v64[4];
  *(_OWORD *)&KeActiveProcessors[24] = v17;
  v19 = v64[5];
  *(_OWORD *)&KeActiveProcessors[32] = v18;
  v20 = v64[6];
  *(_OWORD *)&KeActiveProcessors[40] = v19;
  v21 = v64[7];
  *(_OWORD *)&KeActiveProcessors[48] = v20;
  v22 = v64[8];
  *(_OWORD *)&KeActiveProcessors[56] = v21;
  v23 = v64[9];
  result = *(_QWORD *)&v64[10];
  *(_OWORD *)&KeActiveProcessors[64] = v22;
  *(_OWORD *)&KeActiveProcessors[72] = v23;
  *(_QWORD *)&KeActiveProcessors[80] = result;
  return result;
}
