/*
 * XREFs of RtlDispatchException @ 0x1402E5630
 * Callers:
 *     RtlRaiseException @ 0x1402E5480 (RtlRaiseException.c)
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 * Callees:
 *     RtlpIsFrameInBounds @ 0x1402E5A60 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x1402E5A80 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x1402E6000 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x1402E61C0 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402E7080 (RtlInitializeExtendedContext2.c)
 *     KeQueryCurrentStackInformation @ 0x1402E72F0 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x1402E7340 (RtlpGetStackLimitsEx.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     RtlLookupExceptionHandler @ 0x14033002C (RtlLookupExceptionHandler.c)
 *     RtlpPopUserShadowStack @ 0x14033036C (RtlpPopUserShadowStack.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x140406380 (RtlpExecuteHandlerForException.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlpLogExceptionDispatch @ 0x140583530 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1405836D0 (RtlpLogExceptionHandler.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v4; // r13
  __int64 v5; // r9
  unsigned int v6; // esi
  unsigned __int64 Rsp; // rcx
  BOOL v8; // r15d
  unsigned __int64 v9; // rax
  void *v10; // rsp
  DWORD64 Rip; // rdi
  _UNWIND_HISTORY_TABLE *p_HistoryTable; // r12
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  PRUNTIME_FUNCTION v17; // rbx
  unsigned __int64 v18; // r13
  PEXCEPTION_ROUTINE v19; // rax
  unsigned __int64 v20; // r15
  PCONTEXT_EX v21; // rsi
  DWORD64 v22; // rbx
  int v23; // r8d
  ULONG v24; // ecx
  bool v25; // zf
  PEXCEPTION_RECORD v26; // r10
  PVOID v27; // rax
  unsigned __int64 v28; // rdx
  PEXCEPTION_RECORD v29; // r15
  ULONG v30; // edx
  int v31; // ecx
  ULONG v32; // edx
  PRUNTIME_FUNCTION v33; // r9
  DWORD64 v34; // r10
  int v35; // r9d
  DWORD64 v36; // rax
  char v37; // cl
  int v38; // esi
  _CONTEXT_EX *v39; // rax
  char IsFrameInBounds; // al
  int v42; // [rsp+40h] [rbp+0h] BYREF
  int v43; // [rsp+44h] [rbp+4h] BYREF
  char v44; // [rsp+48h] [rbp+8h]
  char v45; // [rsp+49h] [rbp+9h]
  ULONG ContextLength; // [rsp+4Ch] [rbp+Ch] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  __int64 v48; // [rsp+58h] [rbp+18h] BYREF
  __int64 v49; // [rsp+60h] [rbp+20h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 ImageBase; // [rsp+70h] [rbp+30h] BYREF
  PVOID HandlerData; // [rsp+78h] [rbp+38h] BYREF
  DWORD64 v53; // [rsp+80h] [rbp+40h]
  PEXCEPTION_RECORD v54; // [rsp+88h] [rbp+48h]
  DWORD64 ControlPc[10]; // [rsp+90h] [rbp+50h] BYREF
  PCONTEXT v56; // [rsp+E0h] [rbp+A0h]
  _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+F0h] [rbp+B0h] BYREF

  v56 = ContextRecord;
  v54 = ExceptionRecord;
  ContextLength = 0;
  v4 = 0;
  memset(ControlPc, 0, sizeof(ControlPc));
  v44 = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  v48 = 0LL;
  ImageBase = 0LL;
  v49 = 0LL;
  v43 = 0;
  memset(HistoryTable.Entry, 0, sizeof(HistoryTable.Entry));
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v44 = 1;
    RtlpLogExceptionDispatch(ExceptionRecord, ContextRecord);
  }
  v6 = ExceptionRecord->ExceptionFlags & 1;
  v42 = v6;
  KeQueryCurrentStackInformation(&v43, &v49, &v48, v5);
  Rsp = ContextRecord->Rsp;
  v8 = v43 == 10;
  v43 = v8;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(Rsp, &v49, &v48) )
  {
    ExceptionRecord->ExceptionFlags = v6 | 8;
    return v4;
  }
  RtlGetExtendedContextLength2(0x10000Bu, &ContextLength, 0LL);
  v9 = ContextLength + 15LL;
  if ( v9 <= ContextLength )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)&v42, 0x10000Bu, &ContextEx, 0LL);
  RtlpCopyContext(&v42, ContextRecord);
  Rip = ContextRecord->Rip;
  v53 = 0LL;
  p_HistoryTable = &HistoryTable;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v13 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v17 = v13;
    if ( !v13 )
    {
      if ( Rip == *(_QWORD *)ControlPc[9] )
        goto LABEL_52;
      HistoryTable.Entry[3].ImageBase = *(_QWORD *)ControlPc[9];
      ControlPc[9] += 8LL;
      RtlpPopUserShadowStack(&v42, v14, v15, v16);
      goto LABEL_11;
    }
    v18 = ImageBase;
    v19 = RtlVirtualUnwind(1u, ImageBase, Rip, v13, (PCONTEXT)&v42, &HandlerData, &EstablisherFrame, 0LL);
    v20 = EstablisherFrame;
    v21 = (PCONTEXT_EX)v19;
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v49, EstablisherFrame, &v48) )
    {
      if ( (_BYTE)v43 == 1 )
      {
        LOBYTE(v43) = 2;
        RtlpGetStackLimitsEx(v20, &v49, &v48);
        v20 = EstablisherFrame;
      }
      else if ( !(_BYTE)v43 )
      {
        v38 = v42 | 8;
LABEL_53:
        v4 = 0;
        v54->ExceptionFlags = v38;
        return v4;
      }
    }
    if ( v21 )
      break;
LABEL_10:
    v8 = v43;
LABEL_11:
    v22 = ControlPc[9];
    Rip = HistoryTable.Entry[3].ImageBase;
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v49, ControlPc[9], &v48) )
    {
      if ( !v8 || (LOBYTE(v8) = 0, v43 = v8, !(unsigned __int8)RtlpGetStackLimitsEx(v22, &v49, &v48)) )
      {
LABEL_52:
        v38 = v42;
        goto LABEL_53;
      }
    }
  }
  v23 = v42;
  v24 = 0;
  ContextLength = 0;
  while ( 1 )
  {
    v25 = v44 == 0;
    v26 = v54;
    v27 = HandlerData;
    v45 = 0;
    ControlPc[0] = Rip;
    v54->ExceptionFlags = v23;
    ControlPc[1] = v18;
    ControlPc[2] = (DWORD64)v17;
    ControlPc[3] = v20;
    ControlPc[5] = (DWORD64)&v42;
    ControlPc[6] = (DWORD64)v21;
    ControlPc[7] = (DWORD64)v27;
    ControlPc[8] = (DWORD64)p_HistoryTable;
    LODWORD(ControlPc[9]) = v24;
    ContextEx = 0LL;
    if ( !v25 )
    {
      v39 = (_CONTEXT_EX *)RtlpLogExceptionHandler(v26, &v42, Rip, v21);
      v20 = EstablisherFrame;
      ContextEx = v39;
    }
    v28 = v20;
    v29 = v54;
    v30 = RtlpExecuteHandlerForException(v54, v28, v56, ControlPc);
    if ( ContextEx )
      ContextEx[43].XState.Length = v30;
    v31 = v29->ExceptionFlags & 1;
    v20 = EstablisherFrame;
    v23 = v31 | v42;
    v42 |= v31;
    if ( v53 == EstablisherFrame )
    {
      v23 &= ~0x10u;
      v53 = 0LL;
      v42 = v23;
    }
    if ( v30 == 1 )
      goto LABEL_21;
    if ( !v30 )
      break;
    v32 = v30 - 2;
    if ( v32 )
    {
      if ( v32 != 1 )
        RtlRaiseStatus(-1073741786);
      Rip = ControlPc[0];
      ImageBase = ControlPc[1];
      RtlpCopyContext(&v42, ControlPc[5]);
      ContextEx = (PCONTEXT_EX)RtlVirtualUnwind(1u, v34, Rip, v33, (PCONTEXT)&v42, &HandlerData, &EstablisherFrame, 0LL);
      EstablisherFrame = ControlPc[3];
      v17 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
      if ( v17 != (PRUNTIME_FUNCTION)ControlPc[2]
        || (v18 = ImageBase,
            (int)RtlLookupExceptionHandler((_DWORD)v17, ImageBase, 2, v35, (__int64)&ContextEx, (__int64)&HandlerData) < 0)
        || (v21 = ContextEx, ContextEx != (PCONTEXT_EX)ControlPc[6])
        || HandlerData != (PVOID)ControlPc[7] )
      {
        __fastfail(0x27u);
      }
      v20 = EstablisherFrame;
      p_HistoryTable = (_UNWIND_HISTORY_TABLE *)ControlPc[8];
      ContextLength = ControlPc[9];
      v45 = 1;
      if ( !(unsigned __int8)RtlpIsFrameInBounds(&v49, EstablisherFrame, &v48) && (_BYTE)v43 == 1 )
      {
        RtlpGetStackLimitsEx(v20, &v49, &v48);
        v23 = v42;
        v20 = EstablisherFrame;
LABEL_45:
        LOBYTE(v43) = 0;
        goto LABEL_22;
      }
      v23 = v42;
    }
    else
    {
      v36 = ControlPc[3];
      v23 |= 0x10u;
      v37 = 1;
      v42 = v23;
      if ( (_BYTE)v43 )
      {
        IsFrameInBounds = RtlpIsFrameInBounds(&v49, ControlPc[3], &v48);
        v23 = v42;
        v37 = IsFrameInBounds;
        v36 = ControlPc[3];
      }
      if ( v36 > v53 || !v37 )
        v53 = v36;
    }
LABEL_21:
    if ( (_BYTE)v43 == 2 )
      goto LABEL_45;
LABEL_22:
    v24 = ContextLength;
    if ( !v45 )
      goto LABEL_10;
  }
  if ( (v23 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
