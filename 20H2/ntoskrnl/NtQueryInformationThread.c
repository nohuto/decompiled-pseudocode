/*
 * XREFs of NtQueryInformationThread @ 0x1405F1760
 * Callers:
 *     <none>
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14020890C (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1402089B4 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x140208A40 (IoThreadToProcess.c)
 *     KeQueryTotalCycleTimeThread @ 0x140208B30 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x140208C34 (KeQueryBasePriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsQueryThreadStartAddress @ 0x14023F318 (PsQueryThreadStartAddress.c)
 *     KeQueryValuesThread @ 0x140264700 (KeQueryValuesThread.c)
 *     PsGetEffectiveContainerId @ 0x140314260 (PsGetEffectiveContainerId.c)
 *     KeQueryAffinityThread @ 0x1403300B0 (KeQueryAffinityThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A674 (KeSetIdealProcessorThreadByNumber.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403CFAD0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     KeQueryActualAffinityThread @ 0x140511540 (KeQueryActualAffinityThread.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x1405116D0 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryCpuSetsThread @ 0x14051ACB0 (KeQueryCpuSetsThread.c)
 *     PspLockThreadSecurityShared @ 0x14057FEEC (PspLockThreadSecurityShared.c)
 *     PspUnlockThreadSecurityShared @ 0x140580178 (PspUnlockThreadSecurityShared.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     MmCopyVirtualMemory @ 0x140679AB0 (MmCopyVirtualMemory.c)
 *     PspWow64GetContextThread @ 0x140691C20 (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x1406DD160 (PsGetThreadExitStatus.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     VslGetSecureTebAddress @ 0x140892494 (VslGetSecureTebAddress.c)
 *     PspQueryLastCallThread @ 0x14090A818 (PspQueryLastCallThread.c)
 */

