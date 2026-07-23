/*
 * XREFs of RtlUnwindEx @ 0x1402E5AF0
 * Callers:
 *     RtlUnwind @ 0x14032EAB0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1403CFB20 (__C_specific_handler.c)
 *     __longjmp_internal @ 0x1403F7970 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x14040EE80 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1402265A0 (RtlpGetStackLimits.c)
 *     RtlpxVirtualUnwind @ 0x140228310 (RtlpxVirtualUnwind.c)
 *     RtlpIsFrameInBounds @ 0x1402E5A60 (RtlpIsFrameInBounds.c)
 *     RtlVirtualUnwind @ 0x1402E5A80 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x1402E6000 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x1402E61C0 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402E7080 (RtlInitializeExtendedContext2.c)
 *     KeQueryCurrentStackInformation @ 0x1402E72F0 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimitsEx @ 0x1402E7340 (RtlpGetStackLimitsEx.c)
 *     RtlGuardRestoreContext @ 0x1402E7368 (RtlGuardRestoreContext.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     RtlpPopUserShadowStack @ 0x14033036C (RtlpPopUserShadowStack.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1403FAE50 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x140405540 (RtlCaptureContext2.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x140406400 (RtlpExecuteHandlerForUnwind.c)
 *     memset @ 0x140411300 (memset.c)
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
  __int64 v10; // r9
  char v11; // di
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  PCONTEXT_EX v16; // r13
  DWORD64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v21; // r15
  unsigned __int64 v22; // rbx
  PEXCEPTION_ROUTINE v23; // r13
  ULONG v24; // ecx
  unsigned int v25; // eax
  PEXCEPTION_RECORD v26; // r10
  int v27; // edx
  int v28; // edx
  _CONTEXT_EX *v29; // rax
  int v30; // et0
  char v31; // al
  _CONTEXT_EX *v32; // rax
  PEXCEPTION_RECORD v33; // r15
  _CONTEXT *v34; // r9
  PCONTEXT v35; // r8
  DWORD64 v36; // r10
  unsigned __int64 Rip; // rax
  bool v38; // bl
  unsigned __int64 *Rsp; // rcx
  int v40; // [rsp+50h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+54h] [rbp+4h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+60h] [rbp+10h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp+18h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp+20h] BYREF
  EXCEPTION_DISPOSITION (__cdecl *v46)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+78h] [rbp+28h] BYREF
  unsigned __int64 ImageBase; // [rsp+80h] [rbp+30h] BYREF
  PVOID HandlerData; // [rsp+88h] [rbp+38h] BYREF
  PEXCEPTION_RECORD ExceptionRecorda; // [rsp+90h] [rbp+40h]
  PUNWIND_HISTORY_TABLE v50; // [rsp+98h] [rbp+48h]
  PCONTEXT v51; // [rsp+A0h] [rbp+50h]
  PVOID v52; // [rsp+A8h] [rbp+58h]
  PVOID v53; // [rsp+B0h] [rbp+60h]
  DWORD64 ControlPc[10]; // [rsp+C0h] [rbp+70h] BYREF
  _CONTEXT_EX *v55; // [rsp+110h] [rbp+C0h]
  __int64 v56; // [rsp+118h] [rbp+C8h] BYREF
  __int128 v57; // [rsp+120h] [rbp+D0h]
  _QWORD v58[20]; // [rsp+130h] [rbp+E0h] BYREF

  v6 = ContextRecord;
  v8 = HistoryTable;
  v53 = TargetIp;
  ExceptionRecorda = ExceptionRecord;
  v52 = ReturnValue;
  v51 = ContextRecord;
  v50 = HistoryTable;
  memset(ControlPc, 0, sizeof(ControlPc));
  memset(v58, 0, 0x98uLL);
  HandlerData = 0LL;
  v45 = 0LL;
  ImageBase = 0LL;
  ContextLength = 0;
  v44 = 0LL;
  v40 = 0;
  KeQueryCurrentStackInformation(&v40, &v44, &v45, v10);
  v11 = v40 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v44, (__int64)&v45) )
LABEL_63:
    RtlRaiseStatus(-1073741784);
  RtlGetExtendedContextLength2(0x10000Bu, &ContextLength, 0LL);
  v12 = ContextLength + 15LL;
  if ( v12 <= ContextLength )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  v55 = (_CONTEXT_EX *)&v40;
  RtlInitializeExtendedContext2((PCONTEXT)&v40, 0x10000Bu, &ContextEx, 0LL);
  ContextEx = (PCONTEXT_EX)&v40;
  v16 = (PCONTEXT_EX)&v40;
  RtlCaptureContext2(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (PEXCEPTION_RECORD)v58;
    v58[2] = Rip;
    LODWORD(v58[0]) = -1073741785;
    v58[1] = 0LL;
    LODWORD(v58[3]) = 0;
  }
  v40 = 2;
  if ( !TargetFrame )
    v40 = 6;
  EstablisherFrame = 0LL;
  while ( 1 )
  {
    v17 = v6->Rip;
    v21 = RtlLookupFunctionEntry(v17, &ImageBase, v8);
    if ( v21 )
    {
      RtlpCopyContext(v16, v6);
      v46 = 0LL;
      v56 = 0LL;
      v57 = 0LL;
      RtlpxVirtualUnwind(2, ImageBase, v17, v21, v16, 0LL, &HandlerData, &EstablisherFrame, &v46, &v56);
      v22 = EstablisherFrame;
      v23 = v46;
      if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v44 || EstablisherFrame >= v45 )
      {
        if ( v11 != 1 )
          goto LABEL_63;
        v11 = 2;
        if ( !(unsigned __int8)RtlpGetStackLimitsEx(EstablisherFrame, &v44, &v45) )
          goto LABEL_63;
        v22 = EstablisherFrame;
      }
      if ( TargetFrame && !v11 && (unsigned __int64)TargetFrame < v22 )
        goto LABEL_63;
      if ( v23 )
      {
        v24 = 0;
        ControlPc[4] = (DWORD64)v53;
        v25 = v40;
        ContextLength = 0;
        while ( 1 )
        {
          if ( TargetFrame == (PVOID)v22 )
          {
            v25 |= 0x20u;
            v40 = v25;
          }
          v26 = ExceptionRecorda;
          ExceptionRecorda->ExceptionFlags = v25;
          v6->Rax = (unsigned __int64)v52;
          ControlPc[1] = ImageBase;
          ControlPc[7] = (DWORD64)HandlerData;
          ControlPc[8] = (DWORD64)v50;
          ControlPc[0] = v17;
          ControlPc[2] = (DWORD64)v21;
          ControlPc[3] = EstablisherFrame;
          ControlPc[5] = (DWORD64)v6;
          ControlPc[6] = (DWORD64)v23;
          LODWORD(ControlPc[9]) = v24;
          v38 = (v6->ContextFlags & 0x100040) == 1048640;
          v27 = RtlpExecuteHandlerForUnwind(v26, EstablisherFrame, v6, ControlPc);
          if ( !v38 && (v6->ContextFlags & 0x100040) == 0x100040 )
            v6->ContextFlags &= ~0x40u;
          v40 &= 0xFFFFFF9F;
          v28 = v27 - 1;
          if ( v28 )
          {
            if ( v28 != 2 )
              RtlRaiseStatus(-1073741786);
            v17 = ControlPc[0];
            v21 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)ControlPc[2];
            ImageBase = ControlPc[1];
            RtlpCopyContext(v51, ControlPc[5]);
            ContextEx = v55;
            v6 = v34;
            RtlpCopyContext(v55, v34);
            v23 = RtlVirtualUnwind(2u, v36, v17, v21, v35, &HandlerData, &EstablisherFrame, 0LL);
            if ( v23 != (PEXCEPTION_ROUTINE)ControlPc[6]
              || (v22 = EstablisherFrame, EstablisherFrame != ControlPc[3])
              || HandlerData != (PVOID)ControlPc[7] )
            {
              __fastfail(0x27u);
            }
            v40 |= 0x40u;
            v50 = (PUNWIND_HISTORY_TABLE)ControlPc[8];
            ContextLength = ControlPc[9];
            if ( RtlpIsFrameInBounds(&v44, EstablisherFrame, &v45) || v11 != 1 )
              goto LABEL_30;
            v11 = 2;
            RtlpGetStackLimitsEx(v22, &v44, &v45);
          }
          else
          {
            if ( (PVOID)EstablisherFrame != TargetFrame )
            {
              v29 = (_CONTEXT_EX *)v6;
              v6 = (_CONTEXT *)ContextEx;
              ContextEx = v29;
            }
            v30 = _mm_getcsr();
            LODWORD(v46) = v30;
            v6->MxCsr = v30;
            v6->FltSave.MxCsr = v30;
          }
          v22 = EstablisherFrame;
LABEL_30:
          v25 = v40;
          v24 = ContextLength;
          if ( (v40 & 0x40) == 0 )
            goto LABEL_31;
        }
      }
      if ( (PVOID)v22 == TargetFrame )
      {
LABEL_31:
        v16 = ContextEx;
      }
      else
      {
        v32 = (_CONTEXT_EX *)v6;
        v6 = (_CONTEXT *)ContextEx;
        v16 = v32;
        ContextEx = v32;
      }
    }
    else
    {
      Rsp = (unsigned __int64 *)v6->Rsp;
      v6->Rip = *Rsp;
      v6->Rsp = (unsigned __int64)(Rsp + 1);
      RtlpPopUserShadowStack(v6, v18, v19, v20);
      v22 = EstablisherFrame;
    }
    v31 = 0;
    if ( v11 != 2 )
      v31 = v11;
    if ( (v22 & 7) != 0 || v22 < v44 || v22 >= v45 )
      break;
    if ( (PVOID)v22 == TargetFrame )
      goto LABEL_41;
    v8 = v50;
    v11 = v31;
  }
  if ( (PVOID)v22 == TargetFrame )
  {
LABEL_41:
    v33 = ExceptionRecorda;
    v6->Rax = (unsigned __int64)v52;
    if ( v33->ExceptionCode != -2147483607 )
    {
      v6->Rip = (unsigned __int64)v53;
      if ( v33->ExceptionCode != -2147483610 )
        v33->ExceptionCode = -1073741785;
    }
    RtlGuardRestoreContext(v6, v33);
  }
  else
  {
    if ( v17 == v6->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v6, 0);
  }
}
