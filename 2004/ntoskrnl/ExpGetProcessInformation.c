/*
 * XREFs of ExpGetProcessInformation @ 0x1405F43A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlQueryPackageIdentity @ 0x14026A0B0 (RtlQueryPackageIdentity.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     MmGetSessionId @ 0x14027D4C0 (MmGetSessionId.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14027D828 (PsIsProcessInSilo.c)
 *     SeSecurityAttributePresent @ 0x140296520 (SeSecurityAttributePresent.c)
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
 *     KeQueryValuesThread @ 0x1402D2B80 (KeQueryValuesThread.c)
 *     KeFlushProcessWriteBuffers @ 0x1402FCFDC (KeFlushProcessWriteBuffers.c)
 *     SmIsCompressionProcess @ 0x14033B110 (SmIsCompressionProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     SeQueryUserSidToken @ 0x1406259FC (SeQueryUserSidToken.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     PsQueryProcessEnergyValues @ 0x1406878B0 (PsQueryProcessEnergyValues.c)
 *     ExpCopyProcessInfo @ 0x14069B630 (ExpCopyProcessInfo.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406BC87C (ExCheckFullProcessInformationAccess.c)
 *     ExIsRestrictedCaller @ 0x1406F252C (ExIsRestrictedCaller.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406F9878 (KeSynchronizeWithDynamicProcessors.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpGetProcessInformation(_DWORD *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  int v6; // r13d
  bool v7; // cf
  unsigned int v8; // ebx
  unsigned __int8 v9; // di
  PEPROCESS v10; // rsi
  char *v11; // rbx
  char *v12; // r14
  char *v13; // r13
  signed __int64 *v14; // rsi
  struct _DMA_ADAPTER *v15; // rdi
  struct _KTHREAD *v16; // r8
  _QWORD *v17; // r15
  char *v18; // rdi
  PEPROCESS v19; // rbx
  unsigned __int64 DeepFreezeStartTime; // rax
  bool v21; // cl
  int v22; // eax
  unsigned int v23; // eax
  _OWORD *v24; // rax
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // eax
  char v28; // cl
  int v29; // r12d
  unsigned __int64 *p_Blink; // rdi
  unsigned int v31; // r15d
  __int64 v32; // rcx
  int v33; // eax
  unsigned __int64 v34; // rsi
  char *PoolWithTag; // rax
  void *v36; // rbx
  __int64 *v37; // rcx
  unsigned int v38; // r8d
  char *v39; // r14
  _WORD *v40; // r9
  _WORD *v41; // rdx
  unsigned __int64 v42; // rsi
  unsigned int v43; // ebx
  unsigned int v44; // eax
  int *v45; // rcx
  _QWORD *v46; // rbx
  struct _KTHREAD *v47; // rdi
  int v48; // r14d
  __int64 *k; // rsi
  __int64 v50; // rcx
  bool v51; // zf
  int SessionId; // ebx
  _DWORD *v53; // r14
  __int64 v54; // rdx
  __int64 v55; // r8
  _DWORD *v56; // r9
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
  size_t Size; // [rsp+B8h] [rbp-5A0h] BYREF
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
  _BYTE v136[432]; // [rsp+2D0h] [rbp-388h] BYREF
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
  v6 = 136;
  if ( v113 == 5 )
    v6 = 80;
  v100 = v6;
  v102 = v6;
  v107 = v123;
  v7 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !a3 )
      return 3221225476LL;
    v7 = a2 < 0x270;
  }
  v8 = v7 ? 0xC0000004 : 0;
  v94 = 0;
  v9 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(v9), (int)result >= 0) )
  {
    if ( (unsigned int)ExIsRestrictedCaller(v9) )
      v94 = 1;
    v93 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    v10 = (PEPROCESS)PsIdleProcess;
    Object = PsIdleProcess;
    Process = (PEPROCESS)PsIdleProcess;
    v90 = v8;
    while ( 1 )
    {
LABEL_103:
      if ( !v10 )
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
      if ( (v10[1].DirectoryTableBase & 0x400000000LL) != 0 )
      {
        if ( v10->Header.SignalState )
        {
          v84 = v10[1].ActiveProcessors.Bitmap[8];
          v10 = Process;
          Object = Process;
          if ( !v84 && Process->ThreadListHead.Flink == &Process->ThreadListHead )
            goto LABEL_82;
        }
      }
      if ( a4 && v10 == PsIdleProcess )
        goto LABEL_82;
      SessionId = MmGetSessionId((__int64)v10);
      v124 = SessionId;
      if ( a4 )
      {
        if ( SessionId != *a4 )
          goto LABEL_82;
      }
      if ( !PsIsProcessInSilo(v10, CurrentServerSilo) )
        goto LABEL_82;
      v53 = (_DWORD *)((char *)v123 + v92);
      v103 = v53;
      v107 = v53;
      v96 = 624;
      v31 = v92 + 624;
      v91 = v92 + 624;
      if ( v92 + 624 < v92 )
      {
        v31 = -1;
        v91 = -1;
        v92 = -1;
        v29 = -1073741675;
      }
      else
      {
        v92 += 624;
        v29 = 0;
      }
      v93 = v29;
      if ( v29 < 0 )
      {
        v90 = v29;
LABEL_206:
        p_Blink = (unsigned __int64 *)v101;
        goto LABEL_269;
      }
      memset(v134, 0, 0x68uLL);
      if ( v31 > a2 )
      {
        v90 = -1073741820;
        if ( !v109 )
          goto LABEL_206;
        v58 = 0LL;
      }
      else
      {
        v57 = ExpCopyProcessInfo(v53, v10, v104, v134);
        v29 = v57;
        v93 = v57;
        if ( v57 < 0 )
        {
          v90 = v57;
          goto LABEL_206;
        }
        v58 = 0LL;
        *(_QWORD *)v53 = 0LL;
        v53[25] = SessionId;
        *((_QWORD *)v53 + 8) = 0LL;
        v53[14] = 0;
        if ( v10 == PsIdleProcess )
          *((_QWORD *)v53 + 12) = 0LL;
        if ( v10 == (PEPROCESS)PsSecureSystemProcess )
        {
          v59 = qword_140C4DE00 << 12;
          *((_QWORD *)v53 + 18) = qword_140C4DE00 << 12;
          *((_QWORD *)v53 + 1) = v59;
        }
        if ( v29 < 0 )
        {
          v90 = v29;
          goto LABEL_206;
        }
      }
      v60 = (char *)(v53 + 64);
      v106 = (char *)(v53 + 64);
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
        v10 = Process;
        Object = Process;
        v29 = v93;
        v31 = v92;
        v91 = v92;
        v53 = v107;
        v103 = v107;
        v60 = v106;
      }
      v101 = p_Blink;
      while ( p_Blink )
      {
        v125 = *((_DWORD *)p_Blink + 1);
        if ( (_BYTE)v125 )
        {
          v55 = 0LL;
        }
        else
        {
          v66 = v31 + v100;
          if ( v31 + v100 < v31 )
          {
            v66 = -1;
            v29 = -1073741675;
          }
          else
          {
            v29 = 0;
          }
          v92 = v66;
          v91 = v66;
          v67 = v66;
          v93 = v29;
          if ( v29 < 0 )
          {
            v90 = v29;
            goto LABEL_269;
          }
          v68 = v100;
          v96 += v100;
          if ( v66 > a2 )
          {
            v90 = -1073741820;
            if ( !v109 )
              goto LABEL_269;
            v55 = 0LL;
          }
          else
          {
            KeQueryValuesThread((__int64)p_Blink, v129, v55, v56);
            v58 = BYTE8(v129[0]);
            if ( BYTE8(v129[0]) == 4 )
            {
              v96 -= v68;
              v91 = v67 - v68;
              v92 = v67 - v68;
              v55 = 0LL;
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
              v55 = 0LL;
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
                v10 = Process;
                Object = Process;
                v29 = v93;
                p_Blink = (unsigned __int64 *)v101;
                v91 = v92;
                v53 = v107;
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
                  v10 = Process;
                  Object = Process;
                  v29 = v93;
                  p_Blink = (unsigned __int64 *)v101;
                  v91 = v92;
                  v53 = v107;
                  v103 = v107;
                  v60 = v106;
                }
                v69 = p_Blink[154];
                v121 = v69;
                if ( v94 && (v54 = 0x7FFFFFFEFFFFLL, v69 > 0x7FFFFFFEFFFFLL) )
                  *((_QWORD *)v60 + 12) = 0LL;
                else
                  *((_QWORD *)v60 + 12) = v69;
                *((_QWORD *)v60 + 13) = p_Blink[30];
                *((_QWORD *)v60 + 14) = 0LL;
                *((_QWORD *)v60 + 15) = 0LL;
                *((_QWORD *)v60 + 16) = 0LL;
                v55 = 0LL;
              }
              ++v53[1];
              if ( v29 < 0 )
              {
                v90 = v29;
                goto LABEL_269;
              }
              v60 += v68;
              v106 = v60;
            }
          }
        }
        if ( v10 == PsIdleProcess )
        {
          v75 = (_LIST_ENTRY *)p_Blink[95];
          if ( v75 != &v10->ThreadListHead )
          {
            p_Blink = (unsigned __int64 *)&v75[-48].Blink;
            KeSynchronizeWithDynamicProcessors(v58, v54, 0LL);
            goto LABEL_167;
          }
          p_Blink = 0LL;
          v101 = 0LL;
          v31 = v91;
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
          v10 = Process;
          Object = Process;
          v29 = v93;
          v91 = v92;
          v53 = v107;
          v103 = v107;
          v60 = v106;
LABEL_167:
          v101 = p_Blink;
          v31 = v91;
          v58 = 0LL;
        }
      }
      v11 = v60;
      v114 = v60;
      v12 = v60;
      v13 = v60 + 368;
      v106 = v13;
      if ( v90 < 0 )
        goto LABEL_48;
      v14 = (signed __int64 *)&v10[1].Affinity.Bitmap[5];
      v15 = (struct _DMA_ADAPTER *)ObFastReferenceObject(v14);
      if ( v15 )
      {
        v17 = Object;
      }
      else
      {
        v127 = KeGetCurrentThread();
        --v127->KernelApcDisable;
        p_Lock = (signed __int64 *)&Process[1].Header.Lock;
        ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
        v15 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v14);
        if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Lock);
        KeAbPostRelease((ULONG_PTR)p_Lock);
        KeLeaveCriticalRegionThread((__int64)v127);
        v17 = &Process->Header.Lock;
        v11 = v114;
      }
      v98 = SeSecurityAttributePresent((__int64)v15, (__int64)&PspSysAppIdClaim, v16);
      ObFastDereferenceObject(v14, v15);
      *(_QWORD *)(v11 + 52) = 0LL;
      *((_DWORD *)v11 + 84) = 0;
      v18 = v114;
      *((_QWORD *)v114 + 43) = v17[293] << 12;
      *((_QWORD *)v18 + 5) = v134[4];
      *((_DWORD *)v18 + 12) = 0;
      if ( v98 )
        *((_DWORD *)v18 + 12) = 1;
      v19 = Process;
      DeepFreezeStartTime = Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        *(_OWORD *)v18 = *(_OWORD *)DeepFreezeStartTime;
        *((_OWORD *)v18 + 1) = *(_OWORD *)(DeepFreezeStartTime + 16);
        *((_QWORD *)v18 + 4) = *(_QWORD *)(DeepFreezeStartTime + 32);
      }
      else
      {
        *(_OWORD *)v18 = 0LL;
        *((_OWORD *)v18 + 1) = 0LL;
        *((_QWORD *)v18 + 4) = 0LL;
      }
      if ( (HIDWORD(v19[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v23 = *((_DWORD *)v18 + 12) & 0xFFFFFFE1 | 2;
      }
      else if ( v19 == (PEPROCESS)PsSecureSystemProcess )
      {
        v23 = *((_DWORD *)v18 + 12) & 0xFFFFFFE1 | 4;
      }
      else if ( SmIsCompressionProcess(v19) )
      {
        v23 = *((_DWORD *)v18 + 12) & 0xFFFFFFE1 | 6;
      }
      else
      {
        v21 = *((_QWORD *)&CmpRegistryProcess + 1) && v19 == *((PEPROCESS *)&CmpRegistryProcess + 1);
        v99 = v21;
        v22 = *((_DWORD *)v18 + 12);
        if ( v21 )
          v23 = v22 & 0xFFFFFFE1 | 8;
        else
          v23 = v22 & 0xFFFFFFE1;
      }
      *((_DWORD *)v18 + 12) = v23;
      *((_QWORD *)v18 + 45) = v19[2].Affinity.Bitmap[6];
      PsQueryProcessEnergyValues(v19, v136);
      v24 = v18 + 64;
      v25 = v136;
      v26 = 2LL;
      do
      {
        *v24 = *v25;
        v24[1] = v25[1];
        v24[2] = v25[2];
        v24[3] = v25[3];
        v24[4] = v25[4];
        v24[5] = v25[5];
        v24[6] = v25[6];
        v24 += 8;
        *(v24 - 1) = v25[7];
        v25 += 8;
        --v26;
      }
      while ( v26 );
      *v24 = *v25;
      if ( v19[1].Affinity.Bitmap[16] )
        *((_DWORD *)v12 + 88) = *(_DWORD *)(v19[1].Affinity.Bitmap[16] + 1236);
      else
        *((_DWORD *)v12 + 88) = 0;
      v10 = Process;
      Object = Process;
      if ( Process->ProcessTimerDelay
        || KeHeteroSystem
        && ((v27 = KiProcessPolicyToQosMappingTable[(*(_DWORD *)&Process->0 >> 7) & 7], v27 != 5)
         || HIBYTE(Process[1].ActiveProcessors.Bitmap[0]) != 1
          ? (v28 = 0)
          : (v28 = 1),
            PpmPerfQosEnabled && (v27 - 1 <= 1 || v28)) )
      {
        *((_DWORD *)v18 + 12) |= 0x20u;
      }
      v29 = v93;
      if ( v93 < 0 )
      {
        v90 = v93;
        goto LABEL_206;
      }
      v11 = v114;
      p_Blink = (unsigned __int64 *)v101;
      v31 = v92;
      v91 = v92;
      v103 = v107;
      v13 = v106;
LABEL_48:
      if ( a5 == 148 )
      {
        v76 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(v10);
        v131 = v76;
        SeQueryUserSidToken(v76, Src, 68LL, &Size);
        PackageSize = 254LL;
        AppIdSize = 130LL;
        v29 = 0;
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
          v29 = -1073741675;
        }
        v92 = v81;
        v91 = v81;
        v82 = v81;
        v93 = v29;
        if ( v29 < 0 )
        {
          v90 = v29;
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
            *((_DWORD *)v11 + 13) = 368;
            memmove(v13, Src, v79);
            v82 = v91;
            v13 += v80;
            v106 = v13;
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
                v29 = -1073741675;
              }
              else
              {
                v83 = v77 + v82;
                v91 = v77 + v82;
                v92 = v77 + v82;
                v29 = 0;
              }
              v93 = v29;
              if ( v29 >= 0 )
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
                  *((_DWORD *)v11 + 14) = (_DWORD)v13 - (_DWORD)v11;
                  memmove(v13, PackageFullName, (unsigned int)v77);
                  v83 = v91;
                  v13 += (unsigned int)v77;
                  v106 = v13;
                }
                goto LABEL_188;
              }
              v90 = v29;
            }
          }
          else
          {
            v83 = v91;
LABEL_188:
            if ( !v78 )
            {
              v31 = v91;
              v10 = (PEPROCESS)Object;
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
                v29 = -1073741675;
              }
              else
              {
                v86 = v78 + v83;
                v91 = v78 + v83;
                v92 = v78 + v83;
                v29 = 0;
              }
              v93 = v29;
              if ( v29 >= 0 )
              {
                v96 += v78;
                if ( v86 > a2 )
                {
                  v90 = -1073741820;
                  if ( !v109 )
                    goto LABEL_269;
                  v31 = v91;
                  v10 = (PEPROCESS)Object;
                }
                else
                {
                  *((_DWORD *)v11 + 84) = (_DWORD)v13 - (_DWORD)v11;
                  memmove(v13, AppId, (unsigned int)v78);
                  v10 = (PEPROCESS)Object;
                  v13 += (unsigned int)v78;
                  v106 = v13;
                  v31 = v91;
                }
                goto LABEL_49;
              }
              v90 = v29;
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
      if ( v10 == PsIdleProcess )
        goto LABEL_174;
      if ( v10 == PsInitialSystemProcess )
      {
        v37 = &ExpSystemProcessName;
      }
      else if ( v10 == (PEPROCESS)PsSecureSystemProcess )
      {
        v37 = &ExpSecureSystemProcessName;
      }
      else if ( SmIsCompressionProcess(v10) )
      {
        v37 = (__int64 *)L"$&";
      }
      else
      {
        v33 = -1073741275;
        if ( *(_QWORD *)&v10[2].Affinity.Count && (_QWORD)xmmword_140C1DE20 )
        {
          v33 = ((__int64 (__fastcall *)(__int64, PVOID *))xmmword_140C1DE20)(v32, &P);
        }
        else
        {
          v34 = v10[1].ActiveProcessors.Bitmap[2];
          if ( v34 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(
                                    NonPagedPoolNx,
                                    *(unsigned __int16 *)(v34 + 2) + 16LL,
                                    0x6E497350u);
            v36 = PoolWithTag;
            if ( PoolWithTag )
            {
              *(_OWORD *)PoolWithTag = *(_OWORD *)v34;
              if ( *((_QWORD *)PoolWithTag + 1) )
              {
                *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 16;
                memmove(PoolWithTag + 16, *(const void **)(v34 + 8), *(unsigned __int16 *)(v34 + 2));
              }
              P = v36;
              v33 = 0;
            }
            else
            {
              v33 = -1073741801;
            }
          }
          v10 = (PEPROCESS)Object;
        }
        v93 = v33;
        if ( v33 < 0 )
          v37 = (__int64 *)v10[1].ActiveProcessors.Bitmap[2];
        else
          v37 = (__int64 *)P;
      }
      v115 = v37;
      v38 = *(unsigned __int16 *)v37;
      v105 = v38;
      v39 = v13;
      v117 = v13;
      LODWORD(Size) = v38;
      v40 = (_WORD *)v37[1];
      v41 = v40;
      v116 = v40;
      if ( a5 != 148 && v38 )
      {
        v41 = &v40[(unsigned __int64)v38 >> 1];
        v116 = v41;
        while ( v41 != v40 )
        {
          v116 = --v41;
          if ( *v41 == 92 )
          {
            v116 = ++v41;
            break;
          }
        }
        v38 -= 2 * (v41 - v40);
        LODWORD(Size) = v38;
      }
      v42 = v38;
      v43 = (v38 + 9) & 0xFFFFFFF8;
      v105 = v43;
      v44 = v43 + v31;
      if ( v43 + v31 < v31 )
      {
        v44 = -1;
        v29 = -1073741675;
      }
      else
      {
        v29 = 0;
      }
      v92 = v44;
      v93 = v29;
      if ( v29 < 0 )
      {
        v90 = v29;
        goto LABEL_269;
      }
      v96 += v43;
      if ( v44 > a2 )
      {
        v90 = -1073741820;
        if ( !v109 )
          goto LABEL_269;
      }
      else
      {
        if ( v38 )
        {
          memmove(v13, v41, v38);
          v39 = &v13[2 * (v42 >> 1)];
          v117 = v39;
        }
        *(_WORD *)v39 = 0;
        v39 += 2;
        v117 = v39;
      }
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
      if ( v90 < 0 )
      {
        v10 = (PEPROCESS)Object;
LABEL_174:
        v45 = v103;
        goto LABEL_80;
      }
      v45 = v103;
      *((_WORD *)v103 + 28) = (_WORD)v39 - (_WORD)v13 - 2;
      *((_WORD *)v45 + 29) = v43;
      *((_QWORD *)v45 + 8) = v13;
      v10 = (PEPROCESS)Object;
LABEL_80:
      if ( v90 >= 0 )
      {
        *v45 = v96;
        if ( v29 < 0 )
        {
          v90 = v29;
          goto LABEL_269;
        }
      }
LABEL_82:
      if ( v10 == PsIdleProcess )
        v10 = 0LL;
      v46 = &v10->Header.Lock;
      v128 = v10;
      Handle = 0LL;
      while ( 1 )
      {
        Object = 0LL;
        v118 = 0LL;
        v47 = KeGetCurrentThread();
        v132 = v47;
        v48 = 0;
        --v47->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
        for ( k = (__int64 *)(v46 ? v46[137] : PsActiveProcessHead); k != &PsActiveProcessHead; k = (__int64 *)*k )
        {
          Object = k - 137;
          v118 = k - 137;
          if ( ObReferenceObjectSafeWithTag((__int64)(k - 137)) )
          {
            v48 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v51 = v47->SpecialApcDisable++ == -1;
        if ( v51 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
          KiCheckForKernelApcDelivery(v50);
        if ( v46 )
          ObfDereferenceObjectWithTag(v46, 0x6E457350u);
        if ( v48 )
        {
          v10 = (PEPROCESS)Object;
        }
        else
        {
          v10 = 0LL;
          Object = 0LL;
          v118 = 0LL;
        }
        v46 = &v10->Header.Lock;
        v128 = v10;
        if ( !v10 )
          break;
        if ( (v10[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v94 )
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
