/*
 * XREFs of ExpGetProcessInformation @ 0x140611F60
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140209828 (ObFastReferenceObjectLocked.c)
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140210F10 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectSafeWithTag @ 0x14021EB40 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     SeSecurityAttributePresent @ 0x14022AF30 (SeSecurityAttributePresent.c)
 *     MmGetSessionId @ 0x140233F30 (MmGetSessionId.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14023F168 (PsIsProcessInSilo.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     KeQueryValuesThread @ 0x140264700 (KeQueryValuesThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     RtlQueryPackageIdentity @ 0x1402E3F50 (RtlQueryPackageIdentity.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     SmIsCompressionProcess @ 0x14030D9E8 (SmIsCompressionProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     PsQueryProcessEnergyValues @ 0x1405F0910 (PsQueryProcessEnergyValues.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     SeQueryUserSidToken @ 0x140656B0C (SeQueryUserSidToken.c)
 *     ExpCopyProcessInfo @ 0x140665FA0 (ExpCopyProcessInfo.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     ExIsRestrictedCaller @ 0x1406C58CC (ExIsRestrictedCaller.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406CC0DC (KeSynchronizeWithDynamicProcessors.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406DB3E8 (ExCheckFullProcessInformationAccess.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetProcessInformation(_DWORD *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r13d
  bool v10; // cf
  unsigned int v11; // ebx
  unsigned __int8 v12; // di
  PEPROCESS v13; // rsi
  char *v14; // rbx
  char *v15; // r14
  char *v16; // r13
  signed __int64 *v17; // rsi
  struct _DMA_ADAPTER *v18; // rdi
  _QWORD *v19; // r15
  char *v20; // rdi
  PEPROCESS v21; // rbx
  unsigned __int64 DeepFreezeStartTime; // rax
  bool v23; // cl
  int v24; // eax
  unsigned int v25; // eax
  _OWORD *v26; // rax
  _OWORD *v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // eax
  char v30; // cl
  int v31; // r12d
  unsigned __int64 *p_Blink; // rdi
  unsigned int v33; // r15d
  __int64 v34; // rcx
  int v35; // eax
  unsigned __int64 v36; // rsi
  char *PoolWithTag; // rax
  void *v38; // rbx
  __int64 *v39; // rcx
  unsigned int v40; // r8d
  char *v41; // r14
  _WORD *v42; // r9
  _WORD *v43; // rdx
  unsigned __int64 v44; // rsi
  unsigned int v45; // ebx
  unsigned int v46; // eax
  int *v47; // rcx
  _QWORD *v48; // rbx
  struct _KTHREAD *v49; // rdi
  int v50; // r14d
  __int64 *k; // rsi
  __int64 v52; // rcx
  bool v53; // zf
  int SessionId; // ebx
  _DWORD *v55; // r14
  __int64 v56; // rdx
  int v57; // eax
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  char *v60; // r13
  struct _KTHREAD *CurrentThread; // rsi
  PEPROCESS v62; // r14
  unsigned __int64 *v63; // r15
  int v64; // r12d
  unsigned __int64 *i; // rbx
  unsigned int v66; // eax
  unsigned int v67; // ebx
  unsigned int v68; // r15d
  unsigned __int64 v69; // rax
  struct _KTHREAD *v70; // rsi
  PEPROCESS v71; // r14
  unsigned __int64 *v72; // r15
  int v73; // r12d
  unsigned __int64 *j; // rbx
  _LIST_ENTRY *v75; // rdi
  struct _DMA_ADAPTER *v76; // rsi
  ULONG_PTR v77; // r14
  ULONG_PTR v78; // r15
  size_t v79; // rcx
  unsigned int v80; // esi
  unsigned int v81; // eax
  unsigned int v82; // edx
  unsigned int v83; // ecx
  int v84; // eax
  _LIST_ENTRY *Flink; // rdi
  unsigned int v86; // edx
  signed __int64 *p_Lock; // rbx
  __int64 result; // rax
  signed __int32 v89[8]; // [rsp+0h] [rbp-658h] BYREF
  int v90; // [rsp+40h] [rbp-618h]
  unsigned int v91; // [rsp+44h] [rbp-614h]
  unsigned int v92; // [rsp+48h] [rbp-610h]
  NTSTATUS v93; // [rsp+4Ch] [rbp-60Ch]
  char v94; // [rsp+50h] [rbp-608h]
  PVOID Object; // [rsp+58h] [rbp-600h]
  int v96; // [rsp+60h] [rbp-5F8h]
  PEPROCESS Process; // [rsp+68h] [rbp-5F0h]
  bool v98; // [rsp+70h] [rbp-5E8h]
  bool v99; // [rsp+71h] [rbp-5E7h]
  int v100; // [rsp+74h] [rbp-5E4h]
  PVOID v101; // [rsp+78h] [rbp-5E0h]
  int v102; // [rsp+80h] [rbp-5D8h]
  int *v103; // [rsp+88h] [rbp-5D0h]
  bool v104; // [rsp+90h] [rbp-5C8h]
  int v105; // [rsp+9Ch] [rbp-5BCh]
  char *v106; // [rsp+A0h] [rbp-5B8h]
  _DWORD *v107; // [rsp+B0h] [rbp-5A8h]
  size_t Size; // [rsp+B8h] [rbp-5A0h]
  unsigned int *v109; // [rsp+C0h] [rbp-598h]
  PVOID P; // [rsp+C8h] [rbp-590h] BYREF
  ULONG_PTR AppIdSize; // [rsp+D0h] [rbp-588h] BYREF
  ULONG_PTR PackageSize; // [rsp+D8h] [rbp-580h] BYREF
  int v113; // [rsp+E0h] [rbp-578h]
  char *v114; // [rsp+E8h] [rbp-570h]
  __int64 *v115; // [rsp+F0h] [rbp-568h]
  _WORD *v116; // [rsp+F8h] [rbp-560h]
  char *v117; // [rsp+100h] [rbp-558h]
  __int64 *v118; // [rsp+108h] [rbp-550h]
  unsigned __int64 *v119; // [rsp+110h] [rbp-548h]
  unsigned __int64 *v120; // [rsp+118h] [rbp-540h]
  unsigned __int64 v121; // [rsp+120h] [rbp-538h]
  HANDLE Handle; // [rsp+128h] [rbp-530h] BYREF
  _DWORD *v123; // [rsp+130h] [rbp-528h]
  int v124; // [rsp+138h] [rbp-520h]
  int v125; // [rsp+140h] [rbp-518h]
  __int64 CurrentServerSilo; // [rsp+168h] [rbp-4F0h]
  struct _KTHREAD *v127; // [rsp+180h] [rbp-4D8h]
  PEPROCESS v128; // [rsp+1C0h] [rbp-498h]
  _OWORD v129[2]; // [rsp+1D0h] [rbp-488h] BYREF
  struct _KTHREAD *v130; // [rsp+1F0h] [rbp-468h]
  struct _DMA_ADAPTER *v131; // [rsp+1F8h] [rbp-460h]
  struct _KTHREAD *v132; // [rsp+200h] [rbp-458h]
  struct _KTHREAD *v133; // [rsp+208h] [rbp-450h]
  _QWORD v134[14]; // [rsp+210h] [rbp-448h] BYREF
  _BYTE Src[80]; // [rsp+280h] [rbp-3D8h] BYREF
  _OWORD v136[27]; // [rsp+2D0h] [rbp-388h] BYREF
  WCHAR AppId[72]; // [rsp+480h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+510h] [rbp-148h] BYREF

  v113 = a5;
  v123 = a1;
  v109 = a3;
  AppIdSize = 130LL;
  memset(v136, 0, sizeof(v136));
  v105 = 0;
  LODWORD(Size) = 0;
  PackageSize = 254LL;
  Process = 0LL;
  memset(v134, 0, 0x68uLL);
  v98 = 0;
  v101 = 0LL;
  memset(v129, 0, sizeof(v129));
  v92 = 0;
  memset(Src, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  v104 = v113 != 5;
  v9 = 136;
  if ( v113 == 5 )
    v9 = 80;
  v100 = v9;
  v102 = v9;
  v107 = v123;
  v10 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !a3 )
      return 3221225476LL;
    v10 = a2 < 0x270;
  }
  v11 = v10 ? 0xC0000004 : 0;
  v94 = 0;
  v12 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(v12), (int)result >= 0) )
  {
    if ( (unsigned int)ExIsRestrictedCaller(v12, v6, v7, v8) )
      v94 = 1;
    v93 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    v13 = (PEPROCESS)PsIdleProcess;
    Object = PsIdleProcess;
    Process = (PEPROCESS)PsIdleProcess;
    v90 = v11;
    while ( 1 )
    {
LABEL_103:
      if ( !v13 )
      {
        if ( v90 >= 0 && v107 && (*v107 = 0, v93 < 0) )
        {
          v90 = v93;
        }
        else if ( v109 )
        {
          *v109 = v92;
        }
        goto LABEL_206;
      }
      if ( (v13[1].DirectoryTableBase & 0x400000000LL) != 0 )
      {
        if ( v13->Header.SignalState )
        {
          v84 = v13[1].ActiveProcessors.Bitmap[8];
          v13 = Process;
          Object = Process;
          if ( !v84 && Process->ThreadListHead.Flink == &Process->ThreadListHead )
            goto LABEL_82;
        }
      }
      if ( a4 && v13 == PsIdleProcess )
        goto LABEL_82;
      SessionId = MmGetSessionId((__int64)v13);
      v124 = SessionId;
      if ( a4 )
      {
        if ( SessionId != *a4 )
          goto LABEL_82;
      }
      if ( !PsIsProcessInSilo(v13, CurrentServerSilo) )
        goto LABEL_82;
      v55 = (_DWORD *)((char *)v123 + v92);
      v103 = v55;
      v107 = v55;
      v96 = 624;
      v33 = v92 + 624;
      v91 = v92 + 624;
      if ( v92 + 624 < v92 )
      {
        v33 = -1;
        v91 = -1;
        v92 = -1;
        v31 = -1073741675;
      }
      else
      {
        v92 += 624;
        v31 = 0;
      }
      v93 = v31;
      if ( v31 < 0 )
      {
        v90 = v31;
LABEL_206:
        p_Blink = (unsigned __int64 *)v101;
        goto LABEL_269;
      }
      memset(v134, 0, 0x68uLL);
      if ( v33 > a2 )
      {
        v90 = -1073741820;
        if ( !v109 )
          goto LABEL_206;
        v58 = 0LL;
      }
      else
      {
        v57 = ExpCopyProcessInfo(v55, v13, v104, v134);
        v31 = v57;
        v93 = v57;
        if ( v57 < 0 )
        {
          v90 = v57;
          goto LABEL_206;
        }
        v58 = 0LL;
        *(_QWORD *)v55 = 0LL;
        v55[25] = SessionId;
        *((_QWORD *)v55 + 8) = 0LL;
        v55[14] = 0;
        if ( v13 == PsIdleProcess )
          *((_QWORD *)v55 + 12) = 0LL;
        if ( v13 == (PEPROCESS)PsSecureSystemProcess )
        {
          v59 = qword_140C4DE80 << 12;
          *((_QWORD *)v55 + 18) = qword_140C4DE80 << 12;
          *((_QWORD *)v55 + 1) = v59;
        }
        if ( v31 < 0 )
        {
          v90 = v31;
          goto LABEL_206;
        }
      }
      v60 = (char *)(v55 + 64);
      v106 = (char *)(v55 + 64);
      if ( v13 == PsIdleProcess )
      {
        Flink = v13->ThreadListHead.Flink;
        if ( Flink == &v13->ThreadListHead )
        {
          p_Blink = 0LL;
        }
        else
        {
          p_Blink = (unsigned __int64 *)&Flink[-48].Blink;
          ((void (*)(void))KeSynchronizeWithDynamicProcessors)();
          v58 = 0LL;
        }
      }
      else
      {
        p_Blink = 0LL;
        v120 = 0LL;
        CurrentThread = KeGetCurrentThread();
        v133 = CurrentThread;
        v62 = Process;
        v63 = &Process[1].ActiveProcessors.Bitmap[6];
        v64 = 0;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v62[1], 0LL);
        for ( i = (unsigned __int64 *)*v63; i != v63; i = (unsigned __int64 *)*i )
        {
          p_Blink = i - 157;
          v120 = i - 157;
          if ( ObReferenceObjectSafeWithTag((__int64)(i - 157)) )
          {
            v64 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v62[1].Header.Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v62[1].Header.Lock);
        KeAbPostRelease((ULONG_PTR)&v62[1]);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v58 = 0LL;
        if ( !v64 )
        {
          p_Blink = 0LL;
          v120 = 0LL;
        }
        v13 = Process;
        Object = Process;
        v31 = v93;
        v33 = v92;
        v91 = v92;
        v55 = v107;
        v103 = v107;
        v60 = v106;
      }
      v101 = p_Blink;
      while ( p_Blink )
      {
        v125 = *((_DWORD *)p_Blink + 1);
        if ( !(_BYTE)v125 )
        {
          v66 = v33 + v100;
          if ( v33 + v100 < v33 )
          {
            v66 = -1;
            v31 = -1073741675;
          }
          else
          {
            v31 = 0;
          }
          v92 = v66;
          v91 = v66;
          v67 = v66;
          v93 = v31;
          if ( v31 < 0 )
          {
            v90 = v31;
            goto LABEL_269;
          }
          v68 = v100;
          v96 += v100;
          if ( v66 > a2 )
          {
            v90 = -1073741820;
            if ( !v109 )
              goto LABEL_269;
          }
          else
          {
            KeQueryValuesThread((__int64)p_Blink, (__int64)v129);
            v58 = BYTE8(v129[0]);
            if ( BYTE8(v129[0]) == 4 )
            {
              v96 -= v68;
              v91 = v67 - v68;
              v92 = v67 - v68;
            }
            else
            {
              *((_DWORD *)v60 + 6) = v129[0];
              *((_DWORD *)v60 + 17) = v58;
              *((_DWORD *)v60 + 18) = BYTE9(v129[0]);
              *((_DWORD *)v60 + 14) = SBYTE10(v129[0]);
              *((_DWORD *)v60 + 15) = SBYTE11(v129[0]);
              *(_QWORD *)v60 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
              *((_QWORD *)v60 + 1) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 183);
              *((_QWORD *)v60 + 2) = p_Blink[134];
              *((_DWORD *)v60 + 16) = *((_DWORD *)p_Blink + 85);
              *(_OWORD *)(v60 + 40) = *(_OWORD *)(p_Blink + 143);
              if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
              {
                v58 = p_Blink[154];
              }
              else
              {
                if ( (p_Blink[163] & 8) != 0
                  || (v58 = *((_QWORD *)v101 + 138), _InterlockedOr(v89, 0), (p_Blink[163] & 8) != 0) )
                {
                  v58 = 0LL;
                }
                v13 = Process;
                Object = Process;
                v31 = v93;
                p_Blink = (unsigned __int64 *)v101;
                v91 = v92;
                v55 = v107;
                v103 = v107;
                v60 = v106;
              }
              v121 = v58;
              if ( v94 && v58 > 0x7FFFFFFEFFFFLL )
                *((_QWORD *)v60 + 4) = 0LL;
              else
                *((_QWORD *)v60 + 4) = v58;
              if ( v113 != 5 )
              {
                v58 = 0LL;
                if ( v94 )
                {
                  *((_QWORD *)v60 + 10) = 0LL;
                  *((_QWORD *)v60 + 11) = 0LL;
                }
                else
                {
                  *((_QWORD *)v60 + 10) = p_Blink[7];
                  *((_QWORD *)v60 + 11) = p_Blink[6];
                  v13 = Process;
                  Object = Process;
                  v31 = v93;
                  p_Blink = (unsigned __int64 *)v101;
                  v91 = v92;
                  v55 = v107;
                  v103 = v107;
                  v60 = v106;
                }
                v69 = p_Blink[154];
                v121 = v69;
                if ( v94 && (v56 = 0x7FFFFFFEFFFFLL, v69 > 0x7FFFFFFEFFFFLL) )
                  *((_QWORD *)v60 + 12) = 0LL;
                else
                  *((_QWORD *)v60 + 12) = v69;
                *((_QWORD *)v60 + 13) = p_Blink[30];
                *((_QWORD *)v60 + 14) = 0LL;
                *((_QWORD *)v60 + 15) = 0LL;
                *((_QWORD *)v60 + 16) = 0LL;
              }
              ++v55[1];
              if ( v31 < 0 )
              {
                v90 = v31;
                goto LABEL_269;
              }
              v60 += v68;
              v106 = v60;
            }
          }
        }
        if ( v13 == PsIdleProcess )
        {
          v75 = (_LIST_ENTRY *)p_Blink[95];
          if ( v75 != &v13->ThreadListHead )
          {
            p_Blink = (unsigned __int64 *)&v75[-48].Blink;
            KeSynchronizeWithDynamicProcessors(v58, v56, 0LL);
            goto LABEL_167;
          }
          p_Blink = 0LL;
          v101 = 0LL;
          v33 = v91;
          v58 = 0LL;
        }
        else
        {
          p_Blink = 0LL;
          v119 = 0LL;
          v70 = KeGetCurrentThread();
          v130 = v70;
          v71 = Process;
          v72 = &Process[1].ActiveProcessors.Bitmap[6];
          v73 = 0;
          --v70->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&v71[1], 0LL);
          for ( j = (unsigned __int64 *)*((_QWORD *)v101 + 157); j != v72; j = (unsigned __int64 *)*j )
          {
            p_Blink = j - 157;
            v119 = j - 157;
            if ( ObReferenceObjectSafeWithTag((__int64)(j - 157)) )
            {
              v73 = 1;
              break;
            }
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v71[1].Header.Lock, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&v71[1].Header.Lock);
          KeAbPostRelease((ULONG_PTR)&v71[1]);
          KeLeaveCriticalRegionThread((__int64)v70);
          ObfDereferenceObjectWithTag(v101, 0x6E457350u);
          if ( !v73 )
            p_Blink = 0LL;
          v119 = p_Blink;
          v13 = Process;
          Object = Process;
          v31 = v93;
          v91 = v92;
          v55 = v107;
          v103 = v107;
          v60 = v106;
LABEL_167:
          v101 = p_Blink;
          v33 = v91;
          v58 = 0LL;
        }
      }
      v14 = v60;
      v114 = v60;
      v15 = v60;
      v16 = v60 + 368;
      v106 = v16;
      if ( v90 < 0 )
        goto LABEL_48;
      v17 = (signed __int64 *)&v13[1].Affinity.Bitmap[5];
      v18 = (struct _DMA_ADAPTER *)ObFastReferenceObject(v17);
      if ( v18 )
      {
        v19 = Object;
      }
      else
      {
        v127 = KeGetCurrentThread();
        --v127->KernelApcDisable;
        p_Lock = (signed __int64 *)&Process[1].Header.Lock;
        ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
        v18 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v17);
        if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Lock);
        KeAbPostRelease((ULONG_PTR)p_Lock);
        KeLeaveCriticalRegionThread((__int64)v127);
        v19 = &Process->Header.Lock;
        v14 = v114;
      }
      v98 = SeSecurityAttributePresent((__int64)v18, (__int64)&PspSysAppIdClaim);
      ObFastDereferenceObject(v17, v18);
      *(_QWORD *)(v14 + 52) = 0LL;
      *((_DWORD *)v14 + 84) = 0;
      v20 = v114;
      *((_QWORD *)v114 + 43) = v19[293] << 12;
      *((_QWORD *)v20 + 5) = v134[4];
      *((_DWORD *)v20 + 12) = 0;
      if ( v98 )
        *((_DWORD *)v20 + 12) = 1;
      v21 = Process;
      DeepFreezeStartTime = Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        *(_OWORD *)v20 = *(_OWORD *)DeepFreezeStartTime;
        *((_OWORD *)v20 + 1) = *(_OWORD *)(DeepFreezeStartTime + 16);
        *((_QWORD *)v20 + 4) = *(_QWORD *)(DeepFreezeStartTime + 32);
      }
      else
      {
        *(_OWORD *)v20 = 0LL;
        *((_OWORD *)v20 + 1) = 0LL;
        *((_QWORD *)v20 + 4) = 0LL;
      }
      if ( (HIDWORD(v21[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v25 = *((_DWORD *)v20 + 12) & 0xFFFFFFE1 | 2;
      }
      else if ( v21 == (PEPROCESS)PsSecureSystemProcess )
      {
        v25 = *((_DWORD *)v20 + 12) & 0xFFFFFFE1 | 4;
      }
      else if ( SmIsCompressionProcess(v21) )
      {
        v25 = *((_DWORD *)v20 + 12) & 0xFFFFFFE1 | 6;
      }
      else
      {
        v23 = *((_QWORD *)&CmpRegistryProcess + 1) && v21 == *((PEPROCESS *)&CmpRegistryProcess + 1);
        v99 = v23;
        v24 = *((_DWORD *)v20 + 12);
        if ( v23 )
          v25 = v24 & 0xFFFFFFE1 | 8;
        else
          v25 = v24 & 0xFFFFFFE1;
      }
      *((_DWORD *)v20 + 12) = v25;
      *((_QWORD *)v20 + 45) = v21[2].Affinity.Bitmap[6];
      PsQueryProcessEnergyValues(v21, v136);
      v26 = v20 + 64;
      v27 = v136;
      v28 = 2LL;
      do
      {
        *v26 = *v27;
        v26[1] = v27[1];
        v26[2] = v27[2];
        v26[3] = v27[3];
        v26[4] = v27[4];
        v26[5] = v27[5];
        v26[6] = v27[6];
        v26 += 8;
        *(v26 - 1) = v27[7];
        v27 += 8;
        --v28;
      }
      while ( v28 );
      *v26 = *v27;
      if ( v21[1].Affinity.Bitmap[16] )
        *((_DWORD *)v15 + 88) = *(_DWORD *)(v21[1].Affinity.Bitmap[16] + 1236);
      else
        *((_DWORD *)v15 + 88) = 0;
      v13 = Process;
      Object = Process;
      if ( Process->ProcessTimerDelay
        || KeHeteroSystem
        && ((v29 = KiProcessPolicyToQosMappingTable[(*(_DWORD *)&Process->0 >> 7) & 7], v29 != 5)
         || HIBYTE(Process[1].ActiveProcessors.Bitmap[0]) != 1
          ? (v30 = 0)
          : (v30 = 1),
            PpmPerfQosEnabled && (v29 - 1 <= 1 || v30)) )
      {
        *((_DWORD *)v20 + 12) |= 0x20u;
      }
      v31 = v93;
      if ( v93 < 0 )
      {
        v90 = v93;
        goto LABEL_206;
      }
      v14 = v114;
      p_Blink = (unsigned __int64 *)v101;
      v33 = v92;
      v91 = v92;
      v103 = v107;
      v16 = v106;
LABEL_48:
      if ( a5 == 148 )
      {
        v76 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(v13);
        v131 = v76;
        SeQueryUserSidToken(v76, Src, 68LL);
        PackageSize = 254LL;
        AppIdSize = 130LL;
        v31 = 0;
        v93 = RtlQueryPackageIdentity(v76, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
        if ( v93 >= 0 )
        {
          v78 = AppIdSize;
          v77 = PackageSize;
        }
        else
        {
          v77 = 0LL;
          PackageSize = 0LL;
          v78 = 0LL;
          AppIdSize = 0LL;
        }
        ObFastDereferenceObject((signed __int64 *)Object + 151, v76);
        v79 = (unsigned int)Size;
        v80 = (Size + 7) & 0xFFFFFFF8;
        v105 = v80;
        v81 = v80 + v91;
        if ( v80 + v91 < v91 )
        {
          v81 = -1;
          v31 = -1073741675;
        }
        v92 = v81;
        v91 = v81;
        v82 = v81;
        v93 = v31;
        if ( v31 < 0 )
        {
          v90 = v31;
        }
        else
        {
          v96 += v80;
          if ( v81 > a2 )
          {
            v90 = -1073741820;
            if ( !v109 )
              goto LABEL_269;
          }
          else
          {
            *((_DWORD *)v14 + 13) = 368;
            memmove(v16, Src, v79);
            v82 = v91;
            v16 += v80;
            v106 = v16;
          }
          if ( v77 )
          {
            if ( v77 > 0xFFFFFFFF )
            {
              v90 = -1073741820;
            }
            else
            {
              v105 = v77;
              if ( (unsigned int)v77 + v82 < v82 )
              {
                v83 = -1;
                v91 = -1;
                v92 = -1;
                v31 = -1073741675;
              }
              else
              {
                v83 = v77 + v82;
                v91 = v77 + v82;
                v92 = v77 + v82;
                v31 = 0;
              }
              v93 = v31;
              if ( v31 >= 0 )
              {
                v96 += v77;
                if ( v83 > a2 )
                {
                  v90 = -1073741820;
                  if ( !v109 )
                    goto LABEL_269;
                }
                else
                {
                  *((_DWORD *)v14 + 14) = (_DWORD)v16 - (_DWORD)v14;
                  memmove(v16, PackageFullName, (unsigned int)v77);
                  v83 = v91;
                  v16 += (unsigned int)v77;
                  v106 = v16;
                }
                goto LABEL_188;
              }
              v90 = v31;
            }
          }
          else
          {
            v83 = v91;
LABEL_188:
            if ( !v78 )
            {
              v33 = v91;
              v13 = (PEPROCESS)Object;
              goto LABEL_49;
            }
            v86 = -1;
            if ( v78 > 0xFFFFFFFF )
            {
              v90 = -1073741820;
            }
            else
            {
              v105 = v78;
              if ( (unsigned int)v78 + v83 < v83 )
              {
                v91 = -1;
                v92 = -1;
                v31 = -1073741675;
              }
              else
              {
                v86 = v78 + v83;
                v91 = v78 + v83;
                v92 = v78 + v83;
                v31 = 0;
              }
              v93 = v31;
              if ( v31 >= 0 )
              {
                v96 += v78;
                if ( v86 > a2 )
                {
                  v90 = -1073741820;
                  if ( !v109 )
                    goto LABEL_269;
                  v33 = v91;
                  v13 = (PEPROCESS)Object;
                }
                else
                {
                  *((_DWORD *)v14 + 84) = (_DWORD)v16 - (_DWORD)v14;
                  memmove(v16, AppId, (unsigned int)v78);
                  v13 = (PEPROCESS)Object;
                  v16 += (unsigned int)v78;
                  v106 = v16;
                  v33 = v91;
                }
                goto LABEL_49;
              }
              v90 = v31;
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
        return (unsigned int)v90;
      }
LABEL_49:
      if ( v13 == PsIdleProcess )
        goto LABEL_174;
      if ( v13 == PsInitialSystemProcess )
      {
        v39 = &ExpSystemProcessName;
      }
      else if ( v13 == (PEPROCESS)PsSecureSystemProcess )
      {
        v39 = &ExpSecureSystemProcessName;
      }
      else if ( SmIsCompressionProcess(v13) )
      {
        v39 = (__int64 *)L"$&";
      }
      else
      {
        v35 = -1073741275;
        if ( *(_QWORD *)&v13[2].Affinity.Count && (_QWORD)xmmword_140C1DEE0 )
        {
          v35 = ((__int64 (__fastcall *)(__int64, PVOID *))xmmword_140C1DEE0)(v34, &P);
        }
        else
        {
          v36 = v13[1].ActiveProcessors.Bitmap[2];
          if ( v36 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(
                                    NonPagedPoolNx,
                                    *(unsigned __int16 *)(v36 + 2) + 16LL,
                                    0x6E497350u);
            v38 = PoolWithTag;
            if ( PoolWithTag )
            {
              *(_OWORD *)PoolWithTag = *(_OWORD *)v36;
              if ( *((_QWORD *)PoolWithTag + 1) )
              {
                *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 16;
                memmove(PoolWithTag + 16, *(const void **)(v36 + 8), *(unsigned __int16 *)(v36 + 2));
              }
              P = v38;
              v35 = 0;
            }
            else
            {
              v35 = -1073741801;
            }
          }
          v13 = (PEPROCESS)Object;
        }
        v93 = v35;
        if ( v35 < 0 )
          v39 = (__int64 *)v13[1].ActiveProcessors.Bitmap[2];
        else
          v39 = (__int64 *)P;
      }
      v115 = v39;
      v40 = *(unsigned __int16 *)v39;
      v105 = v40;
      v41 = v16;
      v117 = v16;
      LODWORD(Size) = v40;
      v42 = (_WORD *)v39[1];
      v43 = v42;
      v116 = v42;
      if ( a5 != 148 && v40 )
      {
        v43 = &v42[(unsigned __int64)v40 >> 1];
        v116 = v43;
        while ( v43 != v42 )
        {
          v116 = --v43;
          if ( *v43 == 92 )
          {
            v116 = ++v43;
            break;
          }
        }
        v40 -= 2 * (v43 - v42);
        LODWORD(Size) = v40;
      }
      v44 = v40;
      v45 = (v40 + 9) & 0xFFFFFFF8;
      v105 = v45;
      v46 = v45 + v33;
      if ( v45 + v33 < v33 )
      {
        v46 = -1;
        v31 = -1073741675;
      }
      else
      {
        v31 = 0;
      }
      v92 = v46;
      v93 = v31;
      if ( v31 < 0 )
      {
        v90 = v31;
        goto LABEL_269;
      }
      v96 += v45;
      if ( v46 > a2 )
      {
        v90 = -1073741820;
        if ( !v109 )
          goto LABEL_269;
      }
      else
      {
        if ( v40 )
        {
          memmove(v16, v43, v40);
          v41 = &v16[2 * (v44 >> 1)];
          v117 = v41;
        }
        *(_WORD *)v41 = 0;
        v41 += 2;
        v117 = v41;
      }
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
      if ( v90 < 0 )
      {
        v13 = (PEPROCESS)Object;
LABEL_174:
        v47 = v103;
        goto LABEL_80;
      }
      v47 = v103;
      *((_WORD *)v103 + 28) = (_WORD)v41 - (_WORD)v16 - 2;
      *((_WORD *)v47 + 29) = v45;
      *((_QWORD *)v47 + 8) = v16;
      v13 = (PEPROCESS)Object;
LABEL_80:
      if ( v90 >= 0 )
      {
        *v47 = v96;
        if ( v31 < 0 )
        {
          v90 = v31;
          goto LABEL_269;
        }
      }
LABEL_82:
      if ( v13 == PsIdleProcess )
        v13 = 0LL;
      v48 = &v13->Header.Lock;
      v128 = v13;
      Handle = 0LL;
      while ( 1 )
      {
        Object = 0LL;
        v118 = 0LL;
        v49 = KeGetCurrentThread();
        v132 = v49;
        v50 = 0;
        --v49->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
        for ( k = (__int64 *)(v48 ? v48[137] : PsActiveProcessHead); k != &PsActiveProcessHead; k = (__int64 *)*k )
        {
          Object = k - 137;
          v118 = k - 137;
          if ( ObReferenceObjectSafeWithTag((__int64)(k - 137)) )
          {
            v50 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v53 = v49->SpecialApcDisable++ == -1;
        if ( v53 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
          KiCheckForKernelApcDelivery(v52);
        if ( v48 )
          ObfDereferenceObjectWithTag(v48, 0x6E457350u);
        if ( v50 )
        {
          v13 = (PEPROCESS)Object;
        }
        else
        {
          v13 = 0LL;
          Object = 0LL;
          v118 = 0LL;
        }
        v48 = &v13->Header.Lock;
        v128 = v13;
        if ( !v13 )
          break;
        if ( (v13[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v94 )
            goto LABEL_102;
          if ( ObOpenObjectByPointer(v13, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
          {
            ObCloseHandle(Handle, 0);
LABEL_102:
            Process = v13;
            goto LABEL_103;
          }
        }
      }
      v13 = 0LL;
      Object = 0LL;
      Process = 0LL;
    }
  }
  return result;
}
