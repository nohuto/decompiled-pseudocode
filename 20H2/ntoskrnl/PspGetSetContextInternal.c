/*
 * XREFs of PspGetSetContextInternal @ 0x140687060
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x140405120 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1402265A0 (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140228100 (RtlpLookupFunctionEntryForStackWalks.c)
 *     MmProbeAndLockPages @ 0x14026AA30 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     RtlpIsFrameInBoundsEx @ 0x1402D8608 (RtlpIsFrameInBoundsEx.c)
 *     RtlpVirtualUnwind @ 0x1402D8680 (RtlpVirtualUnwind.c)
 *     KeVerifyContextXStateCetU @ 0x1402D872C (KeVerifyContextXStateCetU.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeVerifyContextIpForUserCet @ 0x1403F18AC (KeVerifyContextIpForUserCet.c)
 *     RtlpCaptureContext @ 0x1404053C0 (RtlpCaptureContext.c)
 *     KeDoesTebMatchThread @ 0x140525190 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x1405251AC (KeGetCurrentUmsTeb.c)
 *     PspGetContext @ 0x1406878AC (PspGetContext.c)
 *     PspSetContext @ 0x140687C78 (PspSetContext.c)
 *     RtlCopyContext @ 0x140693BBC (RtlCopyContext.c)
 *     VslGetSetSecureContext @ 0x140892524 (VslGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x1408BFCB4 (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x1408BFF9C (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1408C06DC (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x1408C09C0 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1408C0C7C (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1408C131C (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14091141C (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x1409115E8 (PspSetUmsThreadContext.c)
 *     PspSetContextState @ 0x1409119F4 (PspSetContextState.c)
 */

