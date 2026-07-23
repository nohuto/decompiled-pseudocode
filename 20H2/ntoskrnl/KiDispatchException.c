/*
 * XREFs of KiDispatchException @ 0x1402E7710
 * Callers:
 *     KiInitializeUserApc @ 0x1402E8960 (KiInitializeUserApc.c)
 *     KxExceptionDispatchOnExceptionStack @ 0x1403FCDA0 (KxExceptionDispatchOnExceptionStack.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404101C0 (KiFastFailDispatch.c)
 *     KiRaiseException @ 0x1405203B0 (KiRaiseException.c)
 *     KiParkUmsThread @ 0x140524440 (KiParkUmsThread.c)
 *     PspInitializeThunkContext @ 0x1406934F4 (PspInitializeThunkContext.c)
 *     KiSwapToUmsThread @ 0x1408C0160 (KiSwapToUmsThread.c)
 *     PspFreeUserFiberShadowStack @ 0x14090C9C4 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     RtlDispatchException @ 0x1402E5630 (RtlDispatchException.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     RtlpCopyExtendedContext @ 0x1402E6970 (RtlpCopyExtendedContext.c)
 *     RtlInitializeExtendedContext2 @ 0x1402E7080 (RtlInitializeExtendedContext2.c)
 *     KePopulateContinuationContext @ 0x1402E76EC (KePopulateContinuationContext.c)
 *     KdTrap @ 0x1402E7C6C (KdTrap.c)
 *     KiPreprocessFault @ 0x1402E7D20 (KiPreprocessFault.c)
 *     KeContextFromKframes @ 0x1402E7EF0 (KeContextFromKframes.c)
 *     KeCopyExceptionRecord @ 0x14033192C (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x14036C978 (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1403F86F0 (ZwTerminateProcess.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x1403FBDD0 (KeContextToKframes.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiTpHandleTrap @ 0x14051B6F0 (KiTpHandleTrap.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     DbgkForwardException @ 0x14072DF80 (DbgkForwardException.c)
 *     KdIsThisAKdTrap @ 0x1409B8008 (KdIsThisAKdTrap.c)
 */

