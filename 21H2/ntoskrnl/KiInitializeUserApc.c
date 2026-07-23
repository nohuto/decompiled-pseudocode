/*
 * XREFs of KiInitializeUserApc @ 0x140230744
 * Callers:
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     KeCopyExceptionRecord @ 0x140251E58 (KeCopyExceptionRecord.c)
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 *     KeContextFromKframes @ 0x140261AA0 (KeContextFromKframes.c)
 *     KePopulateContinuationContext @ 0x1402655CC (KePopulateContinuationContext.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     KiSetupForInstrumentationReturn @ 0x14036D158 (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405253D4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     RtlpGetNonLegacyXStateAreaLength @ 0x14058FB34 (RtlpGetNonLegacyXStateAreaLength.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall KiInitializeUserApc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rdi
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  NTSTATUS v13; // eax
  int v14; // r15d
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  _QWORD *v17; // rdx
  _QWORD *v18; // r14
  _DWORD *v19; // r13
  SIZE_T v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 result; // rax
  _QWORD *v23; // r8
  const char *i; // rax
  unsigned int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // [rsp+30h] [rbp-1A8h]
  unsigned int Size; // [rsp+34h] [rbp-1A4h]
  size_t Size_4; // [rsp+38h] [rbp-1A0h]
  __int64 v32; // [rsp+50h] [rbp-188h]
  _QWORD *v33; // [rsp+50h] [rbp-188h]
  int v34; // [rsp+58h] [rbp-180h]
  _QWORD *v35; // [rsp+60h] [rbp-178h]
  _QWORD *v36; // [rsp+68h] [rbp-170h]
  struct _KTHREAD *v37; // [rsp+80h] [rbp-158h]
  _QWORD *v38; // [rsp+A0h] [rbp-138h]
  char v41[2]; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v42; // [rsp+D2h] [rbp-106h]
  unsigned __int64 v43; // [rsp+E0h] [rbp-F8h]
  __int64 UnbiasedInterruptTime; // [rsp+E8h] [rbp-F0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+100h] [rbp-D8h] BYREF

  v7 = a4;
  v8 = a3;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  if ( a1 )
  {
    v14 = 1048603;
    v28 = 1048603;
    v15 = 0LL;
    if ( (a7 & 2) != 0 && (KeFeatureBits & 0x800000) != 0 )
    {
      v14 = 1048667;
      v28 = 1048667;
      v15 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
    {
      v14 |= 0x100040u;
      v28 = v14;
      v16 = v15 | 0x800;
    }
    else
    {
      v16 = v15 & 0xFFFFFFFFFFFFF7FFuLL;
    }
    v17 = *(_QWORD **)(a2 + 384);
    v33 = v17;
    v18 = v17;
    v35 = v17;
    Size = 0;
    v34 = v14 & 0x100040;
    if ( (v14 & 0x100040) == 0x100040 )
    {
      Size = RtlpGetNonLegacyXStateAreaLength(v16);
      v18 = (_QWORD *)(((unsigned __int64)v18 - Size) & 0xFFFFFFFFFFFFFFC0uLL);
      v35 = v18;
      v17 = v33;
    }
    v36 = (_QWORD *)((unsigned __int64)(v18 - 5) & 0xFFFFFFFFFFFFFFF0uLL);
    v32 = (__int64)(v36 - 4);
    v38 = v36 - 8;
    v19 = v36 - 12;
    v12 = (unsigned __int64)(v36 - 166);
    v20 = (char *)v17 - (char *)(v36 - 166);
    if ( v20 - 1 > 0xFFE )
    {
      ProbeForWrite(v36 - 166, v20, 0x10u);
    }
    else
    {
      if ( v12 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v12 = *(_BYTE *)v12;
      *(_BYTE *)(v12 + v20 - 1) = *(_BYTE *)(v12 + v20 - 1);
      v19 = v36 - 12;
      v14 = v28;
      v12 = (unsigned __int64)(v36 - 166);
      v36 = (_QWORD *)((unsigned __int64)(v18 - 5) & 0xFFFFFFFFFFFFFFF0uLL);
      v18 = v35;
    }
    *(_OWORD *)v38 = 0LL;
    v38[2] = 0LL;
    *(_DWORD *)v38 = 1;
    *((_DWORD *)v38 + 1) = 2;
    if ( (a7 & 1) != 0 )
      *((_DWORD *)v38 + 1) = 3;
    if ( v34 == 1048640 )
    {
      *v19 = -1232;
      v19[1] = *(_DWORD *)(a2 + 384) - v12;
      v19[2] = -1232;
      v19[3] = 1232;
      v19[4] = (_DWORD)v18 - (_DWORD)v19;
      v19[5] = *(_DWORD *)(a2 + 384) - (_DWORD)v18;
      memset(v18, 0, Size);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        v18[1] = v16 | 0x8000000000000000uLL;
    }
    *(_DWORD *)(v12 + 48) = v14;
    KeContextFromKframes(a2, a1, v12);
    v36[3] = *(_QWORD *)(v12 + 152);
    *v36 = *(_QWORD *)(v12 + 248);
    KePopulateContinuationContext();
    v7 = a4;
    v8 = a3;
  }
  else
  {
    Size_4 = *(_QWORD *)(a2 + 208);
    v11 = Size_4 + 1296;
    v32 = Size_4 + 1296;
    if ( (((_BYTE)Size_4 + 16) & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 31) = *(_BYTE *)(v11 + 31);
    v12 = Size_4;
    if ( (v37->MiscFlags & 0x100000) != 0 )
    {
      v13 = KiUnwindUserSspForApcContextCopyBypass(Size_4);
      if ( v13 < 0 )
        RtlRaiseStatus(v13);
    }
  }
  v21 = v32;
  *(_OWORD *)v32 = 0LL;
  *(_OWORD *)(v32 + 16) = 0LL;
  if ( (a7 & 4) != 0 )
  {
    *(_QWORD *)v32 = a5;
    *(_QWORD *)(v32 + 8) = v12;
    a5 = v32;
  }
  *(_QWORD *)v12 = v7;
  *(_QWORD *)(v12 + 8) = a5;
  *(_QWORD *)(v12 + 16) = a6;
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = a7;
  *(_QWORD *)(a2 + 384) = v12;
  *(_QWORD *)(a2 + 360) = KeUserApcDispatcher;
  *(_WORD *)(a2 + 368) = 51;
  if ( *(_BYTE *)(a2 + 43) != 2 )
    KiSetupForInstrumentationReturn(a2);
  LOBYTE(v21) = 1;
  result = KiQueryUnbiasedInterruptTime(v21);
  v43 = result;
  if ( result >= qword_140C4C830 )
  {
    __sidt(v41);
    v23 = (_QWORD *)v42;
    for ( i = (const char *)v42; (unsigned __int64)i < v42 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v25 = 848;
    v26 = qword_140C4C820;
    v27 = (unsigned int)qword_140C4C828;
    while ( v25 >= 8 )
    {
      v26 = __ROR8__(v26 - *v23++, qword_140C4C828);
      v25 -= 8;
    }
    while ( v25 )
    {
      v26 = __ROR8__(v26 - *(unsigned __int8 *)v23, qword_140C4C828);
      v23 = (_QWORD *)((char *)v23 + 1);
      --v25;
    }
    if ( qword_140C4C838 != v26 )
    {
      if ( qword_140C4C7F0 )
        goto LABEL_44;
      qword_140C4C7F0 = (unsigned int)__ROR4__(150994945, 88);
      qword_140C4C7F8 = 0LL;
      qword_140C4C800 = 0LL;
      qword_140C4C808 = 269LL;
      qword_140C4C810 = v42;
    }
    if ( !qword_140C4C7F0 )
    {
LABEL_47:
      LOBYTE(v27) = 1;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v27);
      result = UnbiasedInterruptTime + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140C4C830 = result;
      return result;
    }
LABEL_44:
    if ( stru_140C4C7B0.DeferredRoutine != KiSchedulerDpc )
    {
      stru_140C4C7B0.TargetInfoAsUlong = 275;
      stru_140C4C7B0.DeferredRoutine = KiSchedulerDpc;
      stru_140C4C7B0.DeferredContext = &stru_140C4C7B0;
      stru_140C4C7B0.DpcData = 0LL;
      stru_140C4C7B0.ProcessorHistory = 0LL;
    }
    qword_140C4C818 = 999648LL;
    KeInsertQueueDpc(&stru_140C4C7B0, 0LL, 0LL);
    goto LABEL_47;
  }
  return result;
}
