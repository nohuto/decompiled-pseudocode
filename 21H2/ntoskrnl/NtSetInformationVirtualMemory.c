/*
 * XREFs of NtSetInformationVirtualMemory @ 0x140753430
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiPrefetchVirtualMemory @ 0x140284EB0 (MiPrefetchVirtualMemory.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E670C (MiGetEffectivePagePriorityThread.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiProcessVaContiguityInformation @ 0x1405B4EA0 (MiProcessVaContiguityInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     MiValidateMemoryRangeEntries @ 0x140753A88 (MiValidateMemoryRangeEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x140753B20 (MiProcessVaRangesInfoClass.c)
 *     MiCfgMarkValidEntries @ 0x140753C58 (MiCfgMarkValidEntries.c)
 *     MiProcessRemoveFromWorkingSet @ 0x14096CF40 (MiProcessRemoveFromWorkingSet.c)
 *     VmPrefetchVirtualAddresses @ 0x1409D8CF8 (VmPrefetchVirtualAddresses.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetInformationVirtualMemory(
        ULONG_PTR a1,
        int a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  char v9; // r15
  int v10; // ebx
  unsigned int valid; // edi
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // r10
  _DWORD *p_LockNV; // r9
  char PreviousMode; // r10
  __int64 v16; // rax
  unsigned int v17; // r12d
  unsigned __int64 v18; // rcx
  char *v19; // rdx
  __int64 result; // rax
  _QWORD *Pool; // r15
  _DWORD *v22; // r9
  int v23; // r8d
  int v24; // esi
  __int64 v25; // r9
  __int64 v26; // r8
  unsigned int v27; // eax
  PVOID v28; // r13
  _BYTE *v29; // rsi
  ULONG_PTR v30; // r12
  __int64 v31; // r9
  int IoPriorityThread; // eax
  int v33; // r8d
  int v34; // r9d
  int v35; // esi
  bool v36; // zf
  NTSTATUS v37; // eax
  int v38; // esi
  int v39; // esi
  int v40; // esi
  int v41; // esi
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-308h]
  PVOID v43; // [rsp+58h] [rbp-300h]
  _BYTE *v44; // [rsp+60h] [rbp-2F8h]
  unsigned int v46; // [rsp+70h] [rbp-2E8h]
  char v47; // [rsp+7Ch] [rbp-2DCh]
  PVOID Object; // [rsp+80h] [rbp-2D8h] BYREF
  PVOID P; // [rsp+88h] [rbp-2D0h]
  int v50; // [rsp+90h] [rbp-2C8h] BYREF
  volatile void *Address[2]; // [rsp+98h] [rbp-2C0h]
  HANDLE Handle[2]; // [rsp+A8h] [rbp-2B0h]
  __int64 v53; // [rsp+B8h] [rbp-2A0h]
  PVOID v54; // [rsp+C0h] [rbp-298h] BYREF
  struct _KTHREAD *v55; // [rsp+C8h] [rbp-290h]
  ULONG_PTR v56; // [rsp+D0h] [rbp-288h]
  void *Src; // [rsp+D8h] [rbp-280h]
  _OWORD v58[3]; // [rsp+F0h] [rbp-268h] BYREF
  _BYTE v59[256]; // [rsp+120h] [rbp-238h] BYREF
  _BYTE v60[256]; // [rsp+220h] [rbp-138h] BYREF

  Src = a4;
  v56 = a1;
  Object = 0LL;
  memset(v58, 0, sizeof(v58));
  v50 = 0;
  v43 = 0LL;
  v9 = 0;
  v47 = 0;
  v10 = 0;
  v44 = v59;
  valid = 0;
  v46 = 0;
  if ( a2 < 0 )
    return 3221225712LL;
  if ( a2 > 1 )
  {
    if ( a2 == 2 )
    {
      v12 = a6;
      if ( a6 == 40 )
        goto LABEL_6;
      return 3221225716LL;
    }
    if ( a2 > 7 )
      return 3221225712LL;
  }
  if ( !a5 )
    return 3221225715LL;
  v12 = a6;
  if ( a6 != 4 )
    return 3221225716LL;
  if ( a2 == a6 )
  {
    if ( !dword_140C533A0 )
      return 3221225659LL;
    if ( a3 != 1 )
      return 3221225713LL;
  }
LABEL_6:
  if ( a3 - 1 > 0xFFFFFFFFFFFFFFELL )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v55 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  P = p_LockNV;
  if ( a2 == 2 && (p_LockNV[628] & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v9 = 1;
    v47 = v9;
  }
  *(_OWORD *)Address = 0LL;
  *(_OWORD *)Handle = 0LL;
  v53 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v16 = 16 * a3;
    if ( 16 * a3 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a4[v16] > 0x7FFFFFFF0000LL || &a4[v16] < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( a2 == 2 )
    {
      if ( (_DWORD)v12 )
      {
        if ( (a5 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = a5 + v12;
        if ( v18 > 0x7FFFFFFF0000LL || v18 < a5 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)a5;
      *(_OWORD *)Handle = *(_OWORD *)(a5 + 16);
      v53 = *(_QWORD *)(a5 + 32);
      v17 = _mm_cvtsi128_si32(*(__m128i *)Address);
      if ( !v17 || HIDWORD(Address[0]) )
        return 3221225715LL;
      ProbeForWrite(Address[1], 4uLL, 4u);
      if ( ((__int64)Handle[0] & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = (char *)Handle[0] + 16 * v17;
      if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < Handle[0] )
        MEMORY[0x7FFFFFFF0000] = 0;
      p_LockNV = P;
      PreviousMode = AccessMode;
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v46 = *(_DWORD *)a5;
      v17 = (unsigned int)Address[0];
    }
    goto LABEL_35;
  }
  if ( a2 != 2 )
  {
    v46 = *(_DWORD *)a5;
    v17 = (unsigned int)Address[0];
    goto LABEL_35;
  }
  *(_OWORD *)Address = *(_OWORD *)a5;
  *(_OWORD *)Handle = *(_OWORD *)(a5 + 16);
  v53 = *(_QWORD *)(a5 + 32);
  v17 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( !v17 || HIDWORD(Address[0]) )
    return 3221225715LL;
LABEL_35:
  if ( a1 == -1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               a1,
               8,
               (__int64)PsProcessType,
               PreviousMode,
               0x66506D4Du,
               &Object,
               0LL,
               0LL);
    valid = result;
    if ( (int)result < 0 )
      return result;
  }
  Pool = v60;
  P = v60;
  if ( a3 > 0x10 )
  {
    Pool = MiAllocatePool(64, 16 * a3, 0x724D6D4Du);
    P = Pool;
    if ( !Pool )
    {
      Pool = v60;
LABEL_99:
      v29 = v59;
      valid = -1073741670;
      v28 = 0LL;
      goto LABEL_51;
    }
  }
  if ( a2 == 2 )
  {
    if ( v17 > 0x10 )
    {
      v44 = MiAllocatePool(64, 16LL * v17, 0x724D6D4Du);
      if ( !v44 )
        goto LABEL_99;
    }
    if ( Handle[1] )
    {
      v54 = 0LL;
      v37 = ObReferenceObjectByHandle(Handle[1], 1u, MmSectionObjectType, AccessMode, &v54, 0LL);
      valid = v37;
      v43 = v54;
      if ( v37 < 0 )
      {
        v28 = v54;
        goto LABEL_50;
      }
    }
  }
  memmove(Pool, Src, 16 * a3);
  if ( a2 == 2 )
    memmove(v44, Handle[0], 16LL * v17);
  if ( v55->ApcState.Process != Object )
  {
    if ( (unsigned int)(a2 - 3) <= 1 )
    {
      valid = -1073741585;
      goto LABEL_49;
    }
    KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v58, v22);
    v10 = 1;
  }
  if ( !(unsigned int)MiValidateMemoryRangeEntries(Pool, a3, 0LL) )
  {
    valid = -1073741582;
    goto LABEL_49;
  }
  if ( !a2 )
  {
    if ( v46 == v23 )
    {
      MiGetEffectivePagePriorityThread((__int64)v55);
      IoPriorityThread = PsGetIoPriorityThread(v31);
      v34 = 17408;
      if ( IoPriorityThread > 1 )
        v34 = 0x4000;
      v27 = MiPrefetchVirtualMemory(a3, (__int64)Pool, (__int64)Object + 1664, v33 | (unsigned int)v34);
      goto LABEL_48;
    }
    goto LABEL_115;
  }
  v24 = a2 - 1;
  if ( !v24 )
  {
    if ( v46 <= 5 )
    {
      v25 = v46;
      v26 = 1LL;
LABEL_47:
      v27 = MiProcessVaRangesInfoClass(a3, Pool, v26, v25);
LABEL_48:
      valid = v27;
LABEL_49:
      v28 = v43;
LABEL_50:
      v29 = v44;
      goto LABEL_51;
    }
LABEL_115:
    valid = -1073741581;
    goto LABEL_49;
  }
  v35 = v24 - 1;
  if ( v35 )
  {
    v38 = v35 - 1;
    if ( v38 )
    {
      v39 = v38 - 1;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( !v41 )
          {
            if ( v46 != v23 )
            {
              valid = -1073741811;
              goto LABEL_49;
            }
            v27 = VmPrefetchVirtualAddresses(Pool);
            goto LABEL_48;
          }
          if ( v41 != 1 )
            goto LABEL_49;
          if ( (v46 & 0xFFFFFFFE) == 0 )
          {
            v27 = MiProcessRemoveFromWorkingSet(a3, Pool, v46);
            goto LABEL_48;
          }
          goto LABEL_115;
        }
        if ( v46 == 512 )
        {
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, AccessMode) )
          {
            valid = -1073741727;
            goto LABEL_49;
          }
          v27 = MiProcessVaContiguityInformation((unsigned __int64)Pool, a3);
          goto LABEL_48;
        }
      }
    }
    else
    {
      if ( v46 != v23 )
        goto LABEL_115;
      if ( (*((_DWORD *)Object + 281) & 0x10) != 0 )
      {
        v25 = 0LL;
        v26 = 3LL;
        goto LABEL_47;
      }
    }
    valid = -1073741637;
    goto LABEL_49;
  }
  v29 = v44;
  v36 = a3 == 1;
  v28 = v43;
  if ( v36 )
  {
    valid = MiCfgMarkValidEntries(
              (_DWORD)Object,
              *Pool,
              Pool[1],
              (_DWORD)v44,
              v17,
              (__int64)&v50,
              v47,
              (__int64)v43,
              v53,
              AccessMode == (KPROCESSOR_MODE)v23);
    if ( v10 )
    {
      KiUnstackDetachProcess((__int64)v58, 0LL);
      LOBYTE(v10) = 0;
    }
    *(_DWORD *)Address[1] = v50;
    v30 = a1;
    goto LABEL_52;
  }
  valid = -1073741582;
LABEL_51:
  v30 = a1;
LABEL_52:
  if ( (v10 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v58, 0LL);
  if ( v28 )
    ObfDereferenceObject(v28);
  if ( v30 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( Pool != (_QWORD *)v60 )
    ExFreePoolWithTag(Pool, 0);
  if ( v29 != v59 )
    ExFreePoolWithTag(v29, 0);
  return valid;
}
