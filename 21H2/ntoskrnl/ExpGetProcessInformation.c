/*
 * XREFs of ExpGetProcessInformation @ 0x140708640
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     SmIsCompressionProcess @ 0x14022AEBC (SmIsCompressionProcess.c)
 *     KeFlushProcessWriteBuffers @ 0x140268CA4 (KeFlushProcessWriteBuffers.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     KeQueryValuesThread @ 0x140275640 (KeQueryValuesThread.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14027DFA8 (PsIsProcessInSilo.c)
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     SeSecurityAttributePresent @ 0x1402F3310 (SeSecurityAttributePresent.c)
 *     RtlQueryPackageIdentity @ 0x1402F3D20 (RtlQueryPackageIdentity.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExIsRestrictedCaller @ 0x1406017E4 (ExIsRestrictedCaller.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140607154 (KeSynchronizeWithDynamicProcessors.c)
 *     ExCheckFullProcessInformationAccess @ 0x140619F60 (ExCheckFullProcessInformationAccess.c)
 *     ExpCopyProcessInfo @ 0x140682680 (ExpCopyProcessInfo.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsQueryProcessEnergyValues @ 0x1406D8A30 (PsQueryProcessEnergyValues.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x14071E204 (SeQueryUserSidToken.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpGetProcessInformation(int *a1, unsigned int a2, unsigned int *a3, _DWORD *a4, int a5)
{
  int v6; // r13d
  bool v7; // cf
  unsigned int v8; // ebx
  char PreviousMode; // di
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
  bool v49; // zf
  int SessionId; // ebx
  __int64 v51; // r14
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // r13
  struct _KTHREAD *CurrentThread; // rsi
  PEPROCESS v56; // r14
  unsigned __int64 *v57; // r15
  int v58; // r12d
  unsigned __int64 *i; // rbx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned int v63; // eax
  unsigned int v64; // ebx
  unsigned int v65; // r15d
  int v66; // ecx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rax
  struct _KTHREAD *v69; // rsi
  PEPROCESS v70; // r14
  unsigned __int64 *v71; // r15
  int v72; // r12d
  unsigned __int64 *j; // rbx
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  _LIST_ENTRY *v77; // rdi
  struct _DMA_ADAPTER *v78; // rsi
  ULONG_PTR v79; // r14
  ULONG_PTR v80; // r15
  size_t v81; // rcx
  unsigned int v82; // esi
  unsigned int v83; // eax
  unsigned int v84; // edx
  unsigned int v85; // ecx
  int v86; // eax
  _LIST_ENTRY *Flink; // rdi
  unsigned int v88; // edx
  signed __int64 *p_Lock; // rbx
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 result; // rax
  signed __int32 v94[8]; // [rsp+0h] [rbp-658h] BYREF
  int v95; // [rsp+40h] [rbp-618h]
  unsigned int v96; // [rsp+44h] [rbp-614h]
  unsigned int v97; // [rsp+48h] [rbp-610h]
  NTSTATUS v98; // [rsp+4Ch] [rbp-60Ch]
  char v99; // [rsp+50h] [rbp-608h]
  PVOID Object; // [rsp+58h] [rbp-600h]
  int v101; // [rsp+60h] [rbp-5F8h]
  PEPROCESS Process; // [rsp+68h] [rbp-5F0h]
  bool v103; // [rsp+70h] [rbp-5E8h]
  bool v104; // [rsp+71h] [rbp-5E7h]
  int v105; // [rsp+74h] [rbp-5E4h]
  PVOID v106; // [rsp+78h] [rbp-5E0h]
  int v107; // [rsp+80h] [rbp-5D8h]
  int *v108; // [rsp+88h] [rbp-5D0h]
  char v109; // [rsp+90h] [rbp-5C8h]
  int v110; // [rsp+9Ch] [rbp-5BCh]
  char *v111; // [rsp+A0h] [rbp-5B8h]
  int *v112; // [rsp+B0h] [rbp-5A8h]
  size_t Size; // [rsp+B8h] [rbp-5A0h]
  unsigned int *v114; // [rsp+C0h] [rbp-598h]
  PVOID P; // [rsp+C8h] [rbp-590h] BYREF
  ULONG_PTR AppIdSize; // [rsp+D0h] [rbp-588h] BYREF
  ULONG_PTR PackageSize; // [rsp+D8h] [rbp-580h] BYREF
  int v118; // [rsp+E0h] [rbp-578h]
  __int64 v119; // [rsp+E8h] [rbp-570h]
  __int64 *v120; // [rsp+F0h] [rbp-568h]
  _WORD *v121; // [rsp+F8h] [rbp-560h]
  char *v122; // [rsp+100h] [rbp-558h]
  __int64 *v123; // [rsp+108h] [rbp-550h]
  unsigned __int64 *v124; // [rsp+110h] [rbp-548h]
  unsigned __int64 *v125; // [rsp+118h] [rbp-540h]
  unsigned __int64 v126; // [rsp+120h] [rbp-538h]
  HANDLE Handle; // [rsp+128h] [rbp-530h] BYREF
  int *v128; // [rsp+130h] [rbp-528h]
  int v129; // [rsp+138h] [rbp-520h]
  int v130; // [rsp+140h] [rbp-518h]
  __int64 CurrentServerSilo; // [rsp+168h] [rbp-4F0h]
  struct _KTHREAD *v132; // [rsp+180h] [rbp-4D8h]
  PEPROCESS v133; // [rsp+1C0h] [rbp-498h]
  _OWORD v134[2]; // [rsp+1D0h] [rbp-488h] BYREF
  struct _KTHREAD *v135; // [rsp+1F0h] [rbp-468h]
  struct _DMA_ADAPTER *v136; // [rsp+1F8h] [rbp-460h]
  struct _KTHREAD *v137; // [rsp+200h] [rbp-458h]
  struct _KTHREAD *v138; // [rsp+208h] [rbp-450h]
  _QWORD v139[14]; // [rsp+210h] [rbp-448h] BYREF
  _BYTE Src[80]; // [rsp+280h] [rbp-3D8h] BYREF
  _OWORD v141[27]; // [rsp+2D0h] [rbp-388h] BYREF
  WCHAR AppId[72]; // [rsp+480h] [rbp-1D8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+510h] [rbp-148h] BYREF

  v118 = a5;
  v128 = a1;
  v114 = a3;
  AppIdSize = 130LL;
  memset(v141, 0, sizeof(v141));
  v110 = 0;
  LODWORD(Size) = 0;
  PackageSize = 254LL;
  Process = 0LL;
  memset(v139, 0, 0x68uLL);
  v103 = 0;
  v106 = 0LL;
  memset(v134, 0, sizeof(v134));
  v97 = 0;
  memset(Src, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  v109 = v118 != 5;
  v6 = 136;
  if ( v118 == 5 )
    v6 = 80;
  v105 = v6;
  v107 = v6;
  v112 = v128;
  v7 = a2 < 0x270;
  if ( a2 < 0x270 )
  {
    if ( !a3 )
      return 3221225476LL;
    v7 = a2 < 0x270;
  }
  v8 = v7 ? 0xC0000004 : 0;
  v99 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a5 != 148 || (result = ExCheckFullProcessInformationAccess(PreviousMode), (int)result >= 0) )
  {
    if ( ExIsRestrictedCaller(PreviousMode) )
      v99 = 1;
    v98 = 0;
    P = 0LL;
    KeFlushProcessWriteBuffers(1);
    CurrentServerSilo = PsGetCurrentServerSilo();
    v10 = (PEPROCESS)PsIdleProcess;
    Object = PsIdleProcess;
    Process = (PEPROCESS)PsIdleProcess;
    v95 = v8;
    while ( 1 )
    {
LABEL_103:
      if ( !v10 )
      {
        if ( v95 >= 0 && v112 && (*v112 = 0, v98 < 0) )
        {
          v95 = v98;
        }
        else if ( v114 )
        {
          *v114 = v97;
        }
        goto LABEL_206;
      }
      if ( (v10[1].DirectoryTableBase & 0x400000000LL) != 0 )
      {
        if ( v10->Header.SignalState )
        {
          v86 = v10[1].ActiveProcessors.Bitmap[8];
          v10 = Process;
          Object = Process;
          if ( !v86 && Process->ThreadListHead.Flink == &Process->ThreadListHead )
            goto LABEL_82;
        }
      }
      if ( a4 && v10 == PsIdleProcess )
        goto LABEL_82;
      SessionId = MmGetSessionId((__int64)v10);
      v129 = SessionId;
      if ( a4 )
      {
        if ( SessionId != *a4 )
          goto LABEL_82;
      }
      if ( !PsIsProcessInSilo(v10, CurrentServerSilo) )
        goto LABEL_82;
      v51 = (__int64)v128 + v97;
      v108 = (int *)v51;
      v112 = (int *)v51;
      v101 = 624;
      v30 = v97 + 624;
      v96 = v97 + 624;
      if ( v97 + 624 < v97 )
      {
        v30 = -1;
        v96 = -1;
        v97 = -1;
        v28 = -1073741675;
      }
      else
      {
        v97 += 624;
        v28 = 0;
      }
      v98 = v28;
      if ( v28 < 0 )
      {
        v95 = v28;
LABEL_206:
        p_Blink = (unsigned __int64 *)v106;
        goto LABEL_269;
      }
      memset(v139, 0, 0x68uLL);
      if ( v30 > a2 )
      {
        v95 = -1073741820;
        if ( !v114 )
          goto LABEL_206;
      }
      else
      {
        v52 = ExpCopyProcessInfo(v51, (__int64)v10, v109, v139);
        v28 = v52;
        v98 = v52;
        if ( v52 < 0 )
        {
          v95 = v52;
          goto LABEL_206;
        }
        *(_QWORD *)v51 = 0LL;
        *(_DWORD *)(v51 + 100) = SessionId;
        *(_QWORD *)(v51 + 64) = 0LL;
        *(_DWORD *)(v51 + 56) = 0;
        if ( v10 == PsIdleProcess )
          *(_QWORD *)(v51 + 96) = 0LL;
        if ( v10 == (PEPROCESS)PsSecureSystemProcess )
        {
          v53 = qword_140C4E040 << 12;
          *(_QWORD *)(v51 + 144) = qword_140C4E040 << 12;
          *(_QWORD *)(v51 + 8) = v53;
        }
        if ( v28 < 0 )
        {
          v95 = v28;
          goto LABEL_206;
        }
      }
      v54 = v51 + 256;
      v111 = (char *)(v51 + 256);
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
          KeSynchronizeWithDynamicProcessors();
        }
      }
      else
      {
        p_Blink = 0LL;
        v125 = 0LL;
        CurrentThread = KeGetCurrentThread();
        v138 = CurrentThread;
        v56 = Process;
        v57 = &Process[1].ActiveProcessors.Bitmap[6];
        v58 = 0;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v56[1], 0LL);
        for ( i = (unsigned __int64 *)*v57; i != v57; i = (unsigned __int64 *)*i )
        {
          p_Blink = i - 157;
          v125 = i - 157;
          if ( ObReferenceObjectSafeWithTag((__int64)(i - 157)) )
          {
            v58 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v56[1].Header.Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v56[1].Header.Lock);
        KeAbPostRelease((ULONG_PTR)&v56[1]);
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v60, v61, v62);
        if ( !v58 )
        {
          p_Blink = 0LL;
          v125 = 0LL;
        }
        v10 = Process;
        Object = Process;
        v28 = v98;
        v30 = v97;
        v96 = v97;
        v51 = (__int64)v112;
        v108 = v112;
        v54 = (__int64)v111;
      }
      v106 = p_Blink;
      while ( p_Blink )
      {
        v130 = *((_DWORD *)p_Blink + 1);
        if ( !(_BYTE)v130 )
        {
          v63 = v30 + v105;
          if ( v30 + v105 < v30 )
          {
            v63 = -1;
            v28 = -1073741675;
          }
          else
          {
            v28 = 0;
          }
          v97 = v63;
          v96 = v63;
          v64 = v63;
          v98 = v28;
          if ( v28 < 0 )
          {
            v95 = v28;
            goto LABEL_269;
          }
          v65 = v105;
          v101 += v105;
          if ( v63 > a2 )
          {
            v95 = -1073741820;
            if ( !v114 )
              goto LABEL_269;
          }
          else
          {
            KeQueryValuesThread((__int64)p_Blink, (__int64)v134);
            v66 = BYTE8(v134[0]);
            if ( BYTE8(v134[0]) == 4 )
            {
              v101 -= v65;
              v96 = v64 - v65;
              v97 = v64 - v65;
            }
            else
            {
              *(_DWORD *)(v54 + 24) = v134[0];
              *(_DWORD *)(v54 + 68) = v66;
              *(_DWORD *)(v54 + 72) = BYTE9(v134[0]);
              *(_DWORD *)(v54 + 56) = SBYTE10(v134[0]);
              *(_DWORD *)(v54 + 60) = SBYTE11(v134[0]);
              *(_QWORD *)v54 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 163);
              *(_QWORD *)(v54 + 8) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)p_Blink + 183);
              *(_QWORD *)(v54 + 16) = p_Blink[134];
              *(_DWORD *)(v54 + 64) = *((_DWORD *)p_Blink + 85);
              *(_OWORD *)(v54 + 40) = *(_OWORD *)(p_Blink + 143);
              if ( (*((_DWORD *)p_Blink + 29) & 0x400) != 0 )
              {
                v67 = p_Blink[154];
              }
              else
              {
                if ( (p_Blink[163] & 8) != 0
                  || (v67 = *((_QWORD *)v106 + 138), _InterlockedOr(v94, 0), (p_Blink[163] & 8) != 0) )
                {
                  v67 = 0LL;
                }
                v10 = Process;
                Object = Process;
                v28 = v98;
                p_Blink = (unsigned __int64 *)v106;
                v96 = v97;
                v51 = (__int64)v112;
                v108 = v112;
                v54 = (__int64)v111;
              }
              v126 = v67;
              if ( v99 && v67 > 0x7FFFFFFEFFFFLL )
                *(_QWORD *)(v54 + 32) = 0LL;
              else
                *(_QWORD *)(v54 + 32) = v67;
              if ( v118 != 5 )
              {
                if ( v99 )
                {
                  *(_QWORD *)(v54 + 80) = 0LL;
                  *(_QWORD *)(v54 + 88) = 0LL;
                }
                else
                {
                  *(_QWORD *)(v54 + 80) = p_Blink[7];
                  *(_QWORD *)(v54 + 88) = p_Blink[6];
                  v10 = Process;
                  Object = Process;
                  v28 = v98;
                  p_Blink = (unsigned __int64 *)v106;
                  v96 = v97;
                  v51 = (__int64)v112;
                  v108 = v112;
                  v54 = (__int64)v111;
                }
                v68 = p_Blink[154];
                v126 = v68;
                if ( v99 && v68 > 0x7FFFFFFEFFFFLL )
                  *(_QWORD *)(v54 + 96) = 0LL;
                else
                  *(_QWORD *)(v54 + 96) = v68;
                *(_QWORD *)(v54 + 104) = p_Blink[30];
                *(_QWORD *)(v54 + 112) = 0LL;
                *(_QWORD *)(v54 + 120) = 0LL;
                *(_QWORD *)(v54 + 128) = 0LL;
              }
              ++*(_DWORD *)(v51 + 4);
              if ( v28 < 0 )
              {
                v95 = v28;
                goto LABEL_269;
              }
              v54 += v65;
              v111 = (char *)v54;
            }
          }
        }
        if ( v10 == PsIdleProcess )
        {
          v77 = (_LIST_ENTRY *)p_Blink[95];
          if ( v77 != &v10->ThreadListHead )
          {
            p_Blink = (unsigned __int64 *)&v77[-48].Blink;
            KeSynchronizeWithDynamicProcessors();
            goto LABEL_167;
          }
          p_Blink = 0LL;
          v106 = 0LL;
          v30 = v96;
        }
        else
        {
          p_Blink = 0LL;
          v124 = 0LL;
          v69 = KeGetCurrentThread();
          v135 = v69;
          v70 = Process;
          v71 = &Process[1].ActiveProcessors.Bitmap[6];
          v72 = 0;
          --v69->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&v70[1], 0LL);
          for ( j = (unsigned __int64 *)*((_QWORD *)v106 + 157); j != v71; j = (unsigned __int64 *)*j )
          {
            p_Blink = j - 157;
            v124 = j - 157;
            if ( ObReferenceObjectSafeWithTag((__int64)(j - 157)) )
            {
              v72 = 1;
              break;
            }
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v70[1].Header.Lock, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&v70[1].Header.Lock);
          KeAbPostRelease((ULONG_PTR)&v70[1]);
          KeLeaveCriticalRegionThread((__int64)v69, v74, v75, v76);
          ObfDereferenceObjectWithTag(v106, 0x6E457350u);
          if ( !v72 )
            p_Blink = 0LL;
          v124 = p_Blink;
          v10 = Process;
          Object = Process;
          v28 = v98;
          v96 = v97;
          v51 = (__int64)v112;
          v108 = v112;
          v54 = (__int64)v111;
LABEL_167:
          v106 = p_Blink;
          v30 = v96;
        }
      }
      v11 = v54;
      v119 = v54;
      v12 = v54;
      v13 = (char *)(v54 + 368);
      v111 = v13;
      if ( v95 < 0 )
        goto LABEL_48;
      v14 = (signed __int64 *)&v10[1].Affinity.Bitmap[5];
      v15 = (struct _DMA_ADAPTER *)ObFastReferenceObject(v14);
      if ( v15 )
      {
        v16 = Object;
      }
      else
      {
        v132 = KeGetCurrentThread();
        --v132->KernelApcDisable;
        p_Lock = (signed __int64 *)&Process[1].Header.Lock;
        ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
        v15 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v14);
        if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(p_Lock);
        KeAbPostRelease((ULONG_PTR)p_Lock);
        KeLeaveCriticalRegionThread((__int64)v132, v90, v91, v92);
        v16 = &Process->Header.Lock;
        v11 = v119;
      }
      v103 = SeSecurityAttributePresent((__int64)v15, (__int64)&PspSysAppIdClaim);
      ObFastDereferenceObject(v14, v15);
      *(_QWORD *)(v11 + 52) = 0LL;
      *(_DWORD *)(v11 + 336) = 0;
      v17 = v119;
      *(_QWORD *)(v119 + 344) = v16[293] << 12;
      *(_QWORD *)(v17 + 40) = v139[4];
      *(_DWORD *)(v17 + 48) = 0;
      if ( v103 )
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
        v104 = v20;
        v21 = *(_DWORD *)(v17 + 48);
        if ( v20 )
          v22 = v21 & 0xFFFFFFE1 | 8;
        else
          v22 = v21 & 0xFFFFFFE1;
      }
      *(_DWORD *)(v17 + 48) = v22;
      *(_QWORD *)(v17 + 360) = v18[2].Affinity.Bitmap[6];
      PsQueryProcessEnergyValues(v18, v141);
      v23 = (_OWORD *)(v17 + 64);
      v24 = v141;
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
      v28 = v98;
      if ( v98 < 0 )
      {
        v95 = v98;
        goto LABEL_206;
      }
      v11 = v119;
      p_Blink = (unsigned __int64 *)v106;
      v30 = v97;
      v96 = v97;
      v108 = v112;
      v13 = v111;
LABEL_48:
      if ( a5 == 148 )
      {
        v78 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(v10);
        v136 = v78;
        SeQueryUserSidToken(v78, Src, 68LL);
        PackageSize = 254LL;
        AppIdSize = 130LL;
        v28 = 0;
        v98 = RtlQueryPackageIdentity(v78, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
        if ( v98 >= 0 )
        {
          v80 = AppIdSize;
          v79 = PackageSize;
        }
        else
        {
          v79 = 0LL;
          PackageSize = 0LL;
          v80 = 0LL;
          AppIdSize = 0LL;
        }
        ObFastDereferenceObject((signed __int64 *)Object + 151, v78);
        v81 = (unsigned int)Size;
        v82 = (Size + 7) & 0xFFFFFFF8;
        v110 = v82;
        v83 = v82 + v96;
        if ( v82 + v96 < v96 )
        {
          v83 = -1;
          v28 = -1073741675;
        }
        v97 = v83;
        v96 = v83;
        v84 = v83;
        v98 = v28;
        if ( v28 < 0 )
        {
          v95 = v28;
        }
        else
        {
          v101 += v82;
          if ( v83 > a2 )
          {
            v95 = -1073741820;
            if ( !v114 )
              goto LABEL_269;
          }
          else
          {
            *(_DWORD *)(v11 + 52) = 368;
            memmove(v13, Src, v81);
            v84 = v96;
            v13 += v82;
            v111 = v13;
          }
          if ( v79 )
          {
            if ( v79 > 0xFFFFFFFF )
            {
              v95 = -1073741820;
            }
            else
            {
              v110 = v79;
              if ( (unsigned int)v79 + v84 < v84 )
              {
                v85 = -1;
                v96 = -1;
                v97 = -1;
                v28 = -1073741675;
              }
              else
              {
                v85 = v79 + v84;
                v96 = v79 + v84;
                v97 = v79 + v84;
                v28 = 0;
              }
              v98 = v28;
              if ( v28 >= 0 )
              {
                v101 += v79;
                if ( v85 > a2 )
                {
                  v95 = -1073741820;
                  if ( !v114 )
                    goto LABEL_269;
                }
                else
                {
                  *(_DWORD *)(v11 + 56) = (_DWORD)v13 - v11;
                  memmove(v13, PackageFullName, (unsigned int)v79);
                  v85 = v96;
                  v13 += (unsigned int)v79;
                  v111 = v13;
                }
                goto LABEL_188;
              }
              v95 = v28;
            }
          }
          else
          {
            v85 = v96;
LABEL_188:
            if ( !v80 )
            {
              v30 = v96;
              v10 = (PEPROCESS)Object;
              goto LABEL_49;
            }
            v88 = -1;
            if ( v80 > 0xFFFFFFFF )
            {
              v95 = -1073741820;
            }
            else
            {
              v110 = v80;
              if ( (unsigned int)v80 + v85 < v85 )
              {
                v96 = -1;
                v97 = -1;
                v28 = -1073741675;
              }
              else
              {
                v88 = v80 + v85;
                v96 = v80 + v85;
                v97 = v80 + v85;
                v28 = 0;
              }
              v98 = v28;
              if ( v28 >= 0 )
              {
                v101 += v80;
                if ( v88 > a2 )
                {
                  v95 = -1073741820;
                  if ( !v114 )
                    goto LABEL_269;
                  v30 = v96;
                  v10 = (PEPROCESS)Object;
                }
                else
                {
                  *(_DWORD *)(v11 + 336) = (_DWORD)v13 - v11;
                  memmove(v13, AppId, (unsigned int)v80);
                  v10 = (PEPROCESS)Object;
                  v13 += (unsigned int)v80;
                  v111 = v13;
                  v30 = v96;
                }
                goto LABEL_49;
              }
              v95 = v28;
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
        return (unsigned int)v95;
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
        if ( *(_QWORD *)&v10[2].Affinity.Count && (_QWORD)xmmword_140C1E080 )
        {
          v32 = ((__int64 (__fastcall *)(__int64, PVOID *))xmmword_140C1E080)(v31, &P);
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
        v98 = v32;
        if ( v32 < 0 )
          v36 = (__int64 *)v10[1].ActiveProcessors.Bitmap[2];
        else
          v36 = (__int64 *)P;
      }
      v120 = v36;
      v37 = *(unsigned __int16 *)v36;
      v110 = v37;
      v38 = v13;
      v122 = v13;
      LODWORD(Size) = v37;
      v39 = (_WORD *)v36[1];
      v40 = v39;
      v121 = v39;
      if ( a5 != 148 && v37 )
      {
        v40 = &v39[(unsigned __int64)v37 >> 1];
        v121 = v40;
        while ( v40 != v39 )
        {
          v121 = --v40;
          if ( *v40 == 92 )
          {
            v121 = ++v40;
            break;
          }
        }
        v37 -= 2 * (v40 - v39);
        LODWORD(Size) = v37;
      }
      v41 = v37;
      v42 = (v37 + 9) & 0xFFFFFFF8;
      v110 = v42;
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
      v97 = v43;
      v98 = v28;
      if ( v28 < 0 )
      {
        v95 = v28;
        goto LABEL_269;
      }
      v101 += v42;
      if ( v43 > a2 )
      {
        v95 = -1073741820;
        if ( !v114 )
          goto LABEL_269;
      }
      else
      {
        if ( v37 )
        {
          memmove(v13, v40, v37);
          v38 = &v13[2 * (v41 >> 1)];
          v122 = v38;
        }
        *(_WORD *)v38 = 0;
        v38 += 2;
        v122 = v38;
      }
      if ( P )
      {
        ExFreePoolWithTag(P, 0);
        P = 0LL;
      }
      if ( v95 < 0 )
      {
        v10 = (PEPROCESS)Object;
LABEL_174:
        v44 = v108;
        goto LABEL_80;
      }
      v44 = v108;
      *((_WORD *)v108 + 28) = (_WORD)v38 - (_WORD)v13 - 2;
      *((_WORD *)v44 + 29) = v42;
      *((_QWORD *)v44 + 8) = v13;
      v10 = (PEPROCESS)Object;
LABEL_80:
      if ( v95 >= 0 )
      {
        *v44 = v101;
        if ( v28 < 0 )
        {
          v95 = v28;
          goto LABEL_269;
        }
      }
LABEL_82:
      if ( v10 == PsIdleProcess )
        v10 = 0LL;
      v45 = &v10->Header.Lock;
      v133 = v10;
      Handle = 0LL;
      while ( 1 )
      {
        Object = 0LL;
        v123 = 0LL;
        v46 = KeGetCurrentThread();
        v137 = v46;
        v47 = 0;
        --v46->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
        for ( k = (__int64 *)(v45 ? v45[137] : PsActiveProcessHead); k != &PsActiveProcessHead; k = (__int64 *)*k )
        {
          Object = k - 137;
          v123 = k - 137;
          if ( ObReferenceObjectSafeWithTag((__int64)(k - 137)) )
          {
            v47 = 1;
            break;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
        KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
        v49 = v46->SpecialApcDisable++ == -1;
        if ( v49 && ($C459BD0D405E8E46662177FB3D0A143F *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
          KiCheckForKernelApcDelivery();
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
          v123 = 0LL;
        }
        v45 = &v10->Header.Lock;
        v133 = v10;
        if ( !v10 )
          break;
        if ( (v10[1].DirectoryTableBase & 0x400000000000000LL) != 0 )
        {
          if ( !v99 )
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
