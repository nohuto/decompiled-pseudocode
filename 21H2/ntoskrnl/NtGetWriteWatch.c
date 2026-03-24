/*
 * XREFs of NtGetWriteWatch @ 0x14032C650
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x1402075C0 (KeUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     KeStackAttachProcess @ 0x14025C110 (KeStackAttachProcess.c)
 *     MiLockVadCore @ 0x1402AF9B8 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x1402B2DA0 (MiUnlockVadCore.c)
 *     MiLocateLockedVadEvent @ 0x1402FE3CC (MiLocateLockedVadEvent.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiGetNextPageTable @ 0x14030D820 (MiGetNextPageTable.c)
 *     MiMakePteClean @ 0x14030F56C (MiMakePteClean.c)
 *     MiGetVadMandatoryPageSize @ 0x140317F80 (MiGetVadMandatoryPageSize.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockPageTable @ 0x1403B6C60 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiShouldYieldProcessor @ 0x1405369D8 (MiShouldYieldProcessor.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406F0B80 (ObReferenceObjectByHandleWithTag.c)
 *     ExSystemExceptionFilter @ 0x1407D4F10 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtGetWriteWatch(
        void *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        volatile void *Address,
        signed __int64 **a6,
        unsigned __int64 a7)
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
  signed __int64 *v20; // r13
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
  __int64 v34; // r8
  _DWORD *v35; // r9
  __int64 v36; // rdi
  __int64 v37; // rdi
  unsigned __int64 v38; // rdi
  unsigned __int64 NextPageTable; // rax
  __int64 v40; // r8
  _DWORD *v41; // r9
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdi
  __int64 v44; // r8
  __int64 **v45; // r11
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // r10
  __int64 LeafVa; // r13
  __int64 v52; // rdi
  __int64 v53; // r11
  int v54; // r14d
  char v55; // al
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r8
  __int64 v60; // r9
  NTSTATUS v61; // edi
  _BYTE *v62; // rbx
  unsigned __int64 v63; // rax
  signed __int64 *v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  _DWORD *v70; // r9
  __int64 v71; // rcx
  _QWORD *v72; // rax
  unsigned __int64 v73; // r14
  __int64 v74; // rcx
  unsigned __int64 v75; // r10
  char v76; // al
  unsigned int j; // r14d
  char v78; // al
  char v79; // [rsp+40h] [rbp-9E8h]
  unsigned __int64 i; // [rsp+48h] [rbp-9E0h] BYREF
  signed __int64 *v81; // [rsp+50h] [rbp-9D8h]
  __int64 **LockedVadEvent; // [rsp+58h] [rbp-9D0h]
  int v83; // [rsp+60h] [rbp-9C8h]
  unsigned __int64 *v84; // [rsp+68h] [rbp-9C0h]
  __int64 v85; // [rsp+70h] [rbp-9B8h]
  unsigned __int64 v86; // [rsp+78h] [rbp-9B0h]
  void *Src; // [rsp+80h] [rbp-9A8h]
  PVOID Object; // [rsp+88h] [rbp-9A0h] BYREF
  unsigned int v89; // [rsp+90h] [rbp-998h] BYREF
  unsigned __int64 v90; // [rsp+98h] [rbp-990h]
  _QWORD *v91; // [rsp+A0h] [rbp-988h]
  unsigned __int64 v92; // [rsp+A8h] [rbp-980h]
  unsigned __int64 v93; // [rsp+B0h] [rbp-978h]
  volatile signed __int32 *v94; // [rsp+B8h] [rbp-970h]
  PVOID P; // [rsp+C0h] [rbp-968h]
  HANDLE Handle; // [rsp+C8h] [rbp-960h]
  void *v97; // [rsp+D0h] [rbp-958h]
  signed __int64 **v98; // [rsp+D8h] [rbp-950h]
  _DWORD *v99; // [rsp+E0h] [rbp-948h]
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-940h] BYREF
  int v101; // [rsp+120h] [rbp-908h] BYREF
  __int16 v102; // [rsp+124h] [rbp-904h]
  __int16 v103; // [rsp+126h] [rbp-902h]
  __int64 v104; // [rsp+128h] [rbp-900h]
  __int64 v105; // [rsp+130h] [rbp-8F8h]
  __int64 v106; // [rsp+138h] [rbp-8F0h]
  _BYTE v107[152]; // [rsp+140h] [rbp-8E8h] BYREF
  _BYTE v108[2048]; // [rsp+1E0h] [rbp-848h] BYREF

  v83 = a2;
  Handle = a1;
  v97 = (void *)Address;
  v98 = a6;
  v99 = (_DWORD *)a7;
  Object = 0LL;
  v89 = 0;
  LODWORD(i) = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v103 = 0;
  memset(v107, 0, sizeof(v107));
  v104 = 20LL;
  v101 = 1;
  v102 = 0;
  v105 = 0LL;
  v106 = 0LL;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a3 > 0x7FFFFFFEFFFFLL )
      return 3221225713LL;
    if ( 0x7FFFFFFF0000LL - a3 < a4 )
      return 3221225714LL;
    v13 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    v14 = (unsigned __int64)*a6;
    v90 = v14;
    if ( !v14 )
      return 3221225715LL;
    if ( v14 > 0x1FFFFFFFFFFFFFFFLL )
      return 3221225715LL;
    ProbeForWrite(Address, 8 * v14, 8u);
    v15 = a7;
    if ( a7 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = v90;
  }
  else
  {
    v16 = (unsigned __int64)*a6;
    v90 = (unsigned __int64)*a6;
  }
  Pool = v108;
  Src = v108;
  if ( v16 > 0x100 )
  {
    Pool = MiAllocatePool(65, 8 * v16, 0x63476D4Du);
    Src = Pool;
    if ( !Pool )
      return 3221225626LL;
  }
  v19 = 1;
  v20 = 0LL;
  v85 = 0LL;
  v91 = Pool;
  P = 0LL;
  v21 = 0;
  if ( Handle == (HANDLE)-1LL )
  {
    v22 = Process;
  }
  else
  {
    v61 = ObReferenceObjectByHandleWithTag(
            Handle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    LODWORD(i) = v61;
    if ( v61 < 0 )
      goto LABEL_118;
    v22 = (struct _KPROCESS *)Object;
  }
  Object = v22;
  v81 = 0LL;
  v23 = a4 + a3 - 1;
  if ( a3 > v23 )
  {
    v61 = -1073741582;
    goto LABEL_58;
  }
  if ( Process != v22 )
  {
    KeStackAttachProcess(v22, &ApcState);
    v21 = 1;
    v22 = (struct _KPROCESS *)Object;
  }
  v84 = &v22[1].ActiveProcessorsPadding[6];
  v24 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v92 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = MiObtainReferencedVadEx(a3, 0, (int *)&i);
  v26 = (__int64)v25;
  v94 = v25;
  if ( !v25 )
  {
    v61 = i;
    v20 = v81;
    if ( (_DWORD)i != -1073741664 )
      goto LABEL_58;
LABEL_80:
    v61 = -1073741585;
    goto LABEL_58;
  }
  P = (PVOID)v25;
  if ( (v25[12] & 0x300000) != 0x300000
    || v23 > (((*((unsigned int *)v25 + 7) | ((unsigned __int64)*((unsigned __int8 *)v25 + 33) << 32)) << 12) | 0xFFF) )
  {
    v20 = v81;
    goto LABEL_80;
  }
  VadMandatoryPageSize = MiGetVadMandatoryPageSize((__int64)v25);
  v19 = VadMandatoryPageSize;
  v86 = VadMandatoryPageSize;
  if ( VadMandatoryPageSize <= 1 )
    goto LABEL_27;
  v71 = (VadMandatoryPageSize << 12) - 1;
  if ( (a3 & v71) != 0 )
  {
    v61 = -1073741583;
    v20 = v81;
    goto LABEL_58;
  }
  if ( (a4 & v71) != 0 )
  {
    v61 = -1073741582;
    v20 = v81;
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
    v30 = (a3 >> 12) - (*(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32));
    v31 = v86;
    v32 = v30 / v86;
    v33 = (__int64)v84;
    v79 = MiLockWorkingSetShared((__int64)v84, v30 % v86, v34, v35);
    if ( v24 <= v92 )
    {
      while ( 1 )
      {
        v36 = v85;
        if ( v85 )
        {
          MiFlushTbList(&v101);
          v65 = v36;
          v37 = (__int64)v84;
          MiUnlockPageTable(v84, v65, v66, v67);
          v85 = 0LL;
        }
        else
        {
          v37 = (__int64)v84;
        }
        if ( MiWorkingSetIsContended(v37) || (unsigned int)MiShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v37, v79);
          MiLockWorkingSetShared(v37, v68, v69, v70);
        }
        v38 = v92;
        NextPageTable = MiGetNextPageTable(v24, v92, 0LL, v79, 1u, &v89);
        v42 = NextPageTable;
        if ( NextPageTable )
          v85 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        else
          v42 = v38 + 8;
        v43 = ((__int64)(v42 - v24) >> 3) / v31;
        v21 |= 4u;
        MiLockVadCore(v26, ((__int64)(v42 - v24) >> 3) % v31, v40, v41);
        v45 = LockedVadEvent;
        if ( v43 )
          break;
LABEL_38:
        if ( v24 > v92 )
          goto LABEL_52;
        v46 = v92;
        i = v92;
        if ( v89 )
        {
          v24 = v85;
          v44 = 0x7FFFFFFFF8LL;
          v73 = ((v92 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v47 = 512LL;
          if ( v89 > 1 )
          {
            v74 = v89 - 1;
            do
            {
              v47 <<= 9;
              v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v73 = ((v73 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v74;
            }
            while ( v74 );
          }
          v85 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v75 = v24 + 8;
          for ( i = v24 + 8; (v75 & 0xFFF) != 0; i = v75 )
          {
            if ( v75 > v73 )
              break;
            v76 = MI_READ_PTE_LOCK_FREE(v75);
            v75 = i;
            if ( (v76 & 0x81) != 0x81 )
              break;
            v75 = i + 8;
          }
          v46 = v75 - 8;
          i = v46;
          v31 = v86;
        }
        else
        {
          v47 = v29;
        }
        v48 = v47 % v31;
        v49 = v47 / v31;
        v93 = v47 / v31;
        if ( v24 <= v46 )
        {
          while ( 1 )
          {
            LeafVa = MiGetLeafVa(v24, v48, v44, v49);
            v21 &= ~2u;
            v52 = v24;
            v48 = *(_QWORD *)(v53 + 16);
            if ( _bittest64((const signed __int64 *)v48, v32) != 1 )
            {
              v54 = 0;
              while ( 1 )
              {
                v55 = MI_READ_PTE_LOCK_FREE(v52);
                if ( (v55 & 0x42) != 0 && (v55 & 1) != 0 )
                {
                  v21 |= 2u;
                  if ( (v83 & 1) == 0 )
                    goto LABEL_46;
                  MiMakePteClean(v52, (__int64)&v101);
                }
                v52 += 8LL;
                if ( (unsigned int)++v54 >= v29 )
                  goto LABEL_46;
              }
            }
            v21 |= 2u;
            if ( (v83 & 1) != 0 )
            {
              _bittestandreset64((signed __int64 *)v48, v32);
              for ( j = 0; j < v29; ++j )
              {
                v78 = MI_READ_PTE_LOCK_FREE(v52);
                if ( (v78 & 0x42) != 0 && (v78 & 1) != 0 )
                  MiMakePteClean(v52, (__int64)&v101);
                v52 += 8LL;
              }
LABEL_46:
              v49 = v93;
              v50 = i;
              v31 = v86;
            }
            if ( (v21 & 2) != 0 )
            {
              v63 = 0LL;
              if ( v49 )
                break;
            }
LABEL_48:
            v32 += v49;
            v24 += 8 * v29;
            if ( (v24 & 0xFFF) == 0 || v24 > v50 )
            {
              v26 = (__int64)v94;
              goto LABEL_51;
            }
          }
          v48 = (unsigned __int64)v81;
          v44 = (__int64)v91;
          v64 = (signed __int64 *)v90;
          while ( 1 )
          {
            *(_QWORD *)v44 = LeafVa;
            v44 += 8LL;
            v91 = (_QWORD *)v44;
            v81 = (signed __int64 *)++v48;
            if ( (signed __int64 *)v48 == v64 )
              break;
            ++v63;
            LeafVa += v31 << 12;
            if ( v63 >= v49 )
              goto LABEL_48;
          }
          v26 = (__int64)v94;
          goto LABEL_52;
        }
LABEL_51:
        MiUnlockVadCore(v26, 2u);
        v21 &= ~4u;
        v24 = (((unsigned __int64)MiGetLeafVa(v24, v56, v57, v58) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v24 > v92 )
          goto LABEL_52;
      }
      while ( 1 )
      {
        if ( _bittest64(v45[2], v32) == 1 )
        {
          if ( (v83 & 1) != 0 )
            _bittestandreset64(v45[2], v32);
          v72 = v91;
          *v91 = (__int64)(v24 << 25) >> 16;
          v91 = v72 + 1;
          v81 = (signed __int64 *)((char *)v81 + 1);
          if ( v81 == (signed __int64 *)v90 )
            break;
        }
        ++v32;
        v24 += 8 * v31;
        if ( !--v43 )
          goto LABEL_38;
      }
LABEL_52:
      v33 = (__int64)v84;
    }
    MiFlushTbList(&v101);
    if ( (v21 & 4) != 0 )
      MiUnlockVadCore(v26, 2u);
    if ( v85 )
      MiUnlockPageTable(v33, v85, v59, v60);
    MiUnlockWorkingSetShared(v33, v79);
    v61 = 0;
    v19 = v86;
    v20 = v81;
  }
LABEL_58:
  if ( P )
    MiUnlockAndDereferenceVad((char *)P);
  if ( (v21 & 1) != 0 )
    KeUnstackDetachProcess(&ApcState);
  if ( Handle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
  if ( !v61 )
  {
    v62 = Src;
    if ( v97 )
    {
      memmove(v97, Src, 8LL * (_QWORD)v20);
      *v98 = v20;
    }
    *v99 = v19 << 12;
    goto LABEL_68;
  }
LABEL_118:
  v62 = Src;
LABEL_68:
  if ( v62 != v108 )
    ExFreePoolWithTag(v62, 0);
  return (unsigned int)v61;
}
