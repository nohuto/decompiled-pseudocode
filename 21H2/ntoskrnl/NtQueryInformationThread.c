/*
 * XREFs of NtQueryInformationThread @ 0x1407BF670
 * Callers:
 *     <none>
 * Callees:
 *     IoThreadToProcess @ 0x1402321F0 (IoThreadToProcess.c)
 *     PsGetEffectiveContainerId @ 0x140234210 (PsGetEffectiveContainerId.c)
 *     KeQueryBasePriorityThread @ 0x140234504 (KeQueryBasePriorityThread.c)
 *     KeQueryUserAffinityThread @ 0x14025C33C (KeQueryUserAffinityThread.c)
 *     PsQueryThreadStartAddress @ 0x140280CBC (PsQueryThreadStartAddress.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1402F61F8 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PsGetWorkOnBehalfThread @ 0x1402F6220 (PsGetWorkOnBehalfThread.c)
 *     KeQueryValuesThread @ 0x140302C20 (KeQueryValuesThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403861B4 (KeSetIdealProcessorThreadByNumber.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403DF740 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x14056B210 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x14056B234 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x1405725CC (KeQueryCpuSetsThread.c)
 *     PsGetThreadExitStatus @ 0x1406E2920 (PsGetThreadExitStatus.c)
 *     PspWow64GetContextThread @ 0x140704EF8 (PspWow64GetContextThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     MiCopyVirtualMemory @ 0x1407BB560 (MiCopyVirtualMemory.c)
 *     VslGetSecureTebAddress @ 0x1409322EC (VslGetSecureTebAddress.c)
 *     PspQueryLastCallThread @ 0x1409AE2F8 (PspQueryLastCallThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQueryInformationThread(ULONG_PTR a1, int a2, __m128i *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // r14
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // r9
  char PreviousMode; // r10
  int v11; // r12d
  int v12; // eax
  __int64 v13; // rcx
  __int64 result; // rax
  unsigned int v15; // edi
  PVOID v16; // rcx
  ULONG_PTR v17; // rdi
  PVOID v18; // rcx
  __int32 v19; // ebx
  char *v20; // rdi
  __m128i v21; // xmm6
  __int64 v22; // rax
  _WORD *v23; // rcx
  PVOID WorkOnBehalfThread; // rcx
  void *v25; // rcx
  int ContextThread; // edi
  __int64 v27; // rdi
  unsigned __int16 *v28; // r14
  __int64 v29; // rax
  int v30; // ebx
  int v31; // ebx
  PVOID v32; // rdi
  ULONG_PTR v33; // r12
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  _KPROCESS *Process; // r8
  struct _EX_RUNDOWN_REF *v38; // r14
  PVOID v39; // rcx
  PVOID v40; // r8
  PVOID v41; // rbx
  int v42; // r12d
  unsigned int v43; // ebx
  __int64 v44; // r8
  _DWORD *v45; // r9
  unsigned int v46; // r14d
  unsigned int *v47; // rdi
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  _DWORD *v51; // r9
  PVOID v52; // rdi
  __int64 v53; // rdi
  signed __int64 *v54; // r13
  char v55; // dl
  signed __int64 v56; // rax
  const WCHAR *v57; // r9
  unsigned __int16 v58; // ax
  unsigned int v59; // ecx
  __int16 v60; // ax
  PVOID Object; // [rsp+40h] [rbp-3C8h] BYREF
  char v62; // [rsp+48h] [rbp-3C0h]
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-3B8h]
  KPROCESSOR_MODE v64; // [rsp+58h] [rbp-3B0h]
  char v65; // [rsp+59h] [rbp-3AFh]
  int v66; // [rsp+5Ch] [rbp-3ACh]
  __int16 v67; // [rsp+64h] [rbp-3A4h]
  struct _PROCESSOR_NUMBER v68; // [rsp+68h] [rbp-3A0h] BYREF
  _WORD *v69; // [rsp+70h] [rbp-398h]
  _DWORD v70[2]; // [rsp+78h] [rbp-390h] BYREF
  unsigned int v71; // [rsp+80h] [rbp-388h]
  ULONG_PTR v72; // [rsp+88h] [rbp-380h]
  __m128i v73; // [rsp+90h] [rbp-378h] BYREF
  unsigned int *v74; // [rsp+A0h] [rbp-368h]
  struct _KTHREAD *v75; // [rsp+A8h] [rbp-360h]
  unsigned __int64 CycleTimeStamp; // [rsp+B0h] [rbp-358h] BYREF
  __m128i v77; // [rsp+B8h] [rbp-350h] BYREF
  _OWORD v78[2]; // [rsp+C8h] [rbp-340h] BYREF
  __m128i v79; // [rsp+E8h] [rbp-320h]
  unsigned int v80; // [rsp+F8h] [rbp-310h]
  const WCHAR *v81; // [rsp+100h] [rbp-308h]
  size_t v82[2]; // [rsp+120h] [rbp-2E8h] BYREF
  _OWORD v83[2]; // [rsp+130h] [rbp-2D8h] BYREF
  __m128i v84; // [rsp+150h] [rbp-2B8h]
  __m128i v85; // [rsp+160h] [rbp-2A8h]
  __m128i v86; // [rsp+170h] [rbp-298h] BYREF
  int v87; // [rsp+180h] [rbp-288h]
  __m128i v88; // [rsp+188h] [rbp-280h] BYREF
  _DWORD v89[68]; // [rsp+1A0h] [rbp-268h] BYREF
  _QWORD Src[32]; // [rsp+2B0h] [rbp-158h] BYREF

  v5 = a4;
  BugCheckParameter1 = a1;
  v72 = a1;
  v74 = a5;
  DWORD1(v78[0]) = 0;
  v8 = 0LL;
  v82[0] = 0LL;
  v86 = 0LL;
  v87 = 0;
  v77 = 0LL;
  v88 = 0LL;
  Object = 0LL;
  memset(&v89[2], 0, 0x100uLL);
  CycleTimeStamp = 0LL;
  memset(v83, 0, sizeof(v83));
  CurrentThread = KeGetCurrentThread();
  v69 = CurrentThread;
  v75 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v64 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = 1;
    if ( a2 == 38 )
    {
      v12 = 8;
    }
    else
    {
      v12 = 1;
      if ( (unsigned int)v5 >= 4 )
        v12 = 4;
    }
    v70[1] = v12;
    if ( (_DWORD)v5 )
    {
      if ( ((v12 - 1) & (unsigned int)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)a3->m128i_u64 + v5 > 0x7FFFFFFF0000LL || &a3->m128i_i8[v5] < (__int8 *)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( a5 )
    {
      v13 = (__int64)a5;
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
  }
  else
  {
    v11 = 1;
  }
  DWORD1(v78[0]) = 0;
  v78[1] = 0LL;
  v79 = 0uLL;
  if ( a2 != 23 )
  {
    if ( a2 == 1 )
    {
      if ( (_DWORD)v5 == 32 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        v85.m128i_i64[0] = (unsigned int)KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
        v85.m128i_i64[1] = (unsigned int)KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
        v84.m128i_i64[0] = *((_QWORD *)Object + 144);
        if ( *((_BYTE *)Object + 4) )
          v84.m128i_i64[1] = *((_QWORD *)Object + 145);
        else
          v84.m128i_i64[1] = 0LL;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *a3 = v84;
        a3[1] = v85;
        if ( a5 )
          *a5 = 32;
        return 0LL;
      }
    }
    else if ( a2 == 25 )
    {
      if ( (_DWORD)v5 == 4 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        v19 = *((char *)Object + 563);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        a3->m128i_i32[0] = v19;
        if ( a5 )
          *a5 = 4;
        return 0LL;
      }
    }
    else
    {
      if ( a2 )
      {
        switch ( a2 )
        {
          case 6:
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            LODWORD(v8) = xKdEnumerateDebuggingDevices();
            goto LABEL_124;
          case 9:
            if ( (_DWORD)v5 != 8 )
              return 3221225476LL;
            LODWORD(v8) = ObpReferenceObjectByHandleWithTag(
                            BugCheckParameter1,
                            64,
                            (__int64)PsThreadType,
                            PreviousMode,
                            0x79517350u,
                            &Object,
                            0LL,
                            0LL);
            if ( (int)v8 >= 0 )
            {
              v27 = *((_QWORD *)Object + 164);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              a3->m128i_i64[0] = v27;
              if ( a5 )
                *a5 = 8;
            }
            return (unsigned int)v8;
          case 11:
            if ( (_DWORD)v5 != 8 )
              return 3221225476LL;
            ContextThread = ObpReferenceObjectByHandleWithTag(
                              BugCheckParameter1,
                              64,
                              (__int64)PsThreadType,
                              PreviousMode,
                              0x79517350u,
                              &Object,
                              0LL,
                              0LL);
            if ( ContextThread >= 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              a3->m128i_i64[0] = 0LL;
              if ( a5 )
                *a5 = 8;
            }
            return (unsigned int)ContextThread;
          case 12:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            if ( LODWORD(CurrentThread->Process[1].ActiveProcessors.StaticBitmap[8]) != 1 )
              v11 = 0;
            a3->m128i_i32[0] = v11;
            if ( a5 )
              *a5 = 4;
            return 0LL;
          case 14:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            ContextThread = ObpReferenceObjectByHandleWithTag(
                              BugCheckParameter1,
                              2048,
                              (__int64)PsThreadType,
                              PreviousMode,
                              0x79517350u,
                              &Object,
                              0LL,
                              0LL);
            if ( ContextThread >= 0 )
            {
              v30 = (*((_DWORD *)Object + 30) >> 3) & 1;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              a3->m128i_i32[0] = v30;
              if ( a5 )
                *a5 = 4;
            }
            return (unsigned int)ContextThread;
          case 16:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            if ( *((PVOID *)Object + 160) == (char *)Object + 1280 )
              v11 = 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            a3->m128i_i32[0] = v11;
            if ( a5 )
              *a5 = 4;
            return 0LL;
          case 17:
            if ( (_DWORD)v5 != 1 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            LODWORD(v8) = result;
            if ( (int)result < 0 )
              return result;
            v18 = Object;
            a3->m128i_i8[0] = (*((_DWORD *)Object + 344) & 4) != 0;
            if ( a5 )
              *a5 = 1;
            goto LABEL_73;
          case 18:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            v31 = (*((_DWORD *)Object + 344) >> 5) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            a3->m128i_i32[0] = v31;
            if ( a5 )
              *a5 = 4;
            return 0LL;
          case 20:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            if ( (*((_DWORD *)Object + 344) & 1) == 0 )
              v11 = 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            a3->m128i_i32[0] = v11;
            if ( a5 )
              *a5 = 4;
            return 0LL;
          case 21:
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       8,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            LODWORD(v8) = PspQueryLastCallThread(Object, a3, (unsigned int)v5, a5);
            v18 = Object;
            goto LABEL_73;
          case 22:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            LODWORD(v8) = result;
            v66 = result;
            if ( (int)result < 0 )
              return result;
            v18 = Object;
            a3->m128i_i32[0] = (*((_DWORD *)Object + 344) >> 9) & 7;
            if ( a5 )
              *a5 = 4;
            goto LABEL_73;
          case 24:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            LODWORD(v8) = result;
            if ( (int)result < 0 )
              return result;
            v18 = Object;
            a3->m128i_i32[0] = (*((_DWORD *)Object + 344) >> 12) & 7;
            if ( a5 )
              *a5 = 4;
            goto LABEL_73;
          case 26:
            if ( (_DWORD)v5 != 16 )
              return 3221225476LL;
            if ( PreviousMode )
            {
              v88 = *a3;
              ProbeForWrite((volatile void *)v88.m128i_i64[0], HIDWORD(_mm_srli_si128(v88, 8).m128i_u64[0]), 1u);
              a3 = &v88;
              PreviousMode = v64;
            }
            v69 = a3;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       24,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v66 = result;
            if ( (int)result < 0 )
              return result;
            v32 = Object;
            if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return 3221225480LL;
            }
            else
            {
              v33 = *((_QWORD *)Object + 68);
              v34 = 6224LL;
              if ( *(_QWORD *)(v33 + 1408) )
              {
                v34 = 12312LL;
                if ( *(_WORD *)(v33 + 2412) == 0x8664 )
                  v34 = 14416LL;
              }
              v35 = a3->m128i_u32[3];
              if ( (_DWORD)v35 && (v36 = a3->m128i_u32[2], v36 < v34) && v35 <= v34 - v36 )
              {
                if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 169) )
                {
                  Process = KeGetCurrentThread()->ApcState.Process;
                  v38 = (struct _EX_RUNDOWN_REF *)Object;
                  if ( (_KPROCESS *)v33 == Process )
                  {
                    memmove(
                      (void *)a3->m128i_i64[0],
                      (const void *)(*((_QWORD *)Object + 30) + a3->m128i_u32[2]),
                      a3->m128i_u32[3]);
                    ContextThread = v66;
                  }
                  else
                  {
                    ContextThread = MiCopyVirtualMemory(
                                      v33,
                                      (char *)(*((_QWORD *)Object + 30) + a3->m128i_u32[2]),
                                      (ULONG_PTR)Process,
                                      (void *)a3->m128i_i64[0],
                                      a3->m128i_u32[3],
                                      v64,
                                      v82,
                                      0);
                  }
                  ExReleaseRundownProtection(v38 + 169);
                  ObfDereferenceObjectWithTag(v38, 0x79517350u);
                  if ( ContextThread >= 0 )
                  {
                    if ( a5 )
                      *a5 = a3->m128i_u32[3];
                    ContextThread = 0;
                    v66 = 0;
                  }
                  return (unsigned int)ContextThread;
                }
                else
                {
                  ObfDereferenceObjectWithTag(v32, 0x79517350u);
                  return 3221225547LL;
                }
              }
              else
              {
                ObfDereferenceObjectWithTag(Object, 0x79517350u);
                return 3221225485LL;
              }
            }
          case 29:
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       8,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            ContextThread = PspWow64GetContextThread((__int64)Object, a3->m128i_i32, v5, v64);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( ContextThread >= 0 && a5 )
              *a5 = 716;
            return (unsigned int)ContextThread;
          case 30:
            if ( (_DWORD)v5 != 16 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            ContextThread = result;
            if ( (int)result < 0 )
              return result;
            v89[0] = 2097153;
            memset(&v89[1], 0, 0x104uLL);
            v28 = (unsigned __int16 *)Object;
            KeQueryUserAffinityThread((__int64)Object, (__int64)v89);
            v29 = v28[280];
            v77.m128i_i16[4] = v29;
            if ( (unsigned __int16)v29 < LOWORD(v89[0]) )
              v8 = *(_QWORD *)&v89[2 * v29 + 2];
            v77.m128i_i64[0] = v8;
            *a3 = v77;
            if ( a5 )
              *a5 = 16;
            ObfDereferenceObjectWithTag(v28, 0x79517350u);
            return (unsigned int)ContextThread;
          case 32:
            if ( (_DWORD)v5 != 1 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            LODWORD(v8) = result;
            if ( (int)result < 0 )
              return result;
            v39 = Object;
            a3->m128i_i8[0] = *((_QWORD *)Object + 45) != 0LL;
            ObfDereferenceObjectWithTag(v39, 0x79517350u);
            if ( a5 )
              *a5 = 1;
            return (unsigned int)v8;
          case 33:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( (int)result < 0 )
              return result;
            v68 = (struct _PROCESSOR_NUMBER)0x400000;
            KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v68, &v68);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(struct _PROCESSOR_NUMBER *)a3->m128i_i8 = v68;
            if ( a5 )
              *a5 = 4;
            return 0LL;
          case 34:
            if ( !(_DWORD)v5 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       64,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v66 = result;
            if ( (int)result < 0 )
              return result;
            a3->m128i_i8[0] = *((_QWORD *)Object + 13) != 0LL;
            if ( a5 )
              *a5 = 1;
            LODWORD(v8) = v66;
            goto LABEL_124;
          case 35:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            LODWORD(v8) = result;
            if ( (int)result < 0 )
              return result;
            v40 = Object;
            a3->m128i_i32[0] = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 14) & 1);
            if ( a5 )
              *a5 = 4;
            v18 = v40;
            goto LABEL_73;
          case 36:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            ContextThread = ObpReferenceObjectByHandleWithTag(
                              BugCheckParameter1,
                              2048,
                              (__int64)PsThreadType,
                              PreviousMode,
                              0x79517350u,
                              &Object,
                              0LL,
                              0LL);
            if ( ContextThread < 0 )
              return (unsigned int)ContextThread;
            v41 = Object;
            a3->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
            if ( a5 )
              *a5 = 4;
            ObfDereferenceObjectWithTag(v41, 0x79517350u);
            return (unsigned int)ContextThread;
          case 37:
            if ( (_DWORD)v5 != 16 )
              return 3221225476LL;
            if ( BugCheckParameter1 != -2LL )
              return 3221225485LL;
            result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v86);
            if ( (int)result >= 0 )
            {
              *a3 = v86;
              if ( a5 )
                *a5 = 16;
            }
            return result;
          case 38:
            v65 = 0;
            v62 = 0;
            v42 = ObpReferenceObjectByHandleWithTag(
                    BugCheckParameter1,
                    2048,
                    (__int64)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            v66 = v42;
            if ( v42 < 0 )
            {
              v54 = (signed __int64 *)Object;
              v55 = v62;
              v53 = (__int64)v69;
            }
            else
            {
              v65 = 1;
              v53 = (__int64)v69;
              --v69[242];
              v54 = (signed __int64 *)Object;
              ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1360, 0LL);
              v55 = 1;
              v62 = 1;
              v56 = v54[204];
              if ( v56 )
              {
                v57 = *(const WCHAR **)(v56 + 8);
                v58 = *(_WORD *)v56;
                v67 = v58;
              }
              else
              {
                v57 = &word_140867F00;
                v58 = 0;
                v67 = 0;
              }
              v81 = v57;
              v59 = v58 + 16;
              LODWORD(BugCheckParameter1) = v59;
              v80 = v59;
              if ( v59 <= (unsigned int)v5 )
              {
                memmove(&a3[1], v57, v58);
                v60 = v67;
                a3->m128i_i16[0] = v67;
                a3->m128i_i16[1] = v60;
                a3->m128i_i64[1] = (__int64)a3[1].m128i_i64;
                v59 = BugCheckParameter1;
                v55 = v62;
                v53 = (__int64)v69;
              }
              else
              {
                v42 = -1073741789;
                v66 = -1073741789;
              }
              if ( a5 )
                *a5 = v59;
            }
            if ( v55 )
            {
              if ( _InterlockedCompareExchange64(v54 + 170, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v54 + 170);
              KeAbPostRelease((ULONG_PTR)(v54 + 170));
              KeLeaveCriticalRegionThread(v53);
              v42 = v66;
              v54 = (signed __int64 *)Object;
            }
            if ( v65 )
              ObfDereferenceObjectWithTag(v54, 0x79517350u);
            return (unsigned int)v42;
          case 39:
            if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
              return 3221225476LL;
            v42 = ObpReferenceObjectByHandleWithTag(
                    BugCheckParameter1,
                    2048,
                    (__int64)PsThreadType,
                    PreviousMode,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            v66 = v42;
            if ( v42 >= 0 )
            {
              v43 = 8 * KeQueryCpuSetsThread((__int64)Object, Src);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v71 = v43;
              if ( a5 )
                *a5 = v43;
              if ( v43 >= (unsigned int)v5 )
                v43 = v5;
              v71 = v43;
              memmove(a3, Src, v43);
            }
            return (unsigned int)v42;
          case 40:
            if ( (_DWORD)v5 != 80 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v46 = result;
            if ( (int)result >= 0 )
            {
              v47 = (unsigned int *)Object;
              KeQueryValuesThread((__int64)Object, v83, v44, v45);
              ThreadStartAddress = PsQueryThreadStartAddress((__int64)v47, 1);
              if ( ThreadStartAddress > 0x7FFFFFFEFFFFLL )
                ThreadStartAddress = 0LL;
              a3[4].m128i_i32[1] = BYTE8(v83[0]);
              a3[4].m128i_i32[2] = BYTE9(v83[0]);
              a3[3].m128i_i32[3] = SBYTE11(v83[0]);
              a3[3].m128i_i32[2] = SBYTE10(v83[0]);
              a3[1].m128i_i32[2] = v83[0];
              v49 = (unsigned int)KeMaximumIncrement;
              a3->m128i_i64[0] = (unsigned int)KeMaximumIncrement * (unsigned __int64)v47[163];
              a3->m128i_i64[1] = v49 * v47[183];
              a3[1].m128i_i64[0] = *((_QWORD *)v47 + 144);
              a3[4].m128i_i32[0] = v47[85];
              *(__m128i *)((char *)a3 + 40) = *(__m128i *)(v47 + 306);
              a3[2].m128i_i64[0] = ThreadStartAddress;
              if ( a5 )
                *a5 = 80;
              ObfDereferenceObjectWithTag(v47, 0x79517350u);
              return v46;
            }
            return result;
          case 41:
            if ( (_DWORD)v5 != 16 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            LODWORD(v8) = result;
            if ( (int)result < 0 )
              return result;
            v52 = Object;
            KeQueryPrimaryGroupAffinityThread((__int64)Object, (__int64)&v77, v50, v51);
            *a3 = v77;
            if ( a5 )
              *a5 = 16;
            v18 = v52;
            goto LABEL_73;
          case 42:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v15 = result;
            if ( (int)result < 0 )
              return result;
            v16 = Object;
            a3->m128i_i32[0] = (*((_DWORD *)Object + 344) & 0x40000) != 0;
            if ( a5 )
              *a5 = 4;
            goto LABEL_29;
          case 43:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v66 = result;
            if ( (int)result < 0 )
              return result;
            a3->m128i_i32[0] = (*((_DWORD *)Object + 344) >> 19) & 1;
            if ( a5 )
              *a5 = 4;
            LODWORD(v8) = v66;
LABEL_124:
            v18 = Object;
            goto LABEL_73;
          case 44:
            v70[0] = 0;
            if ( (_DWORD)v5 != 16 )
              return 3221225476LL;
            if ( BugCheckParameter1 != -2LL )
              return 3221225485LL;
            v73 = 0LL;
            WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, v70);
            if ( WorkOnBehalfThread )
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v73);
              if ( v70[0] )
                ObfDereferenceObject(v25);
            }
            else
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)v69, &v73);
              v73.m128i_i32[2] |= 1u;
            }
            *a3 = v73;
            if ( a5 )
              *a5 = 16;
            return 0LL;
          case 45:
            if ( (_DWORD)v5 != 4 )
              return 3221225476LL;
            result = ObpReferenceObjectByHandleWithTag(
                       BugCheckParameter1,
                       2048,
                       (__int64)PsThreadType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v15 = result;
            if ( (int)result < 0 )
              return result;
            v16 = Object;
            if ( *((_QWORD *)Object + 198) )
              LODWORD(v8) = qword_140C1BE50;
            a3->m128i_i32[0] = v8;
            if ( a5 )
              *a5 = 4;
LABEL_29:
            ObfDereferenceObjectWithTag(v16, 0x79517350u);
            result = v15;
            break;
          default:
            return 3221225475LL;
        }
        return result;
      }
      if ( (_DWORD)v5 == 48 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        v20 = (char *)Object;
        if ( *((_BYTE *)Object + 4) )
          LODWORD(v78[0]) = PsGetThreadExitStatus((PETHREAD)Object);
        else
          LODWORD(v78[0]) = 259;
        *((_QWORD *)&v78[0] + 1) = *((_QWORD *)v20 + 30);
        if ( (IoThreadToProcess((PETHREAD)v20)->SecureState.SecureHandle & 1) != 0 )
          VslGetSecureTebAddress(v20, (char *)v78 + 8);
        v21 = *(__m128i *)(v20 + 1224);
        v22 = *((unsigned __int16 *)v20 + 280);
        v23 = (_WORD *)*((_QWORD *)v20 + 69);
        if ( (unsigned __int16)v22 < *v23 )
          v8 = *(_QWORD *)&v23[4 * v22 + 4];
        v79.m128i_i64[0] = v8;
        v79.m128i_i32[2] = v20[195];
        v79.m128i_i32[3] = KeQueryBasePriorityThread((__int64)v20);
        ObfDereferenceObjectWithTag(v20, 0x79517350u);
        *a3 = (__m128i)v78[0];
        a3[1] = v21;
        a3[2] = v79;
        if ( a5 )
          *a5 = 48;
        return 0LL;
      }
    }
    return 3221225476LL;
  }
  if ( (_DWORD)v5 != 16 )
    return 3221225476LL;
  v17 = BugCheckParameter1;
  if ( BugCheckParameter1 == -2LL )
  {
    Object = CurrentThread;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               2048,
               (__int64)PsThreadType,
               PreviousMode,
               0x79517350u,
               &Object,
               0LL,
               0LL);
    LODWORD(v8) = result;
    if ( (int)result < 0 )
      return result;
    CurrentThread = (struct _KTHREAD *)Object;
    v69 = Object;
  }
  a3->m128i_i64[0] = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
  a3->m128i_i64[1] = CycleTimeStamp;
  if ( a5 )
    *a5 = 16;
  v18 = v69;
  if ( v17 != -2LL )
LABEL_73:
    ObfDereferenceObjectWithTag(v18, 0x79517350u);
  return (unsigned int)v8;
}
