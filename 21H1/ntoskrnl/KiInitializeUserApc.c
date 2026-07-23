/*
 * XREFs of KiInitializeUserApc @ 0x140329350
 * Callers:
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     KeCopyExceptionRecord @ 0x140323088 (KeCopyExceptionRecord.c)
 *     KePopulateContinuationContext @ 0x140329904 (KePopulateContinuationContext.c)
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     KeContextFromKframes @ 0x14032B240 (KeContextFromKframes.c)
 *     KiSetupForInstrumentationReturn @ 0x140369FD8 (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x14051F694 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     RtlpGetNonLegacyXStateAreaLength @ 0x140589DD4 (RtlpGetNonLegacyXStateAreaLength.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 */

unsigned __int64 __fastcall KiInitializeUserApc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  struct _KTHREAD *CurrentThread; // rcx
  int v9; // r15d
  __int64 v10; // r14
  _QWORD *v11; // rcx
  _QWORD *v12; // rsi
  int v13; // r13d
  _DWORD *v14; // r12
  unsigned __int64 v15; // rbx
  SIZE_T v16; // rcx
  unsigned __int64 result; // rax
  _QWORD *v18; // r8
  const char *i; // rax
  unsigned int v20; // r9d
  __int64 v21; // rdx
  NTSTATUS v22; // eax
  int v23; // [rsp+30h] [rbp-198h]
  unsigned int Size; // [rsp+34h] [rbp-194h]
  _QWORD *v26; // [rsp+40h] [rbp-188h]
  _QWORD *v27; // [rsp+40h] [rbp-188h]
  _QWORD *v28; // [rsp+50h] [rbp-178h]
  __int64 v29; // [rsp+60h] [rbp-168h]
  _QWORD *v30; // [rsp+90h] [rbp-138h]
  char v33[2]; // [rsp+C0h] [rbp-108h] BYREF
  __int64 v34; // [rsp+C2h] [rbp-106h]
  struct _KTHREAD *v35; // [rsp+D0h] [rbp-F8h]
  unsigned __int64 v36; // [rsp+D8h] [rbp-F0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+F0h] [rbp-D8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  if ( a1 )
  {
    v9 = 1048603;
    v23 = 1048603;
    v10 = 0LL;
    v29 = 0LL;
    if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
    {
      v9 = 1048667;
      v23 = 1048667;
      v10 = 2048LL;
      v29 = 2048LL;
    }
    v11 = *(_QWORD **)(a2 + 384);
    v26 = v11;
    v12 = v11;
    v28 = v11;
    Size = 0;
    v13 = v9 & 0x100040;
    if ( (v9 & 0x100040) == 0x100040 )
    {
      Size = RtlpGetNonLegacyXStateAreaLength(v10);
      v12 = (_QWORD *)(((unsigned __int64)v12 - Size) & 0xFFFFFFFFFFFFFFC0uLL);
      v28 = v12;
      v11 = v26;
    }
    v27 = (_QWORD *)((unsigned __int64)(v12 - 5) & 0xFFFFFFFFFFFFFFF0uLL);
    v30 = v27 - 4;
    v14 = v27 - 8;
    v15 = (unsigned __int64)(v27 - 162);
    v16 = (char *)v11 - (char *)(v27 - 162);
    if ( v16 - 1 > 0xFFE )
    {
      ProbeForWrite(v27 - 162, v16, 0x10u);
    }
    else
    {
      if ( v15 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + v16 - 1) = *(_BYTE *)(v15 + v16 - 1);
      v14 = v27 - 8;
      v9 = v23;
      v15 = (unsigned __int64)(v27 - 162);
      v27 = (_QWORD *)((unsigned __int64)(v12 - 5) & 0xFFFFFFFFFFFFFFF0uLL);
      v12 = v28;
      v10 = v29;
    }
    *(_OWORD *)v30 = 0LL;
    v30[2] = 0LL;
    *(_DWORD *)v30 = 1;
    *((_DWORD *)v30 + 1) = 2;
    if ( (a7 & 1) != 0 )
      *((_DWORD *)v30 + 1) = 3;
    if ( v13 == 1048640 )
    {
      *v14 = -1232;
      v14[1] = *(_DWORD *)(a2 + 384) - v15;
      v14[2] = -1232;
      v14[3] = 1232;
      v14[4] = (_DWORD)v12 - (_DWORD)v14;
      v14[5] = *(_DWORD *)(a2 + 384) - (_DWORD)v12;
      memset(v12, 0, Size);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        v12[1] = v10 | 0x8000000000000000uLL;
    }
    *(_DWORD *)(v15 + 48) = v9;
    KeContextFromKframes(a2, a1, v15);
    v27[3] = *(_QWORD *)(v15 + 152);
    *v27 = *(_QWORD *)(v15 + 248);
    KePopulateContinuationContext();
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 208);
    if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
    {
      v22 = KiUnwindUserSspForApcContextCopyBypass(v15);
      if ( v22 < 0 )
        RtlRaiseStatus(v22);
    }
  }
  *(_QWORD *)v15 = a4;
  *(_QWORD *)(v15 + 8) = a5;
  *(_QWORD *)(v15 + 16) = a6;
  *(_QWORD *)(v15 + 24) = a3;
  *(_QWORD *)(a2 + 384) = v15;
  *(_QWORD *)(a2 + 360) = KeUserApcDispatcher;
  *(_WORD *)(a2 + 368) = 51;
  if ( *(_BYTE *)(a2 + 43) != 2 )
    KiSetupForInstrumentationReturn(a2);
  result = KiQueryUnbiasedInterruptTime();
  v36 = result;
  if ( result >= qword_140C4C720 )
  {
    __sidt(v33);
    v18 = (_QWORD *)v34;
    for ( i = (const char *)v34; (unsigned __int64)i < v34 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v20 = 848;
    v21 = qword_140C4C710;
    while ( v20 >= 8 )
    {
      v21 = __ROR8__(v21 - *v18++, qword_140C4C718);
      v20 -= 8;
    }
    while ( v20 )
    {
      v21 = __ROR8__(v21 - *(unsigned __int8 *)v18, qword_140C4C718);
      v18 = (_QWORD *)((char *)v18 + 1);
      --v20;
    }
    if ( qword_140C4C728 != v21 )
    {
      if ( qword_140C4C6E0 )
        goto LABEL_29;
      qword_140C4C6E0 = (unsigned int)__ROR4__(150994945, 88);
      qword_140C4C6E8 = 0LL;
      qword_140C4C6F0 = 0LL;
      qword_140C4C6F8 = 269LL;
      qword_140C4C700 = v34;
    }
    if ( !qword_140C4C6E0 )
    {
LABEL_28:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140C4C720 = result;
      return result;
    }
LABEL_29:
    if ( Dpc.DeferredRoutine != KiScanQueues )
    {
      Dpc.TargetInfoAsUlong = 275;
      Dpc.DeferredRoutine = KiScanQueues;
      Dpc.DeferredContext = &Dpc;
      Dpc.DpcData = 0LL;
      Dpc.ProcessorHistory = 0LL;
    }
    qword_140C4C708 = 940992LL;
    KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    goto LABEL_28;
  }
  return result;
}
