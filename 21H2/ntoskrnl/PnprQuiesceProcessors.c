/*
 * XREFs of PnprQuiesceProcessors @ 0x140A68BE8
 * Callers:
 *     PnprQuiesce @ 0x140563058 (PnprQuiesce.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeSuspendClockTimerSafe @ 0x14056CC3C (KeSuspendClockTimerSafe.c)
 *     PnprGetMillisecondCounter @ 0x140A67C14 (PnprGetMillisecondCounter.c)
 */

__int64 PnprQuiesceProcessors()
{
  void *v0; // rbx
  unsigned __int8 CurrentIrql; // cl
  __int64 v2; // rsi
  __int64 v3; // r15
  _DWORD *SchedulerAssist; // r9
  int *v5; // rdi
  int *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 result; // rax
  unsigned int MillisecondCounter; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _OWORD *v31; // rcx
  int *v32; // rax
  __int64 v33; // rdx
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  unsigned int v41; // r8d
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  int v48; // ebx
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  int v52; // eax
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  _OWORD *v60; // rax
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v70[2]; // [rsp+30h] [rbp-D8h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+80h] [rbp-88h]
  _QWORD v73[34]; // [rsp+88h] [rbp-80h] BYREF

  memset(v73, 0, 0x108uLL);
  memset((void *)&Dpc.Number, 0, 62);
  LODWORD(v72) = 0;
  DeferredContext_4 = 0;
  v0 = (void *)*(unsigned int *)(PnprContext + 176);
  CurrentIrql = KeGetCurrentIrql();
  v2 = 2LL;
  __writecr8(2uLL);
  v3 = (unsigned int)LOBYTE(Dpc.Number) + 1;
  if ( KiIrqlFlags
    && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)(LOBYTE(Dpc.Number) + 1)) != 0
    && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)((unsigned __int64)((unsigned int)LOBYTE(Dpc.Number) + 1) << (LOBYTE(Dpc.Number) + 1 + CurrentIrql))
                          - (LOBYTE(Dpc.Number)
                           + 1)) & 4;
  }
  KeInitializeDpc((PRKDPC)&Dpc.DpcListEntry, (PKDEFERRED_ROUTINE)PnprQuiesceProcessorDpc, &DeferredContext);
  v5 = KeActiveProcessors;
  BYTE1(Dpc.DpcListEntry.Next) = 2;
  v6 = KeActiveProcessors;
  v7 = v73;
  v8 = 2LL;
  do
  {
    v9 = *((_OWORD *)v6 + 1);
    *v7 = *(_OWORD *)v6;
    v10 = *((_OWORD *)v6 + 2);
    v7[1] = v9;
    v11 = *((_OWORD *)v6 + 3);
    v7[2] = v10;
    v12 = *((_OWORD *)v6 + 4);
    v7[3] = v11;
    v13 = *((_OWORD *)v6 + 5);
    v7[4] = v12;
    v14 = *((_OWORD *)v6 + 6);
    v7[5] = v13;
    v15 = *((_OWORD *)v6 + 7);
    v6 += 32;
    v7[6] = v14;
    v7 += 8;
    *(v7 - 1) = v15;
    v8 -= v3;
  }
  while ( v8 );
  *(_QWORD *)v7 = *(_QWORD *)v6;
  KeRemoveProcessorAffinityEx((unsigned __int16 *)v73, *(_DWORD *)(PnprContext + 180));
  v70[1] = (unsigned __int16 *)v73[1];
  v70[0] = (unsigned __int16 *)v73;
  LOWORD(Dpc.TargetInfoAsUlong) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v70) )
  {
    if ( !v72 )
      WORD1(Dpc.DpcListEntry.Next) = DeferredContext_4 + 2048;
    DeferredContext = 0;
    KeInsertQueueDpc((PRKDPC)&Dpc.DpcListEntry, v0, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && (int)off_140C01D28[0]() < 0 )
  {
    v16 = PnprContext;
    v17 = *(_DWORD *)(PnprContext + 33272);
    if ( !v17 )
      v17 = 2455;
    *(_DWORD *)(PnprContext + 33272) = v17;
    v18 = *(_DWORD *)(v16 + 33276);
    if ( !v18 )
      v18 = v3;
    *(_DWORD *)(v16 + 33276) = v18;
    v19 = v73;
    do
    {
      v20 = v19[1];
      *(_OWORD *)v5 = *v19;
      v21 = v19[2];
      *((_OWORD *)v5 + 1) = v20;
      v22 = v19[3];
      *((_OWORD *)v5 + 2) = v21;
      v23 = v19[4];
      *((_OWORD *)v5 + 3) = v22;
      v24 = v19[5];
      *((_OWORD *)v5 + 4) = v23;
      v25 = v19[6];
      *((_OWORD *)v5 + 5) = v24;
      v26 = v19[7];
      v19 += 8;
      *((_OWORD *)v5 + 6) = v25;
      v5 += 32;
      *((_OWORD *)v5 - 1) = v26;
      v2 -= v3;
    }
    while ( v2 );
LABEL_23:
    result = *(_QWORD *)v19;
    *(_QWORD *)v5 = result;
    return result;
  }
  ((void (__fastcall *)(_QWORD, _QWORD))off_140C01CD8[0])(0LL, *(_QWORD *)(PnprContext + 33160));
  KeSuspendClockTimerSafe();
  MillisecondCounter = PnprGetMillisecondCounter(0);
  v30 = PnprContext;
  *(_QWORD *)(PnprContext + 33280) = MillisecondCounter;
  _InterlockedAdd((volatile signed __int32 *)(v30 + 184), v3);
  while ( *(_DWORD *)(PnprContext + 184) < (int)v0 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), v3);
    while ( *(_DWORD *)(PnprContext + 192) < (int)v0 )
      _mm_pause();
    LOBYTE(v29) = v3;
    (*(void (__fastcall **)(_QWORD, __int64))(PnprContext + 33264))(*(_QWORD *)(PnprContext + 33168), v29);
    *(_DWORD *)(PnprContext + 33288) = PnprGetMillisecondCounter(0);
  }
  v31 = v73;
  v32 = KeActiveProcessors;
  v33 = 2LL;
  do
  {
    v34 = *((_OWORD *)v32 + 1);
    *v31 = *(_OWORD *)v32;
    v35 = *((_OWORD *)v32 + 2);
    v31[1] = v34;
    v36 = *((_OWORD *)v32 + 3);
    v31[2] = v35;
    v37 = *((_OWORD *)v32 + 4);
    v31[3] = v36;
    v38 = *((_OWORD *)v32 + 5);
    v31[4] = v37;
    v39 = *((_OWORD *)v32 + 6);
    v31[5] = v38;
    v40 = *((_OWORD *)v32 + 7);
    v32 += 32;
    v31[6] = v39;
    v31 += 8;
    *(v31 - 1) = v40;
    v33 -= v3;
  }
  while ( v33 );
  v41 = 0;
  *(_QWORD *)v31 = *(_QWORD *)v32;
  v42 = *(_QWORD *)(PnprContext + 16);
  if ( *(_DWORD *)(v42 + 8) )
  {
    do
    {
      v43 = v41;
      v41 += v3;
      *(_QWORD *)&KeActiveProcessors[2 * v43 + 2] &= ~*(_QWORD *)(*(_QWORD *)v42 + 8 * v43);
    }
    while ( v41 < *(_DWORD *)(v42 + 8) );
  }
  v44 = PnprContext;
  v45 = *(_QWORD *)(PnprContext + 16);
  *(_DWORD *)(PnprContext + 204) = 0;
  *(_DWORD *)(v44 + 200) = v3;
  if ( *(_DWORD *)(v45 + 16) )
  {
    v46 = PnprGetMillisecondCounter(0);
    v47 = PnprContext;
    *(_DWORD *)(PnprContext + 33292) = v46;
    v48 = ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C01CD8[0])((unsigned int)v3, *(_QWORD *)(v47 + 33160));
    v49 = PnprGetMillisecondCounter(0);
    v50 = PnprContext;
    *(_DWORD *)(PnprContext + 33296) = v49;
    if ( v48 < 0 )
    {
      v51 = *(_DWORD *)(v50 + 33272);
      if ( !v51 )
        v51 = 2540;
      *(_DWORD *)(v50 + 33272) = v51;
      v52 = *(_DWORD *)(v50 + 33276);
      if ( !v52 )
        v52 = v3;
      *(_DWORD *)(v50 + 33276) = v52;
      v19 = v73;
      do
      {
        v53 = v19[1];
        *(_OWORD *)v5 = *v19;
        v54 = v19[2];
        *((_OWORD *)v5 + 1) = v53;
        v55 = v19[3];
        *((_OWORD *)v5 + 2) = v54;
        v56 = v19[4];
        *((_OWORD *)v5 + 3) = v55;
        v57 = v19[5];
        *((_OWORD *)v5 + 4) = v56;
        v58 = v19[6];
        *((_OWORD *)v5 + 5) = v57;
        v59 = v19[7];
        v19 += 8;
        *((_OWORD *)v5 + 6) = v58;
        v5 += 32;
        *((_OWORD *)v5 - 1) = v59;
        v2 -= v3;
      }
      while ( v2 );
      goto LABEL_23;
    }
  }
  v60 = v73;
  do
  {
    v61 = v60[1];
    *(_OWORD *)v5 = *v60;
    v62 = v60[2];
    *((_OWORD *)v5 + 1) = v61;
    v63 = v60[3];
    *((_OWORD *)v5 + 2) = v62;
    v64 = v60[4];
    *((_OWORD *)v5 + 3) = v63;
    v65 = v60[5];
    *((_OWORD *)v5 + 4) = v64;
    v66 = v60[6];
    *((_OWORD *)v5 + 5) = v65;
    v67 = v60[7];
    v60 += 8;
    *((_OWORD *)v5 + 6) = v66;
    v5 += 32;
    *((_OWORD *)v5 - 1) = v67;
    v2 -= v3;
  }
  while ( v2 );
  *(_QWORD *)v5 = *(_QWORD *)v60;
  while ( 1 )
  {
    result = PnprContext;
    if ( *(_DWORD *)(PnprContext + 204) >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
      break;
    _mm_pause();
  }
  return result;
}
