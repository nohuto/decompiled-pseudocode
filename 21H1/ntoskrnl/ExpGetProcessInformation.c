/*
 * XREFs of ExpGetProcessInformation @ 0x140629910
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetSessionId @ 0x1402041B0 (MmGetSessionId.c)
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140204518 (PsIsProcessInSilo.c)
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     SeSecurityAttributePresent @ 0x140259CA0 (SeSecurityAttributePresent.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     KeQueryValuesThread @ 0x14025B510 (KeQueryValuesThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 *     RtlQueryPackageIdentity @ 0x1402E64F0 (RtlQueryPackageIdentity.c)
 *     SmIsCompressionProcess @ 0x1402FDDD0 (SmIsCompressionProcess.c)
 *     KeFlushProcessWriteBuffers @ 0x140358FBC (KeFlushProcessWriteBuffers.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExIsRestrictedCaller @ 0x1405CEDDC (ExIsRestrictedCaller.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     PsQueryProcessEnergyValues @ 0x14060F730 (PsQueryProcessEnergyValues.c)
 *     ExpCopyProcessInfo @ 0x1406165B0 (ExpCopyProcessInfo.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     SeQueryUserSidToken @ 0x14066B11C (SeQueryUserSidToken.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406D61F8 (KeSynchronizeWithDynamicProcessors.c)
 *     ExCheckFullProcessInformationAccess @ 0x14070DFA4 (ExCheckFullProcessInformationAccess.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpGetProcessInformation(int *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  int v6; // r13d
  bool v7; // cf
  unsigned int v8; // ebx
  unsigned __int8 v9; // di
  PEPROCESS v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r14
  char *v13; // r13
  signed __int64 *v14; // rsi
  struct _DMA_ADAPTER *v15; // rdi
  _QWORD *v16; // r15
  __int64 v17; // rdi
  PEPROCESS v18; // rbx
  unsigned __int64 DeepFreezeStartTime; // rax
  bool v20; // cl
  int v21; // eax
  unsigned int v22; // eax
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // eax
  char v27; // cl
  int v28; // r12d
  unsigned __int64 *p_Blink; // rdi
  unsigned int v30; // r15d
  __int64 v31; // rcx
  int v32; // eax
  unsigned __int64 v33; // rsi
  char *PoolWithTag; // rax
  void *v35; // rbx
  __int64 *v36; // rcx
  unsigned int v37; // r8d
  char *v38; // r14
  _WORD *v39; // r9
  _WORD *v40; // rdx
  unsigned __int64 v41; // rsi
  unsigned int v42; // ebx
  unsigned int v43; // eax
  int *v44; // rcx
  _QWORD *v45; // rbx
  struct _KTHREAD *v46; // rdi
  int v47; // r14d
  __int64 *k; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _DWORD *v52; // r9
  bool v53; // zf
  int SessionId; // ebx
  __int64 v55; // r14
  __int64 v56; // rdx
  __int64 v57; // r8
  _DWORD *v58; // r9
  int v59; // eax
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // r13
  struct _KTHREAD *CurrentThread; // rsi
  PEPROCESS v64; // r14
  unsigned __int64 *v65; // r15
  int v66; // r12d
  unsigned __int64 *i; // rbx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned int v71; // eax
  unsigned int v72; // ebx
  unsigned int v73; // r15d
  unsigned __int64 v74; // rax
  struct _KTHREAD *v75; // rsi
  PEPROCESS v76; // r14
  unsigned __int64 *v77; // r15
  int v78; // r12d
  unsigned __int64 *j; // rbx
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  _LIST_ENTRY *v83; // rdi
  struct _DMA_ADAPTER *v84; // rsi
  ULONG_PTR v85; // r14
  ULONG_PTR v86; // r15
  size_t v87; // rcx
  unsigned int v88; // esi
  unsigned int v89; // eax
  unsigned int v90; // edx
  unsigned int v91; // ecx
  int v92; // eax
  _LIST_ENTRY *Flink; // rdi
  unsigned int v94; // edx
  signed __int64 *p_Lock; // rbx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 result; // rax
  signed __int32 v100[8]; // [rsp+0h] [rbp-658h] BYREF
  int v101; // [rsp+40h] [rbp-618h]
  unsigned int v102; // [rsp+44h] [rbp-614h]
  unsigned int v103; // [rsp+48h] [rbp-610h]
  NTSTATUS v104; // [rsp+4Ch] [rbp-60Ch]
  char v105; // [rsp+50h] [rbp-608h]
  PVOID Object; // [rsp+58h] [rbp-600h]
  int v107; // [rsp+60h] [rbp-5F8h]
  PEPROCESS Process; // [rsp+68h] [rbp-5F0h]
  bool v109; // [rsp+70h] [rbp-5E8h]
  bool v110; // [rsp+71h] [rbp-5E7h]
  int v111; // [rsp+74h] [rbp-5E4h]
  PVOID v112; // [rsp+78h] [rbp-5E0h]
  int v113; // [rsp+80h] [rbp-5D8h]
  int *v114; // [rsp+88h] [rbp-5D0h]
  char v115; // [rsp+90h] [rbp-5C8h]
  int v116; // [rsp+9Ch] [rbp-5BCh]
  char *v117; // [rsp+A0h] [rbp-5B8h]
  int *v118; // [rsp+B0h] [rbp-5A8h]
  size_t Size; // [rsp+B8h] [rbp-5A0h] BYREF
  unsigned int *v120; // [rsp+C0h] [rbp-598h]
  PVOID P; // [rsp+C8h] [rbp-590h] BYREF
  ULONG_PTR AppIdSize; // [rsp+D0h] [rbp-588h] BYREF
  ULONG_PTR PackageSize; // [rsp+D8h] [rbp-580h] BYREF
  int v124; // [rsp+E0h] [rbp-578h]
  __int64 v125; // [rsp+E8h] [rbp-570h]
  __int64 *v126; // [rsp+F0h] [rbp-568h]
  _WORD *v127; // [rsp+F8h] [rbp-560h]
  char *v128; // [rsp+100h] [rbp-558h]
  __int64 *v129; // [rsp+108h] [rbp-550h]
  unsigned __int64 *v130; // [rsp+110h] [rbp-548h]
  unsigned __int64 *v131; // [rsp+118h] [rbp-540h]
  unsigned __int64 v132; // [rsp+120h] [rbp-538h]
  HANDLE Handle; // [rsp+128h] [rbp-530h] BYREF
  int *v134; // [rsp+130h] [rbp-528h]
  int v135; // [rsp+138h] [rbp-520h]
  int v136; // [rsp+140h] [rbp-518h]
  struct _LIST_ENTRY *CurrentServerSilo; // [rsp+168h] [rbp-4F0h]
  struct _KTHREAD *v138; // [rsp+180h] [rbp-4D8h]
  PEPROCESS v139; // [rsp+1C0h] [rbp-498h]
  _OWORD v140[2]; // [rsp+1D0h] [rbp-488h] BYREF
  struct _KTHREAD *v141; // [rsp+1F0h] [rbp-468h]
  struct _DMA_ADAPTER *v142; // [rsp+1F8h] [rbp-460h]
  struct _KTHREAD *v143; // [rsp+200h] [rbp-458h]
  struct _KTHREAD *v144; // [rsp+208h] [rbp-450h]
  _QWORD v145[14]; // [rsp+210h] [rbp-448h] BYREF
  _BYTE Src[80]; // [rsp+280h] [rbp-3D8h] BYREF
  _OWORD v147[27]; // [rsp+2D0h] [rbp-388h] BYREF
  WCHAR AppId[72]; // [rsp+480h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+510h] [rbp-148h] BYREF

  v124 = a5;
  v134 = a1;
  v120 = a3;
  AppIdSize = 130LL;
  memset(v147, 0, sizeof(v147));
  v116 = 0;
  LODWORD(Size) = 0;
  PackageSize = 254LL;
  Process = 0LL;
  memset(v145, 0, 0x68uLL);
  v109 = 0;
  v112 = 0LL;
  memset(v140, 0, sizeof(v140));
  v103 = 0;
  memset(Src, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  v115 = v124 != 5;
  v6 = 136;
  if ( v124 == 5 )
    v6 = 80;
  v111 = v6;
  v113 = v6;
  v118 = v134;
  v7 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !a3 )
      return 3221225476LL;
    v7 = a2 < 0x270;
  }
  v8 = v7 ? 0xC0000004 : 0;
  v105 = 0;
  v9 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(v9), (int)result >= 0) )
  {
    if ( ExIsRestrictedCaller(v9) )
      v105 = 1;
    v104 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    v10 = (PEPROCESS)PsIdleProcess;
    Object = PsIdleProcess;
    Process = (PEPROCESS)PsIdleProcess;
    v101 = v8;
    while ( 1 )
    {
LABEL_103:
      if ( !v10 )
      {
        if ( v101 >= 0 && v118 && (*v118 = 0, v104 < 0) )
        {
          v101 = v104;
        }
        else if ( v120 )
        {
          *v120 = v103;
        }
        goto LABEL_206;
      }
      if ( (v10[1].DirectoryTableBase & 0x400000000LL) != 0 )
      {
        if ( v10->Header.SignalState )
        {
          v92 = v10[1].ActiveProcessors.Bitmap[8];
          v10 = Process;
          Object = Process;
          if ( !v92 && Process->ThreadListHead.Flink == &Process->ThreadListHead )
            goto LABEL_82;
        }
      }
      if ( a4 && v10 == PsIdleProcess )
        goto LABEL_82;
      SessionId = MmGetSessionId((__int64)v10);
      v135 = SessionId;
      if ( a4 )
      {
        if ( SessionId != *a4 )
          goto LABEL_82;
      }
      if ( !PsIsProcessInSilo(v10, (__int64)CurrentServerSilo) )
        goto LABEL_82;
      v55 = (__int64)v134 + v103;
      v114 = (int *)v55;
      v118 = (int *)v55;
      v107 = 624;
      v30 = v103 + 624;
      v102 = v103 + 624;
      if ( v103 + 624 < v103 )
      {
        v30 = -1;
        v102 = -1;
        v103 = -1;
        v28 = -1073741675;
      }
      else
      {
        v103 += 624;
        v28 = 0;
      }
      v104 = v28;
      if ( v28 < 0 )
      {
        v101 = v28;
LABEL_206:
        p_Blink = (unsigned __int64 *)v112;
        goto LABEL_269;
      }
      memset(v145, 0, 0x68uLL);
      if ( v30 > a2 )
      {
        v101 = -1073741820;
        if ( !v120 )
          goto LABEL_206;
        v60 = 0LL;
      }
      else
      {
        v59 = ExpCopyProcessInfo(v55, (__int64)v10, v115, v145);
        v28 = v59;
        v104 = v59;
        if ( v59 < 0 )
        {
          v101 = v59;
          goto LABEL_206;
        }
        v60 = 0LL;
        *(_QWORD *)v55 = 0LL;
        *(_DWORD *)(v55 + 100) = SessionId;
        *(_QWORD *)(v55 + 64) = 0LL;
        *(_DWORD *)(v55 + 56) = 0;
        if ( v10 == PsIdleProcess )
          *(_QWORD *)(v55 + 96) = 0LL;
        if ( v10 == (PEPROCESS)PsSecureSystemProcess )
        {
          v61 = qword_140C4DF40 << 12;
          *(_QWORD *)(v55 + 144) = qword_140C4DF40 << 12;
          *(_QWORD *)(v55 + 8) = v61;
        }
        if ( v28 < 0 )
        {
          v101 = v28;
          goto LABEL_206;
        }
      }
      v62 = v55 + 256;
      v117 = (char *)(v55 + 256);
      if ( v10 == PsIdleProcess )
      {
        Flink = v10->ThreadListHead.Flink;
        if ( Flink == &v10->ThreadListHead )
        {
          p_Blink = 0LL;
        }
        else
        {
          p_Blink = (unsigned __int64 *)&Flink[-48].Blink;
          KeSynchronizeWithDynamicProcessors(0LL, v56, v57, v58);
          v60 = 0LL;
        }
      }
      else
      {
        p_Blink = 0LL;
        v131 = 0LL;
        CurrentThread = KeGetCurrentThread();
        v144 = CurrentThread;
        v64 = Process;
        v65 = &Process[1].ActiveProcessors.Bitmap[6];
        v66 = 0;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v64[1], 0LL);
        for ( i = (unsigned __int64 *)*v65; i != v65; i = (unsigned __int64 *)*i )
        {
          p_Blink = i - 157;
          v131 = i - 157;
          if ( ObReferenceObjectSafeWithTag((__int64)(i - 157)) )
          {
            v66 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v64[1].Header.Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v64[1].Header.Lock);
        KeAbPostRelease((ULONG_PTR)&v64[1]);
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v68, v69, v70);
        v60 = 0LL;
        if ( !v66 )
        {
          p_Blink = 0LL;
          v131 = 0LL;
        }
        v10 = Process;
        Object = Process;
        v28 = v104;
        v30 = v103;
        v102 = v103;
        v55 = (__int64)v118;
        v114 = v118;
        v62 = (__int64)v117;
      }
      v112 = p_Blink;
      while ( p_Blink )
      {
        v136 = *((_DWORD *)p_Blink + 1);
        if ( (_BYTE)v136 )
        {
          v57 = 0LL;
        }
        else
        {
          v71 = v30 + v111;
          if ( v30 + v111 < v30 )
          {
            v71 = -1;
            v28 = -1073741675;
          }
          else
          {
            v28 = 0;
          }
          v103 = v71;
          v102 = v71;
          v72 = v71;
          v104 = v28;
          if ( v28 < 0 )
          {
            v101 = v28;
            goto LABEL_269;
          }
          v73 = v111;
          v107 += v111;
          if ( v71 > a2 )
          {
            v101 = -1073741820;
            if ( !v120 )
              goto LABEL_269;
            v57 = 0LL;
          }
          else
          {
            KeQueryValuesThread((__int64)p_Blink, v140, v57, v58);
            v60 = BYTE8(v140[0]);
            if ( BYTE8(v140[0]) == 4 )
            {
              v107 -= v73;
              v102 = v72 - v73;
              v103 = v72 - v73;
              v57 = 0LL;
            }
            else
            {
              *(_DWORD *)(v62 + 24) = v140[0];
              *(_DWORD *)(v62 + 68) = v60;
              *(_DWORD *)(v62 + 72) = BYTE9(v140[0]);
              *(_DWORD *)(v62 + 56) = SBYTE10(v140[0]);
              *(_DWORD *)(v62 + 60) = SBYTE11(v140[0]);
              *(_QWORD *)v62 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
              *(_QWORD *)(v62 + 8) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 183);
              *(_QWORD *)(v62 + 16) = p_Blink[134];
              *(_DWORD *)(v62 + 64) = *((_DWORD *)p_Blink + 85);
              *(_OWORD *)(v62 + 40) = *(_OWORD *)(p_Blink + 143);
              v57 = 0LL;
              if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
              {
                v60 = p_Blink[154];
              }
              else
              {
                if ( (p_Blink[163] & 8) != 0
                  || (v60 = *((_QWORD *)v112 + 138), _InterlockedOr(v100, 0), (p_Blink[163] & 8) != 0) )
                {
                  v60 = 0LL;
                }
                v10 = Process;
                Object = Process;
                v28 = v104;
                p_Blink = (unsigned __int64 *)v112;
                v102 = v103;
                v55 = (__int64)v118;
                v114 = v118;
                v62 = (__int64)v117;
              }
              v132 = v60;
              if ( v105 && v60 > 0x7FFFFFFEFFFFLL )
                *(_QWORD *)(v62 + 32) = 0LL;
              else
                *(_QWORD *)(v62 + 32) = v60;
              if ( v124 != 5 )
              {
                v60 = 0LL;
                if ( v105 )
                {
                  *(_QWORD *)(v62 + 80) = 0LL;
                  *(_QWORD *)(v62 + 88) = 0LL;
                }
                else
                {
                  *(_QWORD *)(v62 + 80) = p_Blink[7];
                  *(_QWORD *)(v62 + 88) = p_Blink[6];
                  v10 = Process;
                  Object = Process;
                  v28 = v104;
                  p_Blink = (unsigned __int64 *)v112;
                  v102 = v103;
                  v55 = (__int64)v118;
                  v114 = v118;
                  v62 = (__int64)v117;
                }
                v74 = p_Blink[154];
                v132 = v74;
                if ( v105 && (v56 = 0x7FFFFFFEFFFFLL, v74 > 0x7FFFFFFEFFFFLL) )
                  *(_QWORD *)(v62 + 96) = 0LL;
                else
                  *(_QWORD *)(v62 + 96) = v74;
                *(_QWORD *)(v62 + 104) = p_Blink[30];
                *(_QWORD *)(v62 + 112) = 0LL;
                *(_QWORD *)(v62 + 120) = 0LL;
                *(_QWORD *)(v62 + 128) = 0LL;
                v57 = 0LL;
              }
              ++*(_DWORD *)(v55 + 4);
              if ( v28 < 0 )
              {
                v101 = v28;
                goto LABEL_269;
              }
              v62 += v73;
              v117 = (char *)v62;
            }
          }
        }
        if ( v10 == PsIdleProcess )
        {
          v83 = (_LIST_ENTRY *)p_Blink[95];
          if ( v83 != &v10->ThreadListHead )
          {
            p_Blink = (unsigned __int64 *)&v83[-48].Blink;
            KeSynchronizeWithDynamicProcessors(v60, v56, 0LL, v58);
            goto LABEL_167;
          }
          p_Blink = 0LL;
          v112 = 0LL;
          v30 = v102;
          v60 = 0LL;
        }
        else
        {
          p_Blink = 0LL;
          v130 = 0LL;
          v75 = KeGetCurrentThread();
          v141 = v75;
          v76 = Process;
          v77 = &Process[1].ActiveProcessors.Bitmap[6];
          v78 = 0;
          --v75->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&v76[1], 0LL);
          for ( j = (unsigned __int64 *)*((_QWORD *)v112 + 157); j != v77; j = (unsigned __int64 *)*j )
          {
            p_Blink = j - 157;
            v130 = j - 157;
            if ( ObReferenceObjectSafeWithTag((__int64)(j - 157)) )
            {
              v78 = 1;
              break;
            }
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v76[1].Header.Lock, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&v76[1].Header.Lock);
          KeAbPostRelease((ULONG_PTR)&v76[1]);
          KeLeaveCriticalRegionThread((__int64)v75, v80, v81, v82);
          ObfDereferenceObjectWithTag(v112, 0x6E457350u);
          if ( !v78 )
            p_Blink = 0LL;
          v130 = p_Blink;
          v10 = Process;
          Object = Process;
          v28 = v104;
          v102 = v103;
          v55 = (__int64)v118;
          v114 = v118;
          v62 = (__int64)v117;
LABEL_167:
          v112 = p_Blink;
          v30 = v102;
          v60 = 0LL;
        }
      }
      v11 = v62;
      v125 = v62;
      v12 = v62;
      v13 = (char *)(v62 + 368);
      v117 = v13;
      if ( v101 < 0 )
        goto LABEL_48;
      v14 = (signed __int64 *)&v10[1].Affinity.Bitmap[5];
      v15 = (struct _DMA_ADAPTER *)ObFastReferenceObject(v14);
      if ( v15 )
      {
        v16 = Object;
      }
      else
      {
        v138 = KeGetCurrentThread();
        --v138->KernelApcDisable;
        p_Lock = (signed __int64 *)&Process[1].Header.Lock;
        ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
        v15 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v14);
        if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Lock);
        KeAbPostRelease((ULONG_PTR)p_Lock);
        KeLeaveCriticalRegionThread((__int64)v138, v96, v97, v98);
        v16 = &Process->Header.Lock;
        v11 = v125;
      }
      v109 = SeSecurityAttributePresent((__int64)v15, (__int64)&PspSysAppIdClaim);
      ObFastDereferenceObject(v14, v15);
      *(_QWORD *)(v11 + 52) = 0LL;
      *(_DWORD *)(v11 + 336) = 0;
      v17 = v125;
      *(_QWORD *)(v125 + 344) = v16[293] << 12;
      *(_QWORD *)(v17 + 40) = v145[4];
      *(_DWORD *)(v17 + 48) = 0;
      if ( v109 )
        *(_DWORD *)(v17 + 48) = 1;
      v18 = Process;
      DeepFreezeStartTime = Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        *(_OWORD *)v17 = *(_OWORD *)DeepFreezeStartTime;
        *(_OWORD *)(v17 + 16) = *(_OWORD *)(DeepFreezeStartTime + 16);
        *(_QWORD *)(v17 + 32) = *(_QWORD *)(DeepFreezeStartTime + 32);
      }
      else
      {
        *(_OWORD *)v17 = 0LL;
        *(_OWORD *)(v17 + 16) = 0LL;
        *(_QWORD *)(v17 + 32) = 0LL;
      }
      if ( (HIDWORD(v18[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v22 = *(_DWORD *)(v17 + 48) & 0xFFFFFFE1 | 2;
      }
      else if ( v18 == (PEPROCESS)PsSecureSystemProcess )
      {
        v22 = *(_DWORD *)(v17 + 48) & 0xFFFFFFE1 | 4;
      }
      else if ( SmIsCompressionProcess(v18) )
      {
        v22 = *(_DWORD *)(v17 + 48) & 0xFFFFFFE1 | 6;
      }
      else
      {
        v20 = *((_QWORD *)&CmpRegistryProcess + 1) && v18 == *((PEPROCESS *)&CmpRegistryProcess + 1);
        v110 = v20;
        v21 = *(_DWORD *)(v17 + 48);
        if ( v20 )
          v22 = v21 & 0xFFFFFFE1 | 8;
        else
          v22 = v21 & 0xFFFFFFE1;
      }
      *(_DWORD *)(v17 + 48) = v22;
      *(_QWORD *)(v17 + 360) = v18[2].Affinity.Bitmap[6];
      PsQueryProcessEnergyValues(v18, v147);
      v23 = (_OWORD *)(v17 + 64);
      v24 = v147;
      v25 = 2LL;
      do
      {
        *v23 = *v24;
        v23[1] = v24[1];
        v23[2] = v24[2];
        v23[3] = v24[3];
        v23[4] = v24[4];
        v23[5] = v24[5];
        v23[6] = v24[6];
        v23 += 8;
        *(v23 - 1) = v24[7];
        v24 += 8;
        --v25;
      }
      while ( v25 );
      *v23 = *v24;
      if ( v18[1].Affinity.Bitmap[16] )
        *(_DWORD *)(v12 + 352) = *(_DWORD *)(v18[1].Affinity.Bitmap[16] + 1236);
      else
        *(_DWORD *)(v12 + 352) = 0;
      v10 = Process;
      Object = Process;
      if ( Process->ProcessTimerDelay
        || KeHeteroSystem
        && ((v26 = KiProcessPolicyToQosMappingTable[(*(_DWORD *)&Process->0 >> 7) & 7], v26 != 5)
         || HIBYTE(Process[1].ActiveProcessors.Bitmap[0]) != 1
          ? (v27 = 0)
          : (v27 = 1),
            PpmPerfQosEnabled && (v26 - 1 <= 1 || v27)) )
      {
        *(_DWORD *)(v17 + 48) |= 0x20u;
      }
      v28 = v104;
      if ( v104 < 0 )
      {
        v101 = v104;
        goto LABEL_206;
      }
      v11 = v125;
      p_Blink = (unsigned __int64 *)v112;
      v30 = v103;
      v102 = v103;
      v114 = v118;
      v13 = v117;
LABEL_48:
      if ( a5 == 148 )
      {
        v84 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(v10);
        v142 = v84;
        SeQueryUserSidToken(v84, Src, 68LL, &Size);
        PackageSize = 254LL;
        AppIdSize = 130LL;
        v28 = 0;
        v104 = RtlQueryPackageIdentity(v84, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
        if ( v104 >= 0 )
        {
          v86 = AppIdSize;
          v85 = PackageSize;
        }
        else
        {
          v85 = 0LL;
          PackageSize = 0LL;
          v86 = 0LL;
          AppIdSize = 0LL;
        }
        ObFastDereferenceObject((signed __int64 *)Object + 151, v84);
        v87 = (unsigned int)Size;
        v88 = (Size + 7) & 0xFFFFFFF8;
        v116 = v88;
        v89 = v88 + v102;
        if ( v88 + v102 < v102 )
        {
          v89 = -1;
          v28 = -1073741675;
        }
        v103 = v89;
        v102 = v89;
        v90 = v89;
        v104 = v28;
        if ( v28 < 0 )
        {
          v101 = v28;
        }
        else
        {
          v107 += v88;
          if ( v89 > a2 )
          {
            v101 = -1073741820;
            if ( !v120 )
              goto LABEL_269;
          }
          else
          {
            *(_DWORD *)(v11 + 52) = 368;
            memmove(v13, Src, v87);
            v90 = v102;
            v13 += v88;
            v117 = v13;
          }
          if ( v85 )
          {
            if ( v85 > 0xFFFFFFFF )
            {
              v101 = -1073741820;
            }
            else
            {
              v116 = v85;
              if ( (unsigned int)v85 + v90 < v90 )
              {
                v91 = -1;
                v102 = -1;
                v103 = -1;
                v28 = -1073741675;
              }
              else
              {
                v91 = v85 + v90;
                v102 = v85 + v90;
                v103 = v85 + v90;
                v28 = 0;
              }
              v104 = v28;
              if ( v28 >= 0 )
              {
                v107 += v85;
                if ( v91 > a2 )
                {
                  v101 = -1073741820;
                  if ( !v120 )
                    goto LABEL_269;
                }
                else
                {
                  *(_DWORD *)(v11 + 56) = (_DWORD)v13 - v11;
                  memmove(v13, PackageFullName, (unsigned int)v85);
                  v91 = v102;
                  v13 += (unsigned int)v85;
                  v117 = v13;
                }
                goto LABEL_188;
              }
              v101 = v28;
            }
          }
          else
          {
            v91 = v102;
LABEL_188:
            if ( !v86 )
            {
              v30 = v102;
              v10 = (PEPROCESS)Object;
              goto LABEL_49;
            }
            v94 = -1;
            if ( v86 > 0xFFFFFFFF )
            {
              v101 = -1073741820;
            }
            else
            {
              v116 = v86;
              if ( (unsigned int)v86 + v91 < v91 )
              {
                v102 = -1;
                v103 = -1;
                v28 = -1073741675;
              }
              else
              {
                v94 = v86 + v91;
                v102 = v86 + v91;
                v103 = v86 + v91;
                v28 = 0;
              }
              v104 = v28;
              if ( v28 >= 0 )
              {
                v107 += v86;
                if ( v94 > a2 )
                {
                  v101 = -1073741820;
                  if ( !v120 )
                    goto LABEL_269;
                  v30 = v102;
                  v10 = (PEPROCESS)Object;
                }
                else
                {
                  *(_DWORD *)(v11 + 336) = (_DWORD)v13 - v11;
                  memmove(v13, AppId, (unsigned int)v86);
                  v10 = (PEPROCESS)Object;
                  v13 += (unsigned int)v86;
                  v117 = v13;
                  v30 = v102;
                }
                goto LABEL_49;
              }
              v101 = v28;
            }
          }
        }
LABEL_269:
        if ( Object && Object != PsIdleProcess )
          ObfDereferenceObjectWithTag(Object, 0x6E457350u);
        if ( p_Blink && (PVOID)p_Blink[68] != PsIdleProcess )
          ObfDereferenceObjectWithTag(p_Blink, 0x6E457350u);
        if ( P )
          ExFreePoolWithTag(P, 0);
        return (unsigned int)v101;
      }
LABEL_49:
      if ( v10 == PsIdleProcess )
        goto LABEL_174;
      if ( v10 == PsInitialSystemProcess )
      {
        v36 = &ExpSystemProcessName;
      }
      else if ( v10 == (PEPROCESS)PsSecureSystemProcess )
      {
        v36 = &ExpSecureSystemProcessName;
      }
      else if ( SmIsCompressionProcess(v10) )
      {
        v36 = (__int64 *)L"$&";
      }
      else
      {
        v32 = -1073741275;
        if ( *(_QWORD *)&v10[2].Affinity.Count && (_QWORD)xmmword_140C1E000 )
        {
          v32 = ((__int64 (__fastcall *)(__int64, PVOID *))xmmword_140C1E000)(v31, &P);
        }
        else
        {
          v33 = v10[1].ActiveProcessors.Bitmap[2];
          if ( v33 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(
                                    NonPagedPoolNx,
                                    *(unsigned __int16 *)(v33 + 2) + 16LL,
                                    0x6E497350u);
            v35 = PoolWithTag;
            if ( PoolWithTag )
            {
              *(_OWORD *)PoolWithTag = *(_OWORD *)v33;
              if ( *((_QWORD *)PoolWithTag + 1) )
              {
                *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 16;
                memmove(PoolWithTag + 16, *(const void **)(v33 + 8), *(unsigned __int16 *)(v33 + 2));
              }
              P = v35;
              v32 = 0;
            }
            else
            {
              v32 = -1073741801;
            }
          }
          v10 = (PEPROCESS)Object;
        }
        v104 = v32;
        if ( v32 < 0 )
          v36 = (__int64 *)v10[1].ActiveProcessors.Bitmap[2];
        else
          v36 = (__int64 *)P;
      }
      v126 = v36;
      v37 = *(unsigned __int16 *)v36;
      v116 = v37;
      v38 = v13;
      v128 = v13;
      LODWORD(Size) = v37;
      v39 = (_WORD *)v36[1];
      v40 = v39;
      v127 = v39;
      if ( a5 != 148 && v37 )
      {
        v40 = &v39[(unsigned __int64)v37 >> 1];
        v127 = v40;
        while ( v40 != v39 )
        {
          v127 = --v40;
          if ( *v40 == 92 )
          {
            v127 = ++v40;
            break;
          }
        }
        v37 -= 2 * (v40 - v39);
        LODWORD(Size) = v37;
      }
      v41 = v37;
      v42 = (v37 + 9) & 0xFFFFFFF8;
      v116 = v42;
      v43 = v42 + v30;
      if ( v42 + v30 < v30 )
      {
        v43 = -1;
        v28 = -1073741675;
      }
      else
      {
        v28 = 0;
      }
      v103 = v43;
      v104 = v28;
      if ( v28 < 0 )
      {
        v101 = v28;
        goto LABEL_269;
      }
      v107 += v42;
      if ( v43 > a2 )
      {
        v101 = -1073741820;
        if ( !v120 )
          goto LABEL_269;
      }
      else
      {
        if ( v37 )
        {
          memmove(v13, v40, v37);
          v38 = &v13[2 * (v41 >> 1)];
          v128 = v38;
        }
        *(_WORD *)v38 = 0;
        v38 += 2;
        v128 = v38;
      }
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
      if ( v101 < 0 )
      {
        v10 = (PEPROCESS)Object;
LABEL_174:
        v44 = v114;
        goto LABEL_80;
      }
      v44 = v114;
      *((_WORD *)v114 + 28) = (_WORD)v38 - (_WORD)v13 - 2;
      *((_WORD *)v44 + 29) = v42;
      *((_QWORD *)v44 + 8) = v13;
      v10 = (PEPROCESS)Object;
LABEL_80:
      if ( v101 >= 0 )
      {
        *v44 = v107;
        if ( v28 < 0 )
        {
          v101 = v28;
          goto LABEL_269;
        }
      }
LABEL_82:
      if ( v10 == PsIdleProcess )
        v10 = 0LL;
      v45 = &v10->Header.Lock;
      v139 = v10;
      Handle = 0LL;
      while ( 1 )
      {
        Object = 0LL;
        v129 = 0LL;
        v46 = KeGetCurrentThread();
        v143 = v46;
        v47 = 0;
        --v46->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
        for ( k = (__int64 *)(v45 ? v45[137] : PsActiveProcessHead); k != &PsActiveProcessHead; k = (__int64 *)*k )
        {
          Object = k - 137;
          v129 = k - 137;
          if ( ObReferenceObjectSafeWithTag((__int64)(k - 137)) )
          {
            v47 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v53 = v46->SpecialApcDisable++ == -1;
        if ( v53 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
          KiCheckForKernelApcDelivery(v50, v49, v51, v52);
        if ( v45 )
          ObfDereferenceObjectWithTag(v45, 0x6E457350u);
        if ( v47 )
        {
          v10 = (PEPROCESS)Object;
        }
        else
        {
          v10 = 0LL;
          Object = 0LL;
          v129 = 0LL;
        }
        v45 = &v10->Header.Lock;
        v139 = v10;
        if ( !v10 )
          break;
        if ( (v10[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v105 )
            goto LABEL_102;
          if ( ObOpenObjectByPointer(v10, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
          {
            ObCloseHandle(Handle, 0);
LABEL_102:
            Process = v10;
            goto LABEL_103;
          }
        }
      }
      v10 = 0LL;
      Object = 0LL;
      Process = 0LL;
    }
  }
  return result;
}
