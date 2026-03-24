/*
 * XREFs of KiInitializeUserApc @ 0x1402B2594
 * Callers:
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     KiDispatchException @ 0x140273320 (KiDispatchException.c)
 *     KeContextFromKframes @ 0x140273B00 (KeContextFromKframes.c)
 *     KePopulateContinuationContext @ 0x14027762C (KePopulateContinuationContext.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     KeCopyExceptionRecord @ 0x1402D3BE8 (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x14036CFA8 (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x140525194 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     RtlpGetNonLegacyXStateAreaLength @ 0x14058F904 (RtlpGetNonLegacyXStateAreaLength.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
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
  signed int v13; // eax
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
  int v27; // [rsp+30h] [rbp-1A8h]
  unsigned int Size; // [rsp+34h] [rbp-1A4h]
  size_t Size_4; // [rsp+38h] [rbp-1A0h]
  __int64 v31; // [rsp+50h] [rbp-188h]
  _QWORD *v32; // [rsp+50h] [rbp-188h]
  int v33; // [rsp+58h] [rbp-180h]
  _QWORD *v34; // [rsp+60h] [rbp-178h]
  _QWORD *v35; // [rsp+68h] [rbp-170h]
  struct _KTHREAD *v36; // [rsp+80h] [rbp-158h]
  _QWORD *v37; // [rsp+A0h] [rbp-138h]
  char v40[2]; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v41; // [rsp+D2h] [rbp-106h]
  unsigned __int64 v42; // [rsp+E0h] [rbp-F8h]
  __int64 UnbiasedInterruptTime; // [rsp+E8h] [rbp-F0h]
  _QWORD v44[19]; // [rsp+100h] [rbp-D8h] BYREF

  v7 = a4;
  v8 = a3;
  memset(v44, 0, sizeof(v44));
  CurrentThread = KeGetCurrentThread();
  v36 = CurrentThread;
  if ( a1 )
  {
    v14 = 1048603;
    v27 = 1048603;
    v15 = 0LL;
    if ( (a7 & 2) != 0 && (KeFeatureBits & 0x800000) != 0 )
    {
      v14 = 1048667;
      v27 = 1048667;
      v15 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
    {
      v14 |= 0x100040u;
      v27 = v14;
      v16 = v15 | 0x800;
    }
    else
    {
      v16 = v15 & 0xFFFFFFFFFFFFF7FFuLL;
    }
    v17 = *(_QWORD **)(a2 + 384);
    v32 = v17;
    v18 = v17;
    v34 = v17;
    Size = 0;
    v33 = v14 & 0x100040;
    if ( (v14 & 0x100040) == 0x100040 )
    {
      Size = RtlpGetNonLegacyXStateAreaLength(v16);
      v18 = (_QWORD *)(((unsigned __int64)v18 - Size) & 0xFFFFFFFFFFFFFFC0uLL);
      v34 = v18;
      v17 = v32;
    }
    v35 = (_QWORD *)((unsigned __int64)(v18 - 5) & 0xFFFFFFFFFFFFFFF0uLL);
    v31 = (__int64)(v35 - 4);
    v37 = v35 - 8;
    v19 = v35 - 12;
    v12 = (unsigned __int64)(v35 - 166);
    v20 = (char *)v17 - (char *)(v35 - 166);
    if ( v20 - 1 > 0xFFE )
    {
      ProbeForWrite(v35 - 166, v20, 0x10u);
    }
    else
    {
      if ( v12 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v12 = *(_BYTE *)v12;
      *(_BYTE *)(v12 + v20 - 1) = *(_BYTE *)(v12 + v20 - 1);
      v19 = v35 - 12;
      v14 = v27;
      v12 = (unsigned __int64)(v35 - 166);
      v35 = (_QWORD *)((unsigned __int64)(v18 - 5) & 0xFFFFFFFFFFFFFFF0uLL);
      v18 = v34;
    }
    *(_OWORD *)v37 = 0LL;
    v37[2] = 0LL;
    *(_DWORD *)v37 = 1;
    *((_DWORD *)v37 + 1) = 2;
    if ( (a7 & 1) != 0 )
      *((_DWORD *)v37 + 1) = 3;
    if ( v33 == 1048640 )
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
    v35[3] = *(_QWORD *)(v12 + 152);
    v21 = *(_QWORD *)(v12 + 248);
    *v35 = v21;
    KePopulateContinuationContext(v21);
    v7 = a4;
    v8 = a3;
  }
  else
  {
    Size_4 = *(_QWORD *)(a2 + 208);
    v11 = Size_4 + 1296;
    v31 = Size_4 + 1296;
    if ( (((_BYTE)Size_4 + 16) & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 31) = *(_BYTE *)(v11 + 31);
    v12 = Size_4;
    if ( (v36->MiscFlags & 0x100000) != 0 )
    {
      v13 = KiUnwindUserSspForApcContextCopyBypass(Size_4);
      if ( v13 < 0 )
        RtlRaiseStatus(v13);
    }
  }
  *(_OWORD *)v31 = 0LL;
  *(_OWORD *)(v31 + 16) = 0LL;
  if ( (a7 & 4) != 0 )
  {
    *(_QWORD *)v31 = a5;
    *(_QWORD *)(v31 + 8) = v12;
    a5 = v31;
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
  result = KiQueryUnbiasedInterruptTime();
  v42 = result;
  if ( result >= qword_140C4C7F0 )
  {
    __sidt(v40);
    v23 = (_QWORD *)v41;
    for ( i = (const char *)v41; (unsigned __int64)i < v41 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v25 = 848;
    v26 = qword_140C4C7E0;
    while ( v25 >= 8 )
    {
      v26 = __ROR8__(v26 - *v23++, qword_140C4C7E8);
      v25 -= 8;
    }
    while ( v25 )
    {
      v26 = __ROR8__(v26 - *(unsigned __int8 *)v23, qword_140C4C7E8);
      v23 = (_QWORD *)((char *)v23 + 1);
      --v25;
    }
    if ( qword_140C4C7F8 != v26 )
    {
      if ( qword_140C4C7B0 )
        goto LABEL_44;
      qword_140C4C7B0 = (unsigned int)__ROR4__(150994945, 88);
      qword_140C4C7B8 = 0LL;
      qword_140C4C7C0 = 0LL;
      qword_140C4C7C8 = 269LL;
      qword_140C4C7D0 = v41;
    }
    if ( !qword_140C4C7B0 )
    {
LABEL_47:
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      result = UnbiasedInterruptTime + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140C4C7F0 = result;
      return result;
    }
LABEL_44:
    if ( stru_140C4C770.DeferredRoutine != KiSchedulerDpc )
    {
      stru_140C4C770.TargetInfoAsUlong = 275;
      stru_140C4C770.DeferredRoutine = KiSchedulerDpc;
      stru_140C4C770.DeferredContext = &stru_140C4C770;
      stru_140C4C770.DpcData = 0LL;
      stru_140C4C770.ProcessorHistory = 0LL;
    }
    qword_140C4C7D8 = 999648LL;
    KeInsertQueueDpc(&stru_140C4C770, 0LL, 0LL);
    goto LABEL_47;
  }
  return result;
}
