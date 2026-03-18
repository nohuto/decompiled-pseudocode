/*
 * XREFs of ObpLookupObjectName @ 0x1407CB6C0
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x14066915C (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentProcessSessionId @ 0x140287F00 (PsGetCurrentProcessSessionId.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1402A0E90 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObpFastReplenishReference @ 0x1402F339C (ObpFastReplenishReference.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     SeClearLearningModeObjectInformation @ 0x140347840 (SeClearLearningModeObjectInformation.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ObFastReferenceObjectLocked @ 0x1405C5DA0 (ObFastReferenceObjectLocked.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     SeSetLearningModeObjectInformation @ 0x1405F43E0 (SeSetLearningModeObjectInformation.c)
 *     ObpUseSystemDeviceMap @ 0x140659150 (ObpUseSystemDeviceMap.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x14069A534 (ObpLockUnrelatedDirectoryShared.c)
 *     ObpDereferenceCurrentDeviceMap @ 0x14069C7C0 (ObpDereferenceCurrentDeviceMap.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14069C820 (ObpReferenceCurrentDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x14069C9C0 (ObDereferenceDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14069CAE8 (ObpSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14069CC40 (SeGetTokenDeviceMap.c)
 *     ObpSlowReferenceDeviceMap @ 0x14069D2C0 (ObpSlowReferenceDeviceMap.c)
 *     ObpGetShadowDirectory @ 0x1406A79A0 (ObpGetShadowDirectory.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406A9C60 (ObpLookupDirectoryUsingHash.c)
 *     ObCheckCreateObjectAccess @ 0x1406B6C50 (ObCheckCreateObjectAccess.c)
 *     ObpInsertDirectoryEntry @ 0x1406B9100 (ObpInsertDirectoryEntry.c)
 *     ObpLockDirectoryExclusive @ 0x1406B96B0 (ObpLockDirectoryExclusive.c)
 *     ObpCheckTraverseAccess @ 0x1406CDC5C (ObpCheckTraverseAccess.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpParseSymbolicLinkEx @ 0x140784700 (ObpParseSymbolicLinkEx.c)
 *     ObpIsUnsecureName @ 0x1407FAE50 (ObpIsUnsecureName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

int __fastcall ObpLookupObjectName(
        ULONG_PTR BugCheckParameter1,
        UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        __int64 a9,
        struct _ACCESS_STATE *a10,
        __int64 a11,
        int *a12,
        __int64 *a13)
{
  __int64 v13; // r15
  unsigned __int64 v16; // r12
  __int64 v17; // rdi
  struct _OBJECT_TYPE *v18; // r13
  int v19; // ecx
  int result; // eax
  __int64 v21; // rbx
  unsigned __int16 Length; // dx
  PVOID v23; // rax
  KPROCESSOR_MODE v24; // r10
  __int64 v25; // rbx
  int v26; // esi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // rbx
  __int64 ThreadServerSilo; // r12
  char v31; // r14
  int v32; // eax
  struct _KTHREAD *v33; // r15
  _QWORD *p_Lock; // rbx
  signed __int64 *ServerSiloGlobals; // rax
  NTSTATUS TokenDeviceMap; // eax
  PVOID v37; // rsi
  signed __int64 v38; // r12
  signed __int64 v39; // rax
  unsigned __int16 *v40; // r8
  unsigned __int16 v41; // r9
  __int16 v42; // ax
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  __int64 v45; // r15
  signed __int64 *v46; // rbx
  signed __int64 v47; // rdx
  signed __int64 v48; // rax
  signed __int64 v49; // rdi
  unsigned int v50; // edx
  char *v51; // rsi
  struct _KTHREAD *v52; // rax
  signed __int64 *v53; // rsi
  struct _KTHREAD *v54; // rax
  struct _ACCESS_STATE *v55; // r14
  char v56; // cl
  int v57; // eax
  signed __int64 v58; // rax
  signed __int64 v59; // rtt
  NTSTATUS v60; // edx
  wchar_t *Buffer; // rax
  wchar_t v62; // cx
  __int64 v63; // rcx
  __int64 *v64; // rax
  int PermanentSiloContext; // eax
  __int64 v66; // r13
  unsigned __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 (__fastcall *v69)(__int64, __int64, struct _ACCESS_STATE *, _QWORD, int, UNICODE_STRING *, __int64 *, __int64, __int64, __int64 *); // rbx
  bool v70; // si
  struct _KTHREAD *v71; // rax
  ULONG_PTR v72; // rcx
  __int64 v73; // rbx
  unsigned int v74; // r12d
  unsigned int v75; // edi
  unsigned __int16 *v76; // rsi
  unsigned __int64 v77; // rbx
  __int64 v78; // r10
  __int64 v79; // r11
  unsigned int v80; // edx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v82; // dx
  __int128 v83; // rt0
  unsigned int v84; // r10d
  unsigned int v85; // edx
  int v86; // r10d
  _QWORD *v87; // rax
  unsigned __int16 v88; // dx
  char v89; // r15
  int v90; // r15d
  __int64 v91; // rcx
  __int64 **v92; // r14
  __int64 *v93; // rsi
  _QWORD *v94; // rax
  __int64 v95; // rdx
  char *v96; // r11
  unsigned int v97; // ecx
  __int64 v98; // rbx
  char *v99; // r10
  _QWORD *v100; // r11
  char *v101; // rdi
  signed __int64 v102; // r11
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // r9
  KPROCESSOR_MODE v105; // si
  int (__fastcall *v106)(_DWORD *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, char, int, __int64, unsigned __int16 *, int, int, __int64, _QWORD *); // rax
  PVOID v107; // rbx
  volatile signed __int64 *ShadowDirectory; // rax
  NTSTATUS v109; // eax
  PVOID v110; // rax
  __int16 v111; // cx
  int v112; // eax
  bool v113; // zf
  NTSTATUS v114; // eax
  PVOID v115; // r13
  ACCESS_MASK v116; // edx
  struct _ACCESS_STATE *v117; // r8
  char *v118; // r14
  int v119; // ebx
  unsigned int v120; // ebx
  void *Pool2; // rsi
  char *v122; // rbx
  void *v123; // rcx
  __int16 v124; // ax
  signed __int64 v125; // rax
  signed __int64 v126; // rtt
  NTSTATUS v127; // ecx
  __int64 Tag; // [rsp+20h] [rbp-E0h]
  NTSTATUS v129; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v130; // [rsp+68h] [rbp-98h]
  __int64 v131[2]; // [rsp+70h] [rbp-90h] BYREF
  int v132; // [rsp+80h] [rbp-80h]
  int v133; // [rsp+84h] [rbp-7Ch] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  signed __int64 *v135; // [rsp+90h] [rbp-70h] BYREF
  int v136; // [rsp+98h] [rbp-68h]
  NTSTATUS v137; // [rsp+9Ch] [rbp-64h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp-60h] BYREF
  _WORD v139[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v140; // [rsp+B4h] [rbp-4Ch]
  __int64 v141; // [rsp+B8h] [rbp-48h]
  PVOID v142; // [rsp+C0h] [rbp-40h]
  __int64 v143; // [rsp+C8h] [rbp-38h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v145; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v146; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v147; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v148; // [rsp+F0h] [rbp-10h] BYREF
  void *v149; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v150; // [rsp+108h] [rbp+8h] BYREF
  __int128 v151; // [rsp+118h] [rbp+18h]
  __int128 v152; // [rsp+128h] [rbp+28h]
  __int64 v153; // [rsp+138h] [rbp+38h]
  BOOLEAN v154; // [rsp+190h] [rbp+90h]
  int v156; // [rsp+1A0h] [rbp+A0h]

  v156 = a3;
  v13 = 0LL;
  Object = 0LL;
  v139[1] = 0;
  v153 = 0LL;
  *(_OWORD *)a11 = 0LL;
  *(_QWORD *)(a11 + 16) = 0LL;
  v16 = 0LL;
  v148 = 0LL;
  P = 0LL;
  v135 = 0LL;
  v136 = 64;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  *(_OWORD *)v131 = 0LL;
  if ( a12 )
    *a12 = 0;
  v113 = ObpCaseInsensitive == 0;
  v17 = 0LL;
  v18 = (struct _OBJECT_TYPE *)a4;
  *a13 = 0LL;
  v139[0] = 16;
  v129 = 0;
  v137 = 0;
  v154 = 1;
  v130 = 0LL;
  v140 = -1;
  v141 = a9;
  if ( !v113
    && (*(_BYTE *)(a4 + 66) & 1) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x80000) == 0 )
  {
    a3 |= 0x40u;
    v156 = a3;
  }
  v19 = 1;
  if ( (a3 & 0x400) == 0 )
    v19 = a5;
  v132 = v19;
  v133 = a3 & 0x40;
  if ( !a8 )
    v133 = a3 & 0x40 | 1;
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0, 0LL, a5, 0x746C6644u, &Object, 0LL, &v148);
    v129 = result;
    if ( result < 0 )
      return result;
    if ( HIDWORD(v148) )
    {
      v140 &= HIDWORD(v148);
      if ( (v140 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
    }
    v17 = (__int64)Object;
    if ( a2->Length )
    {
      if ( *a2->Buffer == 92
        && ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != *((_BYTE *)IoFileObjectType + 40) )
      {
        ObfDereferenceObject(Object);
        return -1073741765;
      }
    }
    else if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) == ObpDirectoryObjectType->Index )
    {
      v129 = ObReferenceObjectByPointer(Object, 0, (POBJECT_TYPE)a4, a5);
      if ( v129 >= 0 )
        v13 = v17;
      ObfDereferenceObject((PVOID)v17);
      result = v129;
      *a13 = v13;
      return result;
    }
    *(UNICODE_STRING *)v131 = *a2;
    if ( SepLearningModeTokenCount )
    {
      *((_QWORD *)&v151 + 1) = a2;
      *(_QWORD *)&v151 = a4 + 16;
      *(_QWORD *)&v152 = BugCheckParameter1;
      SeSetLearningModeObjectInformation((__int64)&v150);
    }
    goto LABEL_143;
  }
  v21 = (__int64)a2;
  Length = a2->Length;
  if ( !a2->Length || *a2->Buffer != 92 )
    return -1073741765;
  if ( Length == 2 )
  {
    v23 = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(a9);
    v25 = (__int64)v23;
    if ( v23 )
    {
      result = ObReferenceObjectByPointer(v23, 0, (POBJECT_TYPE)a4, v24);
      if ( result >= 0 )
        *a13 = v25;
    }
    else if ( a8 )
    {
      result = ObReferenceObjectByPointer(a8, 0, (POBJECT_TYPE)a4, v24);
      if ( result >= 0 )
        *a13 = (__int64)a8;
    }
    else
    {
      return -1073741811;
    }
    return result;
  }
  if ( SepLearningModeTokenCount )
  {
    *((_QWORD *)&v151 + 1) = a2;
    *(_QWORD *)&v151 = a4 + 16;
    *(_QWORD *)&v152 = 0LL;
    SeSetLearningModeObjectInformation((__int64)&v150);
  }
  v26 = v156;
  while ( 1 )
  {
LABEL_40:
    if ( *(_WORD *)v21 < 8u )
    {
      if ( *(_WORD *)v21 == 6 )
      {
        v63 = *(_QWORD *)(v21 + 8);
        if ( *(_DWORD *)v63 == 4128860 && *(_WORD *)(v63 + 4) == 63 )
        {
          v64 = (__int64 *)ObpReferenceCurrentDeviceMap(v26, &v135);
          P = v64;
          v16 = (unsigned __int64)v64;
          if ( v64 )
          {
            if ( *v64 )
            {
              v17 = *v64;
              v114 = ObReferenceObjectByPointer((PVOID)*v64, 0, v18, a5);
              v115 = v130;
              v60 = v114;
              v129 = v114;
              goto LABEL_320;
            }
          }
        }
      }
      goto LABEL_138;
    }
    if ( **(_QWORD **)(v21 + 8) != 0x5C003F003F005CLL )
      goto LABEL_138;
    if ( v18 == (struct _OBJECT_TYPE *)IoFileObjectType && ObpUseSystemDeviceMap(v21) )
      v156 = v26 | 0x800;
    CurrentThread = KeGetCurrentThread();
    P = 0LL;
    v135 = 0LL;
    Process = (__int64)CurrentThread->Process;
    ProcessServerSilo = PsGetProcessServerSilo(Process);
    ThreadServerSilo = PsGetThreadServerSilo((__int64)CurrentThread);
    v31 = ProcessServerSilo != ThreadServerSilo;
    v32 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
    LODWORD(v142) = ProcessServerSilo != ThreadServerSilo;
    if ( (v32 & 8) == 0 || (v156 & 0x800) != 0 )
      goto LABEL_63;
    if ( ProcessServerSilo != ThreadServerSilo )
      goto LABEL_64;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v33 = KeGetCurrentThread();
      --v33->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        p_Lock = &CurrentThread[1].WaitBlock[1].Thread->Header.Lock;
        if ( !p_Lock )
          p_Lock = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(p_Lock, 0x746C6644u);
      }
      else
      {
        p_Lock = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v33);
      if ( !p_Lock )
      {
        v31 = (char)v142;
        goto LABEL_66;
      }
      if ( p_Lock[3] == 999LL )
      {
        v31 = 1;
        ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
        ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals(ThreadServerSilo);
        goto LABEL_67;
      }
      v149 = 0LL;
      TokenDeviceMap = SeGetTokenDeviceMap((__int64)p_Lock, &v149);
      v37 = P;
      if ( TokenDeviceMap >= 0 )
        v37 = v149;
      P = v37;
      ObfDereferenceObjectWithTag(p_Lock, 0x746C6644u);
      if ( v37 )
      {
        v16 = (unsigned __int64)P;
        goto LABEL_77;
      }
      v31 = (char)v142;
LABEL_63:
      if ( v31 )
      {
LABEL_64:
        ServerSiloGlobals = (signed __int64 *)PsGetServerSiloGlobals(ThreadServerSilo);
        goto LABEL_67;
      }
    }
LABEL_66:
    ServerSiloGlobals = (signed __int64 *)(Process + 1416);
LABEL_67:
    v135 = ServerSiloGlobals;
    _m_prefetchw(ServerSiloGlobals);
    v38 = *ServerSiloGlobals;
    if ( (*ServerSiloGlobals & 0xF) == 0 )
      goto LABEL_71;
    do
    {
      v39 = _InterlockedCompareExchange64(v135, v38 - 1, v38);
      if ( v38 == v39 )
        break;
      v38 = v39;
    }
    while ( (v39 & 0xF) != 0 );
    if ( (v38 & 0xF) != 0 )
    {
      v16 = v38 & 0xFFFFFFFFFFFFFFF0uLL;
      P = (PVOID)v16;
    }
    else
    {
LABEL_71:
      v16 = (unsigned __int64)ObpSlowReferenceDeviceMap(v135);
      P = (PVOID)v16;
    }
    if ( v16 )
      goto LABEL_78;
    if ( !v31 )
    {
      v135 = 0LL;
      v16 = ObpSetCurrentProcessDeviceMap();
      P = (PVOID)v16;
    }
LABEL_77:
    if ( !v16 )
      goto LABEL_132;
LABEL_78:
    if ( !*(_QWORD *)v16 )
    {
LABEL_132:
      v21 = (__int64)a2;
LABEL_138:
      if ( !v17 )
      {
        v146 = 0LL;
        PermanentSiloContext = PsGetPermanentSiloContext(
                                 a9,
                                 PsObjectDirectorySiloContextSlot,
                                 (unsigned __int64 *)&v146);
        v17 = v146;
        if ( PermanentSiloContext < 0 )
          v17 = (__int64)ObpRootDirectoryObject;
        v146 = v17;
      }
      *(_OWORD *)v131 = *(_OWORD *)v21;
LABEL_143:
      v55 = a10;
LABEL_144:
      v41 = v131[0];
      v40 = (unsigned __int16 *)v131[1];
LABEL_145:
      v66 = a11;
      while ( 1 )
      {
        v67 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v17 - 48) >> 8);
        v68 = ObTypeIndexTable[v67];
        v69 = *(__int64 (__fastcall **)(__int64, __int64, struct _ACCESS_STATE *, _QWORD, int, UNICODE_STRING *, __int64 *, __int64, __int64, __int64 *))(v68 + 144);
        if ( !v69 )
        {
          while ( 1 )
          {
            if ( (POBJECT_TYPE)v68 != ObpDirectoryObjectType )
              goto LABEL_315;
            v142 = (PVOID)v17;
            if ( v41 && *v40 == 92 )
            {
              ++v40;
              v41 -= 2;
              WORD1(v131[0]) -= 2;
              v131[1] = (__int64)v40;
              LOWORD(v131[0]) = v41;
            }
            *(_OWORD *)Src = *(_OWORD *)v131;
            if ( v41 )
            {
              do
              {
                if ( *v40 == 92 )
                  break;
                ++v40;
                v113 = v41 == 2;
                v41 -= 2;
                v131[1] = (__int64)v40;
                LOWORD(v131[0]) = v41;
              }
              while ( !v113 );
            }
            WORD1(v131[0]) -= LOWORD(Src[0]) - v41;
            LOWORD(Src[0]) -= v41;
            if ( !LOWORD(Src[0]) )
              goto LABEL_287;
            if ( (_BYTE)v132 && (v55->Flags & 1) == 0 )
            {
              v154 = ObpCheckTraverseAccess(v17, v67, v55, v41, v132, &v137);
              if ( !v154 )
              {
                v60 = v137;
                if ( v137 >= 0 )
                  v60 = -1073741772;
                v137 = v60;
                if ( LOWORD(v131[0]) || !a8 )
                  goto LABEL_314;
                v70 = 1;
                goto LABEL_168;
              }
              v41 = v131[0];
            }
            v70 = a8 && !v41;
LABEL_168:
            if ( *(_QWORD *)v66 )
            {
              v72 = v17 + 296;
              if ( v70 )
                ExAcquirePushLockExclusiveEx(v72, 0LL);
              else
                ExAcquirePushLockSharedEx(v72, 0LL);
              v73 = *(_QWORD *)v66;
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v66 + 296LL), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v73 + 296));
              KeAbPostRelease(v73 + 296);
              if ( *(_BYTE *)(v66 + 22) )
              {
                ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v66, 0x554C624Fu);
                *(_BYTE *)(v66 + 22) = 0;
              }
              *(_QWORD *)v66 = v17;
              *(_BYTE *)(v66 + 21) = v70;
            }
            else if ( v70 )
            {
              ObpLockDirectoryExclusive(v66, v17);
            }
            else
            {
              *(_QWORD *)v66 = v17;
              *(_BYTE *)(v66 + 21) = 0;
              v71 = KeGetCurrentThread();
              --v71->KernelApcDisable;
              ExAcquirePushLockSharedEx(v17 + 296, 0LL);
            }
            v74 = LOWORD(Src[0]);
            v75 = LOWORD(Src[0]) >> 1;
            v76 = (unsigned __int16 *)Src[1];
            if ( v75 < 4 )
            {
              v84 = 0;
            }
            else
            {
              v77 = 0LL;
              do
              {
                v78 = *(_QWORD *)v76;
                if ( (*(_QWORD *)v76 & 0xFF80FF80FF80FF80uLL) != 0 )
                {
                  v79 = 4LL;
                  do
                  {
                    v80 = (unsigned __int16)v78;
                    if ( (unsigned __int16)v78 >= 0x61u )
                    {
                      if ( (unsigned __int16)v78 <= 0x7Au )
                      {
                        v80 = (unsigned __int16)v78 - 32;
                      }
                      else
                      {
                        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                        v80 = NLS_UPCASE(CurrentServerSiloGlobals[154], v82);
                      }
                    }
                    *(_QWORD *)&v83 = v78;
                    *((_QWORD *)&v83 + 1) = v80;
                    v78 = v83 >> 16;
                    --v79;
                  }
                  while ( v79 );
                }
                else
                {
                  v78 &= 0xFFDFFFDFFFDFFFDFuLL;
                }
                v76 += 4;
                v75 -= 4;
                v77 = v78 + (v77 >> 1) + 3 * v77;
              }
              while ( v75 >= 4 );
              v74 = LOWORD(Src[0]);
              v66 = a11;
              v84 = v77 + HIDWORD(v77);
            }
            for ( ; v75; v84 = v85 + v86 )
            {
              v85 = *v76++;
              --v75;
              v86 = (v84 >> 1) + 3 * v84;
              if ( v85 >= 0x61 )
              {
                if ( v85 <= 0x7A )
                {
                  v86 -= 32;
                }
                else
                {
                  v87 = PsGetCurrentServerSiloGlobals();
                  v85 = NLS_UPCASE(v87[154], v88);
                }
              }
            }
            v89 = v133;
            *(_DWORD *)(v66 + 16) = v84;
            v90 = v89 & 0x40;
            v91 = v84 % 0x25;
            v92 = (__int64 **)(*(_QWORD *)v66 + 8 * v91);
            *(_BYTE *)(v66 + 20) = v91;
            v93 = *v92;
            if ( !*v92 )
            {
LABEL_238:
              v17 = 0LL;
              goto LABEL_239;
            }
            while ( 1 )
            {
              if ( *((_DWORD *)v93 + 4) == *(_DWORD *)(v66 + 16) )
              {
                v94 = PsGetCurrentServerSiloGlobals();
                v97 = v74;
                v98 = v94[154];
                if ( v74 == *(unsigned __int16 *)(v95 + 8) )
                  break;
              }
LABEL_237:
              v92 = (__int64 **)v93;
              v93 = (__int64 *)*v93;
              if ( !v93 )
                goto LABEL_238;
            }
            v99 = v96;
            v100 = *(_QWORD **)(v95 + 16);
            v101 = &v99[v74];
            if ( v74 >= 8 )
            {
              do
              {
                if ( *(_QWORD *)v99 != *v100 )
                  break;
                v97 -= 8;
                if ( !v97 )
                  goto LABEL_224;
                v99 += 8;
                ++v100;
              }
              while ( v97 >= 8 );
            }
            if ( v99 < v101 )
            {
              if ( v90 )
              {
                v102 = (char *)v100 - v99;
                while ( 1 )
                {
                  v103 = *(unsigned __int16 *)v99;
                  v104 = *(unsigned __int16 *)&v99[v102];
                  if ( (_WORD)v103 != (_WORD)v104 )
                  {
                    if ( (unsigned int)v103 >= 0x61 )
                    {
                      if ( (unsigned int)v103 > 0x7A )
                      {
                        if ( v98 && (unsigned __int16)v103 >= 0xC0u )
                          LOWORD(v103) = *(_WORD *)(v98
                                                  + 2
                                                  * ((v103 & 0xF)
                                                   + *(unsigned __int16 *)(v98
                                                                         + 2LL
                                                                         * (((unsigned __int8)v103 >> 4)
                                                                          + (unsigned int)*(unsigned __int16 *)(v98 + 2 * (v103 >> 8))))))
                                       + v103;
                      }
                      else
                      {
                        LOWORD(v103) = v103 - 32;
                      }
                    }
                    if ( (unsigned int)v104 >= 0x61 )
                    {
                      if ( (unsigned int)v104 > 0x7A )
                      {
                        if ( v98 && (unsigned __int16)v104 >= 0xC0u )
                          LOWORD(v104) = *(_WORD *)(v98
                                                  + 2
                                                  * ((v104 & 0xF)
                                                   + *(unsigned __int16 *)(v98
                                                                         + 2LL
                                                                         * (((unsigned __int8)v104 >> 4)
                                                                          + (unsigned int)*(unsigned __int16 *)(v98 + 2 * (v104 >> 8))))))
                                       + v104;
                      }
                      else
                      {
                        LOWORD(v104) = v104 - 32;
                      }
                    }
                    if ( (_WORD)v103 != (_WORD)v104 )
                      break;
                  }
                  v99 += 2;
                  if ( v99 >= v101 )
                    goto LABEL_224;
                }
              }
              else
              {
                while ( *(_WORD *)v99 == *(_WORD *)v100 )
                {
                  v99 += 2;
                  v100 = (_QWORD *)((char *)v100 + 2);
                  if ( v99 >= v101 )
                    goto LABEL_224;
                }
              }
              goto LABEL_237;
            }
LABEL_224:
            v17 = v93[1];
            *(_QWORD *)(v66 + 8) = v92;
            if ( v17 )
            {
              v55 = a10;
              v105 = v132;
              v16 = (unsigned __int64)P;
              goto LABEL_226;
            }
LABEL_239:
            v55 = a10;
            v105 = v132;
            v16 = (unsigned __int64)P;
            if ( (v133 & 1) != 0 )
            {
              v107 = *(PVOID *)v66;
              do
              {
                ShadowDirectory = (volatile signed __int64 *)ObpGetShadowDirectory(
                                                               (__int64)v107,
                                                               v16,
                                                               &v133,
                                                               (struct _SECURITY_SUBJECT_CONTEXT *)a10);
                v107 = (PVOID)ShadowDirectory;
                if ( !ShadowDirectory )
                  break;
                ObpLockUnrelatedDirectoryShared((PVOID *)v66, ShadowDirectory);
                v17 = ObpLookupDirectoryUsingHash((__int64)v107, (const UNICODE_STRING *)Src, v66, v133);
              }
              while ( !v17 );
            }
LABEL_226:
            if ( !v154 )
            {
              if ( !v17 )
              {
LABEL_291:
                if ( LOWORD(v131[0]) )
                {
                  v129 = -1073741766;
                  goto LABEL_323;
                }
                if ( !a8 )
                  goto LABEL_294;
                v116 = 4;
                v117 = v55;
                v118 = (char *)v142;
                if ( (POBJECT_TYPE)a4 == ObpDirectoryObjectType )
                  v116 = 8;
                LOBYTE(Tag) = 0;
                if ( !ObCheckCreateObjectAccess((__int64)v142, v116, v117, (__int64)Src, Tag, v105, &v129) )
                {
                  v115 = v130;
                  if ( v129 >= 0 )
                    v129 = -1073741772;
                  goto LABEL_324;
                }
                v119 = *((_DWORD *)v118 + 85);
                if ( v119 == -1
                  || (POBJECT_TYPE)a4 != MmSectionObjectType && (POBJECT_TYPE)a4 != ObpSymbolicLinkObjectType
                  || v119 == (unsigned int)PsGetCurrentProcessSessionId()
                  || SeSinglePrivilegeCheck(SeCreateGlobalPrivilege, v105)
                  || (unsigned __int8)ObpIsUnsecureName((PCUNICODE_STRING)Src) )
                {
                  v120 = LOWORD(Src[0]);
                  Pool2 = (void *)ExAllocatePool2(256LL, LOWORD(Src[0]), 1833853519LL);
                  if ( Pool2 )
                  {
                    if ( ObpInsertDirectoryEntry(v118, a8, v66) )
                    {
                      memmove(Pool2, Src[1], v120);
                      v122 = &a8[-ObpInfoMaskToOffset[*(a8 - 22) & 3] - 48];
                      v123 = (void *)*((_QWORD *)v122 + 2);
                      if ( v123 )
                        ExFreePoolWithTag(v123, 0);
                      v124 = (__int16)Src[0];
                      v17 = (__int64)a8;
                      v115 = v130;
                      *((_WORD *)v122 + 4) = Src[0];
                      *((_WORD *)v122 + 5) = v124;
                      *((_QWORD *)v122 + 2) = Pool2;
                      v129 = 0;
                      goto LABEL_328;
                    }
                    ExFreePoolWithTag(Pool2, 0);
                  }
                  v129 = -1073741670;
                  goto LABEL_323;
                }
LABEL_322:
                v129 = -1073741790;
                goto LABEL_323;
              }
              v60 = v137;
LABEL_314:
              v115 = v130;
LABEL_319:
              v129 = v60;
LABEL_320:
              if ( v60 < 0 )
                goto LABEL_324;
              goto LABEL_328;
            }
            if ( !v17 )
              goto LABEL_291;
            v41 = v131[0];
            if ( !LOWORD(v131[0]) )
            {
              v106 = *(int (__fastcall **)(_DWORD *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, char, int, __int64, unsigned __int16 *, int, int, __int64, _QWORD *))(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v17 - 48) >> 8)] + 144);
              if ( !v106 || v106 != ObpParseSymbolicLinkEx && a8 )
              {
                v115 = v130;
                v60 = ObReferenceObjectByPointer((PVOID)v17, 0, (POBJECT_TYPE)a4, a5);
                v129 = v60;
                goto LABEL_320;
              }
            }
            v67 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v17 - 48) >> 8);
            v68 = ObTypeIndexTable[v67];
            v69 = *(__int64 (__fastcall **)(__int64, __int64, struct _ACCESS_STATE *, _QWORD, int, UNICODE_STRING *, __int64 *, __int64, __int64, __int64 *))(v68 + 144);
            if ( v69 )
              break;
            v40 = (unsigned __int16 *)v131[1];
          }
        }
        v143 = 0LL;
        if ( (char *)v69 == (char *)ObpParseSymbolicLinkEx )
        {
          v21 = (__int64)a2;
          v26 = v156;
          v60 = ObpParseSymbolicLinkEx(
                  (_DWORD *)v17,
                  (POBJECT_TYPE)a4,
                  (struct _SECURITY_SUBJECT_CONTEXT *)v55,
                  v132,
                  v156,
                  (__int64)a2,
                  (unsigned __int16 *)v131,
                  a6,
                  a7,
                  (__int64)v139,
                  &v143);
          v129 = v60;
        }
        else
        {
          if ( a8 )
          {
LABEL_315:
            v129 = -1073741788;
            goto LABEL_323;
          }
          ObfReferenceObject((PVOID)v17);
          if ( *(_QWORD *)v66 )
          {
            ExReleasePushLockEx(*(_QWORD *)v66 + 296LL, 0LL);
            if ( *(_BYTE *)(v66 + 22) )
            {
              ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v66, 0x554C624Fu);
              *(_BYTE *)(v66 + 22) = 0;
            }
            *(_QWORD *)v66 = 0LL;
            *(_BYTE *)(v66 + 21) = 0;
            KeLeaveCriticalRegion();
          }
          v113 = (*(_BYTE *)(v68 + 67) & 1) == 0;
          v26 = v156;
          if ( v113 )
            v109 = v69(v17, a4, v55, (unsigned __int8)v132, v156, a2, v131, a6, a7, &v143);
          else
            v109 = ((__int64 (__fastcall *)(__int64, __int64, struct _ACCESS_STATE *, _QWORD, int, UNICODE_STRING *, __int64 *, __int64, __int64, _WORD *, __int64 *))v69)(
                     v17,
                     a4,
                     v55,
                     (unsigned __int8)v132,
                     v156,
                     a2,
                     v131,
                     a6,
                     a7,
                     v139,
                     &v143);
          v129 = v109;
          ObfDereferenceObject((PVOID)v17);
          v60 = v129;
          v21 = (__int64)a2;
        }
        if ( v60 < 0 )
          goto LABEL_323;
        v110 = v130;
        v17 = v143;
        if ( v130 )
        {
          ObDereferenceObjectDeferDelete(v130);
          v60 = v129;
          v110 = 0LL;
          v130 = 0LL;
        }
        if ( v60 != 260 )
        {
          if ( v60 != 872 )
            v110 = (PVOID)v17;
          v130 = v110;
        }
        if ( (v140 & v55->OriginalDesiredAccess) != v55->OriginalDesiredAccess )
          goto LABEL_322;
        if ( v60 != 260 && v60 != 872 && v60 != 280 )
          break;
        if ( (v26 & 0x1000) != 0 && v60 != 872 )
          goto LABEL_286;
        if ( !--v136 )
          goto LABEL_294;
        if ( !*(_WORD *)v21 )
          goto LABEL_287;
        if ( v16 )
        {
          ObpDereferenceCurrentDeviceMap(v16, v135);
          v60 = v129;
          v16 = 0LL;
          P = 0LL;
        }
        if ( *(_QWORD *)v66 )
        {
          ExReleasePushLockEx(*(_QWORD *)v66 + 296LL, 0LL);
          if ( *(_BYTE *)(v66 + 22) )
          {
            ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)v66, 0x554C624Fu);
            *(_BYTE *)(v66 + 22) = 0;
          }
          *(_QWORD *)v66 = 0LL;
          *(_BYTE *)(v66 + 21) = 0;
          KeLeaveCriticalRegion();
          v60 = v129;
        }
        v111 = **(_WORD **)(v21 + 8);
        if ( v60 != 280 )
        {
          if ( v111 != 92 )
            goto LABEL_287;
          if ( v60 == 872 )
          {
            v17 = (__int64)ObpRootDirectoryObject;
            v18 = (struct _OBJECT_TYPE *)a4;
          }
          else
          {
            v147 = 0LL;
            v112 = PsGetPermanentSiloContext(a9, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&v147);
            v17 = v147;
            v18 = (struct _OBJECT_TYPE *)a4;
            if ( v112 < 0 )
              v17 = (__int64)ObpRootDirectoryObject;
            v147 = v17;
          }
          goto LABEL_40;
        }
        if ( v111 == 92 )
          goto LABEL_287;
        *(_OWORD *)v131 = *(_OWORD *)v21;
        v40 = (unsigned __int16 *)v131[1];
        v41 = v131[0];
      }
      v113 = v17 == 0;
LABEL_317:
      v115 = 0LL;
      if ( v113 )
        v60 = -1073741772;
      goto LABEL_319;
    }
    v18 = (struct _OBJECT_TYPE *)a4;
    v40 = a2->Buffer + 4;
    v41 = a2->Length - 8;
    v42 = a2->MaximumLength - 8;
    v131[1] = (__int64)v40;
    LOWORD(v131[0]) = v41;
    WORD1(v131[0]) = v42;
    if ( (POBJECT_TYPE *)a4 != IoFileObjectType
      || (v133 & 1) == 0
      || v41 < 6u
      || v40[1] != 58
      || v40[2] != 92
      || (v43 = (*v40 | 0x20u) - 97, (unsigned int)v43 >= 0x1A) )
    {
LABEL_104:
      v17 = *(_QWORD *)v16;
      v55 = a10;
      goto LABEL_145;
    }
    v44 = v16;
    v45 = 8 * v43 + 32;
    while ( 1 )
    {
      v46 = (signed __int64 *)(v45 + v44);
      if ( !*(_QWORD *)(v45 + v44) )
        goto LABEL_102;
      _m_prefetchw(v46);
      v47 = *v46;
      if ( (*v46 & 0xF) != 0 )
      {
        do
        {
          v48 = _InterlockedCompareExchange64(v46, v47 - 1, v47);
          if ( v47 == v48 )
            break;
          v47 = v48;
        }
        while ( (v48 & 0xF) != 0 );
      }
      v49 = v47;
      v50 = v47 & 0xF;
      v17 = v49 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v50 <= 1 )
      {
        if ( !v50 )
          goto LABEL_96;
        ObpFastReplenishReference((signed __int64 *)(v45 + v44), v17);
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v17 - 48, 1, 1u, 0x554C624Fu);
      if ( v17 )
        break;
LABEL_96:
      v51 = (char *)PsGetServerSiloGlobals(*(_QWORD *)(v44 + 16));
      v52 = KeGetCurrentThread();
      --v52->SpecialApcDisable;
      v53 = (signed __int64 *)(v51 + 120);
      ExAcquirePushLockSharedEx((ULONG_PTR)v53, 0LL);
      v17 = ObFastReferenceObjectLocked((_QWORD *)(v45 + v44), 0x554C624Fu);
      if ( _InterlockedCompareExchange64(v53, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v53);
      KeAbPostRelease((ULONG_PTR)v53);
      v54 = KeGetCurrentThread();
      v113 = v54->SpecialApcDisable++ == -1;
      if ( v113 && ($CEA84C04E3712D858E5667A507841A2A *)v54->ApcState.ApcListHead[0].Flink != &v54->152 )
        KiCheckForKernelApcDelivery();
      if ( v17 )
        break;
LABEL_102:
      v44 = *(_QWORD *)(v44 + 24);
      if ( !v44 )
      {
        v40 = (unsigned __int16 *)v131[1];
        v41 = v131[0];
        goto LABEL_104;
      }
    }
    v131[1] += 4LL;
    v55 = a10;
    LOWORD(v131[0]) -= 4;
    v56 = ObHeaderCookie ^ *(_BYTE *)(v17 - 24) ^ ((unsigned __int16)(v17 - 48) >> 8);
    v145 = 0LL;
    if ( v56 == *(_BYTE *)(IoDeviceObjectType + 40) )
      v57 = IopParseDevice(
              (struct _DEVICE_OBJECT *)v17,
              (POBJECT_TYPE *)a4,
              a10,
              v132,
              v156,
              a2,
              (const UNICODE_STRING *)v131,
              a6,
              a7,
              (__int64)v139,
              (PFILE_OBJECT *)&v145);
    else
      v57 = ObpParseSymbolicLinkEx(
              (_DWORD *)v17,
              (POBJECT_TYPE)a4,
              (struct _SECURITY_SUBJECT_CONTEXT *)a10,
              v132,
              v156,
              (__int64)a2,
              (unsigned __int16 *)v131,
              a6,
              a7,
              (__int64)v139,
              &v145);
    v129 = v57;
    _m_prefetchw(v46);
    v58 = *v46;
    if ( (v17 ^ (unsigned __int64)*v46) >= 0xF )
    {
LABEL_111:
      ObfDereferenceObjectWithTag((PVOID)v17, 0x554C624Fu);
    }
    else
    {
      while ( 1 )
      {
        v59 = v58;
        v58 = _InterlockedCompareExchange64(v46, v58 + 1, v58);
        if ( v59 == v58 )
          break;
        if ( (v17 ^ (unsigned __int64)v58) >= 0xF )
          goto LABEL_111;
      }
      ObpTraceObjectDereferenceIfActive(v17 - 48);
    }
    v60 = v129;
    if ( v129 < 0 )
      goto LABEL_323;
    v17 = v145;
    if ( v129 != 260 && v129 != 872 )
    {
      v18 = (struct _OBJECT_TYPE *)a4;
      v130 = (PVOID)v145;
    }
    if ( (v140 & a10->OriginalDesiredAccess) != a10->OriginalDesiredAccess )
      goto LABEL_322;
    if ( v129 != 260 && v129 != 872 && v129 != 280 )
    {
      v113 = v145 == 0;
      goto LABEL_317;
    }
    v26 = v156;
    if ( (v156 & 0x1000) != 0 && v129 != 872 )
    {
LABEL_286:
      v129 = -1073740533;
      goto LABEL_323;
    }
    if ( !--v136 )
    {
LABEL_294:
      v129 = -1073741772;
      goto LABEL_323;
    }
    v21 = (__int64)a2;
    if ( !a2->Length )
      goto LABEL_287;
    ObpDereferenceCurrentDeviceMap(v16, v135);
    Buffer = a2->Buffer;
    v16 = 0LL;
    P = 0LL;
    v62 = *Buffer;
    if ( v129 == 280 )
      break;
    if ( v62 != 92 )
      goto LABEL_287;
    if ( v129 == 872 )
      v17 = (__int64)ObpRootDirectoryObject;
    else
      v17 = (__int64)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(a9);
  }
  if ( v62 != 92 )
  {
    *(UNICODE_STRING *)v131 = *a2;
    goto LABEL_144;
  }
LABEL_287:
  v129 = -1073741773;
LABEL_323:
  v115 = v130;
LABEL_324:
  if ( *(_QWORD *)a11 )
  {
    ExReleasePushLockEx(*(_QWORD *)a11 + 296LL, 0LL);
    if ( *(_BYTE *)(a11 + 22) )
    {
      ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)a11, 0x554C624Fu);
      *(_BYTE *)(a11 + 22) = 0;
    }
    *(_QWORD *)a11 = 0LL;
    *(_BYTE *)(a11 + 21) = 0;
    KeLeaveCriticalRegion();
  }
LABEL_328:
  if ( v115 )
    ObDereferenceObjectDeferDelete(v115);
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  SeClearLearningModeObjectInformation();
  if ( v16 )
  {
    if ( v135 && (_m_prefetchw(v135), v125 = *v135, (v16 ^ *v135) < 0xF) )
    {
      while ( 1 )
      {
        v126 = v125;
        v125 = _InterlockedCompareExchange64(v135, v125 + 1, v125);
        if ( v126 == v125 )
          break;
        if ( (v16 ^ v125) >= 0xF )
          goto LABEL_337;
      }
    }
    else
    {
LABEL_337:
      ObDereferenceDeviceMap((volatile signed __int64 *)v16, 1u);
    }
  }
  v127 = v129;
  if ( v129 < 0 )
  {
    v17 = 0LL;
  }
  else if ( a12 && v140 != -1 )
  {
    *a12 = v140;
    result = v127;
    *a13 = v17;
    return result;
  }
  result = v129;
  *a13 = v17;
  return result;
}
