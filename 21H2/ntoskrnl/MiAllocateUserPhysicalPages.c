/*
 * XREFs of MiAllocateUserPhysicalPages @ 0x1408D4CE8
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1408D67C0 (NtAllocateUserPhysicalPages.c)
 *     NtAllocateUserPhysicalPagesEx @ 0x1408D67E0 (NtAllocateUserPhysicalPagesEx.c)
 * Callees:
 *     KeUnstackDetachProcess @ 0x1402075C0 (KeUnstackDetachProcess.c)
 *     MiChargeProcessCommitment @ 0x14021AD60 (MiChargeProcessCommitment.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14025B210 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     KeStackAttachProcess @ 0x14025C110 (KeStackAttachProcess.c)
 *     MiAllocatePagesForMdl @ 0x1402E33F4 (MiAllocatePagesForMdl.c)
 *     MiFreePagesFromMdl @ 0x1402FF4EC (MiFreePagesFromMdl.c)
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140348790 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ExGetCallBackBlockRoutine @ 0x140382160 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiSortMdlFrames @ 0x1405342DC (MiSortMdlFrames.c)
 *     MiGetAweInfoPartition @ 0x14054C394 (MiGetAweInfoPartition.c)
 *     MiLockAwePagesShared @ 0x14054CFDC (MiLockAwePagesShared.c)
 *     MiReferenceAweHandle @ 0x14054DC4C (MiReferenceAweHandle.c)
 *     MiUnlockAweVadsShared @ 0x14054DFCC (MiUnlockAweVadsShared.c)
 *     MiReturnProcessCommitment @ 0x140550744 (MiReturnProcessCommitment.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1405F9738 (MiCaptureAllocateMapExtendedParameters.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5AC0 (MiCreateProcessDefaultAweInfo.c)
 *     MiResizeAweBitMap @ 0x1408D64E4 (MiResizeAweBitMap.c)
 *     MiChargeProcessPhysicalPages @ 0x1408D7334 (MiChargeProcessPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

int __fastcall MiAllocateUserPhysicalPages(
        void *a1,
        unsigned __int64 *a2,
        volatile void *a3,
        __int64 *a4,
        unsigned int ullMultiplicand)
{
  char v7; // di
  struct _KTHREAD *CurrentThread; // r14
  char v9; // r13
  int result; // eax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  _DWORD *v14; // r12
  volatile signed __int64 *p_Lock; // r13
  __int64 v16; // rcx
  signed int v17; // r12d
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 AweInfoPartition; // rax
  int v25; // r10d
  unsigned __int64 v26; // rsi
  __int64 v27; // rcx
  __int16 v28; // cx
  unsigned __int64 v29; // rsi
  unsigned int v30; // edx
  int v31; // r14d
  int v32; // r8d
  __int64 v33; // r15
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 PagesForMdl; // r12
  unsigned __int64 v37; // rcx
  __int64 v38; // r12
  __int64 v39; // rdx
  __int64 v40; // r12
  ULONG_PTR v41; // rax
  ULONG_PTR v42; // r9
  __int64 v43; // r8
  unsigned __int64 v44; // rsi
  __int64 v45; // r8
  unsigned __int64 v46; // rcx
  __int64 v47; // r10
  _QWORD *v48; // rax
  _QWORD *v49; // r11
  __int64 v50; // r13
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned __int64 v53; // rcx
  _QWORD *v54; // rdx
  _QWORD *v55; // r10
  unsigned __int64 v56; // r9
  unsigned __int64 i; // r8
  _QWORD *j; // rax
  _QWORD *v59; // rsi
  void *v60; // rcx
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-198h]
  _QWORD *P; // [rsp+48h] [rbp-190h]
  PRKPROCESS PROCESS; // [rsp+50h] [rbp-188h] BYREF
  __int64 v64; // [rsp+58h] [rbp-180h]
  PVOID v65; // [rsp+60h] [rbp-178h]
  unsigned __int64 v66; // [rsp+68h] [rbp-170h]
  int v67; // [rsp+70h] [rbp-168h]
  _DWORD *v68; // [rsp+78h] [rbp-160h] BYREF
  __int64 v69; // [rsp+80h] [rbp-158h] BYREF
  unsigned __int64 v70; // [rsp+88h] [rbp-150h]
  struct _KTHREAD *v71; // [rsp+90h] [rbp-148h]
  unsigned __int64 v72; // [rsp+98h] [rbp-140h]
  unsigned __int64 v73; // [rsp+A0h] [rbp-138h]
  _QWORD *v74; // [rsp+A8h] [rbp-130h]
  HANDLE Handle; // [rsp+B0h] [rbp-128h]
  unsigned __int64 v76; // [rsp+B8h] [rbp-120h]
  __int64 v77; // [rsp+C0h] [rbp-118h]
  __int64 v78; // [rsp+C8h] [rbp-110h]
  unsigned __int64 v79; // [rsp+D0h] [rbp-108h]
  volatile void *Address; // [rsp+D8h] [rbp-100h]
  unsigned __int64 v81; // [rsp+E0h] [rbp-F8h]
  unsigned __int64 v82; // [rsp+E8h] [rbp-F0h]
  unsigned __int64 *v83; // [rsp+F0h] [rbp-E8h]
  unsigned __int64 v84; // [rsp+F8h] [rbp-E0h]
  _QWORD v85[10]; // [rsp+110h] [rbp-C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v83 = a2;
  Handle = a1;
  Address = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  v69 = 0LL;
  PROCESS = 0LL;
  memset(v85, 0, 0x48uLL);
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v71 = CurrentThread;
  v65 = CurrentThread->ApcState.Process;
  v9 = CurrentThread->PreviousMode;
  PreviousMode = v9;
  result = MiCaptureAllocateMapExtendedParameters(a4, ullMultiplicand, v9, 36, v85);
  if ( result >= 0 )
  {
    if ( (v85[7] & 0xFFFFFFFFFFFFFFF5uLL) != 0 || (v85[7] & 0xA) == 0xA )
      return -1073741811;
    v11 = (v85[7] & 2) != 0 ? 16LL : (unsigned __int64)(v85[7] & 8) << 6;
    v72 = v11;
    if ( LODWORD(v85[4]) > (unsigned __int16)KeNumberNodes )
      return -1073741811;
    if ( v9 )
    {
      v13 = (__int64)a2;
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      v12 = *a2;
      v70 = v12;
      v73 = v12;
      if ( !v12 )
        return 0;
      if ( v12 > 0x1FFFFFFFFFFFFFFFLL )
        return -1073741584;
      ProbeForWrite(Address, 8 * v12, 8u);
    }
    else
    {
      v12 = *a2;
      v70 = v12;
      v73 = v12;
      if ( !v12 )
        return 0;
    }
    v14 = 0LL;
    v68 = 0LL;
    result = MiReferenceAweHandle(Handle, 2u, v9, (PVOID *)&PROCESS, &v69);
    if ( result >= 0 )
    {
      if ( v69 )
      {
        v14 = *(_DWORD **)(MiSectionControlArea(v69) + 8);
        v68 = v14;
      }
      else
      {
        p_Lock = (volatile signed __int64 *)&PROCESS->Header.Lock;
        if ( PROCESS )
          goto LABEL_24;
        v7 = 8;
      }
      p_Lock = (volatile signed __int64 *)v65;
      PROCESS = (PRKPROCESS)v65;
LABEL_24:
      if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
      {
        v17 = -1073741727;
LABEL_106:
        if ( v12 )
        {
          if ( (v7 & 2) != 0 )
          {
            LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)p_Lock);
            MiReturnProcessCommitment((__int64)p_Lock, v12);
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)p_Lock);
          }
          if ( (v7 & 4) != 0 )
          {
            _InterlockedExchangeAdd64(p_Lock + 254, -(__int64)v12);
            p_Lock = (volatile signed __int64 *)&PROCESS->Header.Lock;
          }
        }
        if ( (v7 & 1) != 0 )
          KeUnstackDetachProcess(&ApcState);
        if ( (v7 & 8) == 0 )
        {
          v60 = (void *)v69;
          if ( !v69 )
            v60 = (void *)p_Lock;
          ObfDereferenceObjectWithTag(v60, 0x68506D4Du);
        }
        return v17;
      }
      if ( p_Lock != v65 )
      {
        KeStackAttachProcess((PRKPROCESS)p_Lock, &ApcState);
        v7 |= 1u;
      }
      v64 = 0LL;
      if ( !v14 )
      {
        LOBYTE(v16) = PreviousMode;
        v17 = MiCreateProcessDefaultAweInfo(v16, &v68);
        if ( v17 < 0 )
          goto LABEL_106;
        v14 = v68;
      }
      v18 = ExGetCallBackBlockRoutine((__int64)v14);
      v76 = v18;
      if ( v11 )
      {
        if ( v11 <= v18 || v11 % v18 || ((v11 - 1) & v11) != 0 )
        {
          v17 = -1073741811;
          goto LABEL_106;
        }
      }
      else
      {
        v11 = v18;
        v72 = v18;
      }
      if ( v11 > 1 )
      {
        v19 = v11 * v12;
        if ( v12 >= v11 * v12 )
        {
          v17 = -1073741584;
          goto LABEL_106;
        }
        v12 *= v11;
        v70 = v19;
        v73 = v19;
      }
      if ( !v69 )
      {
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)p_Lock);
        if ( (*((_DWORD *)p_Lock + 281) & 0x20) != 0 )
        {
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)p_Lock);
          v17 = -1073741558;
          goto LABEL_106;
        }
        if ( !(unsigned int)MiChargeProcessPhysicalPages(p_Lock, v12) )
        {
          v21 = (__int64)p_Lock;
          v22 = (__int64)CurrentThread;
LABEL_45:
          UNLOCK_ADDRESS_SPACE_SHARED(v22, v21);
          v17 = -1073741523;
          goto LABEL_106;
        }
        v7 |= 4u;
        v23 = MiChargeProcessCommitment(v20, v12);
        v21 = (__int64)p_Lock;
        v22 = (__int64)CurrentThread;
        if ( !v23 )
          goto LABEL_45;
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)p_Lock);
        v7 |= 2u;
      }
      AweInfoPartition = MiGetAweInfoPartition((__int64)v14);
      v25 = AweInfoPartition;
      v77 = AweInfoPartition;
      v26 = *(_QWORD *)(AweInfoPartition + 6920) + 1LL;
      v65 = 0LL;
      Handle = 0LL;
      v27 = *((_QWORD *)p_Lock + 176);
      if ( v27 )
      {
        v28 = *(_WORD *)(v27 + 8);
        if ( (v28 == 332 || v28 == 452) && v26 > 0x100000000LL )
          v26 = 0x100000000LL;
      }
      v29 = v26 << 12;
      v30 = 0x80000000;
      if ( LODWORD(v85[4]) )
      {
        v31 = LODWORD(v85[4]) - 1;
        if ( BYTE1(v85[6]) == 1 )
          v30 = -2147483646;
      }
      else
      {
        v31 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL);
      }
      v32 = v30 | 1;
      if ( (*v14 & 4) == 0 )
        v32 = v30;
      v33 = v11 << 12;
      v34 = 0LL;
      if ( v72 != 1 )
        v34 = v33;
      v78 = v34;
      if ( v72 != 1 )
        v32 |= 0x30u;
      v67 = v32;
      v35 = v70;
      while ( 2 )
      {
        PagesForMdl = 0LL;
        P = 0LL;
        v37 = v35 - v64;
        if ( v35 - v64 > 0xC0000 )
          v37 = 786432LL;
        v66 = v37;
        if ( v37 >= 0x10 && (v7 & 0x10) == 0 )
        {
          PagesForMdl = MiAllocatePagesForMdl(v25, 0LL, v29 - 4096, v33, v37 << 12, v68[18], v31, v32 | 0x42u);
          P = (_QWORD *)PagesForMdl;
          v37 = v66;
          v25 = v77;
          v32 = v67;
          v34 = v78;
          if ( !PagesForMdl )
            v7 |= 0x10u;
        }
        if ( PagesForMdl
          || (PagesForMdl = MiAllocatePagesForMdl(v25, 0LL, v29 - 4096, v34, v37 << 12, v68[18], v31, v32),
              (P = (_QWORD *)PagesForMdl) != 0LL) )
        {
          MiSortMdlFrames(PagesForMdl);
          v74 = (_QWORD *)(PagesForMdl + 48);
          v79 = (unsigned __int64)*(unsigned int *)(PagesForMdl + 40) >> 12;
          v82 = PagesForMdl + 8 * (v79 + 6);
          v81 = *(_QWORD *)(v82 - 8) / v76;
          while ( 1 )
          {
            v38 = (__int64)v71;
            if ( !v69 )
            {
              LOCK_ADDRESS_SPACE_SHARED((__int64)v71, (__int64)p_Lock);
              if ( (*((_DWORD *)p_Lock + 281) & 0x20) != 0 )
              {
                UNLOCK_ADDRESS_SPACE_SHARED(v38, (__int64)p_Lock);
                MiFreePagesFromMdl((ULONG_PTR)P, 0, v52);
                ExFreePoolWithTag(P, 0);
                v17 = -1073741558;
                v44 = v64;
                goto LABEL_90;
              }
            }
            v39 = v38;
            v40 = (__int64)v68;
            v41 = MiLockAwePagesShared((__int64)v68, v39);
            v42 = v41;
            if ( v81 < *(_QWORD *)(v40 + 16) )
              break;
            MiUnlockAweVadsShared((__int64)v71, v41);
            if ( !v69 )
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)v71, (__int64)p_Lock);
            v17 = MiResizeAweBitMap(v40);
            LODWORD(v66) = v17;
            if ( v17 < 0 && v81 >= *((_QWORD *)v68 + 2) )
            {
              MiFreePagesFromMdl((ULONG_PTR)P, 0, v43);
              ExFreePoolWithTag(P, 0);
              v44 = v64;
              goto LABEL_91;
            }
          }
          v45 = *(_QWORD *)(v40 + 24);
          v46 = v76;
          v47 = v76;
          v48 = v74;
          v49 = (_QWORD *)v82;
          do
          {
            _InterlockedOr((volatile signed __int32 *)(v45 + 4 * ((*v48 / v46) >> 5)), 1 << ((*v48 / v46) & 0x1F));
            v48 = &v74[v47];
            v74 = v48;
            v46 = v76;
          }
          while ( v48 != v49 );
          v50 = (__int64)v71;
          MiUnlockAweVadsShared((__int64)v71, v42);
          if ( !v69 )
            UNLOCK_ADDRESS_SPACE_SHARED(v50, (__int64)PROCESS);
          *P = v65;
          v65 = P;
          Handle = P;
          v25 = v77;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v77 + 7608), v79);
          v51 = v79 + v64;
          v64 = v51;
          v17 = 0;
          LODWORD(v66) = 0;
          v35 = v73;
          v70 = v73;
          p_Lock = (volatile signed __int64 *)&PROCESS->Header.Lock;
          if ( v51 != v73 )
          {
            v32 = v67;
            v34 = v78;
            continue;
          }
          v44 = v51;
        }
        else
        {
          v44 = v64;
          v17 = v64 == 0 ? 0xC000009A : 0;
LABEL_90:
          LODWORD(v66) = v17;
        }
        break;
      }
LABEL_91:
      if ( (v7 & 1) != 0 )
      {
        KeUnstackDetachProcess(&ApcState);
        v7 &= ~1u;
      }
      v53 = v72;
      if ( v17 >= 0 )
        *v83 = v44 / v72;
      v54 = v65;
      v55 = Address;
      while ( v54 )
      {
        v74 = v54 + 6;
        v56 = (unsigned __int64)*((unsigned int *)v54 + 10) >> 12;
        v79 = v56;
        for ( i = 0LL; ; i += v53 )
        {
          v84 = i;
          if ( i >= v56 )
            break;
          *v55++ = v54[i + 6];
          Address = v55;
        }
        v54 = (_QWORD *)*v54;
      }
      for ( j = v65; j; j = v59 )
      {
        v59 = (_QWORD *)*j;
        ExFreePoolWithTag(j, 0);
      }
      v12 = v70 - v64;
      v73 = v70 - v64;
      CurrentThread = v71;
      goto LABEL_106;
    }
  }
  return result;
}