NTSTATUS __cdecl NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // rsi
  __m128i *v6; // r14
  NTSTATUS v8; // ebx
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r9
  int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  NTSTATUS result; // eax
  PVOID v15; // rcx
  __int32 v16; // ebx
  char *v17; // rbx
  __m128i v18; // xmm6
  PVOID WorkOnBehalfThread; // rcx
  NTSTATUS v20; // edi
  PVOID v21; // rcx
  struct _DMA_ADAPTER *v22; // rcx
  int ContextThread; // edi
  __int64 v24; // r8
  _DWORD *v25; // r9
  PVOID v26; // rdi
  __int64 v27; // rdi
  int v28; // ebx
  int v29; // ebx
  PVOID v30; // rdi
  _KPROCESS *v31; // r13
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  _KPROCESS *Process; // r8
  struct _EX_RUNDOWN_REF *v37; // rsi
  PVOID v38; // rcx
  int v39; // edi
  unsigned __int8 *v40; // rax
  int v41; // ecx
  PVOID v42; // r8
  PVOID v43; // rbx
  int v44; // r12d
  ULONG v45; // ebx
  NTSTATUS v46; // esi
  unsigned int *v47; // rdi
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  _DWORD *v51; // r9
  char v52; // di
  __int64 v53; // rdx
  _QWORD *v54; // r13
  char v55; // cl
  __int64 v56; // rax
  const wchar_t *v57; // rdx
  ULONG v58; // eax
  __int64 v59; // rdx
  PVOID Object; // [rsp+40h] [rbp-248h] BYREF
  char v61; // [rsp+48h] [rbp-240h]
  char v62; // [rsp+49h] [rbp-23Fh]
  unsigned __int8 v63; // [rsp+4Ah] [rbp-23Eh]
  NTSTATUS v64; // [rsp+4Ch] [rbp-23Ch]
  _PROCESSOR_NUMBER v65; // [rsp+54h] [rbp-234h] BYREF
  __int16 v66; // [rsp+58h] [rbp-230h]
  HANDLE v67; // [rsp+60h] [rbp-228h]
  int v68; // [rsp+68h] [rbp-220h]
  int v69; // [rsp+6Ch] [rbp-21Ch] BYREF
  PVOID v70[2]; // [rsp+70h] [rbp-218h] BYREF
  unsigned __int64 CycleTimeStamp; // [rsp+80h] [rbp-208h] BYREF
  __m128i v72; // [rsp+88h] [rbp-200h] BYREF
  PULONG v73; // [rsp+98h] [rbp-1F0h]
  struct _KTHREAD *v74; // [rsp+A0h] [rbp-1E8h]
  __m128i v75; // [rsp+A8h] [rbp-1E0h] BYREF
  _OWORD v76[2]; // [rsp+B8h] [rbp-1D0h] BYREF
  __m128i v77; // [rsp+D8h] [rbp-1B0h]
  int v78; // [rsp+E8h] [rbp-1A0h]
  ULONG v79; // [rsp+ECh] [rbp-19Ch]
  ULONG v80; // [rsp+F0h] [rbp-198h]
  const wchar_t *v81; // [rsp+100h] [rbp-188h]
  __int64 v82; // [rsp+118h] [rbp-170h] BYREF
  _OWORD v83[2]; // [rsp+120h] [rbp-168h] BYREF
  __m128i v84; // [rsp+140h] [rbp-148h]
  __m128i v85; // [rsp+150h] [rbp-138h]
  __m128i v86; // [rsp+160h] [rbp-128h] BYREF
  int v87; // [rsp+170h] [rbp-118h]
  __m128i v88; // [rsp+178h] [rbp-110h] BYREF
  _QWORD Src[20]; // [rsp+190h] [rbp-F8h] BYREF

  v5 = ThreadInformationLength;
  v6 = (__m128i *)ThreadInformation;
  v67 = ThreadHandle;
  v73 = ReturnLength;
  v8 = 0;
  v82 = 0LL;
  v86 = 0LL;
  v87 = 0;
  v75 = 0LL;
  v88 = 0LL;
  Object = 0LL;
  CycleTimeStamp = 0LL;
  memset(v83, 0, sizeof(v83));
  CurrentThread = KeGetCurrentThread();
  v74 = CurrentThread;
  v70[1] = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v63 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = 1;
    if ( ThreadInformationClass == ThreadNameInformation )
    {
      v12 = 8;
    }
    else if ( (unsigned int)v5 < 4 )
    {
      v12 = 1;
    }
    else
    {
      v12 = 4;
    }
    v68 = v12;
    if ( (_DWORD)v5 )
    {
      if ( ((v12 - 1) & (unsigned int)ThreadInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + v5 > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + v5 < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( ReturnLength )
    {
      v13 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
  }
  else
  {
    v11 = 1;
  }
  DWORD1(v76[0]) = 0;
  v76[1] = 0LL;
  v77 = 0uLL;
  if ( ThreadInformationClass != ThreadCycleTime )
  {
    if ( ThreadInformationClass == ThreadActualBasePriority )
    {
      if ( (_DWORD)v5 == 4 )
      {
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v16 = *((char *)Object + 563);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->m128i_i32[0] = v16;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
    }
    else if ( ThreadInformationClass == ThreadTimes )
    {
      if ( (_DWORD)v5 == 32 )
      {
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v85.m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
        v85.m128i_i64[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
        v84.m128i_i64[0] = *((_QWORD *)Object + 134);
        if ( *((_BYTE *)Object + 4) )
          v84.m128i_i64[1] = *((_QWORD *)Object + 135);
        else
          v84.m128i_i64[1] = 0LL;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *v6 = v84;
        v6[1] = v85;
        if ( ReturnLength )
          *ReturnLength = 32;
        return 0;
      }
    }
    else
    {
      if ( ThreadInformationClass )
      {
        switch ( ThreadInformationClass )
        {
          case ThreadDescriptorTableEntry:
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v8 = xKdEnumerateDebuggingDevices();
            goto LABEL_111;
          case ThreadQuerySetWin32StartAddress:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            v8 = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x40u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
            if ( v8 >= 0 )
            {
              v27 = *((_QWORD *)Object + 154);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v6->m128i_i64[0] = v27;
              if ( ReturnLength )
                *ReturnLength = 8;
            }
            return v8;
          case ThreadPerformanceCount:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            ContextThread = ObReferenceObjectByHandleWithTag(
                              ThreadHandle,
                              0x40u,
                              (POBJECT_TYPE)PsThreadType,
                              PreviousMode,
                              0x79517350u,
                              &Object,
                              0LL);
            if ( ContextThread >= 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v6->m128i_i64[0] = 0LL;
              if ( ReturnLength )
                *ReturnLength = 8;
            }
            return ContextThread;
          case ThreadAmILastThread:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            if ( LODWORD(CurrentThread->Process[1].ActiveProcessors.Bitmap[8]) != 1 )
              v11 = 0;
            *(_DWORD *)ThreadInformation = v11;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadPriorityBoost:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            ContextThread = ObReferenceObjectByHandleWithTag(
                              ThreadHandle,
                              0x800u,
                              (POBJECT_TYPE)PsThreadType,
                              PreviousMode,
                              0x79517350u,
                              &Object,
                              0LL);
            if ( ContextThread >= 0 )
            {
              v28 = (*((_DWORD *)Object + 30) >> 3) & 1;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v6->m128i_i32[0] = v28;
              if ( ReturnLength )
                *ReturnLength = 4;
            }
            return ContextThread;
          case ThreadIsIoPending:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            LOBYTE(v8) = *((_QWORD *)Object + 150) != (_QWORD)Object + 1200;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v8;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadHideFromDebugger:
            if ( (_DWORD)v5 != 1 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v8 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            v6->m128i_i8[0] = (*((_DWORD *)Object + 324) & 4) != 0;
            if ( ReturnLength )
              *ReturnLength = 1;
            goto LABEL_27;
          case ThreadBreakOnTermination:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v29 = (*((_DWORD *)Object + 324) >> 5) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v29;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadIsTerminated:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            if ( (*((_DWORD *)Object + 324) & 1) == 0 )
              v11 = 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v11;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadLastSystemCall:
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       8u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v8 = PspQueryLastCallThread(Object, v6, (unsigned int)v5, ReturnLength);
            v15 = Object;
            goto LABEL_27;
          case ThreadIoPriority:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v8 = result;
            v64 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 324) >> 9) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_27;
          case ThreadPagePriority:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v8 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 324) >> 12) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_27;
          case ThreadTebInformation:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            if ( PreviousMode )
            {
              v88 = *(__m128i *)ThreadInformation;
              ProbeForWrite((volatile void *)v88.m128i_i64[0], HIDWORD(_mm_srli_si128(v88, 8).m128i_u64[0]), 1u);
              v6 = &v88;
              PreviousMode = v63;
            }
            v67 = v6;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x18u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v64 = result;
            if ( result < 0 )
              return result;
            v30 = Object;
            if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return -1073741816;
            }
            else
            {
              v31 = (_KPROCESS *)*((_QWORD *)Object + 68);
              v32 = 6200LL;
              v33 = v31[1].AffinityPadding[10];
              if ( v33 )
              {
                v32 = 12288LL;
                if ( *(_WORD *)(v33 + 8) == 0x8664 )
                  v32 = 14392LL;
              }
              v34 = v6->m128i_u32[3];
              if ( (_DWORD)v34 && (v35 = v6->m128i_u32[2], v35 < v32) && v34 <= v32 - v35 )
              {
                if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 159) )
                {
                  Process = KeGetCurrentThread()->ApcState.Process;
                  v37 = (struct _EX_RUNDOWN_REF *)Object;
                  if ( v31 == Process )
                  {
                    memmove(
                      (void *)v6->m128i_i64[0],
                      (const void *)(*((_QWORD *)Object + 30) + v6->m128i_u32[2]),
                      v6->m128i_u32[3]);
                    ContextThread = v64;
                  }
                  else
                  {
                    ContextThread = MmCopyVirtualMemory(
                                      (int)v31,
                                      *((_DWORD *)Object + 60) + v6->m128i_i32[2],
                                      (int)Process,
                                      v6->m128i_i64[0],
                                      v6->m128i_u32[3],
                                      v63,
                                      (__int64)&v82);
                  }
                  ExReleaseRundownProtection_0(v37 + 159);
                  ObfDereferenceObjectWithTag(v37, 0x79517350u);
                  if ( ContextThread >= 0 )
                  {
                    if ( ReturnLength )
                      *ReturnLength = v6->m128i_u32[3];
                    ContextThread = 0;
                    v64 = 0;
                  }
                  return ContextThread;
                }
                else
                {
                  ObfDereferenceObjectWithTag(v30, 0x79517350u);
                  return -1073741749;
                }
              }
              else
              {
                ObfDereferenceObjectWithTag(Object, 0x79517350u);
                return -1073741811;
              }
            }
          case ThreadWow64Context:
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       8u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            ContextThread = PspWow64GetContextThread(Object, v6, (unsigned int)v5, v63);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( ContextThread >= 0 && ReturnLength )
              *ReturnLength = 716;
            return ContextThread;
          case ThreadGroupInformation:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v8 = result;
            if ( result < 0 )
              return result;
            v26 = Object;
            KeQueryAffinityThread((__int64)Object, (__int64)&v75, v24, v25);
            *v6 = v75;
            if ( ReturnLength )
              *ReturnLength = 16;
            goto LABEL_108;
          case ThreadUmsInformation:
            if ( (_DWORD)v5 != 24 )
              return -1073741820;
            v39 = *(_DWORD *)ThreadInformation;
            v78 = *(_DWORD *)ThreadInformation;
            v70[0] = 0LL;
            result = ObReferenceObjectByHandle(ThreadHandle, 0x40u, (POBJECT_TYPE)PsThreadType, PreviousMode, v70, 0LL);
            v8 = result;
            if ( result < 0 )
              return result;
            if ( v39 == 3 )
            {
              *v6 = 0LL;
              v6[1].m128i_i64[0] = 0LL;
              v40 = (unsigned __int8 *)v70[0];
              v41 = *((unsigned __int8 *)v70[0] + 3) >> 7;
              v6->m128i_i32[2] = v41;
              v6->m128i_i32[2] = v41 | (v40[3] >> 5) & 2;
            }
            else
            {
              v8 = -1073741811;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v70[0]);
            return v8;
          case ThreadCounterProfiling:
            if ( (_DWORD)v5 != 1 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v8 = result;
            if ( result < 0 )
              return result;
            v38 = Object;
            v6->m128i_i8[0] = *((_QWORD *)Object + 45) != 0LL;
            ObfDereferenceObjectWithTag(v38, 0x79517350u);
            if ( ReturnLength )
              *ReturnLength = 1;
            return v8;
          case ThreadIdealProcessorEx:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v65 = (_PROCESSOR_NUMBER)0x400000;
            KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v65, &v65);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_PROCESSOR_NUMBER *)v6->m128i_i8 = v65;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadCpuAccountingInformation:
            if ( !(_DWORD)v5 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v64 = result;
            if ( result < 0 )
              return result;
            v6->m128i_i8[0] = *((_QWORD *)Object + 13) != 0LL;
            if ( ReturnLength )
              *ReturnLength = 1;
            v8 = v64;
            goto LABEL_111;
          case ThreadSuspendCount:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v8 = result;
            if ( result < 0 )
              return result;
            v42 = Object;
            v6->m128i_i32[0] = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 14) & 1);
            if ( ReturnLength )
              *ReturnLength = 4;
            v15 = v42;
            goto LABEL_27;
          case ThreadHeterogeneousCpuPolicy:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            ContextThread = ObReferenceObjectByHandleWithTag(
                              ThreadHandle,
                              0x800u,
                              (POBJECT_TYPE)PsThreadType,
                              PreviousMode,
                              0x79517350u,
                              &Object,
                              0LL);
            if ( ContextThread >= 0 )
            {
              v43 = Object;
              v6->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
              if ( ReturnLength )
                *ReturnLength = 4;
              ObfDereferenceObjectWithTag(v43, 0x79517350u);
            }
            return ContextThread;
          case ThreadContainerId:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              return -1073741811;
            result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v86);
            if ( result >= 0 )
            {
              *v6 = v86;
              if ( ReturnLength )
                *ReturnLength = 16;
            }
            return result;
          case ThreadNameInformation:
            v52 = 0;
            v62 = 0;
            v61 = 0;
            v44 = ObReferenceObjectByHandleWithTag(
                    ThreadHandle,
                    0x800u,
                    (POBJECT_TYPE)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Object,
                    0LL);
            v64 = v44;
            if ( v44 < 0 )
            {
              v54 = Object;
              v55 = v61;
              v59 = (__int64)v74;
            }
            else
            {
              v52 = 1;
              v62 = 1;
              v53 = (__int64)CurrentThread;
              v54 = Object;
              PspLockThreadSecurityShared((__int64)Object, v53);
              v55 = 1;
              v61 = 1;
              v56 = v54[194];
              if ( v56 )
              {
                v57 = *(const wchar_t **)(v56 + 8);
                LOWORD(v8) = *(_WORD *)v56;
              }
              else
              {
                v57 = &word_1407D36E0;
              }
              v66 = v8;
              v81 = v57;
              v58 = (unsigned __int16)v8 + 16;
              LODWORD(v67) = v58;
              v80 = v58;
              if ( v58 <= (unsigned int)v5 )
              {
                memmove(&v6[1], v57, (unsigned __int16)v8);
                v6->m128i_i16[0] = v8;
                v6->m128i_i16[1] = v8;
                v6->m128i_i64[1] = (__int64)v6[1].m128i_i64;
                v58 = (unsigned int)v67;
                v52 = v62;
                v55 = v61;
              }
              else
              {
                v44 = -1073741789;
                v64 = -1073741789;
              }
              if ( ReturnLength )
                *ReturnLength = v58;
              v59 = (__int64)v74;
            }
            if ( v55 )
              PspUnlockThreadSecurityShared((__int64)v54, v59);
            if ( v52 )
              ObfDereferenceObjectWithTag(v54, 0x79517350u);
            return v44;
          case ThreadSelectedCpuSets:
            if ( (v5 & 7) != 0 || (unsigned int)v5 > 0xA0 )
              return -1073741820;
            v44 = ObReferenceObjectByHandleWithTag(
                    ThreadHandle,
                    0x800u,
                    (POBJECT_TYPE)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Object,
                    0LL);
            v64 = v44;
            if ( v44 >= 0 )
            {
              v45 = 8 * KeQueryCpuSetsThread((__int64)Object, Src);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v79 = v45;
              if ( ReturnLength )
                *ReturnLength = v45;
              if ( v45 >= (unsigned int)v5 )
                v45 = v5;
              memmove(v6, Src, v45);
            }
            return v44;
          case ThreadSystemThreadInformation:
            if ( (_DWORD)v5 != 80 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v46 = result;
            if ( result >= 0 )
            {
              v47 = (unsigned int *)Object;
              KeQueryValuesThread((__int64)Object, (__int64)v83);
              ThreadStartAddress = PsQueryThreadStartAddress((__int64)v47, 1);
              if ( ThreadStartAddress > 0x7FFFFFFEFFFFLL )
                ThreadStartAddress = 0LL;
              v6[4].m128i_i32[1] = BYTE8(v83[0]);
              v6[4].m128i_i32[2] = BYTE9(v83[0]);
              v6[3].m128i_i32[3] = SBYTE11(v83[0]);
              v6[3].m128i_i32[2] = SBYTE10(v83[0]);
              v6[1].m128i_i32[2] = v83[0];
              v49 = KeMaximumIncrement;
              v6->m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)v47[163];
              v6->m128i_i64[1] = v49 * v47[183];
              v6[1].m128i_i64[0] = *((_QWORD *)v47 + 134);
              v6[4].m128i_i32[0] = v47[85];
              *(__m128i *)((char *)v6 + 40) = *(__m128i *)(v47 + 286);
              v6[2].m128i_i64[0] = ThreadStartAddress;
              if ( ReturnLength )
                *ReturnLength = 80;
              ObfDereferenceObjectWithTag(v47, 0x79517350u);
              return v46;
            }
            return result;
          case ThreadActualGroupAffinity:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v8 = result;
            if ( result < 0 )
              return result;
            v26 = Object;
            KeQueryActualAffinityThread((__int64)Object, (__int64)&v75, v50, v51);
            *v6 = v75;
            if ( ReturnLength )
              *ReturnLength = 16;
