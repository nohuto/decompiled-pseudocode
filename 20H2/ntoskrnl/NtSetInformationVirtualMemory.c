/*
 * XREFs of NtSetInformationVirtualMemory @ 0x14062AB80
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiPrefetchVirtualMemory @ 0x14022D6A0 (MiPrefetchVirtualMemory.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402D1080 (MiGetEffectivePagePriorityThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     MiProcessVaContiguityInformation @ 0x1405507F0 (MiProcessVaContiguityInformation.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     MiCfgMarkValidEntries @ 0x140629948 (MiCfgMarkValidEntries.c)
 *     MiValidateMemoryRangeEntries @ 0x14062B21C (MiValidateMemoryRangeEntries.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     MiProcessVaRangesInfoClass @ 0x1406D371C (MiProcessVaRangesInfoClass.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     MiSetImageHotPatchAllowed @ 0x1408D0D44 (MiSetImageHotPatchAllowed.c)
 *     VmPrefetchVirtualAddresses @ 0x140931080 (VmPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  HANDLE v9; // r15
  char v10; // r11
  int v11; // ebx
  NTSTATUS valid; // edi
  __int64 v13; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r9
  _DWORD *p_LockNV; // r8
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG_PTR v18; // rax
  char *v19; // rcx
  char *v20; // rdx
  unsigned __int64 *Pool; // r15
  int v22; // r8d
  __int32 v23; // r14d
  __int32 v24; // r14d
  _BYTE *v25; // r14
  HANDLE v26; // r13
  __int64 v27; // r9
  int IoPriorityThread; // eax
  int v29; // r8d
  int v30; // r9d
  NTSTATUS v31; // eax
  __int64 v32; // r9
  __int64 v33; // r8
  __int32 v34; // r14d
  __int32 v35; // r14d
  int v36; // r14d
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-318h]
  _BYTE *v38; // [rsp+58h] [rbp-310h]
  unsigned int v40; // [rsp+68h] [rbp-300h]
  unsigned int v41; // [rsp+6Ch] [rbp-2FCh]
  char v42; // [rsp+74h] [rbp-2F4h]
  PVOID Object; // [rsp+78h] [rbp-2F0h] BYREF
  int v44; // [rsp+80h] [rbp-2E8h] BYREF
  PVOID P; // [rsp+88h] [rbp-2E0h]
  int v46; // [rsp+90h] [rbp-2D8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+98h] [rbp-2D0h]
  volatile void *Address[2]; // [rsp+A0h] [rbp-2C8h]
  HANDLE v49[2]; // [rsp+B0h] [rbp-2B8h]
  __int64 v50; // [rsp+C0h] [rbp-2A8h]
  PVOID v51; // [rsp+C8h] [rbp-2A0h] BYREF
  struct _KTHREAD *v52; // [rsp+D0h] [rbp-298h]
  HANDLE v53; // [rsp+D8h] [rbp-290h]
  void *Src; // [rsp+E0h] [rbp-288h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-270h] BYREF
  _BYTE v56[256]; // [rsp+130h] [rbp-238h] BYREF
  _BYTE v57[256]; // [rsp+230h] [rbp-138h] BYREF

  Src = VirtualAddresses;
  v9 = ProcessHandle;
  v53 = ProcessHandle;
  Object = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v44 = 0;
  DmaAdapter = 0LL;
  v10 = 0;
  v42 = 0;
  v11 = 0;
  v46 = 0;
  v38 = v56;
  valid = 0;
  v40 = 0;
  if ( VmInformationClass < VmPrefetchInformation )
    return -1073741584;
  if ( VmInformationClass > VmPagePriorityInformation )
  {
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      v13 = VmInformationLength;
      if ( VmInformationLength == 40 )
        goto LABEL_11;
      return -1073741580;
    }
    if ( VmInformationClass > VmVirtualMachinePrepopulateInformation )
      return -1073741584;
  }
  if ( !VmInformation )
    return -1073741581;
  v13 = VmInformationLength;
  if ( VmInformationLength != 4 )
    return -1073741580;
  if ( VmInformationClass == VmInformationLength )
  {
    if ( !MiUserHotPatchReserveSize )
      return -1073741637;
    if ( NumberOfEntries != 1 )
      return -1073741583;
  }
LABEL_11:
  if ( NumberOfEntries - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v52 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  P = p_LockNV;
  if ( VmInformationClass == VmCfgCallTargetInformation && (p_LockNV[628] & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v10 = 1;
    v42 = v10;
  }
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)v49 = 0LL;
  v50 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v18 = NumberOfEntries;
    if ( 16 * NumberOfEntries )
    {
      if ( ((unsigned __int8)VirtualAddresses & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&VirtualAddresses[v18] > 0x7FFFFFFF0000LL || &VirtualAddresses[v18] < VirtualAddresses )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      if ( (_DWORD)v13 )
      {
        if ( ((unsigned __int8)VmInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = (char *)VmInformation + v13;
        if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < VmInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)VmInformation;
      *(_OWORD *)v49 = *((_OWORD *)VmInformation + 1);
      v50 = *((_QWORD *)VmInformation + 4);
      v41 = _mm_cvtsi128_si32(*(__m128i *)Address);
      if ( !v41 || HIDWORD(Address[0]) )
        return -1073741581;
      ProbeForWrite(Address[1], 4uLL, 4u);
      if ( ((__int64)v49[0] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = (char *)v49[0] + 16 * v41;
      if ( (unsigned __int64)v20 > 0x7FFFFFFF0000LL || v20 < v49[0] )
        MEMORY[0x7FFFFFFF0000] = 0;
      PreviousMode = AccessMode;
    }
    else
    {
      if ( ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v40 = *(_DWORD *)VmInformation;
      v41 = (unsigned int)Address[0];
    }
    p_LockNV = P;
    v9 = ProcessHandle;
    goto LABEL_42;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
  {
    v40 = *(_DWORD *)VmInformation;
    v41 = (unsigned int)Address[0];
    goto LABEL_42;
  }
  *(_OWORD *)Address = *(_OWORD *)VmInformation;
  *(_OWORD *)v49 = *((_OWORD *)VmInformation + 1);
  v50 = *((_QWORD *)VmInformation + 4);
  v41 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v41 || HIDWORD(Address[0]) )
    return -1073741581;
LABEL_42:
  if ( v9 == (HANDLE)-1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               v9,
               8u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x66506D4Du,
               &Object,
               0LL);
    valid = result;
    if ( result < 0 )
      return result;
  }
  Pool = (unsigned __int64 *)v57;
  P = v57;
  if ( NumberOfEntries > 0x10 )
  {
    Pool = (unsigned __int64 *)MiAllocatePool(64, 16 * NumberOfEntries, 0x724D6D4Du);
    P = Pool;
    if ( !Pool )
    {
      Pool = (unsigned __int64 *)v57;
      valid = -1073741670;
      v25 = v56;
      goto LABEL_82;
    }
  }
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    if ( v41 > 0x10 )
    {
      v38 = MiAllocatePool(64, 16LL * v41, 0x724D6D4Du);
      if ( !v38 )
      {
        v25 = v56;
        valid = -1073741670;
        goto LABEL_82;
      }
    }
    if ( v49[1] )
    {
      v51 = 0LL;
      valid = ObReferenceObjectByHandle(v49[1], 1u, MmSectionObjectType, AccessMode, &v51, 0LL);
      DmaAdapter = (PADAPTER_OBJECT)v51;
      if ( valid < 0 )
        goto LABEL_81;
    }
  }
  memmove(Pool, Src, 16 * NumberOfEntries);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(v38, v49[0], 16LL * v41);
  if ( v52->ApcState.Process != Object )
  {
    if ( (unsigned int)(VmInformationClass - 3) <= 1 )
    {
      valid = -1073741585;
      goto LABEL_81;
    }
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v11 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(Pool, NumberOfEntries, 0LL) )
    goto LABEL_104;
  if ( VmInformationClass == VmPrefetchInformation )
  {
    if ( v40 == v22 )
    {
      MiGetEffectivePagePriorityThread((__int64)v52);
      IoPriorityThread = PsGetIoPriorityThread(v27);
      v30 = 17408;
      if ( IoPriorityThread > 1 )
        v30 = 0x4000;
      v31 = MiPrefetchVirtualMemory(
              NumberOfEntries,
              (unsigned __int64)Pool,
              (unsigned __int64)Object + 1664,
              v29 | (unsigned int)v30);
      goto LABEL_80;
    }
    goto LABEL_87;
  }
  v23 = VmInformationClass - 1;
  if ( !v23 )
  {
    if ( v40 > 5 )
      goto LABEL_87;
    v32 = v40;
    v33 = 1LL;
    goto LABEL_85;
  }
  v24 = v23 - 1;
  if ( v24 )
  {
    v34 = v24 - 1;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 != 1 )
            goto LABEL_81;
          if ( v40 != v22 )
          {
            valid = -1073741811;
            goto LABEL_81;
          }
          v31 = VmPrefetchVirtualAddresses(Pool);
          goto LABEL_80;
        }
        if ( v40 == 512 )
        {
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, AccessMode) )
          {
            valid = -1073741727;
            goto LABEL_81;
          }
          v31 = MiProcessVaContiguityInformation((unsigned __int64)Pool, NumberOfEntries);
          goto LABEL_80;
        }
LABEL_115:
        valid = -1073741637;
        goto LABEL_81;
      }
      if ( v40 == 1 )
      {
        if ( Pool[1] == 4096 )
        {
          v31 = MiSetImageHotPatchAllowed(*Pool);
          goto LABEL_80;
        }
LABEL_104:
        valid = -1073741582;
        goto LABEL_81;
      }
LABEL_87:
      valid = -1073741581;
      goto LABEL_81;
    }
    if ( v40 != v22 )
      goto LABEL_87;
    if ( (*((_DWORD *)Object + 281) & 0x10) == 0 )
      goto LABEL_115;
    v32 = 0LL;
    v33 = 3LL;
LABEL_85:
    v31 = MiProcessVaRangesInfoClass(NumberOfEntries, Pool, v33, v32);
LABEL_80:
    valid = v31;
LABEL_81:
    v25 = v38;
    goto LABEL_82;
  }
  v25 = v38;
  if ( NumberOfEntries == 1 )
  {
    valid = MiCfgMarkValidEntries((__int64)Object, *Pool, Pool[1], v38, v41, &v44, v42, (__int64)DmaAdapter, v50);
    if ( v11 )
      KeUnstackDetachProcess(&ApcState);
    LOBYTE(v11) = 0;
    *(_DWORD *)Address[1] = v44;
    v26 = ProcessHandle;
    goto LABEL_59;
  }
  valid = -1073741582;
LABEL_82:
  v26 = ProcessHandle;
LABEL_59:
  if ( (v11 & 1) != 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v26 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( Pool != (unsigned __int64 *)v57 )
    ExFreePoolWithTag(Pool, 0);
  if ( v25 != v56 )
    ExFreePoolWithTag(v25, 0);
  return valid;
}
