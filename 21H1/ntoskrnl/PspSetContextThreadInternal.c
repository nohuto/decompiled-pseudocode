/*
 * XREFs of PspSetContextThreadInternal @ 0x1406F2D50
 * Callers:
 *     WbSetTrapFrame @ 0x14065F53C (WbSetTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1406F2F08 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1406FC94C (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x140906CF0 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x140906E40 (PsSetContextThread.c)
 *     PspPicoSetContextThreadEx @ 0x140907CB0 (PspPicoSetContextThreadEx.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090A1A8 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     IoThreadToProcess @ 0x14025A330 (IoThreadToProcess.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x140322400 (KeInitializeGate.c)
 *     RtlInitializeExtendedContext @ 0x14032EDD0 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x14032EE54 (RtlpSanitizeContextFlags.c)
 *     RtlGetExtendedContextLength @ 0x14032FAF0 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextRecord @ 0x14032FB88 (KeVerifyContextRecord.c)
 *     KeInitializeApc @ 0x140355490 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1403575C0 (KeInsertQueueApc.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1403FDBC0 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlpReadExtendedContext @ 0x1406F27F0 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x1406FD8E4 (EtwTiLogSetContextThread.c)
 */

int __fastcall PspSetContextThreadInternal(PETHREAD Thread, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r13
  int result; // eax
  char v11; // di
  struct _KPROCESS *v12; // rbx
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  ULONG v20; // edi
  unsigned __int64 v21; // rax
  void *v22; // rsp
  __int64 v23; // rcx
  _QWORD *v24; // [rsp+20h] [rbp-20h]
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v28[48]; // [rsp+50h] [rbp+10h] BYREF

  ContextEx = 0LL;
  memset(v28, 0, sizeof(v28));
  ContextLength = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v19 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v19;
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
      v28[15] = a2;
      goto LABEL_6;
    }
    v20 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v21 = ContextLength + 15LL;
      if ( v21 <= ContextLength )
        v21 = 0xFFFFFFFFFFFFFF0LL;
      v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
      v28[15] = &ContextFlags;
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext((PCONTEXT)v28[15], v20, &ContextEx);
      if ( result >= 0 )
      {
        v28[15] = (char *)ContextEx - 1232;
        result = RtlpReadExtendedContext(v23, 1u, (__int64)ContextEx, v20, a2, 0LL);
        if ( result >= 0 )
        {
LABEL_6:
          if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
            return -1073741776;
          BYTE1(v28[11]) &= ~4u;
          v11 = BYTE1(v28[11]);
          if ( a4 )
          {
            if ( (a5 & 2) == 0 )
            {
              v12 = IoThreadToProcess(CurrentThread);
              if ( IoThreadToProcess(Thread) == v12 )
              {
                v14 = KeVerifyContextRecord((__int64)Thread, v28[15], v13, 0LL, 0LL);
                if ( v14 < 0 )
                  return v14;
                v11 = BYTE1(v28[11]) | 4;
              }
            }
          }
          LOBYTE(v28[11]) = a4;
          if ( Thread == CurrentThread )
          {
            v28[8] = 1LL;
            v28[9] = Thread;
            BYTE1(v28[11]) = v11 & 0xFC | (2 * (a5 & 1));
            --CurrentThread->SpecialApcDisable;
            v24 = &v28[9];
            PspGetSetContextSpecialApc((__int64)v28, 0LL, 0LL, &v28[8]);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v15, v16, v17);
LABEL_15:
            v14 = HIDWORD(v28[11]);
            if ( v28[11] >= 0 && a3 == 1 && a4 == 1 )
            {
              LOBYTE(v18) = KeGetCurrentThread()->PreviousMode;
              EtwTiLogSetContextThread(v18, Thread, v28[15], ContextFlags, v24);
            }
            return v14;
          }
          BYTE1(v28[11]) = v11 & 0xFD | (2 * (a5 & 1)) | 1;
          KeInitializeGate((__int64)&v28[12]);
          KeInitializeApc((__int64)v28, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( KeInsertQueueApc((__int64)v28, 1LL, (__int64)Thread, 2u) )
          {
            KeWaitForGate((__int64)&v28[12], 0);
            goto LABEL_15;
          }
          return -1073741823;
        }
      }
    }
  }
  return result;
}