LABEL_108:
            ObfDereferenceObjectWithTag(v26, 0x79517350u);
            return v8;
          case ThreadDynamicCodePolicyInfo:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v20 = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 324) & 0x40000) != 0;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_72;
          case ThreadExplicitCaseSensitivity:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v64 = result;
            if ( result < 0 )
              return result;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 324) >> 19) & 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            v8 = v64;
LABEL_111:
            v15 = Object;
            goto LABEL_27;
          case ThreadWorkOnBehalfTicket:
            v69 = 0;
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              return -1073741811;
            v72 = 0LL;
            WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v69);
            if ( WorkOnBehalfThread )
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v72);
              if ( v69 )
                HalPutDmaAdapter(v22);
            }
            else
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &v72);
              v72.m128i_i32[2] |= 1u;
            }
            *v6 = v72;
            if ( ReturnLength )
              *ReturnLength = 16;
            return 0;
          case ThreadSubsystemInformation:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v20 = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            if ( *((_QWORD *)Object + 188) )
              v8 = qword_140C1DEF0;
            v6->m128i_i32[0] = v8;
            if ( ReturnLength )
              *ReturnLength = 4;
LABEL_72:
            ObfDereferenceObjectWithTag(v21, 0x79517350u);
            result = v20;
            break;
          default:
            return -1073741821;
        }
        return result;
      }
      if ( (_DWORD)v5 == 48 )
      {
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v17 = (char *)Object;
        if ( *((_BYTE *)Object + 4) )
          LODWORD(v76[0]) = PsGetThreadExitStatus((PETHREAD)Object);
        else
          LODWORD(v76[0]) = 259;
        *((_QWORD *)&v76[0] + 1) = *((_QWORD *)v17 + 30);
        if ( (IoThreadToProcess((PETHREAD)v17)->SecureState.SecureHandle & 1) != 0 )
          VslGetSecureTebAddress(v17, (char *)v76 + 8);
        v18 = *(__m128i *)(v17 + 1144);
        v77.m128i_i64[0] = *((_QWORD *)v17 + 69);
        v77.m128i_i32[2] = v17[195];
        v77.m128i_i32[3] = KeQueryBasePriorityThread((__int64)v17);
        ObfDereferenceObjectWithTag(v17, 0x79517350u);
        *v6 = (__m128i)v76[0];
        v6[1] = v18;
        v6[2] = v77;
        if ( ReturnLength )
          *ReturnLength = 48;
        return 0;
      }
    }
    return -1073741820;
  }
  if ( (_DWORD)v5 != 16 )
    return -1073741820;
  if ( ThreadHandle == (HANDLE)-2LL )
  {
    Object = CurrentThread;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ThreadHandle,
               0x800u,
               (POBJECT_TYPE)PsThreadType,
               PreviousMode,
               0x79517350u,
               &Object,
               0LL);
    v8 = result;
    if ( result < 0 )
      return result;
    CurrentThread = (struct _KTHREAD *)Object;
  }
  v6->m128i_i64[0] = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
  v6->m128i_i64[1] = CycleTimeStamp;
  if ( ReturnLength )
    *ReturnLength = 16;
  if ( ThreadHandle != (HANDLE)-2LL )
  {
    v15 = CurrentThread;
LABEL_27:
    ObfDereferenceObjectWithTag(v15, 0x79517350u);
  }
  return v8;
}
