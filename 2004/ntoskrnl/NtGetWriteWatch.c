/*
 * XREFs of NtGetWriteWatch @ 0x140236CC0
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiGetVadMandatoryPageSize @ 0x140221B70 (MiGetVadMandatoryPageSize.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     MiLocateLockedVadEvent @ 0x14025109C (MiLocateLockedVadEvent.c)
 *     MiGetNextPageTable @ 0x140256100 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiMakePteClean @ 0x140262EA4 (MiMakePteClean.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiLockVadCore @ 0x14033C8DC (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140340CF0 (MiUnlockVadCore.c)
 *     MiUnlockPageTable @ 0x1403B2B80 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiShouldYieldProcessor @ 0x140531508 (MiShouldYieldProcessor.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExSystemExceptionFilter @ 0x1407C22E0 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtGetWriteWatch(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID BaseAddress,
        SIZE_T RegionSize,
        PVOID *UserAddressArray,
        PULONG_PTR EntriesInUserAddressArray,
        PULONG Granularity)
{
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rsi
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  _BYTE *Pool; // rax
  int v20; // r12d
  unsigned __int64 v21; // r13
  int v22; // ebx
  struct _KPROCESS *v23; // rax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  volatile signed __int32 *v26; // rax
  volatile signed __int32 *v27; // r13
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned int v29; // r8d
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r15
  unsigned __int64 *v34; // rdi
  unsigned __int64 v35; // rdx
  __int64 v36; // rdi
  unsigned __int64 *v37; // rdi
  unsigned __int64 v38; // rdi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdi
  __int64 v42; // r8
  __int64 v43; // r11
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r10
  __int64 LeafVa; // r13
  unsigned __int64 v49; // rdi
  __int64 v50; // r11
  int v51; // r14d
  char v52; // al
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  int v57; // edi
  _BYTE *v58; // rbx
  unsigned __int64 v59; // rax
  signed __int64 *v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  unsigned __int64 v64; // r14
  __int64 v65; // rcx
  unsigned __int64 v66; // r10
  char v67; // al
  unsigned int j; // r14d
  char v69; // al
  unsigned __int8 v70; // [rsp+40h] [rbp-9E8h]
  unsigned __int64 i; // [rsp+48h] [rbp-9E0h] BYREF
  signed __int64 *v72; // [rsp+50h] [rbp-9D8h]
  __int64 LockedVadEvent; // [rsp+58h] [rbp-9D0h]
  ULONG v74; // [rsp+60h] [rbp-9C8h]
  unsigned __int64 *v75; // [rsp+68h] [rbp-9C0h]
  __int64 v76; // [rsp+70h] [rbp-9B8h]
  unsigned __int64 v77; // [rsp+78h] [rbp-9B0h]
  void *Src; // [rsp+80h] [rbp-9A8h]
  PVOID Object; // [rsp+88h] [rbp-9A0h] BYREF
  unsigned int v80; // [rsp+90h] [rbp-998h] BYREF
  unsigned __int64 v81; // [rsp+98h] [rbp-990h]
  _QWORD *v82; // [rsp+A0h] [rbp-988h]
  unsigned __int64 v83; // [rsp+A8h] [rbp-980h]
  unsigned __int64 v84; // [rsp+B0h] [rbp-978h]
  volatile signed __int32 *v85; // [rsp+B8h] [rbp-970h]
  PVOID P; // [rsp+C0h] [rbp-968h]
  HANDLE Handle; // [rsp+C8h] [rbp-960h]
  void *v88; // [rsp+D0h] [rbp-958h]
  PULONG_PTR v89; // [rsp+D8h] [rbp-950h]
  PULONG v90; // [rsp+E0h] [rbp-948h]
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-940h] BYREF
  int v92; // [rsp+120h] [rbp-908h] BYREF
  __int16 v93; // [rsp+124h] [rbp-904h]
  __int16 v94; // [rsp+126h] [rbp-902h]
  __int64 v95; // [rsp+128h] [rbp-900h]
  __int64 v96; // [rsp+130h] [rbp-8F8h]
  __int64 v97; // [rsp+138h] [rbp-8F0h]
  _BYTE v98[152]; // [rsp+140h] [rbp-8E8h] BYREF
  _BYTE v99[2048]; // [rsp+1E0h] [rbp-848h] BYREF

  v74 = Flags;
  Handle = ProcessHandle;
  v88 = UserAddressArray;
  v89 = EntriesInUserAddressArray;
  v90 = Granularity;
  Object = 0LL;
  v80 = 0;
  LODWORD(i) = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v94 = 0;
  memset(v98, 0, sizeof(v98));
  v95 = 20LL;
  v92 = 1;
  v93 = 0;
  v96 = 0LL;
  v97 = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
      return -1073741583;
    if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress < RegionSize )
      return -1073741582;
    v14 = (__int64)EntriesInUserAddressArray;
    if ( (unsigned __int64)EntriesInUserAddressArray >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = *EntriesInUserAddressArray;
    v81 = v15;
    if ( !v15 )
      return -1073741581;
    if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v15, 8u);
    v16 = (__int64)Granularity;
    if ( (unsigned __int64)Granularity >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v17 = v81;
  }
  else
  {
    v17 = *EntriesInUserAddressArray;
    v81 = *EntriesInUserAddressArray;
  }
  Pool = v99;
  Src = v99;
  if ( v17 > 0x100 )
  {
    Pool = (_BYTE *)MiAllocatePool(65LL, 8 * v17, 1665625421LL, v10);
    Src = Pool;
    if ( !Pool )
      return -1073741670;
  }
  v20 = 1;
  v21 = 0LL;
  v76 = 0LL;
  v82 = Pool;
  P = 0LL;
  v22 = 0;
  if ( Handle == (HANDLE)-1LL )
  {
    v23 = Process;
  }
  else
  {
    v57 = ObReferenceObjectByHandleWithTag(
            Handle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    LODWORD(i) = v57;
    if ( v57 < 0 )
      goto LABEL_118;
    v23 = (struct _KPROCESS *)Object;
  }
  Object = v23;
  v72 = 0LL;
  v24 = (unsigned __int64)BaseAddress + RegionSize - 1;
  if ( (unsigned __int64)BaseAddress > v24 )
  {
    v57 = -1073741582;
    goto LABEL_58;
  }
  if ( Process != v23 )
  {
    KeStackAttachProcess(v23, &ApcState);
    v22 = 1;
    v23 = (struct _KPROCESS *)Object;
  }
  v75 = &v23[1].ActiveProcessorsPadding[6];
  v25 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v83 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, (int *)&i);
  v27 = v26;
  v85 = v26;
  if ( !v26 )
  {
    v57 = i;
    v21 = (unsigned __int64)v72;
    if ( (_DWORD)i != -1073741664 )
      goto LABEL_58;
LABEL_80:
    v57 = -1073741585;
    goto LABEL_58;
  }
  P = (PVOID)v26;
  if ( (v26[12] & 0x300000) != 0x300000
    || v24 > (((*((unsigned int *)v26 + 7) | ((unsigned __int64)*((unsigned __int8 *)v26 + 33) << 32)) << 12) | 0xFFF) )
  {
    v21 = (unsigned __int64)v72;
    goto LABEL_80;
  }
  VadMandatoryPageSize = MiGetVadMandatoryPageSize((__int64)v26);
  v20 = VadMandatoryPageSize;
  v77 = VadMandatoryPageSize;
  if ( VadMandatoryPageSize <= 1 )
    goto LABEL_27;
  v62 = (VadMandatoryPageSize << 12) - 1;
  if ( ((unsigned __int64)BaseAddress & v62) != 0 )
  {
    v57 = -1073741583;
    v21 = (unsigned __int64)v72;
    goto LABEL_58;
  }
  if ( (RegionSize & v62) != 0 )
  {
    v57 = -1073741582;
    v21 = (unsigned __int64)v72;
  }
  else
  {
LABEL_27:
    if ( (v29 & 0x500000) == 0x500000 )
    {
      v30 = 16LL;
      if ( MiVadPageSizes[((unsigned __int64)v29 >> 18) & 3] != 16 )
        v30 = 1LL;
    }
    else
    {
      v30 = 1LL;
    }
    LockedVadEvent = MiLocateLockedVadEvent(v27, 4LL);
    v31 = ((unsigned __int64)BaseAddress >> 12)
        - (*((unsigned int *)v27 + 6) | ((unsigned __int64)*((unsigned __int8 *)v27 + 32) << 32));
    v32 = v77;
    v33 = v31 / v77;
    v34 = v75;
    v70 = MiLockWorkingSetShared(v75);
    if ( v25 <= v83 )
    {
      while ( 1 )
      {
        v36 = v76;
        if ( v76 )
        {
          MiFlushTbList(&v92, v35);
          v61 = v36;
          v37 = v75;
          MiUnlockPageTable(v75, v61);
          v76 = 0LL;
        }
        else
        {
          v37 = v75;
        }
        if ( (unsigned int)MiWorkingSetIsContended(v37) || (unsigned int)MiShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v37, v70);
          MiLockWorkingSetShared(v37);
        }
        v38 = v83;
        NextPageTable = MiGetNextPageTable(v25, v83, 0, v70, 1, (__int64)&v80);
        v40 = NextPageTable;
        if ( NextPageTable )
          v76 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        else
          v40 = v38 + 8;
        v41 = ((__int64)(v40 - v25) >> 3) / v32;
        v22 |= 4u;
        MiLockVadCore(v27, ((__int64)(v40 - v25) >> 3) % v32);
        v43 = LockedVadEvent;
        if ( v41 )
          break;
LABEL_38:
        if ( v25 > v83 )
          goto LABEL_52;
        v44 = v83;
        i = v83;
        if ( v80 )
        {
          v25 = v76;
          v42 = 0x7FFFFFFFF8LL;
          v64 = ((v83 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v45 = 512LL;
          if ( v80 > 1 )
          {
            v65 = v80 - 1;
            do
            {
              v45 <<= 9;
              v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v64 = ((v64 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v65;
            }
            while ( v65 );
          }
          v76 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v66 = v25 + 8;
          for ( i = v25 + 8; (v66 & 0xFFF) != 0; i = v66 )
          {
            if ( v66 > v64 )
              break;
            v67 = MI_READ_PTE_LOCK_FREE(v66);
            v66 = i;
            if ( (v67 & 0x81) != 0x81 )
              break;
            v66 = i + 8;
          }
          v44 = v66 - 8;
          i = v44;
          v32 = v77;
        }
        else
        {
          v45 = v30;
        }
        v35 = v45 % v32;
        v46 = v45 / v32;
        v84 = v45 / v32;
        if ( v25 <= v44 )
        {
          while ( 1 )
          {
            LeafVa = MiGetLeafVa(v25, v35, v42, v46);
            v22 &= ~2u;
            v49 = v25;
            v35 = *(_QWORD *)(v50 + 16);
            if ( _bittest64((const signed __int64 *)v35, v33) != 1 )
            {
              v51 = 0;
              while ( 1 )
              {
                v52 = MI_READ_PTE_LOCK_FREE(v49);
                if ( (v52 & 0x42) != 0 && (v52 & 1) != 0 )
                {
                  v22 |= 2u;
                  if ( (v74 & 1) == 0 )
                    goto LABEL_46;
                  MiMakePteClean(v49, &v92);
                }
                v49 += 8LL;
                if ( (unsigned int)++v51 >= v30 )
                  goto LABEL_46;
              }
            }
            v22 |= 2u;
            if ( (v74 & 1) != 0 )
            {
              _bittestandreset64((signed __int64 *)v35, v33);
              for ( j = 0; j < v30; ++j )
              {
                v69 = MI_READ_PTE_LOCK_FREE(v49);
                if ( (v69 & 0x42) != 0 && (v69 & 1) != 0 )
                  MiMakePteClean(v49, &v92);
                v49 += 8LL;
              }
LABEL_46:
              v46 = v84;
              v47 = i;
              v32 = v77;
            }
            if ( (v22 & 2) != 0 )
            {
              v59 = 0LL;
              if ( v46 )
                break;
            }
LABEL_48:
            v33 += v46;
            v25 += 8 * v30;
            if ( (v25 & 0xFFF) == 0 || v25 > v47 )
            {
              v27 = v85;
              goto LABEL_51;
            }
          }
          v35 = (unsigned __int64)v72;
          v42 = (__int64)v82;
          v60 = (signed __int64 *)v81;
          while ( 1 )
          {
            *(_QWORD *)v42 = LeafVa;
            v42 += 8LL;
            v82 = (_QWORD *)v42;
            v72 = (signed __int64 *)++v35;
            if ( (signed __int64 *)v35 == v60 )
              break;
            ++v59;
            LeafVa += v32 << 12;
            if ( v59 >= v46 )
              goto LABEL_48;
          }
          v27 = v85;
          goto LABEL_52;
        }
LABEL_51:
        LOBYTE(v35) = 2;
        MiUnlockVadCore(v27, v35);
        v22 &= ~4u;
        v25 = (((unsigned __int64)MiGetLeafVa(v25, v53, v54, v55) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v25 > v83 )
          goto LABEL_52;
      }
      while ( 1 )
      {
        if ( _bittest64(*(const signed __int64 **)(v43 + 16), v33) == 1 )
        {
          if ( (v74 & 1) != 0 )
            _bittestandreset64(*(signed __int64 **)(v43 + 16), v33);
          v63 = v82;
          *v82 = (__int64)(v25 << 25) >> 16;
          v82 = v63 + 1;
          v72 = (signed __int64 *)((char *)v72 + 1);
          if ( v72 == (signed __int64 *)v81 )
            break;
        }
        ++v33;
        v25 += 8 * v32;
        if ( !--v41 )
          goto LABEL_38;
      }
LABEL_52:
      v34 = v75;
    }
    MiFlushTbList(&v92, v35);
    if ( (v22 & 4) != 0 )
    {
      LOBYTE(v56) = 2;
      MiUnlockVadCore(v27, v56);
    }
    if ( v76 )
      MiUnlockPageTable(v34, v76);
    MiUnlockWorkingSetShared(v34, v70);
    v57 = 0;
    v20 = v77;
    v21 = (unsigned __int64)v72;
  }
LABEL_58:
  if ( P )
    MiUnlockAndDereferenceVad(P);
  if ( (v22 & 1) != 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( Handle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
  if ( !v57 )
  {
    v58 = Src;
    if ( v88 )
    {
      memmove(v88, Src, 8 * v21);
      *v89 = v21;
    }
    *v90 = v20 << 12;
    goto LABEL_68;
  }
LABEL_118:
  v58 = Src;
LABEL_68:
  if ( v58 != v99 )
    ExFreePoolWithTag(v58, 0);
  return v57;
}
