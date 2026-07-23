/*
 * XREFs of KiInitializeUserApc @ 0x1402E8960
 * Callers:
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     KePopulateContinuationContext @ 0x1402E76EC (KePopulateContinuationContext.c)
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 *     KeContextFromKframes @ 0x1402E7EF0 (KeContextFromKframes.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     KeCopyExceptionRecord @ 0x14033192C (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x14036C978 (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405236B4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     RtlpGetNonLegacyXStateAreaLength @ 0x14058DEF4 (RtlpGetNonLegacyXStateAreaLength.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
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
  __int64 v17; // rcx
  unsigned __int64 result; // rax
  _QWORD *v19; // r8
  const char *i; // rax
  unsigned int v21; // r9d
  __int64 v22; // rdx
  NTSTATUS v23; // eax
  int v24; // [rsp+30h] [rbp-198h]
  unsigned int Size; // [rsp+34h] [rbp-194h]
  _QWORD *v27; // [rsp+40h] [rbp-188h]
  _QWORD *v28; // [rsp+40h] [rbp-188h]
  _QWORD *v29; // [rsp+50h] [rbp-178h]
  __int64 v30; // [rsp+60h] [rbp-168h]
  _QWORD *v31; // [rsp+90h] [rbp-138h]
  char v34[2]; // [rsp+C0h] [rbp-108h] BYREF
  __int64 v35; // [rsp+C2h] [rbp-106h]
  struct _KTHREAD *v36; // [rsp+D0h] [rbp-F8h]
  unsigned __int64 v37; // [rsp+D8h] [rbp-F0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+F0h] [rbp-D8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  CurrentThread = KeGetCurrentThread();
  v36 = CurrentThread;
  if ( a1 )
  {
    v9 = 1048603;
    v24 = 1048603;
    v10 = 0LL;
    v30 = 0LL;
    if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
    {
      v9 = 1048667;
      v24 = 1048667;
      v10 = 2048LL;
      v30 = 2048LL;
    }
    v11 = *(_QWORD **)(a2 + 384);
    v27 = v11;
    v12 = v11;
    v29 = v11;
    Size = 0;
    v13 = v9 & 0x100040;
    if ( (v9 & 0x100040) == 0x100040 )
    {
      Size = RtlpGetNonLegacyXStateAreaLength(v10);
      v12 = (_QWORD *)(((unsigned __int64)v12 - Size) & 0xFFFFFFFFFFFFFFC0uLL);
      v29 = v12;
      v11 = v27;
    }
    v28 = (_QWORD *)((unsigned __int64)(v12 - 5) & 0xFFFFFFFFFFFFFFF0uLL);
    v31 = v28 - 4;
    v14 = v28 - 8;
    v15 = (unsigned __int64)(v28 - 162);
    v16 = (char *)v11 - (char *)(v28 - 162);
    if ( v16 - 1 > 0xFFE )
    {
      ProbeForWrite(v28 - 162, v16, 0x10u);
    }
    else
    {
      if ( v15 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + v16 - 1) = *(_BYTE *)(v15 + v16 - 1);
      v14 = v28 - 8;
      v9 = v24;
      v15 = (unsigned __int64)(v28 - 162);
      v28 = (_QWORD *)((unsigned __int64)(v12 - 5) & 0xFFFFFFFFFFFFFFF0uLL);
      v12 = v29;
      v10 = v30;
    }
    *(_OWORD *)v31 = 0LL;
    v31[2] = 0LL;
    *(_DWORD *)v31 = 1;
    *((_DWORD *)v31 + 1) = 2;
    if ( (a7 & 1) != 0 )
      *((_DWORD *)v31 + 1) = 3;
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
    v28[3] = *(_QWORD *)(v15 + 152);
    v17 = *(_QWORD *)(v15 + 248);
    *v28 = v17;
    KePopulateContinuationContext(v17);
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 208);
    if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
    {
      v23 = KiUnwindUserSspForApcContextCopyBypass(v15);
      if ( v23 < 0 )
        RtlRaiseStatus(v23);
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
  v37 = result;
  if ( result >= qword_140C4C650 )
  {
    __sidt(v34);
    v19 = (_QWORD *)v35;
    for ( i = (const char *)v35; (unsigned __int64)i < v35 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v21 = 848;
    v22 = qword_140C4C640;
    while ( v21 >= 8 )
    {
      v22 = __ROR8__(v22 - *v19++, qword_140C4C648);
      v21 -= 8;
    }
    while ( v21 )
    {
      v22 = __ROR8__(v22 - *(unsigned __int8 *)v19, qword_140C4C648);
      v19 = (_QWORD *)((char *)v19 + 1);
      --v21;
    }
    if ( qword_140C4C658 != v22 )
    {
      if ( qword_140C4C610 )
        goto LABEL_29;
      qword_140C4C610 = (unsigned int)__ROR4__(150994945, 88);
      qword_140C4C618 = 0LL;
      qword_140C4C620 = 0LL;
      qword_140C4C628 = 269LL;
      qword_140C4C630 = v35;
    }
    if ( !qword_140C4C610 )
    {
LABEL_28:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140C4C650 = result;
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
    qword_140C4C638 = 940992LL;
    KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    goto LABEL_28;
  }
  return result;
}
