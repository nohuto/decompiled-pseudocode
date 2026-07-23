/*
 * XREFs of KiDispatchException @ 0x1402612C0
 * Callers:
 *     KiInitializeUserApc @ 0x140230744 (KiInitializeUserApc.c)
 *     KxExceptionDispatchOnExceptionStack @ 0x1403FF220 (KxExceptionDispatchOnExceptionStack.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412D80 (KiFastFailDispatch.c)
 *     KiRaiseException @ 0x1405220D0 (KiRaiseException.c)
 *     KiParkUmsThread @ 0x140526160 (KiParkUmsThread.c)
 *     PspInitializeThunkContext @ 0x14063C810 (PspInitializeThunkContext.c)
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 *     PspFreeUserFiberShadowStack @ 0x14090A2D4 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     KeCopyExceptionRecord @ 0x140251E58 (KeCopyExceptionRecord.c)
 *     KdTrap @ 0x14026181C (KdTrap.c)
 *     KiPreprocessFault @ 0x1402618D0 (KiPreprocessFault.c)
 *     KeContextFromKframes @ 0x140261AA0 (KeContextFromKframes.c)
 *     RtlDispatchException @ 0x140263510 (RtlDispatchException.c)
 *     RtlGetExtendedContextLength2 @ 0x140264560 (RtlGetExtendedContextLength2.c)
 *     RtlpCopyExtendedContext @ 0x140264850 (RtlpCopyExtendedContext.c)
 *     RtlInitializeExtendedContext2 @ 0x140264F60 (RtlInitializeExtendedContext2.c)
 *     KePopulateContinuationContext @ 0x1402655CC (KePopulateContinuationContext.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiSetupForInstrumentationReturn @ 0x14036D158 (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1403FAB00 (ZwTerminateProcess.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x1403FE200 (KeContextToKframes.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiTpHandleTrap @ 0x14051D410 (KiTpHandleTrap.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     DbgkForwardException @ 0x1407323B0 (DbgkForwardException.c)
 *     KdIsThisAKdTrap @ 0x1409B6008 (KdIsThisAKdTrap.c)
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
  struct _KTHREAD *v17; // rax
  unsigned __int64 v18; // r12
  char IsThisAKdTrap; // al
  int v20; // r8d
  _KPROCESS *v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rbx
  int v27; // ecx
  __int64 v28; // r9
  int ExceptionCode; // r15d
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  int v33; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextFlags; // [rsp+34h] [rbp+4h]
  int v35; // [rsp+38h] [rbp+8h]
  unsigned __int64 v36; // [rsp+40h] [rbp+10h]
  ULONG ContextLength; // [rsp+48h] [rbp+18h] BYREF
  _KPROCESS *v38; // [rsp+50h] [rbp+20h]
  PCONTEXT_EX ContextEx; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v40; // [rsp+60h] [rbp+30h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp+38h]
  unsigned __int64 v42; // [rsp+70h] [rbp+40h]
  PEXCEPTION_RECORD v43; // [rsp+78h] [rbp+48h]
  _QWORD *v44; // [rsp+80h] [rbp+50h]
  unsigned __int64 v45; // [rsp+88h] [rbp+58h]
  _OWORD *v46; // [rsp+90h] [rbp+60h]
  unsigned __int64 v47; // [rsp+98h] [rbp+68h]
  int *v48; // [rsp+A8h] [rbp+78h]
  __int64 v49; // [rsp+B0h] [rbp+80h]
  int v50; // [rsp+C0h] [rbp+90h]
  _DWORD v51[37]; // [rsp+C4h] [rbp+94h] BYREF
  __int128 v52; // [rsp+160h] [rbp+130h] BYREF
  __int64 v53; // [rsp+170h] [rbp+140h]

  v5 = a4;
  LOWORD(v33) = a4;
  v36 = a2;
  v43 = ExceptionRecord;
  v49 = a3;
  ContextEx = 0LL;
  ContextLength = 0;
  memset(v51, 0, sizeof(v51));
  v52 = 0LL;
  v53 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v38 = Process;
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
      LODWORD(v17) = ((__int64 (__fastcall *)(PEXCEPTION_RECORD, unsigned __int64, __int64, _QWORD, char))xmmword_140C1E060)(
                       ExceptionRecord,
                       v36,
                       a3,
                       0LL,
                       v5);
      if ( (_BYTE)v17 )
        return (int)v17;
    }
    ExceptionRecord->ExceptionCode = ExceptionCode;
    Process = v38;
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
  v48 = &v33;
  if ( v5 )
    memset(&v33, 0, ContextLength);
  v12 = v9;
  v13 = ContextFlags;
  RtlInitializeExtendedContext2((PCONTEXT)&v33, ContextFlags, &ContextEx, v12);
  KeContextFromKframes(a3, v36, &v33);
  if ( ExceptionRecord->ExceptionCode == -2147483645 )
  {
    --*(_QWORD *)&v51[25];
    if ( (KiDynamicTraceMask & 2) != 0 )
    {
      LOBYTE(v15) = a5;
      LOBYTE(v14) = v5;
      if ( (unsigned __int8)KiTpHandleTrap(ExceptionRecord, &v33, v14, v15) )
        goto LABEL_14;
    }
  }
  LOBYTE(v14) = v5;
  if ( (unsigned __int8)KiPreprocessFault((int)ExceptionRecord, (int)&v33, v14) )
    goto LABEL_14;
  if ( !v5 )
  {
    if ( (!a5
       || !(unsigned __int8)KdTrap(a3, v36, (_DWORD)ExceptionRecord, (unsigned int)&v33, 0, 0)
       && !RtlDispatchException(ExceptionRecord, (PCONTEXT)&v33))
      && !(unsigned __int8)KdTrap(a3, v36, (_DWORD)ExceptionRecord, (unsigned int)&v33, 0, 1) )
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
  v18 = *(_QWORD *)&v51[1];
  v42 = *(_QWORD *)&v51[1];
  if ( (HIDWORD(v38[2].Header.WaitListHead.Flink) & 1) == 0 )
  {
    v17 = KeGetCurrentThread();
    if ( v17->ApcState.Process[1].AffinityPadding[10]
      && ExceptionRecord->ExceptionCode == -2147483646
      && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x40000u;
LABEL_75:
      _enable();
      return (int)v17;
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
      v18 = (unsigned int)v18 & 0xFFFFFFF0;
      v42 = v18;
    }
  }
  if ( a5 )
  {
    LODWORD(v38) = ExceptionRecord->ExceptionCode;
    IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
    BYTE1(v33) = IsThisAKdTrap;
    v21 = KeGetCurrentThread()->ApcState.Process;
    if ( !v21[1].AffinityPadding[9] && !KdIgnoreUmExceptions && v20 != -2147483597 || IsThisAKdTrap )
    {
      if ( (unsigned __int8)KdTrap(a3, v36, (_DWORD)ExceptionRecord, (unsigned int)&v33, v33, 0) )
      {
        v5 = v33;
LABEL_14:
        LOBYTE(BugCheckParameter4) = v5;
        LODWORD(v17) = KeContextToKframes(a3, v36, (unsigned int)&v33, v40, BugCheckParameter4);
        if ( !BYTE1(v33) )
          return (int)v17;
        _disable();
        LODWORD(v17) = KiSetupForInstrumentationReturn(a3);
        goto LABEL_75;
      }
      v20 = (int)v38;
    }
    if ( v20 == -2147483597 || (LOBYTE(v21) = 1, LODWORD(v17) = DbgkForwardException(ExceptionRecord, v21), !(_BYTE)v17) )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x100u;
      _enable();
      v50 = -1073741819;
      v35 = 0;
      v22 = v18;
      v40 = v18;
      if ( (v13 & 0x100040) == 0x100040 )
      {
        v22 = (v18 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL;
        v40 = v22;
      }
      v36 = (v22 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
      v44 = (_QWORD *)v36;
      v46 = (_OWORD *)(v36 - 160);
      v47 = v36 - 192;
      v23 = v36 - 1424;
      v45 = v36 - 1424;
      LODWORD(v52) = -1232;
      v24 = v18 - (v36 - 1424);
      DWORD1(v52) = v18 - (v36 - 1424);
      *((_QWORD *)&v52 + 1) = 0x4D0FFFFFB30LL;
      LODWORD(v53) = v22 - (v36 - 192);
      HIDWORD(v53) = v18 - v22;
      if ( v24 - 1 > 0xFFE )
      {
        ProbeForWrite((volatile void *)(v36 - 1424), v18 - (v36 - 1424), 0x10u);
        v25 = (_QWORD *)v36;
      }
      else
      {
        if ( v23 >= 0x7FFFFFFF0000LL )
          v23 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v23 = *(_BYTE *)v23;
        *(_BYTE *)(v23 + v24 - 1) = *(_BYTE *)(v23 + v24 - 1);
        v25 = v44;
        v23 = v45;
      }
      v25[3] = v18;
      *v25 = *(_QWORD *)&v51[25];
      KeCopyExceptionRecord(v46, (__int64)ExceptionRecord);
      v26 = v47;
      LOBYTE(v27) = 1;
      RtlpCopyExtendedContext(v27, v47, (unsigned int)&v52, ContextFlags, (__int64)ContextEx, 0LL);
      *(_OWORD *)v26 = v52;
      *(_QWORD *)(v26 + 16) = v53;
      --CurrentThread->SpecialApcDisable;
      v35 = 1;
      KePopulateContinuationContext(*(_QWORD *)(a3 + 360));
      *(_QWORD *)(a3 + 384) = v23;
      *(_WORD *)(a3 + 368) = 51;
      *(_QWORD *)(a3 + 360) = KeUserExceptionDispatcher;
      KiSetupForInstrumentationReturn(a3);
      LODWORD(v17) = KiLeaveGuardedRegionUnsafe(v28);
      v35 = 0;
    }
  }
  else
  {
    LOBYTE(v16) = 1;
    LODWORD(v17) = DbgkForwardException(ExceptionRecord, v16);
    if ( !(_BYTE)v17 )
    {
      LODWORD(v17) = DbgkForwardException(ExceptionRecord, 0LL);
      if ( !(_BYTE)v17 )
        LODWORD(v17) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
    }
  }
  return (int)v17;
}
