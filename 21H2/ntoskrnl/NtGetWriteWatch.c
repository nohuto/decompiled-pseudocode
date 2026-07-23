/*
 * XREFs of NtGetWriteWatch @ 0x1403373A0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockVadCore @ 0x14022DD18 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140230F50 (MiUnlockVadCore.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiMakePteClean @ 0x14031A2BC (MiMakePteClean.c)
 *     MiGetVadMandatoryPageSize @ 0x140322CD0 (MiGetVadMandatoryPageSize.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockPageTable @ 0x1403B6DD0 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiShouldYieldProcessor @ 0x140536C18 (MiShouldYieldProcessor.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ExSystemExceptionFilter @ 0x1407D5080 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rsi
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  _BYTE *Pool; // rax
  int v19; // r12d
  unsigned __int64 v20; // r13
  int v21; // ebx
  struct _KPROCESS *v22; // rax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned int v28; // r8d
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // r15
  __int64 v33; // rdi
  __int64 v34; // r8
  _DWORD *v35; // r9
  __int64 v36; // rdi
  __int64 v37; // rdi
  unsigned __int64 v38; // rdi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdi
  __int64 **v42; // r11
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // r10
  __int64 v47; // r11
  __int64 LeafVa; // r13
  __int64 v49; // rdi
  int v50; // r14d
  char v51; // al
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // edi
  _BYTE *v55; // rbx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 *v58; // r8
  unsigned __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  _DWORD *v65; // r9
  __int64 v66; // rcx
  __int64 *v67; // rax
  unsigned __int64 v68; // r14
  __int64 v69; // rcx
  unsigned __int64 v70; // r10
  char v71; // al
  unsigned int j; // r14d
  char v73; // al
  char v74; // [rsp+40h] [rbp-9E8h]
  unsigned __int64 i; // [rsp+48h] [rbp-9E0h] BYREF
  unsigned __int64 v76; // [rsp+50h] [rbp-9D8h]
  __int64 **LockedVadEvent; // [rsp+58h] [rbp-9D0h]
  ULONG v78; // [rsp+60h] [rbp-9C8h]
  unsigned __int64 *v79; // [rsp+68h] [rbp-9C0h]
  __int64 v80; // [rsp+70h] [rbp-9B8h]
  unsigned __int64 v81; // [rsp+78h] [rbp-9B0h]
  void *Src; // [rsp+80h] [rbp-9A8h]
  PVOID Object; // [rsp+88h] [rbp-9A0h] BYREF
  unsigned int v84; // [rsp+90h] [rbp-998h] BYREF
  unsigned __int64 v85; // [rsp+98h] [rbp-990h]
  __int64 *v86; // [rsp+A0h] [rbp-988h]
  unsigned __int64 v87; // [rsp+A8h] [rbp-980h]
  unsigned __int64 v88; // [rsp+B0h] [rbp-978h]
  __int64 v89; // [rsp+B8h] [rbp-970h]
  PVOID P; // [rsp+C0h] [rbp-968h]
  HANDLE Handle; // [rsp+C8h] [rbp-960h]
  void *v92; // [rsp+D0h] [rbp-958h]
  PULONG_PTR v93; // [rsp+D8h] [rbp-950h]
  PULONG v94; // [rsp+E0h] [rbp-948h]
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-940h] BYREF
  int v96; // [rsp+120h] [rbp-908h] BYREF
  __int16 v97; // [rsp+124h] [rbp-904h]
  __int16 v98; // [rsp+126h] [rbp-902h]
  __int64 v99; // [rsp+128h] [rbp-900h]
  __int64 v100; // [rsp+130h] [rbp-8F8h]
  __int64 v101; // [rsp+138h] [rbp-8F0h]
  _BYTE v102[152]; // [rsp+140h] [rbp-8E8h] BYREF
  _BYTE v103[2048]; // [rsp+1E0h] [rbp-848h] BYREF

  v78 = Flags;
  Handle = ProcessHandle;
  v92 = UserAddressArray;
  v93 = EntriesInUserAddressArray;
  v94 = Granularity;
  Object = 0LL;
  v84 = 0;
  LODWORD(i) = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v98 = 0;
  memset(v102, 0, sizeof(v102));
  v99 = 20LL;
  v96 = 1;
  v97 = 0;
  v100 = 0LL;
  v101 = 0LL;
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
    v13 = (__int64)EntriesInUserAddressArray;
    if ( (unsigned __int64)EntriesInUserAddressArray >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    v14 = *EntriesInUserAddressArray;
    v85 = v14;
    if ( !v14 )
      return -1073741581;
    if ( v14 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v14, 8u);
    v15 = (__int64)Granularity;
    if ( (unsigned __int64)Granularity >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = v85;
  }
  else
  {
    v16 = *EntriesInUserAddressArray;
    v85 = *EntriesInUserAddressArray;
  }
  Pool = v103;
  Src = v103;
  if ( v16 > 0x100 )
  {
    Pool = MiAllocatePool(65, 8 * v16, 0x63476D4Du);
    Src = Pool;
    if ( !Pool )
      return -1073741670;
  }
  v19 = 1;
  v20 = 0LL;
  v80 = 0LL;
  v86 = (__int64 *)Pool;
  P = 0LL;
  v21 = 0;
  if ( Handle == (HANDLE)-1LL )
  {
    v22 = Process;
  }
  else
  {
    v54 = ObReferenceObjectByHandleWithTag(
            Handle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    LODWORD(i) = v54;
    if ( v54 < 0 )
      goto LABEL_118;
    v22 = (struct _KPROCESS *)Object;
  }
  Object = v22;
  v76 = 0LL;
  v23 = (unsigned __int64)BaseAddress + RegionSize - 1;
  if ( (unsigned __int64)BaseAddress > v23 )
  {
    v54 = -1073741582;
    goto LABEL_58;
  }
  if ( Process != v22 )
  {
    KeStackAttachProcess(v22, &ApcState);
    v21 = 1;
    v22 = (struct _KPROCESS *)Object;
  }
  v79 = &v22[1].ActiveProcessorsPadding[6];
  v24 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v87 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, (int *)&i);
  v26 = v25;
  v89 = v25;
  if ( !v25 )
  {
    v54 = i;
    v20 = v76;
    if ( (_DWORD)i != -1073741664 )
      goto LABEL_58;
LABEL_80:
    v54 = -1073741585;
    goto LABEL_58;
  }
  P = (PVOID)v25;
  if ( (*(_DWORD *)(v25 + 48) & 0x300000) != 0x300000
    || v23 > (((*(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32)) << 12) | 0xFFF) )
  {
    v20 = v76;
    goto LABEL_80;
  }
  VadMandatoryPageSize = MiGetVadMandatoryPageSize(v25);
  v19 = VadMandatoryPageSize;
  v81 = VadMandatoryPageSize;
  if ( VadMandatoryPageSize <= 1 )
    goto LABEL_27;
  v66 = (VadMandatoryPageSize << 12) - 1;
  if ( ((unsigned __int64)BaseAddress & v66) != 0 )
  {
    v54 = -1073741583;
    v20 = v76;
    goto LABEL_58;
  }
  if ( (RegionSize & v66) != 0 )
  {
    v54 = -1073741582;
    v20 = v76;
  }
  else
  {
LABEL_27:
    if ( (v28 & 0x500000) == 0x500000 )
    {
      v29 = 16LL;
      if ( MiVadPageSizes[((unsigned __int64)v28 >> 18) & 3] != 16 )
        v29 = 1LL;
    }
    else
    {
      v29 = 1LL;
    }
    LockedVadEvent = MiLocateLockedVadEvent(v26, 4);
    v30 = ((unsigned __int64)BaseAddress >> 12)
        - (*(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32));
    v31 = v81;
    v32 = v30 / v81;
    v33 = (__int64)v79;
    v74 = MiLockWorkingSetShared((__int64)v79, v30 % v81, v34, v35);
    if ( v24 <= v87 )
    {
      while ( 1 )
      {
        v36 = v80;
        if ( v80 )
        {
          MiFlushTbList(&v96);
          v60 = v36;
          v37 = (__int64)v79;
          MiUnlockPageTable(v79, v60, v61, v62);
          v80 = 0LL;
        }
        else
        {
          v37 = (__int64)v79;
        }
        if ( MiWorkingSetIsContended(v37) || (unsigned int)MiShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v37, v74);
          MiLockWorkingSetShared(v37, v63, v64, v65);
        }
        v38 = v87;
        NextPageTable = MiGetNextPageTable(v24, v87, 0LL, v74, 1, &v84);
        v40 = NextPageTable;
        if ( NextPageTable )
          v80 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        else
          v40 = v38 + 8;
        v41 = ((__int64)(v40 - v24) >> 3) / v31;
        v21 |= 4u;
        MiLockVadCore(v26);
        v42 = LockedVadEvent;
        if ( v41 )
          break;
LABEL_38:
        if ( v24 > v87 )
          goto LABEL_52;
        v43 = v87;
        i = v87;
        if ( v84 )
        {
          v24 = v80;
          v68 = ((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v44 = 512LL;
          if ( v84 > 1 )
          {
            v69 = v84 - 1;
            do
            {
              v44 <<= 9;
              v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v68 = ((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v69;
            }
            while ( v69 );
          }
          v80 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v70 = v24 + 8;
          for ( i = v24 + 8; (v70 & 0xFFF) != 0; i = v70 )
          {
            if ( v70 > v68 )
              break;
            v71 = MI_READ_PTE_LOCK_FREE(v70);
            v70 = i;
            if ( (v71 & 0x81) != 0x81 )
              break;
            v70 = i + 8;
          }
          v43 = v70 - 8;
          i = v43;
          v31 = v81;
        }
        else
        {
          v44 = v29;
        }
        v88 = v44 / v31;
        if ( v24 <= v43 )
        {
          while ( 1 )
          {
            LeafVa = MiGetLeafVa(v24);
            v21 &= ~2u;
            v49 = v24;
            if ( _bittest64(*(const signed __int64 **)(v47 + 16), v32) != 1 )
            {
              v50 = 0;
              while ( 1 )
              {
                v51 = MI_READ_PTE_LOCK_FREE(v49);
                if ( (v51 & 0x42) != 0 && (v51 & 1) != 0 )
                {
                  v21 |= 2u;
                  if ( (v78 & 1) == 0 )
                    goto LABEL_46;
                  MiMakePteClean(v49, (__int64)&v96);
                }
                v49 += 8LL;
                if ( (unsigned int)++v50 >= v29 )
                  goto LABEL_46;
              }
            }
            v21 |= 2u;
            if ( (v78 & 1) != 0 )
            {
              _bittestandreset64(*(signed __int64 **)(v47 + 16), v32);
              for ( j = 0; j < v29; ++j )
              {
                v73 = MI_READ_PTE_LOCK_FREE(v49);
                if ( (v73 & 0x42) != 0 && (v73 & 1) != 0 )
                  MiMakePteClean(v49, (__int64)&v96);
                v49 += 8LL;
              }
LABEL_46:
              v45 = v88;
              v46 = i;
              v31 = v81;
            }
            if ( (v21 & 2) != 0 )
            {
              v56 = 0LL;
              if ( v45 )
                break;
            }
LABEL_48:
            v32 += v45;
            v24 += 8 * v29;
            if ( (v24 & 0xFFF) == 0 || v24 > v46 )
            {
              v26 = v89;
              goto LABEL_51;
            }
          }
          v57 = v76;
          v58 = v86;
          v59 = v85;
          while ( 1 )
          {
            *v58++ = LeafVa;
            v86 = v58;
            v76 = ++v57;
            if ( v57 == v59 )
              break;
            ++v56;
            LeafVa += v31 << 12;
            if ( v56 >= v45 )
              goto LABEL_48;
          }
          v26 = v89;
          goto LABEL_52;
        }
LABEL_51:
        MiUnlockVadCore(v26, 2u);
        v21 &= ~4u;
        v24 = (((unsigned __int64)MiGetLeafVa(v24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v24 > v87 )
          goto LABEL_52;
      }
      while ( 1 )
      {
        if ( _bittest64(v42[2], v32) == 1 )
        {
          if ( (v78 & 1) != 0 )
            _bittestandreset64(v42[2], v32);
          v67 = v86;
          *v86 = (__int64)(v24 << 25) >> 16;
          v86 = v67 + 1;
          if ( ++v76 == v85 )
            break;
        }
        ++v32;
        v24 += 8 * v31;
        if ( !--v41 )
          goto LABEL_38;
      }
LABEL_52:
      v33 = (__int64)v79;
    }
    MiFlushTbList(&v96);
    if ( (v21 & 4) != 0 )
      MiUnlockVadCore(v26, 2u);
    if ( v80 )
      MiUnlockPageTable(v33, v80, v52, v53);
    MiUnlockWorkingSetShared(v33, v74);
    v54 = 0;
    v19 = v81;
    v20 = v76;
  }
LABEL_58:
  if ( P )
    MiUnlockAndDereferenceVad((char *)P);
  if ( (v21 & 1) != 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( Handle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
  if ( !v54 )
  {
    v55 = Src;
    if ( v92 )
    {
      memmove(v92, Src, 8 * v20);
      *v93 = v20;
    }
    *v94 = v19 << 12;
    goto LABEL_68;
  }
LABEL_118:
  v55 = Src;
LABEL_68:
  if ( v55 != v103 )
    ExFreePoolWithTag(v55, 0);
  return v54;
}
