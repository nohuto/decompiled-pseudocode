/*
 * XREFs of RtlUnwindEx @ 0x180030600
 * Callers:
 *     RtlUnwind @ 0x180050DC0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x18008C6E0 (__C_specific_handler.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A0BA0 (KiUserCallbackDispatcherHandler.c)
 *     __longjmp_internal @ 0x1800A3AD0 (__longjmp_internal.c)
 * Callees:
 *     RtlpCopyContext @ 0x180030BD0 (RtlpCopyContext.c)
 *     RtlVirtualUnwind @ 0x180030DE0 (RtlVirtualUnwind.c)
 *     RtlpxVirtualUnwind @ 0x180030EB0 (RtlpxVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 *     RtlpSanitizeContext @ 0x180051C58 (RtlpSanitizeContext.c)
 *     RtlGetExtendedContextLength2 @ 0x180051D60 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180051F90 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x180052170 (RtlpGetStackLimits.c)
 *     RtlpSaveX87State @ 0x18006B0B0 (RtlpSaveX87State.c)
 *     RtlGuardRestoreContext @ 0x18006DCA0 (RtlGuardRestoreContext.c)
 *     RtlpPopUserShadowStack @ 0x18007D800 (RtlpPopUserShadowStack.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x18009FAC0 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1800A1060 (RtlCaptureContext2.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A16E0 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A2060 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1800A21F0 (RtlpExecuteHandlerForUnwind.c)
 *     RtlLocateExtendedFeature @ 0x1800F5A10 (RtlLocateExtendedFeature.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  struct _UNWIND_HISTORY_TABLE *v6; // r13
  struct _CONTEXT *p_ContextLength; // r15
  ULONG v10; // esi
  ULONG64 v11; // rbx
  bool v12; // di
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  void *v15; // rsp
  void *v16; // rsp
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  void *v20; // rsp
  struct _CONTEXT *v21; // rdi
  unsigned int v22; // esi
  struct _M128A *Rip; // rbx
  PM128A v24; // rcx
  PM128A v25; // rax
  int Rsi; // r13d
  PM128A v27; // rcx
  DWORD ContextFlags; // ebx
  int v29; // edx
  int v30; // edx
  __int128 v31; // kr10_16
  struct _M128A *v32; // rax
  unsigned __int128 v33; // kr00_16
  struct _M128A *v34; // rax
  ULONG v35; // et0
  struct _M128A *v36; // rax
  DWORD64 *Rsp; // rcx
  ULONG ContextLength; // [rsp+50h] [rbp+0h] BYREF
  struct _KNONVOLATILE_CONTEXT_POINTERS HandlerData; // [rsp+58h] [rbp+8h] BYREF

  v6 = HistoryTable;
  p_ContextLength = ContextRecord;
  HandlerData.FloatingContext[12] = (PM128A)TargetIp;
  HandlerData.FloatingContext[8] = (PM128A)HistoryTable;
  HandlerData.FloatingContext[11] = (PM128A)ReturnValue;
  if ( !(unsigned __int8)RtlpGetStackLimits(&HandlerData.Xmm9, &HandlerData.Xmm10) )
LABEL_63:
    RtlRaiseStatus(-1073741784);
  RtlpSanitizeContext(ContextRecord);
  v10 = 1048587;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1 )
  {
    v12 = 0;
    v10 = 1048651;
    if ( (ContextRecord->ContextFlags & 0x100040) == 0x100040 )
      v12 = RtlLocateExtendedFeature((PCONTEXT_EX)&ContextRecord[1], 0xBu, 0LL) != 0LL;
    v11 = 2048LL;
    if ( !v12 )
    {
      RtlGetExtendedContextLength2(0x10004Bu, &ContextLength, 0x800uLL);
      v13 = ContextLength + 15LL;
      if ( v13 <= ContextLength )
        v13 = 0xFFFFFFFFFFFFFF0LL;
      v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
      v15 = alloca(v14);
      v16 = alloca(v14);
      p_ContextLength = (struct _CONTEXT *)&ContextLength;
      RtlInitializeExtendedContext2(
        (PCONTEXT)&ContextLength,
        0x10004Bu,
        (PCONTEXT_EX *)&HandlerData.FloatingContext[2],
        0x800uLL);
    }
  }
  else
  {
    v11 = 0LL;
  }
  RtlGetExtendedContextLength2(v10, &ContextLength, v11);
  v17 = ContextLength + 15LL;
  if ( v17 <= ContextLength )
    v17 = 0xFFFFFFFFFFFFFF0LL;
  v18 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
  v19 = alloca(v18);
  v20 = alloca(v18);
  HandlerData.FloatingContext[6] = (PM128A)&ContextLength;
  RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v10, (PCONTEXT_EX *)&HandlerData.FloatingContext[2], v11);
  HandlerData.FloatingContext[1] = HandlerData.FloatingContext[6];
  v21 = p_ContextLength;
  RtlCaptureContext2(p_ContextLength);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    LODWORD(HandlerData.R11) = -1073741785;
    ExceptionRecord = (PEXCEPTION_RECORD)&HandlerData.R11;
    HandlerData.IntegerContext[12] = 0LL;
    HandlerData.IntegerContext[13] = (PDWORD64)p_ContextLength->Rip;
    LODWORD(HandlerData.R14) = 0;
  }
  HandlerData.FloatingContext[0] = 0LL;
  v22 = TargetFrame != 0LL ? 2 : 6;
  while ( 1 )
  {
    Rip = (struct _M128A *)v21->Rip;
    HandlerData.FloatingContext[7] = Rip;
    HandlerData.FloatingContext[5] = (PM128A)RtlLookupFunctionEntry(
                                               (ULONG64)Rip,
                                               (PULONG64)&HandlerData.FloatingContext[3],
                                               v6);
    if ( HandlerData.FloatingContext[5] )
    {
      RtlpCopyContext(HandlerData.FloatingContext[1], v21);
      HandlerData.FloatingContext[2] = 0LL;
      *(_OWORD *)&HandlerData.Rdi = 0uLL;
      RtlpSanitizeContext(HandlerData.FloatingContext[1]);
      HandlerData.IntegerContext[9] = 0LL;
      RtlpxVirtualUnwind(
        2,
        HandlerData.Xmm3,
        (_DWORD)Rip,
        HandlerData.Xmm5,
        (__int64)HandlerData.FloatingContext[1],
        0LL,
        (__int64)&HandlerData.FloatingContext[4],
        (__int64)&HandlerData,
        (__int64)&HandlerData.FloatingContext[2],
        (__int64)&HandlerData.IntegerContext[7]);
      v24 = HandlerData.FloatingContext[0];
      v25 = HandlerData.FloatingContext[2];
      if ( ((__int64)HandlerData.FloatingContext[0] & 7) != 0
        || HandlerData.FloatingContext[0] < HandlerData.FloatingContext[9]
        || HandlerData.FloatingContext[0] >= HandlerData.FloatingContext[10]
        || TargetFrame && TargetFrame < HandlerData.FloatingContext[0] )
      {
        goto LABEL_63;
      }
      if ( HandlerData.FloatingContext[2] )
      {
        Rsi = 0;
        HandlerData.IntegerContext[1] = &HandlerData.FloatingContext[12]->Low;
        do
        {
          if ( TargetFrame == v24 )
            v22 |= 0x20u;
          v27 = HandlerData.FloatingContext[11];
          ExceptionRecord->ExceptionFlags = v22;
          v21->Rax = (DWORD64)v27;
          HandlerData.IntegerContext[3] = &v25->Low;
          HandlerData.IntegerContext[4] = &HandlerData.FloatingContext[4]->Low;
          HandlerData.FloatingContext[14] = HandlerData.FloatingContext[3];
          HandlerData.FloatingContext[15] = HandlerData.FloatingContext[5];
          HandlerData.IntegerContext[5] = &HandlerData.FloatingContext[8]->Low;
          HandlerData.FloatingContext[13] = Rip;
          HandlerData.IntegerContext[0] = &HandlerData.FloatingContext[0]->Low;
          HandlerData.IntegerContext[2] = &v21->P1Home;
          LODWORD(HandlerData.Rsi) = Rsi;
          ContextFlags = v21->ContextFlags;
          v29 = RtlpExecuteHandlerForUnwind(ExceptionRecord, HandlerData.FloatingContext[0], v21, &HandlerData.Xmm13);
          if ( (ContextFlags & 0x100040) != 0x100040 && (v21->ContextFlags & 0x100040) == 0x100040 )
            v21->ContextFlags &= ~0x40u;
          v22 &= 0xFFFFFF9F;
          v30 = v29 - 1;
          if ( v30 )
          {
            if ( v30 != 2 )
              RtlRaiseStatus(-1073741786);
            Rip = HandlerData.FloatingContext[13];
            v31 = *(_OWORD *)&HandlerData.Xmm14;
            HandlerData.FloatingContext[3] = HandlerData.FloatingContext[14];
            HandlerData.FloatingContext[7] = HandlerData.FloatingContext[13];
            HandlerData.FloatingContext[5] = HandlerData.FloatingContext[15];
            RtlpCopyContext(p_ContextLength, HandlerData.IntegerContext[2]);
            HandlerData.FloatingContext[1] = HandlerData.FloatingContext[6];
            v21 = p_ContextLength;
            RtlpCopyContext(HandlerData.FloatingContext[6], p_ContextLength);
            v32 = (struct _M128A *)RtlVirtualUnwind(
                                     2u,
                                     (ULONG64)HandlerData.FloatingContext[3],
                                     (ULONG64)Rip,
                                     *((PRUNTIME_FUNCTION *)&v31 + 1),
                                     (PCONTEXT)HandlerData.FloatingContext[6],
                                     (PVOID *)&HandlerData.FloatingContext[4],
                                     (PULONG64)&HandlerData,
                                     0LL);
            HandlerData.FloatingContext[2] = v32;
            if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
            {
              if ( v32 != (struct _M128A *)HandlerData.IntegerContext[3]
                || (v24 = HandlerData.FloatingContext[0],
                    HandlerData.FloatingContext[0] != (PM128A)HandlerData.IntegerContext[0])
                || HandlerData.FloatingContext[4] != (PM128A)HandlerData.IntegerContext[4] )
              {
                __fastfail(0x27u);
              }
            }
            else
            {
              v24 = (PM128A)HandlerData.IntegerContext[0];
              v33 = *(_OWORD *)&HandlerData.Rbx;
              HandlerData.FloatingContext[4] = (PM128A)(v33 >> 64);
              HandlerData.FloatingContext[2] = (PM128A)v33;
              HandlerData.FloatingContext[0] = (PM128A)HandlerData.IntegerContext[0];
            }
            v22 |= 0x40u;
            Rsi = (int)HandlerData.Rsi;
            HandlerData.FloatingContext[8] = (PM128A)HandlerData.IntegerContext[5];
          }
          else
          {
            if ( HandlerData.FloatingContext[0] != TargetFrame )
            {
              v34 = (struct _M128A *)v21;
              v21 = (struct _CONTEXT *)HandlerData.FloatingContext[1];
              HandlerData.FloatingContext[1] = v34;
            }
            v35 = _mm_getcsr();
            ContextLength = v35;
            v21->MxCsr = v35;
            v21->FltSave.MxCsr = v35;
            if ( v21->FltSave.ControlWord != 639 || (v21->FltSave.StatusWord & 0xB880) != 0 || v21->FltSave.TagWord )
              RtlpSaveX87State(v21);
            Rip = HandlerData.FloatingContext[7];
            v24 = HandlerData.FloatingContext[0];
          }
          v25 = HandlerData.FloatingContext[2];
        }
        while ( (v22 & 0x40) != 0 );
        v6 = (struct _UNWIND_HISTORY_TABLE *)HandlerData.FloatingContext[8];
      }
      else if ( HandlerData.FloatingContext[0] != TargetFrame )
      {
        v36 = (struct _M128A *)v21;
        v21 = (struct _CONTEXT *)HandlerData.FloatingContext[1];
        HandlerData.FloatingContext[1] = v36;
      }
    }
    else
    {
      Rsp = (DWORD64 *)v21->Rsp;
      v21->Rip = *Rsp;
      v21->Rsp = (DWORD64)(Rsp + 1);
      RtlpPopUserShadowStack(v21);
      v24 = HandlerData.FloatingContext[0];
    }
    if ( ((unsigned __int8)v24 & 7) != 0
      || v24 < HandlerData.FloatingContext[9]
      || v24 >= HandlerData.FloatingContext[10] )
    {
      break;
    }
    if ( v24 == TargetFrame )
      goto LABEL_57;
  }
  if ( v24 == TargetFrame )
  {
LABEL_57:
    v21->Rax = (DWORD64)HandlerData.FloatingContext[11];
    if ( ExceptionRecord->ExceptionCode != -2147483607 )
    {
      v21->Rip = (DWORD64)HandlerData.FloatingContext[12];
      if ( ExceptionRecord->ExceptionCode != -2147483610 )
        ExceptionRecord->ExceptionCode = -1073741785;
    }
    RtlpGuardSynchronizeRestorePc(&v21->Rip);
    RtlGuardRestoreContext(v21, ExceptionRecord);
  }
  else
  {
    if ( Rip == (struct _M128A *)v21->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecord, v21, 0);
  }
}
