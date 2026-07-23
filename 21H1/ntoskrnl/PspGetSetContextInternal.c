/*
 * XREFs of PspGetSetContextInternal @ 0x1406F1830
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x1403FDBC0 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140208310 (RtlpGetStackLimits.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     KeVerifyContextXStateCetU @ 0x14032BCE8 (KeVerifyContextXStateCetU.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14032D7E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x14032E574 (RtlpIsFrameInBoundsEx.c)
 *     RtlpVirtualUnwind @ 0x14032E5E0 (RtlpVirtualUnwind.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeVerifyContextIpForUserCet @ 0x1403EC574 (KeVerifyContextIpForUserCet.c)
 *     RtlpCaptureContext @ 0x1403FDE60 (RtlpCaptureContext.c)
 *     KeDoesTebMatchThread @ 0x140521170 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x14052118C (KeGetCurrentUmsTeb.c)
 *     PspSetContext @ 0x1406F13FC (PspSetContext.c)
 *     PspGetContext @ 0x1406F207C (PspGetContext.c)
 *     RtlCopyContext @ 0x1406F26DC (RtlCopyContext.c)
 *     VslGetSetSecureContext @ 0x14088B6B4 (VslGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x1408B8C34 (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x1408B8F1C (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1408B965C (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x1408B9940 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1408B9BFC (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1408BA29C (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090A53C (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x14090A708 (PspSetUmsThreadContext.c)
 *     PspSetContextState @ 0x14090AB14 (PspSetContextState.c)
 */

