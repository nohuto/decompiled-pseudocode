/*
 * XREFs of NtQueryInformationThread @ 0x1406EB0A0
 * Callers:
 *     <none>
 * Callees:
 *     IoThreadToProcess @ 0x140224230 (IoThreadToProcess.c)
 *     KeQueryBasePriorityThread @ 0x140225600 (KeQueryBasePriorityThread.c)
 *     PsGetEffectiveContainerId @ 0x140234EC0 (PsGetEffectiveContainerId.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeQueryAffinityThread @ 0x1402504F0 (KeQueryAffinityThread.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeQueryValuesThread @ 0x140275640 (KeQueryValuesThread.c)
 *     PsQueryThreadStartAddress @ 0x14027E158 (PsQueryThreadStartAddress.c)
 *     PsGetWorkOnBehalfThread @ 0x1402A9F0C (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1402A9FB4 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     KeQueryTotalCycleTimeThread @ 0x1402D3740 (KeQueryTotalCycleTimeThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A3C4 (KeSetIdealProcessorThreadByNumber.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403D05B0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     KeQueryActualAffinityThread @ 0x1405132C0 (KeQueryActualAffinityThread.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x140513450 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryCpuSetsThread @ 0x14051C9D0 (KeQueryCpuSetsThread.c)
 *     PspLockThreadSecurityShared @ 0x140581784 (PspLockThreadSecurityShared.c)
 *     PspUnlockThreadSecurityShared @ 0x1405817AC (PspUnlockThreadSecurityShared.c)
 *     PspWow64GetContextThread @ 0x1405F561C (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x14061C130 (PsGetThreadExitStatus.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     MmCopyVirtualMemory @ 0x1406E6510 (MmCopyVirtualMemory.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     VslGetSecureTebAddress @ 0x14088FB94 (VslGetSecureTebAddress.c)
 *     PspQueryLastCallThread @ 0x140908128 (PspQueryLastCallThread.c)
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
  NTSTATUS ContextThread; // edi
  PVOID v24; // rdi
  __int64 v25; // rdi
  int v26; // ebx
  int v27; // ebx
  PVOID v28; // rdi
  ULONG_PTR v29; // r13
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  _KPROCESS *Process; // r8
  struct _EX_RUNDOWN_REF *v35; // rsi
  PVOID v36; // rcx
  int v37; // edi
  unsigned __int8 *v38; // rax
  int v39; // ecx
  PVOID v40; // r8
  PVOID v41; // rbx
  int v42; // r12d
  ULONG v43; // ebx
  NTSTATUS v44; // esi
  unsigned int *v45; // rdi
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _DWORD *v49; // r9
  char v50; // di
  __int64 v51; // rdx
  _QWORD *v52; // r13
  char v53; // cl
  __int64 v54; // rax
  const wchar_t *v55; // rdx
  ULONG v56; // eax
  __int64 v57; // rdx
  PVOID Object; // [rsp+40h] [rbp-248h] BYREF
  char v59; // [rsp+48h] [rbp-240h]
  char v60; // [rsp+49h] [rbp-23Fh]
  KPROCESSOR_MODE v61; // [rsp+4Ah] [rbp-23Eh]
  NTSTATUS v62; // [rsp+4Ch] [rbp-23Ch]
  _PROCESSOR_NUMBER v63; // [rsp+54h] [rbp-234h] BYREF
  __int16 v64; // [rsp+58h] [rbp-230h]
  HANDLE v65; // [rsp+60h] [rbp-228h]
  int v66; // [rsp+68h] [rbp-220h]
  int v67; // [rsp+6Ch] [rbp-21Ch] BYREF
  PVOID v68[2]; // [rsp+70h] [rbp-218h] BYREF
  unsigned __int64 CycleTimeStamp; // [rsp+80h] [rbp-208h] BYREF
  __m128i v70; // [rsp+88h] [rbp-200h] BYREF
  PULONG v71; // [rsp+98h] [rbp-1F0h]
  struct _KTHREAD *v72; // [rsp+A0h] [rbp-1E8h]
  __m128i v73; // [rsp+A8h] [rbp-1E0h] BYREF
  _OWORD v74[2]; // [rsp+B8h] [rbp-1D0h] BYREF
  __m128i v75; // [rsp+D8h] [rbp-1B0h]
  int v76; // [rsp+E8h] [rbp-1A0h]
  ULONG v77; // [rsp+ECh] [rbp-19Ch]
  ULONG v78; // [rsp+F0h] [rbp-198h]
  const wchar_t *v79; // [rsp+100h] [rbp-188h]
  __int64 v80; // [rsp+118h] [rbp-170h] BYREF
  _OWORD v81[2]; // [rsp+120h] [rbp-168h] BYREF
  __m128i v82; // [rsp+140h] [rbp-148h]
  __m128i v83; // [rsp+150h] [rbp-138h]
  __m128i v84; // [rsp+160h] [rbp-128h] BYREF
  int v85; // [rsp+170h] [rbp-118h]
  __m128i v86; // [rsp+178h] [rbp-110h] BYREF
  _QWORD Src[20]; // [rsp+190h] [rbp-F8h] BYREF

  v5 = ThreadInformationLength;
  v6 = (__m128i *)ThreadInformation;
  v65 = ThreadHandle;
  v71 = ReturnLength;
  v8 = 0;
  v80 = 0LL;
  v84 = 0LL;
  v85 = 0;
  v73 = 0LL;
  v86 = 0LL;
  Object = 0LL;
  CycleTimeStamp = 0LL;
  memset(v81, 0, sizeof(v81));
  CurrentThread = KeGetCurrentThread();
  v72 = CurrentThread;
  v68[1] = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v61 = PreviousMode;
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
    v66 = v12;
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
  DWORD1(v74[0]) = 0;
  v74[1] = 0LL;
  v75 = 0uLL;
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
        v83.m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
        v83.m128i_i64[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
        v82.m128i_i64[0] = *((_QWORD *)Object + 134);
        if ( *((_BYTE *)Object + 4) )
          v82.m128i_i64[1] = *((_QWORD *)Object + 135);
        else
          v82.m128i_i64[1] = 0LL;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *v6 = v82;
        v6[1] = v83;
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
              v25 = *((_QWORD *)Object + 154);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v6->m128i_i64[0] = v25;
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
              v26 = (*((_DWORD *)Object + 30) >> 3) & 1;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v6->m128i_i32[0] = v26;
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
            v27 = (*((_DWORD *)Object + 324) >> 5) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v27;
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
            v62 = result;
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
              v86 = *(__m128i *)ThreadInformation;
              ProbeForWrite((volatile void *)v86.m128i_i64[0], HIDWORD(_mm_srli_si128(v86, 8).m128i_u64[0]), 1u);
              v6 = &v86;
              PreviousMode = v61;
            }
            v65 = v6;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x18u,
                       (POBJECT_TYPE)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL);
            v62 = result;
            if ( result < 0 )
              return result;
            v28 = Object;
            if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return -1073741816;
            }
            else
            {
              v29 = *((_QWORD *)Object + 68);
              v30 = 6200LL;
              v31 = *(_QWORD *)(v29 + 1408);
              if ( v31 )
              {
                v30 = 12288LL;
                if ( *(_WORD *)(v31 + 8) == 0x8664 )
                  v30 = 14392LL;
              }
              v32 = v6->m128i_u32[3];
              if ( (_DWORD)v32 && (v33 = v6->m128i_u32[2], v33 < v30) && v32 <= v30 - v33 )
              {
                if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 159) )
                {
                  Process = KeGetCurrentThread()->ApcState.Process;
                  v35 = (struct _EX_RUNDOWN_REF *)Object;
                  if ( (_KPROCESS *)v29 == Process )
                  {
                    memmove(
                      (void *)v6->m128i_i64[0],
                      (const void *)(*((_QWORD *)Object + 30) + v6->m128i_u32[2]),
                      v6->m128i_u32[3]);
                    ContextThread = v62;
                  }
                  else
                  {
                    ContextThread = MmCopyVirtualMemory(
                                      v29,
                                      (char *)(*((_QWORD *)Object + 30) + v6->m128i_u32[2]),
                                      (ULONG_PTR)Process,
                                      (char *)v6->m128i_i64[0],
                                      v6->m128i_u32[3],
                                      v61,
                                      &v80);
                  }
                  ExReleaseRundownProtection(v35 + 159);
                  ObfDereferenceObjectWithTag(v35, 0x79517350u);
                  if ( ContextThread >= 0 )
                  {
                    if ( ReturnLength )
                      *ReturnLength = v6->m128i_u32[3];
                    ContextThread = 0;
                    v62 = 0;
                  }
                  return ContextThread;
                }
                else
                {
                  ObfDereferenceObjectWithTag(v28, 0x79517350u);
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
            ContextThread = PspWow64GetContextThread((__int64)Object, (ULONG *)v6, v5, v61);
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
            v24 = Object;
            KeQueryAffinityThread((__int64)Object, (__int64)&v73);
            *v6 = v73;
            if ( ReturnLength )
              *ReturnLength = 16;
            goto LABEL_108;
          case ThreadUmsInformation:
            if ( (_DWORD)v5 != 24 )
              return -1073741820;
            v37 = *(_DWORD *)ThreadInformation;
            v76 = *(_DWORD *)ThreadInformation;
            v68[0] = 0LL;
            result = ObReferenceObjectByHandle(ThreadHandle, 0x40u, (POBJECT_TYPE)PsThreadType, PreviousMode, v68, 0LL);
            v8 = result;
            if ( result < 0 )
              return result;
            if ( v37 == 3 )
            {
              *v6 = 0LL;
              v6[1].m128i_i64[0] = 0LL;
              v38 = (unsigned __int8 *)v68[0];
              v39 = *((unsigned __int8 *)v68[0] + 3) >> 7;
              v6->m128i_i32[2] = v39;
              v6->m128i_i32[2] = v39 | (v38[3] >> 5) & 2;
            }
            else
            {
              v8 = -1073741811;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v68[0]);
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
            v36 = Object;
            v6->m128i_i8[0] = *((_QWORD *)Object + 45) != 0LL;
            ObfDereferenceObjectWithTag(v36, 0x79517350u);
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
            v63 = (_PROCESSOR_NUMBER)0x400000;
            KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v63, &v63);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_PROCESSOR_NUMBER *)v6->m128i_i8 = v63;
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
            v62 = result;
            if ( result < 0 )
              return result;
            v6->m128i_i8[0] = *((_QWORD *)Object + 13) != 0LL;
            if ( ReturnLength )
              *ReturnLength = 1;
            v8 = v62;
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
            v40 = Object;
            v6->m128i_i32[0] = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 14) & 1);
            if ( ReturnLength )
              *ReturnLength = 4;
            v15 = v40;
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
              v41 = Object;
              v6->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
              if ( ReturnLength )
                *ReturnLength = 4;
              ObfDereferenceObjectWithTag(v41, 0x79517350u);
            }
            return ContextThread;
          case ThreadContainerId:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              return -1073741811;
            result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v84);
            if ( result >= 0 )
            {
              *v6 = v84;
              if ( ReturnLength )
                *ReturnLength = 16;
            }
            return result;
          case ThreadNameInformation:
            v50 = 0;
            v60 = 0;
            v59 = 0;
            v42 = ObReferenceObjectByHandleWithTag(
                    ThreadHandle,
                    0x800u,
                    (POBJECT_TYPE)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Object,
                    0LL);
            v62 = v42;
            if ( v42 < 0 )
            {
              v52 = Object;
              v53 = v59;
              v57 = (__int64)v72;
            }
            else
            {
              v50 = 1;
              v60 = 1;
              v51 = (__int64)CurrentThread;
              v52 = Object;
              PspLockThreadSecurityShared((__int64)Object, v51);
              v53 = 1;
              v59 = 1;
              v54 = v52[194];
              if ( v54 )
              {
                v55 = *(const wchar_t **)(v54 + 8);
                LOWORD(v8) = *(_WORD *)v54;
              }
              else
              {
                v55 = &word_1407D7CE0;
              }
              v64 = v8;
              v79 = v55;
              v56 = (unsigned __int16)v8 + 16;
              LODWORD(v65) = v56;
              v78 = v56;
              if ( v56 <= (unsigned int)v5 )
              {
                memmove(&v6[1], v55, (unsigned __int16)v8);
                v6->m128i_i16[0] = v8;
                v6->m128i_i16[1] = v8;
                v6->m128i_i64[1] = (__int64)v6[1].m128i_i64;
                v56 = (unsigned int)v65;
                v50 = v60;
                v53 = v59;
              }
              else
              {
                v42 = -1073741789;
                v62 = -1073741789;
              }
              if ( ReturnLength )
                *ReturnLength = v56;
              v57 = (__int64)v72;
            }
            if ( v53 )
              PspUnlockThreadSecurityShared((__int64)v52, v57);
            if ( v50 )
              ObfDereferenceObjectWithTag(v52, 0x79517350u);
            return v42;
          case ThreadSelectedCpuSets:
            if ( (v5 & 7) != 0 || (unsigned int)v5 > 0xA0 )
              return -1073741820;
            v42 = ObReferenceObjectByHandleWithTag(
                    ThreadHandle,
                    0x800u,
                    (POBJECT_TYPE)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Object,
                    0LL);
            v62 = v42;
            if ( v42 >= 0 )
            {
              v43 = 8 * KeQueryCpuSetsThread((__int64)Object, Src);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v77 = v43;
              if ( ReturnLength )
                *ReturnLength = v43;
              if ( v43 >= (unsigned int)v5 )
                v43 = v5;
              memmove(v6, Src, v43);
            }
            return v42;
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
            v44 = result;
            if ( result >= 0 )
            {
              v45 = (unsigned int *)Object;
              KeQueryValuesThread((__int64)Object, (__int64)v81);
              ThreadStartAddress = PsQueryThreadStartAddress((__int64)v45, 1);
              if ( ThreadStartAddress > 0x7FFFFFFEFFFFLL )
                ThreadStartAddress = 0LL;
              v6[4].m128i_i32[1] = BYTE8(v81[0]);
              v6[4].m128i_i32[2] = BYTE9(v81[0]);
              v6[3].m128i_i32[3] = SBYTE11(v81[0]);
              v6[3].m128i_i32[2] = SBYTE10(v81[0]);
              v6[1].m128i_i32[2] = v81[0];
              v47 = KeMaximumIncrement;
              v6->m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)v45[163];
              v6->m128i_i64[1] = v47 * v45[183];
              v6[1].m128i_i64[0] = *((_QWORD *)v45 + 134);
              v6[4].m128i_i32[0] = v45[85];
              *(__m128i *)((char *)v6 + 40) = *(__m128i *)(v45 + 286);
              v6[2].m128i_i64[0] = ThreadStartAddress;
              if ( ReturnLength )
                *ReturnLength = 80;
              ObfDereferenceObjectWithTag(v45, 0x79517350u);
              return v44;
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
            v24 = Object;
            KeQueryActualAffinityThread((__int64)Object, (__int64)&v73, v48, v49);
            *v6 = v73;
            if ( ReturnLength )
              *ReturnLength = 16;
LABEL_108:
            ObfDereferenceObjectWithTag(v24, 0x79517350u);
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
            v62 = result;
            if ( result < 0 )
              return result;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 324) >> 19) & 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            v8 = v62;
LABEL_111:
            v15 = Object;
            goto LABEL_27;
          case ThreadWorkOnBehalfTicket:
            v67 = 0;
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              return -1073741811;
            v70 = 0LL;
            WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v67);
            if ( WorkOnBehalfThread )
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v70);
              if ( v67 )
                HalPutDmaAdapter(v22);
            }
            else
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &v70);
              v70.m128i_i32[2] |= 1u;
            }
            *v6 = v70;
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
              v8 = qword_140C1E090;
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
          LODWORD(v74[0]) = PsGetThreadExitStatus((PETHREAD)Object);
        else
          LODWORD(v74[0]) = 259;
        *((_QWORD *)&v74[0] + 1) = *((_QWORD *)v17 + 30);
        if ( (IoThreadToProcess((PETHREAD)v17)->SecureState.SecureHandle & 1) != 0 )
          VslGetSecureTebAddress(v17, (char *)v74 + 8);
        v18 = *(__m128i *)(v17 + 1144);
        v75.m128i_i64[0] = *((_QWORD *)v17 + 69);
        v75.m128i_i32[2] = v17[195];
        v75.m128i_i32[3] = KeQueryBasePriorityThread((__int64)v17);
        ObfDereferenceObjectWithTag(v17, 0x79517350u);
        *v6 = (__m128i)v74[0];
        v6[1] = v18;
        v6[2] = v75;
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
