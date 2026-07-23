/*
 * XREFs of NtGetWriteWatch @ 0x1402AFA60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiGetVadMandatoryPageSize @ 0x14022FFE0 (MiGetVadMandatoryPageSize.c)
 *     MiGetNextPageTable @ 0x140235D70 (MiGetNextPageTable.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     MiLocateLockedVadEvent @ 0x1402506EC (MiLocateLockedVadEvent.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     MiMakePteClean @ 0x14029EC0C (MiMakePteClean.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiLockVadCore @ 0x14030F5BC (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140311AA0 (MiUnlockVadCore.c)
 *     MiUnlockPageTable @ 0x1403B54F0 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiShouldYieldProcessor @ 0x140534ED8 (MiShouldYieldProcessor.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     ExSystemExceptionFilter @ 0x1407D0AE0 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  volatile signed __int32 *v25; // rax
  __int64 v26; // r13
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned int v28; // r8d
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // r15
  __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rdi
  unsigned __int64 v37; // rdi
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  __int64 v41; // r8
  __int64 **v42; // r11
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // r10
  __int64 LeafVa; // r13
  __int64 v48; // rdi
  __int64 v49; // r11
  int v50; // r14d
  char v51; // al
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  int v56; // edi
  _BYTE *v57; // rbx
  unsigned __int64 v58; // rax
  signed __int64 *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  unsigned __int64 v63; // r14
  __int64 v64; // rcx
  unsigned __int64 v65; // r10
  char v66; // al
  unsigned int j; // r14d
  char v68; // al
  char v69; // [rsp+40h] [rbp-9E8h]
  unsigned __int64 i; // [rsp+48h] [rbp-9E0h] BYREF
  signed __int64 *v71; // [rsp+50h] [rbp-9D8h]
  __int64 **LockedVadEvent; // [rsp+58h] [rbp-9D0h]
  ULONG v73; // [rsp+60h] [rbp-9C8h]
  unsigned __int64 *v74; // [rsp+68h] [rbp-9C0h]
  __int64 v75; // [rsp+70h] [rbp-9B8h]
  unsigned __int64 v76; // [rsp+78h] [rbp-9B0h]
  void *Src; // [rsp+80h] [rbp-9A8h]
  PVOID Object; // [rsp+88h] [rbp-9A0h] BYREF
  unsigned int v79; // [rsp+90h] [rbp-998h] BYREF
  unsigned __int64 v80; // [rsp+98h] [rbp-990h]
  _QWORD *v81; // [rsp+A0h] [rbp-988h]
  unsigned __int64 v82; // [rsp+A8h] [rbp-980h]
  unsigned __int64 v83; // [rsp+B0h] [rbp-978h]
  volatile signed __int32 *v84; // [rsp+B8h] [rbp-970h]
  PVOID P; // [rsp+C0h] [rbp-968h]
  HANDLE Handle; // [rsp+C8h] [rbp-960h]
  void *v87; // [rsp+D0h] [rbp-958h]
  PULONG_PTR v88; // [rsp+D8h] [rbp-950h]
  PULONG v89; // [rsp+E0h] [rbp-948h]
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-940h] BYREF
  int v91; // [rsp+120h] [rbp-908h] BYREF
  __int16 v92; // [rsp+124h] [rbp-904h]
  __int16 v93; // [rsp+126h] [rbp-902h]
  __int64 v94; // [rsp+128h] [rbp-900h]
  __int64 v95; // [rsp+130h] [rbp-8F8h]
  __int64 v96; // [rsp+138h] [rbp-8F0h]
  _BYTE v97[152]; // [rsp+140h] [rbp-8E8h] BYREF
  _BYTE v98[2048]; // [rsp+1E0h] [rbp-848h] BYREF

  v73 = Flags;
  Handle = ProcessHandle;
  v87 = UserAddressArray;
  v88 = EntriesInUserAddressArray;
  v89 = Granularity;
  Object = 0LL;
  v79 = 0;
  LODWORD(i) = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v93 = 0;
  memset(v97, 0, sizeof(v97));
  v94 = 20LL;
  v91 = 1;
  v92 = 0;
  v95 = 0LL;
  v96 = 0LL;
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
    v80 = v14;
    if ( !v14 )
      return -1073741581;
    if ( v14 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v14, 8u);
    v15 = (__int64)Granularity;
    if ( (unsigned __int64)Granularity >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = v80;
  }
  else
  {
    v16 = *EntriesInUserAddressArray;
    v80 = *EntriesInUserAddressArray;
  }
  Pool = v98;
  Src = v98;
  if ( v16 > 0x100 )
  {
    Pool = MiAllocatePool(65, 8 * v16, 0x63476D4Du);
    Src = Pool;
    if ( !Pool )
      return -1073741670;
  }
  v19 = 1;
  v20 = 0LL;
  v75 = 0LL;
  v81 = Pool;
  P = 0LL;
  v21 = 0;
  if ( Handle == (HANDLE)-1LL )
  {
    v22 = Process;
  }
  else
  {
    v56 = ObReferenceObjectByHandleWithTag(
            Handle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    LODWORD(i) = v56;
    if ( v56 < 0 )
      goto LABEL_118;
    v22 = (struct _KPROCESS *)Object;
  }
  Object = v22;
  v71 = 0LL;
  v23 = (unsigned __int64)BaseAddress + RegionSize - 1;
  if ( (unsigned __int64)BaseAddress > v23 )
  {
    v56 = -1073741582;
    goto LABEL_58;
  }
  if ( Process != v22 )
  {
    KeStackAttachProcess(v22, &ApcState);
    v21 = 1;
    v22 = (struct _KPROCESS *)Object;
  }
  v74 = &v22[1].ActiveProcessorsPadding[6];
  v24 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v82 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = MiObtainReferencedVadEx((unsigned __int64)BaseAddress, 0, (int *)&i);
  v26 = (__int64)v25;
  v84 = v25;
  if ( !v25 )
  {
    v56 = i;
    v20 = (unsigned __int64)v71;
    if ( (_DWORD)i != -1073741664 )
      goto LABEL_58;
LABEL_80:
    v56 = -1073741585;
    goto LABEL_58;
  }
  P = (PVOID)v25;
  if ( (v25[12] & 0x300000) != 0x300000
    || v23 > (((*((unsigned int *)v25 + 7) | ((unsigned __int64)*((unsigned __int8 *)v25 + 33) << 32)) << 12) | 0xFFF) )
  {
    v20 = (unsigned __int64)v71;
    goto LABEL_80;
  }
  VadMandatoryPageSize = MiGetVadMandatoryPageSize((__int64)v25);
  v19 = VadMandatoryPageSize;
  v76 = VadMandatoryPageSize;
  if ( VadMandatoryPageSize <= 1 )
    goto LABEL_27;
  v61 = (VadMandatoryPageSize << 12) - 1;
  if ( ((unsigned __int64)BaseAddress & v61) != 0 )
  {
    v56 = -1073741583;
    v20 = (unsigned __int64)v71;
    goto LABEL_58;
  }
  if ( (RegionSize & v61) != 0 )
  {
    v56 = -1073741582;
    v20 = (unsigned __int64)v71;
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
    v31 = v76;
    v32 = v30 / v76;
    v33 = (__int64)v74;
    v69 = MiLockWorkingSetShared((__int64)v74);
    if ( v24 <= v82 )
    {
      while ( 1 )
      {
        v35 = v75;
        if ( v75 )
        {
          MiFlushTbList(&v91, v34);
          v60 = v35;
          v36 = (__int64)v74;
          MiUnlockPageTable(v74, v60);
          v75 = 0LL;
        }
        else
        {
          v36 = (__int64)v74;
        }
        if ( (unsigned int)MiWorkingSetIsContended(v36) || (unsigned int)MiShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v36, v69);
          MiLockWorkingSetShared(v36);
        }
        v37 = v82;
        NextPageTable = MiGetNextPageTable(v24, v82, 0LL, v69, 1u, &v79);
        v39 = NextPageTable;
        if ( NextPageTable )
          v75 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        else
          v39 = v37 + 8;
        v40 = ((__int64)(v39 - v24) >> 3) / v31;
        v21 |= 4u;
        MiLockVadCore(v26, ((__int64)(v39 - v24) >> 3) % v31);
        v42 = LockedVadEvent;
        if ( v40 )
          break;
LABEL_38:
        if ( v24 > v82 )
          goto LABEL_52;
        v43 = v82;
        i = v82;
        if ( v79 )
        {
          v24 = v75;
          v41 = 0x7FFFFFFFF8LL;
          v63 = ((v82 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v44 = 512LL;
          if ( v79 > 1 )
          {
            v64 = v79 - 1;
            do
            {
              v44 <<= 9;
              v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v63 = ((v63 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v64;
            }
            while ( v64 );
          }
          v75 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v65 = v24 + 8;
          for ( i = v24 + 8; (v65 & 0xFFF) != 0; i = v65 )
          {
            if ( v65 > v63 )
              break;
            v66 = MI_READ_PTE_LOCK_FREE(v65);
            v65 = i;
            if ( (v66 & 0x81) != 0x81 )
              break;
            v65 = i + 8;
          }
          v43 = v65 - 8;
          i = v43;
          v31 = v76;
        }
        else
        {
          v44 = v29;
        }
        v34 = v44 % v31;
        v45 = v44 / v31;
        v83 = v44 / v31;
        if ( v24 <= v43 )
        {
          while ( 1 )
          {
            LeafVa = MiGetLeafVa(v24, v34, v41, v45);
            v21 &= ~2u;
            v48 = v24;
            v34 = *(_QWORD *)(v49 + 16);
            if ( _bittest64((const signed __int64 *)v34, v32) != 1 )
            {
              v50 = 0;
              while ( 1 )
              {
                v51 = MI_READ_PTE_LOCK_FREE(v48);
                if ( (v51 & 0x42) != 0 && (v51 & 1) != 0 )
                {
                  v21 |= 2u;
                  if ( (v73 & 1) == 0 )
                    goto LABEL_46;
                  MiMakePteClean(v48, (__int64)&v91);
                }
                v48 += 8LL;
                if ( (unsigned int)++v50 >= v29 )
                  goto LABEL_46;
              }
            }
            v21 |= 2u;
            if ( (v73 & 1) != 0 )
            {
              _bittestandreset64((signed __int64 *)v34, v32);
              for ( j = 0; j < v29; ++j )
              {
                v68 = MI_READ_PTE_LOCK_FREE(v48);
                if ( (v68 & 0x42) != 0 && (v68 & 1) != 0 )
                  MiMakePteClean(v48, (__int64)&v91);
                v48 += 8LL;
              }
LABEL_46:
              v45 = v83;
              v46 = i;
              v31 = v76;
            }
            if ( (v21 & 2) != 0 )
            {
              v58 = 0LL;
              if ( v45 )
                break;
            }
LABEL_48:
            v32 += v45;
            v24 += 8 * v29;
            if ( (v24 & 0xFFF) == 0 || v24 > v46 )
            {
              v26 = (__int64)v84;
              goto LABEL_51;
            }
          }
          v34 = (unsigned __int64)v71;
          v41 = (__int64)v81;
          v59 = (signed __int64 *)v80;
          while ( 1 )
          {
            *(_QWORD *)v41 = LeafVa;
            v41 += 8LL;
            v81 = (_QWORD *)v41;
            v71 = (signed __int64 *)++v34;
            if ( (signed __int64 *)v34 == v59 )
              break;
            ++v58;
            LeafVa += v31 << 12;
            if ( v58 >= v45 )
              goto LABEL_48;
          }
          v26 = (__int64)v84;
          goto LABEL_52;
        }
LABEL_51:
        LOBYTE(v34) = 2;
        MiUnlockVadCore(v26, v34);
        v21 &= ~4u;
        v24 = (((unsigned __int64)MiGetLeafVa(v24, v52, v53, v54) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v24 > v82 )
          goto LABEL_52;
      }
      while ( 1 )
      {
        if ( _bittest64(v42[2], v32) == 1 )
        {
          if ( (v73 & 1) != 0 )
            _bittestandreset64(v42[2], v32);
          v62 = v81;
          *v81 = (__int64)(v24 << 25) >> 16;
          v81 = v62 + 1;
          v71 = (signed __int64 *)((char *)v71 + 1);
          if ( v71 == (signed __int64 *)v80 )
            break;
        }
        ++v32;
        v24 += 8 * v31;
        if ( !--v40 )
          goto LABEL_38;
      }
LABEL_52:
      v33 = (__int64)v74;
    }
    MiFlushTbList(&v91, v34);
    if ( (v21 & 4) != 0 )
    {
      LOBYTE(v55) = 2;
      MiUnlockVadCore(v26, v55);
    }
    if ( v75 )
      MiUnlockPageTable(v33, v75);
    MiUnlockWorkingSetShared(v33, v69);
    v56 = 0;
    v19 = v76;
    v20 = (unsigned __int64)v71;
  }
LABEL_58:
  if ( P )
    MiUnlockAndDereferenceVad(P);
  if ( (v21 & 1) != 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( Handle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
  if ( !v56 )
  {
    v57 = Src;
    if ( v87 )
    {
      memmove(v87, Src, 8 * v20);
      *v88 = v20;
    }
    *v89 = v19 << 12;
    goto LABEL_68;
  }
LABEL_118:
  v57 = Src;
LABEL_68:
  if ( v57 != v98 )
    ExFreePoolWithTag(v57, 0);
  return v56;
}