_BOOL8 __fastcall PspGetSetContextInternal(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  bool v5; // r12
  _QWORD *v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  _KTRAP_FRAME *TrapFrame; // r13
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
  char *v36; // [rsp+20h] [rbp-648h]
  char *v37; // [rsp+28h] [rbp-640h]
  __int64 *v38; // [rsp+30h] [rbp-638h]
  _KTRAP_FRAME **v39; // [rsp+38h] [rbp-630h]
  _QWORD *v40; // [rsp+40h] [rbp-628h]
  unsigned __int64 *v41; // [rsp+48h] [rbp-620h]
  unsigned __int64 *v42; // [rsp+50h] [rbp-618h]
  __int64 v43; // [rsp+58h] [rbp-610h]
  char v45; // [rsp+69h] [rbp-5FFh] BYREF
  int v46; // [rsp+6Ch] [rbp-5FCh] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp-5F8h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-5F0h] BYREF
  _KTRAP_FRAME *v49; // [rsp+80h] [rbp-5E8h] BYREF
  __int64 v50; // [rsp+88h] [rbp-5E0h]
  unsigned __int64 v51[4]; // [rsp+90h] [rbp-5D8h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-5B8h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-5B0h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-5A0h]
  __int128 v55; // [rsp+D0h] [rbp-598h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-588h]
  _OWORD v57[2]; // [rsp+E8h] [rbp-580h] BYREF
  char v58; // [rsp+110h] [rbp-558h] BYREF
  char v59; // [rsp+1A0h] [rbp-4C8h] BYREF
  unsigned __int64 *v60; // [rsp+1A8h] [rbp-4C0h] BYREF
  char v61; // [rsp+1B0h] [rbp-4B8h] BYREF
  char v62; // [rsp+1B8h] [rbp-4B0h] BYREF
  char v63; // [rsp+1C0h] [rbp-4A8h] BYREF
  char v64; // [rsp+1E8h] [rbp-480h] BYREF
  char v65; // [rsp+1F0h] [rbp-478h] BYREF
  char v66; // [rsp+1F8h] [rbp-470h] BYREF
  char v67; // [rsp+200h] [rbp-468h] BYREF
  unsigned __int64 v68; // [rsp+208h] [rbp-460h]
  char v69; // [rsp+310h] [rbp-358h] BYREF
  char v70; // [rsp+320h] [rbp-348h] BYREF
  char v71; // [rsp+330h] [rbp-338h] BYREF
  char v72; // [rsp+340h] [rbp-328h] BYREF
  char v73; // [rsp+350h] [rbp-318h] BYREF
  char v74; // [rsp+360h] [rbp-308h] BYREF
  char v75; // [rsp+370h] [rbp-2F8h] BYREF
  char v76; // [rsp+380h] [rbp-2E8h] BYREF
  char v77; // [rsp+390h] [rbp-2D8h] BYREF
  char v78; // [rsp+3A0h] [rbp-2C8h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+5E0h] [rbp-88h] BYREF
  __int64 v80; // [rsp+610h] [rbp-58h]
  __int64 v81; // [rsp+618h] [rbp-50h]

  v50 = a2;
  v51[2] = a3;
  v51[1] = a1;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 20);
  v80 = 0LL;
  v81 = 0LL;
  v49 = 0LL;
  v52 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v45 = 0;
  v5 = 0;
  v46 = 0;
  v6 = (_QWORD *)(a1 + 128);
  CurrentThread = KeGetCurrentThread();
  if ( !*(_BYTE *)(a1 + 88) )
  {
    TrapFrame = CurrentThread->TrapFrame;
    if ( !TrapFrame || TrapFrame->SegCs != 16 )
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
    *(_DWORD *)(a1 + 92) = VslGetSetSecureContext(a2, *(_QWORD *)(a1 + 120), v80, v81);
    MmUnlockPages(&MemoryDescriptorList);
    goto LABEL_60;
  }
  for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
    ;
  TrapFrame = (_KTRAP_FRAME *)(i - 50);
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) == 0 || (Object = CurrentThread->WaitBlock[3].Object, (Object[20] & 4) == 0) )
  {
    if ( Reserved1 < 0 )
    {
      CurrentUmsTeb = KeGetCurrentUmsTeb(CurrentThread);
      DoesTebMatchThread = KeDoesTebMatchThread((__int64)CurrentThread, CurrentUmsTeb);
      v25 = DoesTebMatchThread;
      if ( v50 )
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
      if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v48, (__int64)&v47) )
      {
        memset(v57, 0, sizeof(v57));
        v53 = *(_OWORD *)&xmmword_140E00020;
        v54 = qword_140E00030;
        RtlpCaptureContext();
        v6[19] = &v59;
        v6[21] = &v61;
        v6[22] = &v62;
        v6[23] = &v63;
        v6[28] = &v64;
        v6[29] = &v65;
        v6[30] = &v66;
        v6[31] = &v67;
        v6[6] = &v69;
        v6[7] = &v70;
        v6[8] = &v71;
        v6[9] = &v72;
        v6[10] = &v73;
        v6[11] = &v74;
        v6[12] = &v75;
        v6[13] = &v76;
        v6[14] = &v77;
        v6[15] = &v78;
        v6[20] = &v60;
        v31 = (unsigned __int64)v60;
        while ( 1 )
        {
          v32 = v68;
          if ( v68 <= 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v48, v31, &v47, (unsigned __int64 *)v57) )
            break;
          if ( RtlpLookupFunctionEntryForStackWalks(v32, (__int64)&v53) )
          {
            v43 = 0LL;
            v42 = &v47;
            v41 = &v48;
            v40 = v6;
            v39 = &v49;
            v38 = &v52;
            v37 = &v45;
            v36 = &v58;
            if ( (int)RtlpVirtualUnwind(0, *((__int64 *)&v53 + 1), v32) < 0 )
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
            v31 = (unsigned __int64)v60;
          }
          else
          {
            if ( !*((_QWORD *)&v53 + 1) )
              goto LABEL_59;
            v68 = *v60;
            v31 = (unsigned __int64)++v60;
          }
          if ( v49 == TrapFrame )
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
    v6[21] = &TrapFrame->Rbp;
LABEL_33:
    v29 = *(_QWORD *)(a1 + 120);
    v30 = *(_DWORD *)(v29 + 48) & 0x100008;
    if ( !v50 )
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
      || (v51[0] = 0LL, v26 = KeVerifyContextXStateCetU((__int64)CurrentThread, v29, v51), v26 >= 0)
      && ((*(_BYTE *)(a1 + 89) & 4) == 0
       || (v55 = 0LL,
           v56 = 0LL,
           LODWORD(v55) = 3,
           v26 = KeVerifyContextIpForUserCet((__int64)CurrentThread, *(_QWORD *)(a1 + 120), (int *)&v55, (__int64)v51),
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
        PspSetContext(
          TrapFrame,
          v6,
          *(_QWORD *)(a1 + 120),
          *(unsigned __int8 *)(a1 + 88),
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        *(_DWORD *)(a1 + 92) = 0;
      }
      goto LABEL_60;
    }
    goto LABEL_26;
  }
  v14 = *(_QWORD *)Object;
  v15 = PspRundownUmsThreadForApcDelivery(CurrentThread, &v46, *(_QWORD *)Object, 0LL);
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
    v17 = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), &v46);
  }
  else
  {
    v17 = 0;
    if ( (v46 & 2) != 0 )
      v17 = KeCopyContextFromUmsContext(v16, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
    else
      KeCopyContextFromUch(v16, CurrentThread->WaitBlock[3].SparePtr);
  }
  *(_DWORD *)(a1 + 92) = v17;
  v18 = KeClearUmsThreadKernelLock(v14);
  if ( v18 < 0 )
    *(_DWORD *)(a1 + 92) = v18;
  if ( (v46 & 8) != 0 )
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
