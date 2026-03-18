/*
 * XREFs of MmQueryVirtualMemory @ 0x1407BA750
 * Callers:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x140395068 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     NtQueryVirtualMemory @ 0x1407BA710 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x1407F89C0 (PfpVirtualQuery.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A07780 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     MiWaitForVadDeletion @ 0x140202010 (MiWaitForVadDeletion.c)
 *     MiUnlockVadShared @ 0x140280EF8 (MiUnlockVadShared.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiGetNextVad @ 0x140281C00 (MiGetNextVad.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiLocateVadEvent @ 0x1402EE0C8 (MiLocateVadEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiLockVad @ 0x14030B7F0 (MiLockVad.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14030EA00 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14030EA70 (MiUnlockAndDereferenceVadShared.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14030EB30 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReferenceVad @ 0x14030EB64 (MiReferenceVad.c)
 *     MiVadDeleted @ 0x14030EB80 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14030EBA0 (MiLockVadShared.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14030EBD0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiGetVadPageSize @ 0x14030EBF4 (MiGetVadPageSize.c)
 *     MiGetControlAreaPartition @ 0x14030EC14 (MiGetControlAreaPartition.c)
 *     MiVadMapsLargeImage @ 0x14030EC40 (MiVadMapsLargeImage.c)
 *     MiQueryAddressSpan @ 0x14030EC70 (MiQueryAddressSpan.c)
 *     MiIsSoftwareEnclave @ 0x14030FA5C (MiIsSoftwareEnclave.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x14042A260 (RtlCompareMemoryUlong.c)
 *     VslQueryVirtualMemory @ 0x14054EF74 (VslQueryVirtualMemory.c)
 *     MmQueryBadAddresses @ 0x14058FE88 (MmQueryBadAddresses.c)
 *     MiGetWorkingSetInfo @ 0x1405A605C (MiGetWorkingSetInfo.c)
 *     MiGetAweVadPartition @ 0x1405AAFD8 (MiGetAweVadPartition.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140695CF8 (MiIsUserQueryVmCallerTrusted.c)
 *     ObQueryNameStringMode @ 0x1407103B0 (ObQueryNameStringMode.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140978430 (MiQueryMemoryPhysicalContiguity.c)
 *     MiGetAweVadPageSize @ 0x14097D244 (MiGetAweVadPageSize.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmQueryVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6,
        int a7)
{
  unsigned __int64 v10; // r12
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 PreviousMode; // r9
  unsigned int v13; // ebx
  int v14; // r15d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  _KPROCESS *Process; // rdi
  __int64 v20; // r15
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  PVOID v23; // r9
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  bool v27; // zf
  unsigned __int64 v28; // r9
  int v29; // r10d
  int v30; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // r15
  __int64 v35; // r9
  unsigned __int16 *ProcessPartition; // r10
  int v37; // r11d
  __int64 v38; // rdi
  int v39; // ecx
  __int64 *v40; // rax
  unsigned __int16 v41; // r12
  int v42; // edi
  __int64 result; // rax
  unsigned __int64 v44; // r15
  char v45; // bl
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  unsigned __int64 AddressSpan; // rax
  __int64 v55; // rax
  int v56; // ecx
  char v57; // al
  int v58; // edx
  int v59; // eax
  __int64 v60; // rdx
  int v61; // r10d
  __int64 v62; // rcx
  unsigned __int64 v63; // r8
  int v64; // r10d
  __int64 v65; // r11
  unsigned __int64 v66; // rdx
  PVOID v67; // rdi
  int MemoryPhysicalContiguity; // ebx
  __int64 *v69; // rax
  __int64 v70; // rdx
  unsigned __int64 NextVad; // rax
  unsigned __int64 v72; // rdi
  __int64 v73; // rdi
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rdi
  bool v76; // cf
  int IsUserQueryVmCallerTrusted; // eax
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // rbx
  int VirtualMemory; // eax
  __int64 VadEvent; // rax
  __int64 v82; // r9
  __int64 v83; // rax
  unsigned int v84; // [rsp+40h] [rbp-148h]
  unsigned __int8 v85; // [rsp+44h] [rbp-144h]
  unsigned int v86; // [rsp+48h] [rbp-140h] BYREF
  _DWORD *v87; // [rsp+50h] [rbp-138h]
  unsigned __int64 v88; // [rsp+58h] [rbp-130h]
  PVOID Object; // [rsp+60h] [rbp-128h]
  PVOID v90; // [rsp+68h] [rbp-120h] BYREF
  unsigned __int64 VadPageSize; // [rsp+70h] [rbp-118h]
  unsigned __int64 v92; // [rsp+78h] [rbp-110h]
  _OWORD v93[3]; // [rsp+80h] [rbp-108h] BYREF
  __int128 v94; // [rsp+B0h] [rbp-D8h]
  __int64 v95; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v96; // [rsp+C8h] [rbp-C0h]
  __int64 P; // [rsp+D0h] [rbp-B8h] BYREF
  struct _KTHREAD *v98; // [rsp+D8h] [rbp-B0h]
  __int128 Source; // [rsp+E8h] [rbp-A0h] BYREF
  __int128 v100; // [rsp+F8h] [rbp-90h]
  __int128 v101; // [rsp+108h] [rbp-80h]
  _BYTE v102[48]; // [rsp+118h] [rbp-70h] BYREF

  v88 = a2;
  v87 = a6;
  v86 = 0;
  v90 = 0LL;
  P = 0LL;
  memset(v93, 0, sizeof(v93));
  v94 = 0LL;
  v95 = 0LL;
  memset(v102, 0, sizeof(v102));
  v84 = 0;
  VadPageSize = 0LL;
  if ( a3 != 3 )
  {
    if ( a3 )
    {
      switch ( a3 )
      {
        case 1:
          v10 = a5;
          v76 = a5 < 8;
          goto LABEL_183;
        case 2:
          goto LABEL_157;
        case 4:
          v10 = a5;
          v76 = a5 < 0x10;
LABEL_183:
          if ( !v76 )
            goto LABEL_184;
          return 3221225476LL;
        case 5:
          v10 = a5;
          if ( a5 < 8 )
            return 3221225476LL;
          goto LABEL_3;
        case 6:
          v10 = a5;
          if ( a5 < 0x18 )
            return 3221225476LL;
          goto LABEL_3;
        case 7:
          v10 = a5;
          if ( a5 < 0x20 )
            return 3221225476LL;
          goto LABEL_3;
        case 8:
          break;
        case 11:
          v10 = a5;
          if ( a5 < 0x28 )
            return 3221225476LL;
LABEL_184:
          v84 = 256;
          goto LABEL_3;
        case 12:
          if ( a2 )
            return 3221225485LL;
LABEL_157:
          v10 = a5;
          goto LABEL_3;
        default:
          return 3221225475LL;
      }
    }
    v10 = a5;
    if ( a5 >= 0x30 )
      goto LABEL_3;
    return 3221225476LL;
  }
  v10 = a5;
  if ( a5 < 0x18 )
    return 3221225476LL;
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  v98 = CurrentThread;
  PreviousMode = (unsigned __int8)CurrentThread->PreviousMode;
  v85 = CurrentThread->PreviousMode;
  v13 = v84;
  if ( v84 < 0x100
    || !(_BYTE)PreviousMode
    || (IsUserQueryVmCallerTrusted = MiIsUserQueryVmCallerTrusted((__int64)CurrentThread),
        PreviousMode = v85,
        IsUserQueryVmCallerTrusted) )
  {
    v14 = a7;
  }
  else
  {
    v14 = a7 | 0x40000000;
  }
  if ( (_BYTE)PreviousMode )
  {
    if ( v10 )
    {
      v15 = a4;
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = v10 + a4 - 1;
      if ( a4 > v16 || v16 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v17 );
      v13 = v84;
    }
    if ( v87 )
    {
      v18 = (__int64)v87;
      if ( (unsigned __int64)v87 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v18 = *(_QWORD *)v18;
      v13 = v84;
    }
  }
  if ( v88 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v96 = v88 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 != 10 )
    goto LABEL_22;
  Source = *(_OWORD *)a4;
  v100 = *(_OWORD *)(a4 + 16);
  v101 = *(_OWORD *)(a4 + 32);
  v78 = *((_QWORD *)&v100 + 1);
  *((_QWORD *)&v100 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 || v78 > 0x7FFFFFFF0000LL - v88 )
    return 3221225485LL;
  VadPageSize = (((v88 & 0xFFF) + v78 + 4095) & 0xFFFFFFFFFFFFF000uLL) + v96;
  CurrentThread = v98;
  PreviousMode = v85;
LABEL_22:
  if ( BugCheckParameter1 == -1LL )
  {
    Process = CurrentThread->ApcState.Process;
    Object = Process;
    v90 = Process;
  }
  else
  {
    v58 = 4096;
    if ( (v14 & 0x40000000) != 0 )
      v58 = 1024;
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               v58,
               (__int64)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &v90,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    Process = (_KPROCESS *)v90;
    Object = v90;
    if ( (*((_DWORD *)v90 + 543) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(v90, 0x6D566D4Du);
      return 3221225506LL;
    }
    PreviousMode = v85;
  }
  switch ( a3 )
  {
    case 11:
      MemoryPhysicalContiguity = MiQueryMemoryPhysicalContiguity(Process, a4, v10, PreviousMode);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v87 )
          *(_QWORD *)v87 = v10;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 12:
      MemoryPhysicalContiguity = MmQueryBadAddresses(Process, (_QWORD *)a4, v10, v87);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
        return 0LL;
      return (unsigned int)MemoryPhysicalContiguity;
    case 4:
      MemoryPhysicalContiguity = MiGetWorkingSetInfoList((ULONG_PTR)Process, v14, a4, v10);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v87 )
          *(_QWORD *)v87 = v10;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 1:
      MemoryPhysicalContiguity = MiGetWorkingSetInfo((__int64)Process, v14, a4, v10, &P);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( MemoryPhysicalContiguity >= 0 )
      {
        if ( v87 )
          *(_QWORD *)v87 = 8 * P + 8;
        return 0LL;
      }
      return (unsigned int)MemoryPhysicalContiguity;
    case 5:
      v79 = Process[2].Affinity.StaticBitmap[12];
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(v90, 0x6D566D4Du);
      *(_QWORD *)a4 = v79;
      if ( v87 )
        *(_QWORD *)v87 = 8LL;
      return 0LL;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    KiStackAttachProcess(Process, 0LL, (__int64)v102, (_DWORD *)PreviousMode);
    v13 |= 1u;
    LOBYTE(v84) = v13;
  }
  if ( a3 == 8 )
  {
    if ( Process->SecureState.SecureHandle )
    {
      VirtualMemory = VslQueryVirtualMemory((__int64)Process, v88, v93);
      if ( VirtualMemory >= 0 )
      {
        if ( LODWORD(v93[2]) == 4096 )
          WORD2(v93[1]) = *(_WORD *)MiGetProcessPartition((__int64)Process);
        else
          WORD2(v93[1]) = 0;
        if ( (v13 & 1) != 0 )
        {
          KiUnstackDetachProcess((__int64)v102, 0LL);
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        }
        *(_OWORD *)a4 = v93[0];
        *(__m256i *)(a4 + 16) = *(__m256i *)&v93[1];
        if ( v87 )
          *(_QWORD *)v87 = 48LL;
        return 0LL;
      }
    }
  }
  v20 = (__int64)v98;
  while ( 2 )
  {
    while ( 2 )
    {
      LOCK_ADDRESS_SPACE_SHARED(v20, (__int64)Process);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED(v20, (__int64)Process);
        if ( (v13 & 1) != 0 )
        {
          KiUnstackDetachProcess((__int64)v102, 0LL);
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        }
        return 3221225738LL;
      }
      v21 = 0LL;
      v22 = 0LL;
      v23 = Object;
      v24 = *((_QWORD *)Object + 251);
      if ( !v24 )
        goto LABEL_44;
      v22 = v88 >> 12;
      while ( 1 )
      {
        while ( 1 )
        {
          v21 = v24;
          v25 = *(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32);
          if ( v22 >= v25 )
            break;
LABEL_41:
          v24 = *(_QWORD *)v24;
          if ( !v24 )
            goto LABEL_44;
        }
        if ( v22 <= (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) )
          break;
        if ( v22 < v25 )
          goto LABEL_41;
        v24 = *(_QWORD *)(v24 + 8);
        if ( !v24 )
          goto LABEL_44;
      }
      v13 |= 2u;
      LOBYTE(v84) = v13;
LABEL_44:
      if ( (v13 & 2) == 0 )
      {
        if ( v21 )
        {
          v70 = *(unsigned int *)(v21 + 24);
          if ( (v70 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) >= v22 )
          {
            v72 = v70 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32);
            goto LABEL_174;
          }
          NextVad = MiGetNextVad(v21);
          if ( NextVad )
          {
            v72 = *(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32);
LABEL_174:
            v73 = v72 << 12;
            goto LABEL_175;
          }
          v73 = 0x7FFFFFFF0000LL;
        }
        else
        {
          v73 = 0x7FFFFFFF0000LL;
        }
LABEL_175:
        UNLOCK_ADDRESS_SPACE_SHARED(v20, (__int64)v23);
        v74 = v88 & 0xFFFFFFFFFFFFF000uLL;
        v88 = v74;
        v75 = v73 - v74;
        if ( (v13 & 1) != 0 )
        {
          KiUnstackDetachProcess((__int64)v102, 0LL);
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
          v74 = v88;
        }
        if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
        {
          *(_QWORD *)(a4 + 8) = 0LL;
          *(_DWORD *)(a4 + 16) = 0;
          *(_QWORD *)a4 = v74;
          *(_QWORD *)(a4 + 24) = v75;
          *(_DWORD *)(a4 + 32) = 0x10000;
          *(_QWORD *)(a4 + 36) = 1LL;
          *(_WORD *)(a4 + 20) = 0;
          if ( v87 )
            *(_QWORD *)v87 = 48LL;
          return 0LL;
        }
        return 3221225793LL;
      }
      MiReferenceVad(v21);
      --*(_WORD *)(v20 + 484);
      UNLOCK_ADDRESS_SPACE_SHARED(v20, v26);
      MiLockVadShared(v20, v21);
      v27 = (*(_WORD *)(v20 + 484))++ == 0xFFFF;
      if ( v27 && *(_QWORD *)(v20 + 152) != v20 + 152 && !*(_WORD *)(v20 + 486) )
        KiCheckForKernelApcDelivery();
      if ( (unsigned int)MiVadDeleted(v21) )
      {
        MiUnlockVadShared(v20, v21);
        MiLockVad(v20, v21);
        MiWaitForVadDeletion(v21);
        MiUnlockAndDereferenceVad((char *)v21);
        v13 &= ~2u;
        LOBYTE(v84) = v13;
        Process = (_KPROCESS *)Object;
        continue;
      }
      break;
    }
    if ( v22 < (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
      || v22 > (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) )
    {
      MiUnlockAndDereferenceVadShared((char *)v21);
      v13 &= ~2u;
      LOBYTE(v84) = v13;
      Process = (_KPROCESS *)Object;
      continue;
    }
    break;
  }
  memset((char *)&v93[1] + 4, 0, 20);
  HIDWORD(v93[2]) = 0;
  *(_QWORD *)&v93[0] = v96;
  *((_QWORD *)&v93[0] + 1) = (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12;
  LODWORD(v93[1]) = MmProtectToValue[(*(_DWORD *)(v21 + 48) >> 7) & 0x1F] | MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v21);
  v30 = *(_DWORD *)(v21 + 48);
  if ( (v30 & 0x200000) != 0 )
  {
    DWORD2(v93[2]) = 0x20000;
    if ( (unsigned int)MiIsSoftwareEnclave(v21) )
      LOBYTE(v13) = v13 | 0x40;
    v55 = *(unsigned int *)(v21 + 52);
    LODWORD(v55) = v55 & 0x7FFFFFFF;
    if ( (v55 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 34) << 31)) == 0x7FFFFFFFDLL )
      LOBYTE(v13) = v13 | 0x80;
    v56 = *(_DWORD *)(v21 + 48);
    if ( (v56 & 0x70) == 0x10 )
      LOBYTE(v13) = v13 | 8;
    if ( (v56 & 0x70) == 0x30 )
      LOBYTE(v13) = v13 | 0x10;
    v57 = v13 | 0x20;
    if ( (v56 & 0x400000) == 0 )
      v57 = v13;
    LOBYTE(v13) = v57;
    LOBYTE(v84) = v57;
    v32 = v28;
  }
  else
  {
    if ( (v30 & 0x70) == 0x20 )
    {
      DWORD2(v93[2]) = 0x1000000;
      if ( a3 == 7 && (*(_BYTE *)(**(_QWORD **)(v21 + 72) + 62LL) & 0xC) == 4 )
      {
LABEL_257:
        LOBYTE(v13) = v13 | 4;
        LOBYTE(v84) = v13;
      }
    }
    else
    {
      DWORD2(v93[2]) = 0x40000;
      if ( a3 == 3 && v10 >= 0x30 || a3 == 7 )
      {
        v31 = *(_QWORD *)(v21 + 72);
        if ( *(_QWORD *)(*(_QWORD *)v31 + 64LL) == v28 )
        {
          DWORD2(v93[2]) = 0x8000000;
        }
        else if ( a3 == 7 && (*(_BYTE *)(*(_QWORD *)v31 + 62LL) & 0xC) == 4 )
        {
          goto LABEL_257;
        }
      }
    }
    if ( a3 == 2 )
    {
      v69 = *(__int64 **)(v21 + 72);
      v32 = *(_QWORD *)(*v69 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v32 )
      {
        v32 = MiReferenceControlAreaFile(*v69);
        v29 = v96;
        v28 = 0LL;
      }
      if ( !v32 )
        v32 = 1LL;
    }
    else
    {
      v32 = v28;
    }
  }
  if ( ((a3 - 3) & 0xFFFFFFFB) != 0 )
  {
    if ( a3 == 6 )
    {
      v94 = 0LL;
      v95 = 0LL;
      v59 = *(_DWORD *)(v21 + 48);
      if ( (v59 & 0x200000) != 0 || (v59 & 0x70) != 0x20 )
      {
        v67 = Object;
      }
      else
      {
        v60 = ***(_QWORD ***)(v21 + 72);
        *(_QWORD *)&v94 = (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12;
        *((_QWORD *)&v94 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v60 + 24), -1LL, -1LL);
        v61 = v95 & 0xFFFFFFC3 | (*(unsigned __int8 *)(v60 + 15) >> 2) & 0x3FFFFFFC;
        LODWORD(v95) = v61;
        if ( (*(_DWORD *)(v21 + 48) & 0xF80) == 0x80 )
          LODWORD(v95) = v61 | 2;
        if ( MiVadMapsLargeImage(v21) )
        {
          VadEvent = MiLocateVadEvent(v62, 16LL);
          v66 = *(_QWORD *)(VadEvent + 16);
          *(_QWORD *)&v94 = v82 + ((unsigned __int64)*(unsigned __int8 *)(VadEvent + 8) << 16);
        }
        else
        {
          v66 = (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
              - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
              + 1;
        }
        if ( (v63 & 0xFFF) == 0 )
          v65 = 0LL;
        v67 = v90;
        LOBYTE(v13) = v84;
        if ( v66 < v65 + (v63 >> 12) )
          LODWORD(v95) = v64 | 1;
      }
      MiUnlockAndDereferenceVadShared((char *)v21);
      if ( (v13 & 1) != 0 )
      {
        KiUnstackDetachProcess((__int64)v102, 0LL);
        ObfDereferenceObjectWithTag(v67, 0x6D566D4Du);
      }
      v86 = 24;
      *(_OWORD *)a4 = v94;
      *(_QWORD *)(a4 + 16) = v95;
      if ( v87 )
        *(_QWORD *)v87 = 24LL;
      return 0LL;
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      AddressSpan = MiQueryAddressSpan((__int64)v93, v29, VadPageSize, (_DWORD *)v21);
      *((_QWORD *)&v93[1] + 1) = AddressSpan - *(_QWORD *)&v93[0];
    }
    MiUnlockAndDereferenceVadShared((char *)v21);
    if ( (v13 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v102, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    }
    if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
    {
      *(_OWORD *)a4 = v93[0];
      *(__m256i *)(a4 + 16) = *(__m256i *)&v93[1];
      if ( v87 )
        *(_QWORD *)v87 = 48LL;
      return 0LL;
    }
    if ( v32 )
    {
      if ( v32 == 1 )
        return 3221225624LL;
      if ( (unsigned int)v10 < v10 )
      {
        ObfDereferenceObject((PVOID)v32);
        return 3221225715LL;
      }
      v86 = 0;
      MemoryPhysicalContiguity = ObQueryNameStringMode((char *)v32, a4, v10, &v86, v85);
      ObfDereferenceObject((PVOID)v32);
      if ( v87 )
        *(_QWORD *)v87 = v86;
      return (unsigned int)MemoryPhysicalContiguity;
    }
    return 3221225793LL;
  }
  LODWORD(v88) = v28;
  v92 = ((*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
       - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
       + 1) << 12;
  v33 = *(unsigned int *)(v21 + 52);
  LODWORD(v33) = v33 & 0x7FFFFFFF;
  v34 = v33 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 34) << 31);
  if ( v34 >= 0x7FFFFFFFDLL )
    v34 = v28;
  VadPageSize = MiGetVadPageSize(v21);
  ProcessPartition = (unsigned __int16 *)MiGetProcessPartition((__int64)Object);
  v38 = v35;
  v39 = *(_DWORD *)(v21 + 48);
  if ( (v39 & 0x200000) != 0 )
  {
    if ( (v13 & 0x10) != 0 )
    {
      MiGetAweVadPartition(v21);
      VadPageSize = MiGetAweVadPageSize(v21);
      LOWORD(v35) = 0;
    }
    else if ( (v39 & 0x800000) != 0 || (v39 & 0x180000u) >= 0x100000 )
    {
      v83 = MiLocateVadEvent(v21, 16LL);
      if ( v83 )
      {
        v38 = *(_QWORD *)(v83 + 24);
        if ( v38 )
        {
          if ( !PsReferencePartitionSafe(*(_QWORD *)(v83 + 24)) )
          {
            v37 = -1073740640;
            LODWORD(v88) = -1073740640;
            v38 = v35;
          }
        }
      }
    }
  }
  else
  {
    v40 = *(__int64 **)(v21 + 72);
    if ( v40 && *v40 )
      ProcessPartition = (unsigned __int16 *)MiGetControlAreaPartition(*v40);
  }
  if ( v37 < 0 )
    v41 = v35;
  else
    v41 = *ProcessPartition;
  if ( v38 )
    PsDereferencePartition(v38);
  v42 = (*(_DWORD *)(v21 + 48) >> 12) & 0x7F;
  MiUnlockAndDereferenceVadShared((char *)v21);
  if ( (v13 & 1) != 0 )
  {
    KiUnstackDetachProcess((__int64)v102, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  }
  result = (unsigned int)v88;
  if ( (v88 & 0x80000000) == 0LL )
  {
    v44 = v34 << 12;
    v45 = v13 & 0xFD;
    *(_QWORD *)a4 = *((_QWORD *)&v93[0] + 1);
    *(_DWORD *)(a4 + 8) = v93[1];
    *(_QWORD *)(a4 + 16) = v92;
    if ( a3 != 7 )
    {
      v46 = DWORD2(v93[2]);
      goto LABEL_74;
    }
    v49 = 0;
    *(_DWORD *)(a4 + 12) = 0;
    if ( DWORD2(v93[2]) == 0x20000 )
    {
      v49 = 1;
      *(_DWORD *)(a4 + 12) = 1;
    }
    else if ( (v45 & 8) != 0 )
    {
      *(_DWORD *)(a4 + 12) = 16;
      v49 = 16;
    }
    else
    {
      switch ( DWORD2(v93[2]) )
      {
        case 0x40000:
          *(_DWORD *)(a4 + 12) = 2;
          v49 = 2;
          break;
        case 0x1000000:
          *(_DWORD *)(a4 + 12) = 4;
          v49 = 4;
          break;
        case 0x8000000:
          *(_DWORD *)(a4 + 12) = 8;
          v49 = 8;
          break;
      }
    }
    switch ( VadPageSize )
    {
      case 0x10uLL:
        v49 |= 0x80u;
        goto LABEL_100;
      case 0x200uLL:
        v49 |= 0x800u;
        goto LABEL_100;
      case 0x40000uLL:
        v49 |= 0x1000u;
LABEL_100:
        *(_DWORD *)(a4 + 12) = v49;
        break;
    }
    v50 = v49 | (32 * (v45 & 0x20));
    *(_DWORD *)(a4 + 12) = v50;
    v51 = v50 | (32 * (v45 & 0x10));
    *(_DWORD *)(a4 + 12) = v51;
    v52 = v51 | (8 * (v45 & 4));
    *(_DWORD *)(a4 + 12) = v52;
    v53 = v52 | v45 & 0x40;
    *(_DWORD *)(a4 + 12) = v53;
    v46 = v53 | (2 * (v45 & 0x80));
LABEL_74:
    *(_DWORD *)(a4 + 12) = v46;
    v47 = 24LL;
    v86 = 24;
    if ( a5 >= 0x20 )
    {
      *(_QWORD *)(a4 + 24) = v44;
      v47 = 32LL;
      v86 = 32;
    }
    if ( a5 >= 0x28 )
    {
      *(_QWORD *)(a4 + 32) = v41;
      v47 = 40LL;
      v86 = 40;
    }
    if ( a5 >= 0x30 )
    {
      if ( v42 )
        v48 = (unsigned int)(v42 - 1);
      else
        v48 = 0xFFFFFFFFLL;
      *(_QWORD *)(a4 + 40) = v48;
      v86 = 48;
      v47 = 48LL;
    }
    if ( v87 )
      *(_QWORD *)v87 = v47;
    return 0LL;
  }
  return result;
}
