/*
 * XREFs of PspSetContextThreadInternal @ 0x1406ADEB0
 * Callers:
 *     WbSetTrapFrame @ 0x140619E1C (WbSetTrapFrame.c)
 *     PspInitializeThunkContext @ 0x1406AE068 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1406E572C (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x140907FA0 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x1409080F0 (PsSetContextThread.c)
 *     PspPicoSetContextThreadEx @ 0x140908F60 (PspPicoSetContextThreadEx.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090B458 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     IoThreadToProcess @ 0x140296BB0 (IoThreadToProcess.c)
 *     RtlInitializeExtendedContext @ 0x1402E9C90 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1402E9D14 (RtlpSanitizeContextFlags.c)
 *     RtlGetExtendedContextLength @ 0x1402EA9B0 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextRecord @ 0x1402EAA48 (KeVerifyContextRecord.c)
 *     KeInitializeApc @ 0x1402F94B0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402FB5E0 (KeInsertQueueApc.c)
 *     KeWaitForGate @ 0x14030E9A4 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14035FD10 (KeInitializeGate.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1403FEE50 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlpReadExtendedContext @ 0x1406AD950 (RtlpReadExtendedContext.c)
 *     EtwTiLogSetContextThread @ 0x1406E66C4 (EtwTiLogSetContextThread.c)
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
  __int64 v20; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-20h]
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v25[48]; // [rsp+50h] [rbp+10h] BYREF

  ContextEx = 0LL;
  memset(v25, 0, sizeof(v25));
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
      v25[15] = a2;
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
      v25[15] = &ContextFlags;
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext((PCONTEXT)v25[15], v17, &ContextEx);
      if ( result >= 0 )
      {
        v25[15] = (char *)ContextEx - 1232;
        result = RtlpReadExtendedContext(v20, 1u, (__int64)ContextEx, v17, a2, 0LL);
        if ( result >= 0 )
        {
LABEL_6:
          if ( a4 && (Thread->MiscFlags & 0x400) != 0 )
            return -1073741776;
          BYTE1(v25[11]) &= ~4u;
          v11 = BYTE1(v25[11]);
          if ( a4 )
          {
            if ( (a5 & 2) == 0 )
            {
              v12 = IoThreadToProcess(CurrentThread);
              if ( IoThreadToProcess(Thread) == v12 )
              {
                v14 = KeVerifyContextRecord((__int64)Thread, v25[15], v13, 0LL, 0LL);
                if ( v14 < 0 )
                  return v14;
                v11 = BYTE1(v25[11]) | 4;
              }
            }
          }
          LOBYTE(v25[11]) = a4;
          if ( Thread == CurrentThread )
          {
            v25[8] = 1LL;
            v25[9] = Thread;
            BYTE1(v25[11]) = v11 & 0xFC | (2 * (a5 & 1));
            --CurrentThread->SpecialApcDisable;
            v21 = &v25[9];
            PspGetSetContextSpecialApc((__int64)v25, 0LL, 0LL, &v25[8]);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_15:
            v14 = HIDWORD(v25[11]);
            if ( v25[11] >= 0 && a3 == 1 && a4 == 1 )
            {
              LOBYTE(v15) = KeGetCurrentThread()->PreviousMode;
              EtwTiLogSetContextThread(v15, Thread, v25[15], ContextFlags, v21);
            }
            return v14;
          }
          BYTE1(v25[11]) = v11 & 0xFD | (2 * (a5 & 1)) | 1;
          KeInitializeGate((__int64)&v25[12]);
          KeInitializeApc((__int64)v25, (__int64)Thread, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
          if ( KeInsertQueueApc((__int64)v25, 1LL, (__int64)Thread, 2u) )
          {
            KeWaitForGate((__int64)&v25[12], 0);
            goto LABEL_15;
          }
          return -1073741823;
        }
      }
    }
  }
  return result;
}
