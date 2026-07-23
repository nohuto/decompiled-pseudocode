/*
 * XREFs of PspSetContextThreadInternal @ 0x140693770
 * Callers:
 *     WbSetTrapFrame @ 0x14065F970 (WbSetTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1406934F4 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1406C79EC (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x14090DBC0 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x14090DD10 (PsSetContextThread.c)
 *     PspPicoSetContextThreadEx @ 0x14090EB80 (PspPicoSetContextThreadEx.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140911094 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     IoThreadToProcess @ 0x140208A40 (IoThreadToProcess.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeApc @ 0x1402D69A0 (KeInitializeApc.c)
 *     RtlGetExtendedContextLength @ 0x1402E6530 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1402E65B0 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1402E6634 (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextRecord @ 0x1402E754C (KeVerifyContextRecord.c)
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x140330AA0 (KeInitializeGate.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140405120 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlpReadExtendedContext @ 0x140693CD0 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x1406C7D98 (EtwTiLogSetContextThread.c)
 */

int __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r13
  int result; // eax
  char v11; // di
  struct _KPROCESS *v12; // rbx
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rax
  ULONG v17; // edi
  unsigned __int64 v18; // rax
  void *v19; // rsp
  int v20; // edx
  int v21; // ecx
  _QWORD *v22; // [rsp+20h] [rbp-20h]
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v26[48]; // [rsp+50h] [rbp+10h] BYREF

  ContextEx = 0LL;
  memset(v26, 0, sizeof(v26));
  ContextLength = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v16 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v16;
  }
  else
  {
    ContextFlags = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&ContextFlags, a3);
  if ( result >= 0 )
  {
    if ( !a3 )
    {
      v26[15] = a2;
      goto LABEL_6;
    }
    v17 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v18 = ContextLength + 15LL;
      if ( v18 <= ContextLength )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
      v26[15] = &ContextFlags;
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext((PCONTEXT)v26[15], v17, &ContextEx);
      if ( result >= 0 )
      {
        v26[15] = (char *)ContextEx - 1232;
        LOBYTE(v20) = 1;
        result = RtlpReadExtendedContext(v21, v20, (_DWORD)ContextEx, v17, a2, 0LL);
        if ( result >= 0 )
        {
LABEL_6:
          if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
            return -1073741776;
          BYTE1(v26[11]) &= ~4u;
          v11 = BYTE1(v26[11]);
          if ( a4 )
          {
            if ( (a5 & 2) == 0 )
            {
              v12 = IoThreadToProcess(CurrentThread);
              if ( IoThreadToProcess(Thread) == v12 )
              {
                v14 = KeVerifyContextRecord((__int64)Thread, v26[15], v13, 0LL, 0LL);
                if ( v14 < 0 )
                  return v14;
                v11 = BYTE1(v26[11]) | 4;
              }
            }
          }
          LOBYTE(v26[11]) = a4;
          if ( Thread == CurrentThread )
          {
            v26[8] = 1LL;
            v26[9] = Thread;
            BYTE1(v26[11]) = v11 & 0xFC | (2 * (a5 & 1));
            --CurrentThread->SpecialApcDisable;
            v22 = &v26[9];
            PspGetSetContextSpecialApc((__int64)v26, 0LL, 0LL, &v26[8]);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_15:
            v14 = HIDWORD(v26[11]);
            if ( v26[11] >= 0 && a3 == 1 && a4 == 1 )
            {
              LOBYTE(v15) = KeGetCurrentThread()->PreviousMode;
              EtwTiLogSetContextThread(v15, Thread, v26[15], ContextFlags, v22);
            }
            return v14;
          }
          BYTE1(v26[11]) = v11 & 0xFD | (2 * (a5 & 1)) | 1;
          KeInitializeGate((__int64)&v26[12]);
          KeInitializeApc((__int64)v26, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( KeInsertQueueApc((__int64)v26, 1LL, (__int64)Thread, 2u) )
          {
            KeWaitForGate((__int64)&v26[12], 0);
            goto LABEL_15;
          }
          return -1073741823;
        }
      }
    }
  }
  return result;
}