_BOOL8 __fastcall PspGetSetContextInternal(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  bool v5; // r12
  _QWORD *v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 TrapFrame; // r13
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *i; // rcx
  char Reserved1; // cl
  _DWORD *Object; // rdx
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r14d
  int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 CurrentUmsTeb; // rax
  bool DoesTebMatchThread; // al
  __int64 v24; // rcx
  bool v25; // r14
  int v26; // eax
  int updated; // eax
  _QWORD *j; // rcx
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rcx
  _CONTEXT *v35; // r14
  int v37; // [rsp+6Ch] [rbp-5FCh] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-5F8h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-5F0h] BYREF
  __int64 v40; // [rsp+80h] [rbp-5E8h]
  __int64 v41; // [rsp+88h] [rbp-5E0h]
  unsigned __int64 v42[5]; // [rsp+90h] [rbp-5D8h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-5B0h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-5A0h]
  __int128 v45; // [rsp+D0h] [rbp-598h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-588h]
  _OWORD v47[2]; // [rsp+E8h] [rbp-580h] BYREF
  char v48; // [rsp+1A0h] [rbp-4C8h] BYREF
  unsigned __int64 *v49; // [rsp+1A8h] [rbp-4C0h] BYREF
  char v50; // [rsp+1B0h] [rbp-4B8h] BYREF
  char v51; // [rsp+1B8h] [rbp-4B0h] BYREF
  char v52; // [rsp+1C0h] [rbp-4A8h] BYREF
  char v53; // [rsp+1E8h] [rbp-480h] BYREF
  char v54; // [rsp+1F0h] [rbp-478h] BYREF
  char v55; // [rsp+1F8h] [rbp-470h] BYREF
  char v56; // [rsp+200h] [rbp-468h] BYREF
  unsigned __int64 v57; // [rsp+208h] [rbp-460h]
  char v58; // [rsp+310h] [rbp-358h] BYREF
  char v59; // [rsp+320h] [rbp-348h] BYREF
  char v60; // [rsp+330h] [rbp-338h] BYREF
  char v61; // [rsp+340h] [rbp-328h] BYREF
  char v62; // [rsp+350h] [rbp-318h] BYREF
  char v63; // [rsp+360h] [rbp-308h] BYREF
  char v64; // [rsp+370h] [rbp-2F8h] BYREF
  char v65; // [rsp+380h] [rbp-2E8h] BYREF
  char v66; // [rsp+390h] [rbp-2D8h] BYREF
  char v67; // [rsp+3A0h] [rbp-2C8h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+5E0h] [rbp-88h] BYREF
  __int64 v69; // [rsp+610h] [rbp-58h]
  __int64 v70; // [rsp+618h] [rbp-50h]

  v41 = a2;
  v42[2] = a3;
  v42[1] = a1;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 20);
  v69 = 0LL;
  v70 = 0LL;
  v40 = 0LL;
  v42[4] = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v5 = 0;
  v37 = 0;
  v6 = (_QWORD *)(a1 + 128);
  CurrentThread = KeGetCurrentThread();
  if ( !*(_BYTE *)(a1 + 88) )
  {
    TrapFrame = (__int64)CurrentThread->TrapFrame;
    if ( !TrapFrame || *(_WORD *)(TrapFrame + 368) != 16 )
    {
      *(_DWORD *)(a1 + 92) = -1073741823;
      v9 = (_QWORD *)a3;
LABEL_61:
      v21 = a1;
      goto LABEL_62;
    }
    goto LABEL_29;
  }
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x200) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 120);
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.Size = 8 * (((unsigned __int16)((v10 & 0xFFF) + 5327) >> 12) + 6);
    MemoryDescriptorList.MdlFlags = 0;
    MemoryDescriptorList.StartVa = (PVOID)(v10 & 0xFFFFFFFFFFFFF000uLL);
    MemoryDescriptorList.ByteOffset = v10 & 0xFFF;
    MemoryDescriptorList.ByteCount = 1232;
    MmProbeAndLockPages(&MemoryDescriptorList, 0, IoModifyAccess);
    *(_DWORD *)(a1 + 92) = VslGetSetSecureContext(a2, *(_QWORD *)(a1 + 120), v69, v70);
    MmUnlockPages(&MemoryDescriptorList);
    goto LABEL_60;
  }
  for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
    ;
  TrapFrame = (__int64)(i - 50);
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) == 0 || (Object = CurrentThread->WaitBlock[3].Object, (Object[20] & 4) == 0) )
  {
    if ( Reserved1 < 0 )
    {
      CurrentUmsTeb = KeGetCurrentUmsTeb(CurrentThread);
      DoesTebMatchThread = KeDoesTebMatchThread((__int64)CurrentThread, CurrentUmsTeb);
      v25 = DoesTebMatchThread;
      if ( v41 )
      {
        updated = KeUpdatePrimaryThreadContext(v24, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = updated;
        if ( !v25 || updated < 0 )
          goto LABEL_60;
      }
      else if ( !DoesTebMatchThread )
      {
        v26 = KeBuildPrimaryThreadContext(v24, 0, *(_QWORD *)(a1 + 120), 1, 0LL, 0LL);
LABEL_26:
        *(_DWORD *)(a1 + 92) = v26;
        goto LABEL_60;
      }
    }
LABEL_29:
    if ( (*(_BYTE *)(a1 + 89) & 2) != 0 )
    {
      if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v39, (__int64)&v38) )
      {
        memset(v47, 0, sizeof(v47));
        v43 = *(_OWORD *)&xmmword_140E00020;
        v44 = qword_140E00030;
        RtlpCaptureContext();
        v6[19] = &v48;
        v6[21] = &v50;
        v6[22] = &v51;
        v6[23] = &v52;
        v6[28] = &v53;
        v6[29] = &v54;
        v6[30] = &v55;
        v6[31] = &v56;
        v6[6] = &v58;
        v6[7] = &v59;
        v6[8] = &v60;
        v6[9] = &v61;
        v6[10] = &v62;
        v6[11] = &v63;
        v6[12] = &v64;
        v6[13] = &v65;
        v6[14] = &v66;
        v6[15] = &v67;
        v6[20] = &v49;
        v31 = (unsigned __int64)v49;
        while ( 1 )
        {
          v32 = v57;
          if ( v57 <= 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v39, v31, &v38, (unsigned __int64 *)v47) )
            break;
          if ( RtlpLookupFunctionEntryForStackWalks(v32, (__int64)&v43) )
          {
            if ( (int)RtlpVirtualUnwind(0, *((__int64 *)&v43 + 1), v32) < 0 )
            {
              if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
                NT_ASSERT(
                  "*** Ps:  Context unwind failure
    A stack frame did not unwind properly
    Perform a stack trace to"
                  " find the culprit
    Use gh to continue!!
");
              goto LABEL_59;
            }
            v31 = (unsigned __int64)v49;
          }
          else
          {
            if ( !*((_QWORD *)&v43 + 1) )
              goto LABEL_59;
            v57 = *v49;
            v31 = (unsigned __int64)++v49;
          }
          if ( v40 == TrapFrame )
            goto LABEL_33;
        }
        if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          NT_ASSERT(
            "*** Ps:  Context unwind failure
    A stack frame did not unwind properly
    Perform a stack trace to find "
            "the culprit
    Use gh to continue!!
");
      }
LABEL_59:
      *(_DWORD *)(a1 + 92) = -1073741823;
      goto LABEL_60;
    }
    for ( j = CurrentThread->InitialStack; (j[1] & 1) != 0; j = (_QWORD *)j[5] )
      ;
    v6[19] = j - 58;
    v6[22] = j - 56;
    v6[23] = j - 57;
    v6[28] = j - 55;
    v6[29] = j - 54;
    v6[30] = j - 53;
    v6[31] = j - 52;
    v6[6] = j - 84;
    v6[7] = j - 82;
    v6[8] = j - 80;
    v6[9] = j - 78;
    v6[10] = j - 76;
    v6[11] = j - 74;
    v6[12] = j - 72;
    v6[13] = j - 70;
    v6[14] = j - 68;
    v6[15] = j - 66;
    v6[21] = TrapFrame + 344;
LABEL_33:
    v29 = *(_QWORD *)(a1 + 120);
    v30 = *(_DWORD *)(v29 + 48) & 0x100008;
    if ( !v41 )
    {
      if ( v30 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
        _fxsave((void *)(v29 + 256));
      if ( CurrentThread[1].WaitBlock[3].Thread && *(_BYTE *)(a1 + 88) == 1 )
      {
        v35 = *(_CONTEXT **)(a1 + 120);
        PspGetContext(TrapFrame, v6, v35);
        if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
        {
          RtlCopyContext(v35, v35->ContextFlags, (PCONTEXT)CurrentThread[1].WaitBlock[3].Thread);
          *(_DWORD *)(a1 + 92) = 0;
          goto LABEL_60;
        }
      }
      else
      {
        PspGetContext(TrapFrame, v6, *(_QWORD *)(a1 + 120));
      }
      *(_DWORD *)(a1 + 92) = 0;
      goto LABEL_60;
    }
    if ( v30 == 1048584 )
      v5 = *(_BYTE *)(a1 + 88) == 1;
    if ( *(_BYTE *)(a1 + 88) != 1
      || (v42[0] = 0LL, v26 = KeVerifyContextXStateCetU((__int64)CurrentThread, v29, v42), v26 >= 0)
      && ((*(_BYTE *)(a1 + 89) & 4) == 0
       || (v45 = 0LL,
           v46 = 0LL,
           LODWORD(v45) = 3,
           v26 = KeVerifyContextIpForUserCet((__int64)CurrentThread, *(_QWORD *)(a1 + 120), (int *)&v45, (__int64)v42),
           v26 >= 0)) )
    {
      if ( CurrentThread[1].WaitBlock[3].Thread
        && *(_BYTE *)(a1 + 88) == 1
        && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
      {
        PspSetContextState(CurrentThread, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = 0;
      }
      else
      {
        PspSetContext(TrapFrame, (__int64)v6, *(_QWORD *)(a1 + 120), *(_BYTE *)(a1 + 88));
        *(_DWORD *)(a1 + 92) = 0;
      }
      goto LABEL_60;
    }
    goto LABEL_26;
  }
  v14 = *(_QWORD *)Object;
  v15 = PspRundownUmsThreadForApcDelivery(CurrentThread, &v37, *(_QWORD *)Object, 0LL);
  *(_DWORD *)(a1 + 92) = v15;
  if ( v15 < 0 )
  {
LABEL_60:
    v9 = (_QWORD *)a3;
    goto LABEL_61;
  }
  v16 = *(_QWORD *)(a1 + 120);
  if ( a2 )
  {
    v17 = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), &v37);
  }
  else
  {
    v17 = 0;
    if ( (v37 & 2) != 0 )
      v17 = KeCopyContextFromUmsContext(v16, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
    else
      KeCopyContextFromUch(v16, CurrentThread->WaitBlock[3].SparePtr);
  }
  *(_DWORD *)(a1 + 92) = v17;
  v18 = KeClearUmsThreadKernelLock(v14);
  if ( v18 < 0 )
    *(_DWORD *)(a1 + 92) = v18;
  if ( (v37 & 8) != 0 )
  {
    LOBYTE(v19) = 1;
    v20 = KeUpdateUmsThreadState(v14, 0LL, v19);
    v21 = a1;
    if ( v20 < 0 )
    {
      *(_DWORD *)(a1 + 92) = v20;
      v9 = (_QWORD *)a3;
      goto LABEL_62;
    }
  }
  else
  {
    v21 = a1;
  }
  v9 = (_QWORD *)a3;
LABEL_62:
  v33 = v21 + 96;
  if ( (*(_BYTE *)(a1 + 89) & 1) == 0 )
    v33 = 0LL;
  *v9 = v33;
  return v5;
}
