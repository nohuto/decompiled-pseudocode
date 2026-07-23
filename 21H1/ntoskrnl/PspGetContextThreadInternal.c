/*
 * XREFs of PspGetContextThreadInternal @ 0x1406F2448
 * Callers:
 *     WbSetTrapFrame @ 0x14065F53C (WbSetTrapFrame.c)
 *     WbGetTrapFrame @ 0x14065FA5C (WbGetTrapFrame.c)
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     NtGetContextThread @ 0x1406E7F30 (NtGetContextThread.c)
 *     PspInitializeThunkContext @ 0x1406F2F08 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1406FC94C (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406FCCF8 (PspWow64GetContextThread.c)
 *     PsGetContextThread @ 0x140906E20 (PsGetContextThread.c)
 *     PspPicoGetContextThreadEx @ 0x140907C80 (PspPicoGetContextThreadEx.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090A1A8 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x140322400 (KeInitializeGate.c)
 *     RtlInitializeExtendedContext @ 0x14032EDD0 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x14032EE54 (RtlpSanitizeContextFlags.c)
 *     RtlGetExtendedContextLength @ 0x14032FAF0 (RtlGetExtendedContextLength.c)
 *     KeInitializeApc @ 0x140355490 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1403575C0 (KeInsertQueueApc.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1403FDBC0 (PspGetSetContextSpecialApc.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlpReadExtendedContext @ 0x1406F27F0 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1406FCFC4 (RtlpWriteExtendedContext.c)
 */

int __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r12
  int result; // eax
  PCONTEXT_EX v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  int v20; // ecx
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v24[48]; // [rsp+50h] [rbp+10h] BYREF
  __int128 v25; // [rsp+1D0h] [rbp+190h] BYREF
  __int64 v26; // [rsp+1E0h] [rbp+1A0h]

  ContextEx = 0LL;
  memset(v24, 0, sizeof(v24));
  ContextLength = 0;
  v25 = 0LL;
  v26 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v15 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v15;
  }
  else
  {
    ContextFlags = *(_DWORD *)(a2 + 48);
  }
  result = RtlpSanitizeContextFlags(&ContextFlags, a3);
  if ( result >= 0 )
  {
    if ( a3 )
    {
      result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
      if ( result < 0 )
        return result;
      v16 = ContextLength + 15LL;
      if ( v16 <= ContextLength )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      v18 = alloca(v17);
      v19 = alloca(v17);
      v24[15] = &ContextFlags;
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, ContextFlags, &ContextEx);
      if ( result < 0 )
        return result;
      v11 = ContextEx;
      v24[15] = (char *)ContextEx - 1232;
      result = RtlpReadExtendedContext(v20, 0, (_DWORD)ContextEx, ContextFlags, a2, (__int64)&v25);
      if ( result < 0 )
        return result;
    }
    else
    {
      v24[15] = a2;
      v11 = (PCONTEXT_EX)(a2 + 1232);
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return -1073741776;
    LOBYTE(v24[11]) = a4;
    if ( (struct _KTHREAD *)a1 == CurrentThread )
    {
      v24[8] = 0LL;
      v24[9] = a1;
      BYTE1(v24[11]) = BYTE1(v24[11]) & 0xFC | (2 * (a5 & 1));
      --CurrentThread->SpecialApcDisable;
      PspGetSetContextSpecialApc((__int64)v24, 0LL, 0LL, &v24[8]);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
    }
    else
    {
      BYTE1(v24[11]) = BYTE1(v24[11]) & 0xFD | (2 * (a5 & 1)) | 1;
      KeInitializeGate((__int64)&v24[12]);
      KeInitializeApc((__int64)v24, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
      if ( !KeInsertQueueApc((__int64)v24, 0LL, a1, 2u) )
        return -1073741823;
      KeWaitForGate((__int64)&v24[12], 0);
    }
    result = HIDWORD(v24[11]);
    if ( v24[11] >= 0 && v24[15] != a2 )
      return RtlpWriteExtendedContext(
               v24[15],
               (int)a2 + 1232,
               (unsigned int)&v25,
               *(_DWORD *)(v24[15] + 48LL),
               (__int64)v11);
  }
  return result;
}