int __fastcall KiDispatchException(
        PEXCEPTION_RECORD ExceptionRecord,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  char v5; // r12
  _KPROCESS *Process; // rcx
  ULONG64 v9; // r15
  unsigned __int64 v10; // rax
  void *v11; // rsp
  ULONG64 v12; // r9
  ULONG v13; // r15d
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KTHREAD *v18; // rax
  unsigned __int64 v19; // r12
  char IsThisAKdTrap; // al
  int v21; // r8d
  _KPROCESS *v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r9
  int ExceptionCode; // r15d
  __int64 v31; // r8
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  int v34; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextFlags; // [rsp+34h] [rbp+4h]
  int v36; // [rsp+38h] [rbp+8h]
  unsigned __int64 v37; // [rsp+40h] [rbp+10h]
  ULONG ContextLength; // [rsp+48h] [rbp+18h] BYREF
  _KPROCESS *v39; // [rsp+50h] [rbp+20h]
  PCONTEXT_EX ContextEx; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp+30h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp+38h]
  unsigned __int64 v43; // [rsp+70h] [rbp+40h]
  PEXCEPTION_RECORD v44; // [rsp+78h] [rbp+48h]
  _QWORD *v45; // [rsp+80h] [rbp+50h]
  unsigned __int64 v46; // [rsp+88h] [rbp+58h]
  unsigned __int64 v47; // [rsp+90h] [rbp+60h]
  __int64 v48; // [rsp+98h] [rbp+68h]
  int *v49; // [rsp+A8h] [rbp+78h]
  __int64 v50; // [rsp+B0h] [rbp+80h]
  int v51; // [rsp+C0h] [rbp+90h]
  _DWORD v52[37]; // [rsp+C4h] [rbp+94h] BYREF
  __int128 v53; // [rsp+160h] [rbp+130h] BYREF
  __int64 v54; // [rsp+170h] [rbp+140h]

  v5 = a4;
  LOWORD(v34) = a4;
  v37 = a2;
  v44 = ExceptionRecord;
  v50 = a3;
  ContextEx = 0LL;
  ContextLength = 0;
  memset(v52, 0, sizeof(v52));
  v53 = 0LL;
  v54 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v39 = Process;
  __incgsdword(0x8030u);
  if ( a5 && *(_QWORD *)&Process[2].Affinity.Count )
  {
    ExceptionCode = ExceptionRecord->ExceptionCode;
    switch ( ExceptionRecord->ExceptionCode )
    {
      case 0x10000002:
        ExceptionRecord->ExceptionCode = -1073741795;
        break;
      case 0x10000003:
        ExceptionRecord->ExceptionCode = -1073741676;
        break;
      case 0x10000004:
        ExceptionRecord->ExceptionCode = -1073741819;
        break;
    }
    if ( ObGetCurrentIrql() < 2u
      && (v5
       || (ExceptionRecord->ExceptionCode == -2147483647
        || (unsigned int)(ExceptionRecord->ExceptionCode + 1073741819) <= 1)
       && ExceptionRecord->ExceptionInformation[1] <= 0x7FFFFFFF0000LL) )
    {
      LODWORD(v18) = ((__int64 (__fastcall *)(PEXCEPTION_RECORD, unsigned __int64, __int64, _QWORD, char))xmmword_140C1DEC0)(
                       ExceptionRecord,
                       v37,
                       a3,
                       0LL,
                       v5);
      if ( (_BYTE)v18 )
        return (int)v18;
    }
    ExceptionRecord->ExceptionCode = ExceptionCode;
    Process = v39;
  }
  ContextFlags = 1048607;
  v9 = 0LL;
  if ( v5 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      ContextFlags = 1048671;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v9 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800LL) != 0
          && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) == 0 )
        {
          v9 &= ~0x800uLL;
        }
      }
    }
  }
  RtlGetExtendedContextLength2(ContextFlags, &ContextLength, v9);
  v10 = ContextLength + 15LL;
  if ( v10 <= ContextLength )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
  v49 = &v34;
  if ( v5 )
    memset(&v34, 0, ContextLength);
  v12 = v9;
  v13 = ContextFlags;
  RtlInitializeExtendedContext2((PCONTEXT)&v34, ContextFlags, &ContextEx, v12);
  KeContextFromKframes(a3, v37, &v34);
  if ( ExceptionRecord->ExceptionCode == -2147483645 )
  {
    --*(_QWORD *)&v52[25];
    if ( (KiDynamicTraceMask & 2) != 0 )
    {
      LOBYTE(v15) = a5;
      LOBYTE(v14) = v5;
      if ( (unsigned __int8)KiTpHandleTrap(ExceptionRecord, &v34, v14, v15) )
        goto LABEL_14;
    }
  }
  LOBYTE(v14) = v5;
  if ( (unsigned __int8)KiPreprocessFault((int)ExceptionRecord, (int)&v34, v14) )
    goto LABEL_14;
  if ( !v5 )
  {
    if ( (!a5
       || !(unsigned __int8)KdTrap(a3, v37, (_DWORD)ExceptionRecord, (unsigned int)&v34, 0, 0)
       && !RtlDispatchException(ExceptionRecord, (PCONTEXT)&v34))
      && !(unsigned __int8)KdTrap(a3, v37, (_DWORD)ExceptionRecord, (unsigned int)&v34, 0, 1) )
    {
      KeBugCheckEx(
        0x1Eu,
        ExceptionRecord->ExceptionCode,
        (ULONG_PTR)ExceptionRecord->ExceptionAddress,
        ExceptionRecord->ExceptionInformation[0],
        ExceptionRecord->ExceptionInformation[1]);
    }
    goto LABEL_14;
  }
  v19 = *(_QWORD *)&v52[1];
  v43 = *(_QWORD *)&v52[1];
  if ( (HIDWORD(v39[2].Header.WaitListHead.Flink) & 1) == 0 )
  {
    v18 = KeGetCurrentThread();
    if ( v18->ApcState.Process[1].AffinityPadding[10]
      && ExceptionRecord->ExceptionCode == -2147483646
      && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x40000u;
LABEL_75:
      _enable();
      return (int)v18;
    }
    if ( ((unsigned __int16)CurrentThread & 0xFFF8) == 0x20 )
    {
      if ( ExceptionRecord->ExceptionCode == -2147483645 )
      {
        ExceptionRecord->ExceptionCode = 1073741855;
      }
      else if ( ExceptionRecord->ExceptionCode == -2147483644 )
      {
        ExceptionRecord->ExceptionCode = 1073741854;
      }
      v19 = (unsigned int)v19 & 0xFFFFFFF0;
      v43 = v19;
    }
  }
  if ( a5 )
  {
    LODWORD(v39) = ExceptionRecord->ExceptionCode;
    IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
    BYTE1(v34) = IsThisAKdTrap;
    v22 = KeGetCurrentThread()->ApcState.Process;
    if ( !v22[1].AffinityPadding[9] && !KdIgnoreUmExceptions && v21 != -2147483597 || IsThisAKdTrap )
    {
      if ( (unsigned __int8)KdTrap(a3, v37, (_DWORD)ExceptionRecord, (unsigned int)&v34, v34, 0) )
      {
        v5 = v34;
LABEL_14:
        LOBYTE(BugCheckParameter4) = v5;
        LODWORD(v18) = KeContextToKframes(a3, v37, (unsigned int)&v34, v41, BugCheckParameter4);
        if ( !BYTE1(v34) )
          return (int)v18;
        _disable();
        LODWORD(v18) = KiSetupForInstrumentationReturn(a3);
        goto LABEL_75;
      }
      v21 = (int)v39;
    }
    if ( v21 == -2147483597
      || (LOBYTE(v22) = 1, LODWORD(v18) = DbgkForwardException(ExceptionRecord, v22, 0LL), !(_BYTE)v18) )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x100u;
      _enable();
      v51 = -1073741819;
      v36 = 0;
      v23 = v19;
      v41 = v19;
      if ( (v13 & 0x100040) == 0x100040 )
      {
        v23 = (v19 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL;
        v41 = v23;
      }
      v37 = (v23 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
      v45 = (_QWORD *)v37;
      v47 = v37 - 160;
      v48 = v37 - 192;
      v24 = v37 - 1424;
      v46 = v37 - 1424;
      LODWORD(v53) = -1232;
      v25 = v19 - (v37 - 1424);
      DWORD1(v53) = v19 - (v37 - 1424);
      *((_QWORD *)&v53 + 1) = 0x4D0FFFFFB30LL;
      LODWORD(v54) = v23 - (v37 - 192);
      HIDWORD(v54) = v19 - v23;
      if ( v25 - 1 > 0xFFE )
      {
        ProbeForWrite((volatile void *)(v37 - 1424), v19 - (v37 - 1424), 0x10u);
        v26 = (_QWORD *)v37;
      }
      else
      {
        if ( v24 >= 0x7FFFFFFF0000LL )
          v24 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v24 = *(_BYTE *)v24;
        *(_BYTE *)(v24 + v25 - 1) = *(_BYTE *)(v24 + v25 - 1);
        v26 = v45;
        v24 = v46;
      }
      v26[3] = v19;
      *v26 = *(_QWORD *)&v52[25];
      KeCopyExceptionRecord(v47, ExceptionRecord);
      v27 = v48;
      RtlpCopyExtendedContext(1u, v48, (__int64)&v53, ContextFlags, (__int64)ContextEx, 0LL);
      *(_OWORD *)v27 = v53;
      *(_QWORD *)(v27 + 16) = v54;
      --CurrentThread->SpecialApcDisable;
      v36 = 1;
      KePopulateContinuationContext(*(_QWORD *)(a3 + 360));
      *(_QWORD *)(a3 + 384) = v24;
      *(_WORD *)(a3 + 368) = 51;
      *(_QWORD *)(a3 + 360) = KeUserExceptionDispatcher;
      KiSetupForInstrumentationReturn(a3);
      LODWORD(v18) = KiLeaveGuardedRegionUnsafe(v28);
      v36 = 0;
    }
  }
  else
  {
    LOBYTE(v17) = 1;
    LOBYTE(v16) = 1;
    LODWORD(v18) = DbgkForwardException(ExceptionRecord, v16, v17);
    if ( !(_BYTE)v18 )
    {
      LOBYTE(v31) = 1;
      LODWORD(v18) = DbgkForwardException(ExceptionRecord, 0LL, v31);
      if ( !(_BYTE)v18 )
        LODWORD(v18) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
    }
  }
  return (int)v18;
}
