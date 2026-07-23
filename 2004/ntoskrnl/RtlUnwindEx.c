/*
 * XREFs of RtlUnwindEx @ 0x1402E70E0
 * Callers:
 *     RtlUnwind @ 0x14035E150 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1403CCE90 (__C_specific_handler.c)
 *     __longjmp_internal @ 0x1403F2DC0 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x140408440 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14029AE20 (RtlpGetStackLimits.c)
 *     RtlGuardRestoreContext @ 0x1402E6944 (RtlGuardRestoreContext.c)
 *     RtlpGetStackLimitsEx @ 0x1402E6B30 (RtlpGetStackLimitsEx.c)
 *     KeQueryCurrentStackInformation @ 0x1402E6B60 (KeQueryCurrentStackInformation.c)
 *     RtlpIsFrameInBounds @ 0x1402E7050 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x1402E7070 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x1402E75F0 (RtlpCopyContext.c)
 *     RtlpxVirtualUnwind @ 0x1402E88B0 (RtlpxVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x1402E9520 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E9D60 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402EA760 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     RtlpPopUserShadowStack @ 0x14035F56C (RtlpPopUserShadowStack.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1403F6280 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1403FF270 (RtlCaptureContext2.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x140400000 (RtlpExecuteHandlerForUnwind.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __cdecl RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  _CONTEXT *v6; // r14
  _UNWIND_HISTORY_TABLE *v8; // rbx
  char v10; // di
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  void *v14; // rsp
  PCONTEXT_EX v15; // r13
  DWORD64 v16; // r12
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v17; // r15
  BOOL *v18; // r8
  unsigned __int64 v19; // rbx
  PEXCEPTION_ROUTINE v20; // r13
  ULONG v21; // ecx
  unsigned int v22; // eax
  PEXCEPTION_RECORD v23; // r10
  int v24; // edx
  int v25; // edx
  _CONTEXT_EX *v26; // rax
  int v27; // et0
  char v28; // al
  _CONTEXT_EX *v29; // rax
  PEXCEPTION_RECORD v30; // r15
  _CONTEXT *v31; // r9
  PCONTEXT v32; // r8
  DWORD64 v33; // r10
  unsigned __int64 Rip; // rax
  bool v35; // bl
  unsigned __int64 *Rsp; // rcx
  int v37; // [rsp+50h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+54h] [rbp+4h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+60h] [rbp+10h] BYREF
  char *v41; // [rsp+68h] [rbp+18h] BYREF
  unsigned __int64 v42; // [rsp+70h] [rbp+20h] BYREF
  EXCEPTION_DISPOSITION (__cdecl *v43)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+78h] [rbp+28h] BYREF
  unsigned __int64 ImageBase; // [rsp+80h] [rbp+30h] BYREF
  PVOID HandlerData; // [rsp+88h] [rbp+38h] BYREF
  PEXCEPTION_RECORD ExceptionRecorda; // [rsp+90h] [rbp+40h]
  PUNWIND_HISTORY_TABLE v47; // [rsp+98h] [rbp+48h]
  PCONTEXT v48; // [rsp+A0h] [rbp+50h]
  PVOID v49; // [rsp+A8h] [rbp+58h]
  PVOID v50; // [rsp+B0h] [rbp+60h]
  DWORD64 ControlPc[10]; // [rsp+C0h] [rbp+70h] BYREF
  _CONTEXT_EX *v52; // [rsp+110h] [rbp+C0h]
  __int64 v53; // [rsp+118h] [rbp+C8h] BYREF
  __int128 v54; // [rsp+120h] [rbp+D0h]
  _QWORD v55[20]; // [rsp+130h] [rbp+E0h] BYREF

  v6 = ContextRecord;
  v8 = HistoryTable;
  v50 = TargetIp;
  ExceptionRecorda = ExceptionRecord;
  v49 = ReturnValue;
  v48 = ContextRecord;
  v47 = HistoryTable;
  memset(ControlPc, 0, sizeof(ControlPc));
  memset(v55, 0, 0x98uLL);
  HandlerData = 0LL;
  v42 = 0LL;
  ImageBase = 0LL;
  ContextLength = 0;
  v41 = 0LL;
  v37 = 0;
  KeQueryCurrentStackInformation(&v37, &v41, &v42);
  v10 = v37 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v41, (__int64)&v42) )
LABEL_63:
    RtlRaiseStatus(-1073741784);
  RtlGetExtendedContextLength2(0x10000Bu, &ContextLength, 0LL);
  v11 = ContextLength + 15LL;
  if ( v11 <= ContextLength )
    v11 = 0xFFFFFFFFFFFFFF0LL;
  v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
  v13 = alloca(v12);
  v14 = alloca(v12);
  v52 = (_CONTEXT_EX *)&v37;
  RtlInitializeExtendedContext2((PCONTEXT)&v37, 0x10000Bu, &ContextEx, 0LL);
  ContextEx = (PCONTEXT_EX)&v37;
  v15 = (PCONTEXT_EX)&v37;
  RtlCaptureContext2(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (PEXCEPTION_RECORD)v55;
    v55[2] = Rip;
    LODWORD(v55[0]) = -1073741785;
    v55[1] = 0LL;
    LODWORD(v55[3]) = 0;
  }
  v37 = 2;
  if ( !TargetFrame )
    v37 = 6;
  EstablisherFrame = 0LL;
  while ( 1 )
  {
    v16 = v6->Rip;
    v17 = RtlLookupFunctionEntry(v16, &ImageBase, v8);
    if ( v17 )
    {
      RtlpCopyContext(v15, v6);
      v43 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      RtlpxVirtualUnwind(
        2,
        ImageBase,
        v16,
        (_DWORD)v17,
        (__int64)v15,
        0LL,
        (__int64)&HandlerData,
        (__int64)&EstablisherFrame,
        (__int64)&v43,
        (__int64)&v53);
      v19 = EstablisherFrame;
      v20 = v43;
      if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < (unsigned __int64)v41 || EstablisherFrame >= v42 )
      {
        if ( v10 != 1 )
          goto LABEL_63;
        v10 = 2;
        if ( !RtlpGetStackLimitsEx(EstablisherFrame, &v41, &v42) )
          goto LABEL_63;
        v19 = EstablisherFrame;
      }
      if ( TargetFrame && !v10 && (unsigned __int64)TargetFrame < v19 )
        goto LABEL_63;
      if ( v20 )
      {
        v21 = 0;
        ControlPc[4] = (DWORD64)v50;
        v22 = v37;
        ContextLength = 0;
        while ( 1 )
        {
          if ( TargetFrame == (PVOID)v19 )
          {
            v22 |= 0x20u;
            v37 = v22;
          }
          v23 = ExceptionRecorda;
          ExceptionRecorda->ExceptionFlags = v22;
          v6->Rax = (unsigned __int64)v49;
          ControlPc[1] = ImageBase;
          ControlPc[7] = (DWORD64)HandlerData;
          ControlPc[8] = (DWORD64)v47;
          ControlPc[0] = v16;
          ControlPc[2] = (DWORD64)v17;
          ControlPc[3] = EstablisherFrame;
          ControlPc[5] = (DWORD64)v6;
          ControlPc[6] = (DWORD64)v20;
          LODWORD(ControlPc[9]) = v21;
          v35 = (v6->ContextFlags & 0x100040) == 1048640;
          v24 = RtlpExecuteHandlerForUnwind(v23, EstablisherFrame, v6, ControlPc);
          if ( !v35 && (v6->ContextFlags & 0x100040) == 0x100040 )
            v6->ContextFlags &= ~0x40u;
          v37 &= 0xFFFFFF9F;
          v25 = v24 - 1;
          if ( v25 )
          {
            if ( v25 != 2 )
              RtlRaiseStatus(-1073741786);
            v16 = ControlPc[0];
            v17 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)ControlPc[2];
            ImageBase = ControlPc[1];
            RtlpCopyContext(v48, ControlPc[5]);
            ContextEx = v52;
            v6 = v31;
            RtlpCopyContext(v52, v31);
            v20 = RtlVirtualUnwind(2u, v33, v16, v17, v32, &HandlerData, &EstablisherFrame, 0LL);
            if ( v20 != (PEXCEPTION_ROUTINE)ControlPc[6]
              || (v19 = EstablisherFrame, EstablisherFrame != ControlPc[3])
              || HandlerData != (PVOID)ControlPc[7] )
            {
              __fastfail(0x27u);
            }
            v37 |= 0x40u;
            v47 = (PUNWIND_HISTORY_TABLE)ControlPc[8];
            ContextLength = ControlPc[9];
            if ( RtlpIsFrameInBounds((unsigned __int64 *)&v41, EstablisherFrame, &v42) || v10 != 1 )
              goto LABEL_30;
            v10 = 2;
            RtlpGetStackLimitsEx(v19, &v41, &v42);
          }
          else
          {
            if ( (PVOID)EstablisherFrame != TargetFrame )
            {
              v26 = (_CONTEXT_EX *)v6;
              v6 = (_CONTEXT *)ContextEx;
              ContextEx = v26;
            }
            v27 = _mm_getcsr();
            LODWORD(v43) = v27;
            v6->MxCsr = v27;
            v6->FltSave.MxCsr = v27;
          }
          v19 = EstablisherFrame;
LABEL_30:
          v22 = v37;
          v21 = ContextLength;
          if ( (v37 & 0x40) == 0 )
            goto LABEL_31;
        }
      }
      if ( (PVOID)v19 == TargetFrame )
      {
LABEL_31:
        v15 = ContextEx;
      }
      else
      {
        v29 = (_CONTEXT_EX *)v6;
        v6 = (_CONTEXT *)ContextEx;
        v15 = v29;
        ContextEx = v29;
      }
    }
    else
    {
      Rsp = (unsigned __int64 *)v6->Rsp;
      v6->Rip = *Rsp;
      v6->Rsp = (unsigned __int64)(Rsp + 1);
      RtlpPopUserShadowStack(v6);
      v19 = EstablisherFrame;
    }
    v28 = 0;
    if ( v10 != 2 )
      v28 = v10;
    if ( (v19 & 7) != 0 || v19 < (unsigned __int64)v41 || v19 >= v42 )
      break;
    if ( (PVOID)v19 == TargetFrame )
      goto LABEL_41;
    v8 = v47;
    v10 = v28;
  }
  if ( (PVOID)v19 == TargetFrame )
  {
LABEL_41:
    v30 = ExceptionRecorda;
    v6->Rax = (unsigned __int64)v49;
    if ( v30->ExceptionCode != -2147483607 )
    {
      v6->Rip = (unsigned __int64)v50;
      if ( v30->ExceptionCode != -2147483610 )
        v30->ExceptionCode = -1073741785;
    }
    RtlGuardRestoreContext(v6, v30, v18);
  }
  else
  {
    if ( v16 == v6->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v6, 0);
  }
}
