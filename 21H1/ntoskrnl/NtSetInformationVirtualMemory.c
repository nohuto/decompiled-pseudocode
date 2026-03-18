/*
 * XREFs of NtSetInformationVirtualMemory @ 0x14063BA60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x140226200 (PsGetIoPriorityThread.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiPrefetchVirtualMemory @ 0x1402A1330 (MiPrefetchVirtualMemory.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402B3FC0 (MiGetEffectivePagePriorityThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MiProcessVaContiguityInformation @ 0x14054C7D0 (MiProcessVaContiguityInformation.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     MiValidateMemoryRangeEntries @ 0x14063C0FC (MiValidateMemoryRangeEntries.c)
 *     MiCfgMarkValidEntries @ 0x14063C194 (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x1406DD768 (MiProcessVaRangesInfoClass.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     MiSetImageHotPatchAllowed @ 0x1408C9BB4 (MiSetImageHotPatchAllowed.c)
 *     VmPrefetchVirtualAddresses @ 0x140929FA0 (VmPrefetchVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtSetInformationVirtualMemory(
        void *a1,
        int a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  void *v9; // r15
  char v10; // r11
  int v11; // ebx
  NTSTATUS valid; // edi
  __int64 v13; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r9
  _DWORD *p_LockNV; // r8
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  char *v20; // rdx
  _QWORD *Pool; // r15
  int v22; // r8d
  int v23; // r14d
  int v24; // r14d
  _BYTE *v25; // r14
  void *v26; // r13
  __int64 v27; // r9
  int IoPriorityThread; // eax
  int v29; // r8d
  int v30; // r9d
  NTSTATUS v31; // eax
  __int64 v32; // r9
  __int64 v33; // r8
  int v34; // r14d
  int v35; // r14d
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
  void *v53; // [rsp+D8h] [rbp-290h]
  void *Src; // [rsp+E0h] [rbp-288h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-270h] BYREF
  _BYTE v56[256]; // [rsp+130h] [rbp-238h] BYREF
  _BYTE v57[256]; // [rsp+230h] [rbp-138h] BYREF

  Src = a4;
  v9 = a1;
  v53 = a1;
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
  if ( a2 < 0 )
    return -1073741584;
  if ( a2 > 1 )
  {
    if ( a2 == 2 )
    {
      v13 = a6;
      if ( a6 == 40 )
        goto LABEL_11;
      return -1073741580;
    }
    if ( a2 > 6 )
      return -1073741584;
  }
  if ( !a5 )
    return -1073741581;
  v13 = a6;
  if ( a6 != 4 )
    return -1073741580;
  if ( a2 == a6 )
  {
    if ( !MiUserHotPatchReserveSize )
      return -1073741637;
    if ( a3 != 1 )
      return -1073741583;
  }
LABEL_11:
  if ( a3 - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v52 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  P = p_LockNV;
  if ( a2 == 2 && (p_LockNV[628] & 0x100) != 0 )
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
    v18 = 16 * a3;
    if ( 16 * a3 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a4[v18] > 0x7FFFFFFF0000LL || &a4[v18] < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( a2 == 2 )
    {
      if ( (_DWORD)v13 )
      {
        if ( (a5 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = a5 + v13;
        if ( v19 > 0x7FFFFFFF0000LL || v19 < a5 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)a5;
      *(_OWORD *)v49 = *(_OWORD *)(a5 + 16);
      v50 = *(_QWORD *)(a5 + 32);
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
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v40 = *(_DWORD *)a5;
      v41 = (unsigned int)Address[0];
    }
    p_LockNV = P;
    v9 = a1;
    goto LABEL_42;
  }
  if ( a2 != 2 )
  {
    v40 = *(_DWORD *)a5;
    v41 = (unsigned int)Address[0];
    goto LABEL_42;
  }
  *(_OWORD *)Address = *(_OWORD *)a5;
  *(_OWORD *)v49 = *(_OWORD *)(a5 + 16);
  v50 = *(_QWORD *)(a5 + 32);
  v41 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v41 || HIDWORD(Address[0]) )
    return -1073741581;
LABEL_42:
  if ( v9 == (void *)-1LL )
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
  Pool = v57;
  P = v57;
  if ( a3 > 0x10 )
  {
    Pool = MiAllocatePool(64, 16 * a3, 0x724D6D4Du);
    P = Pool;
    if ( !Pool )
    {
      Pool = v57;
      valid = -1073741670;
      v25 = v56;
      goto LABEL_82;
    }
  }
  if ( a2 == 2 )
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
  memmove(Pool, Src, 16 * a3);
  if ( a2 == 2 )
    memmove(v38, v49[0], 16LL * v41);
  if ( v52->ApcState.Process != Object )
  {
    if ( (unsigned int)(a2 - 3) <= 1 )
    {
      valid = -1073741585;
      goto LABEL_81;
    }
    KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    v11 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(Pool, a3, 0LL) )
    goto LABEL_104;
  if ( !a2 )
  {
    if ( v40 == v22 )
    {
      MiGetEffectivePagePriorityThread((__int64)v52);
      IoPriorityThread = PsGetIoPriorityThread(v27);
      v30 = 17408;
      if ( IoPriorityThread > 1 )
        v30 = 0x4000;
      v31 = MiPrefetchVirtualMemory(a3, (__int64)Pool, (__int64)Object + 1664, v29 | (unsigned int)v30);
      goto LABEL_80;
    }
    goto LABEL_87;
  }
  v23 = a2 - 1;
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
          v31 = MiProcessVaContiguityInformation((unsigned __int64)Pool, a3);
          goto LABEL_80;
        }
LABEL_115:
        valid = -1073741637;
        goto LABEL_81;
      }
      if ( v40 == 1 )
      {
        if ( Pool[1] == 4096LL )
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
    v31 = MiProcessVaRangesInfoClass(a3, Pool, v33, v32);
LABEL_80:
    valid = v31;
LABEL_81:
    v25 = v38;
    goto LABEL_82;
  }
  v25 = v38;
  if ( a3 == 1 )
  {
    valid = MiCfgMarkValidEntries(
              (_DWORD)Object,
              *Pool,
              Pool[1],
              (_DWORD)v38,
              v41,
              (__int64)&v44,
              v42,
              (__int64)DmaAdapter,
              v50);
    if ( v11 )
      KeUnstackDetachProcess(&ApcState);
    LOBYTE(v11) = 0;
    *(_DWORD *)Address[1] = v44;
    v26 = a1;
    goto LABEL_59;
  }
  valid = -1073741582;
LABEL_82:
  v26 = a1;
LABEL_59:
  if ( (v11 & 1) != 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v26 != (void *)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( Pool != (_QWORD *)v57 )
    ExFreePoolWithTag(Pool, 0);
  if ( v25 != v56 )
    ExFreePoolWithTag(v25, 0);
  return valid;
}
