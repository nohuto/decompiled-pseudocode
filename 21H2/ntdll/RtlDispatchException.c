/*
 * XREFs of RtlDispatchException @ 0x180052310
 * Callers:
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A1500 (KiUserExceptionDispatcher.c)
 *     RtlRaiseNoncontinuableException @ 0x1800A1F70 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     RtlpCopyContext @ 0x180030BD0 (RtlpCopyContext.c)
 *     RtlVirtualUnwind @ 0x180030DE0 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 *     RtlpIsFrameInBounds @ 0x180052680 (RtlpIsFrameInBounds.c)
 *     RtlpSanitizeContext @ 0x180052D58 (RtlpSanitizeContext.c)
 *     RtlGetExtendedContextLength2 @ 0x180052E60 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180053090 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x180053270 (RtlpGetStackLimits.c)
 *     RtlpCallVectoredHandlers @ 0x180079A74 (RtlpCallVectoredHandlers.c)
 *     RtlpPopUserShadowStack @ 0x18007E2A0 (RtlpPopUserShadowStack.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A2900 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1800A2A10 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x180100D58 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x180100EFC (RtlpLogExceptionHandler.c)
 *     RtlRaiseStatus @ 0x1801026C0 (RtlRaiseStatus.c)
 */

char __fastcall RtlDispatchException(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r15
  int v5; // edi
  int v6; // r13d
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  void *v11; // rsp
  ULONG64 v12; // r15
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v14; // rax
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v15; // r13
  PEXCEPTION_ROUTINE v16; // r12
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rcx
  int v19; // eax
  ULONG64 v20; // r8
  __int64 v21; // r13
  int v22; // edx
  unsigned __int64 v23; // r12
  int v24; // edx
  int v25; // edx
  ULONG64 v26; // r12
  PEXCEPTION_ROUTINE v27; // rax
  __int64 v29; // rax
  PRUNTIME_FUNCTION v30; // rax
  _BYTE *v31; // r9
  int v32; // ecx
  __int64 v33; // rax
  char ContextRecord; // [rsp+40h] [rbp+0h] BYREF
  PUNWIND_HISTORY_TABLE v35; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int64 ImageBase; // [rsp+58h] [rbp+18h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp+28h] BYREF
  char v40[8]; // [rsp+70h] [rbp+30h] BYREF
  char v41[8]; // [rsp+78h] [rbp+38h] BYREF
  __int64 v42; // [rsp+80h] [rbp+40h]
  ULONG64 ControlPc; // [rsp+90h] [rbp+50h] BYREF
  ULONG64 v44; // [rsp+98h] [rbp+58h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+A0h] [rbp+60h]
  unsigned __int64 v46; // [rsp+A8h] [rbp+68h]
  char *p_ContextRecord; // [rsp+B8h] [rbp+78h]
  EXCEPTION_ROUTINE *v48; // [rsp+C0h] [rbp+80h]
  _BYTE *v49; // [rsp+C8h] [rbp+88h]
  struct _UNWIND_HISTORY_TABLE *v50; // [rsp+D0h] [rbp+90h]
  DWORD64 *v51; // [rsp+D8h] [rbp+98h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+E0h] [rbp+A0h] BYREF

  v2 = 0;
  v3 = a2;
  v42 = a2;
  ContextRecord = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    ContextRecord = 1;
    RtlpLogExceptionDispatch();
  }
  if ( (unsigned __int8)RtlpCallVectoredHandlers(a1, v3, 0LL) )
    goto LABEL_30;
  v5 = *(_DWORD *)(a1 + 4) & 1;
  if ( !(unsigned __int8)RtlpGetStackLimits(v41, v40) )
  {
    v5 |= 8u;
LABEL_51:
    *(_DWORD *)(a1 + 4) = v5;
    goto LABEL_31;
  }
  RtlpSanitizeContext(v3);
  v6 = 0;
  v7 = 0LL;
  if ( ((*((_QWORD *)&xmmword_180181390 + 1) >> 60) & 3) == 1 )
  {
    v6 = 64;
    v7 = 2048LL;
  }
  RtlGetExtendedContextLength2((unsigned int)(v6 + 1048587), &v35, v7);
  v8 = (unsigned int)v35 + 15LL;
  if ( v8 <= (unsigned int)v35 )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  v10 = alloca(v9);
  v11 = alloca(v9);
  RtlInitializeExtendedContext2(&ContextRecord, (unsigned int)(v6 + 1048587), &v39, v7);
  RtlpCopyContext((__int64)&ContextRecord, v3);
  v12 = *(_QWORD *)(v3 + 248);
  p_HistoryTable = &HistoryTable;
  HistoryTable.LowAddress = -1LL;
  v35 = &HistoryTable;
  v39 = 0LL;
  HistoryTable.Count = 0;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.HighAddress = 0LL;
  while ( 1 )
  {
    v14 = RtlLookupFunctionEntry(v12, &ImageBase, p_HistoryTable);
    v15 = v14;
    if ( !v14 )
    {
      if ( v12 == *v51 )
        goto LABEL_50;
      HistoryTable.Entry[4].ImageBase = *v51++;
      RtlpPopUserShadowStack(&ContextRecord);
      goto LABEL_13;
    }
    v16 = RtlVirtualUnwind(1u, ImageBase, v12, v14, (PCONTEXT)&ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
    if ( !(unsigned __int8)RtlpIsFrameInBounds(v41, EstablisherFrame, v40) )
    {
      v5 |= 8u;
LABEL_50:
      v3 = v42;
      goto LABEL_51;
    }
    if ( v16 )
      break;
LABEL_13:
    v12 = HistoryTable.Entry[4].ImageBase;
    if ( !(unsigned __int8)RtlpIsFrameInBounds(v41, v51, v40) )
      goto LABEL_50;
    p_HistoryTable = v35;
  }
  v18 = HandlerData;
  v19 = 0;
  v20 = ImageBase;
  while ( 1 )
  {
    v49 = v18;
    FunctionEntry = v15;
    v21 = 0LL;
    v50 = v35;
    *(_DWORD *)(a1 + 4) = v5;
    ControlPc = v12;
    v44 = v20;
    v46 = v17;
    p_ContextRecord = &ContextRecord;
    v48 = v16;
    LODWORD(v51) = v19;
    if ( ContextRecord )
    {
      v29 = RtlpLogExceptionHandler(a1, &ContextRecord, v12, v16);
      v17 = EstablisherFrame;
      v21 = v29;
    }
    v3 = v42;
    v22 = RtlpExecuteHandlerForException(a1, v17, v42, &ControlPc);
    if ( v21 )
      *(_DWORD *)(v21 + 1396) = v22;
    v23 = v39;
    v5 |= *(_DWORD *)(a1 + 4) & 1;
    if ( v39 == EstablisherFrame )
    {
      v5 &= ~0x10u;
      v39 = 0LL;
      v23 = 0LL;
    }
    if ( !v22 )
      break;
    v24 = v22 - 1;
    if ( !v24 )
      goto LABEL_13;
    v25 = v24 - 1;
    if ( !v25 )
    {
      v5 |= 0x10u;
      if ( v46 > v23 )
        v39 = v46;
      goto LABEL_13;
    }
    if ( v25 != 1 )
      RtlRaiseStatus(3221225510LL);
    v26 = v44;
    v12 = ControlPc;
    v15 = FunctionEntry;
    ImageBase = v44;
    RtlpCopyContext((__int64)&ContextRecord, (__int64)p_ContextRecord);
    v27 = RtlVirtualUnwind(1u, v26, v12, v15, (PCONTEXT)&ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
    v17 = v46;
    v16 = v27;
    EstablisherFrame = v46;
    if ( ((*((_QWORD *)&xmmword_180181390 + 1) >> 12) & 3) == 1 )
    {
      v30 = RtlLookupFunctionEntry(v12, &ImageBase, v35);
      v15 = v30;
      if ( v30 != FunctionEntry )
        goto LABEL_46;
      v20 = ImageBase;
      v31 = (_BYTE *)(ImageBase + v30->UnwindInfoAddress);
      if ( (*v31 & 0x10) != 0 )
      {
        v32 = (unsigned __int8)v31[2];
        v33 = (unsigned int)(v32 + 1);
        if ( (v32 & 1) == 0 )
          v33 = (unsigned __int8)v31[2];
        v18 = &v31[2 * (unsigned int)(v33 + 2) + 4];
        HandlerData = v18;
        v16 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)&v31[2 * v33 + 4]);
      }
      else
      {
        v18 = HandlerData;
      }
      if ( v16 != v48 || v18 != v49 )
LABEL_46:
        __fastfail(0x27u);
      v17 = EstablisherFrame;
    }
    else
    {
      v18 = v49;
      v16 = v48;
      v20 = ImageBase;
      HandlerData = v49;
    }
    v35 = v50;
    v19 = (int)v51;
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(3221225509LL);
LABEL_30:
  v2 = 1;
LABEL_31:
  RtlpCallVectoredHandlers(a1, v3, 1LL);
  return v2;
}
