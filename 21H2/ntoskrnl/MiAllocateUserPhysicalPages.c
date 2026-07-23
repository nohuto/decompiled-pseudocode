/*
 * XREFs of MiAllocateUserPhysicalPages @ 0x1408D4E48
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1408D6920 (NtAllocateUserPhysicalPages.c)
 *     NtAllocateUserPhysicalPagesEx @ 0x1408D6940 (NtAllocateUserPhysicalPagesEx.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14027C780 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     MiChargeProcessCommitment @ 0x1402BF660 (MiChargeProcessCommitment.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403534E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExGetCallBackBlockRoutine @ 0x140381CB0 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiSortMdlFrames @ 0x14053451C (MiSortMdlFrames.c)
 *     MiGetAweInfoPartition @ 0x14054C5D4 (MiGetAweInfoPartition.c)
 *     MiLockAwePagesShared @ 0x14054D21C (MiLockAwePagesShared.c)
 *     MiReferenceAweHandle @ 0x14054DE8C (MiReferenceAweHandle.c)
 *     MiUnlockAweVadsShared @ 0x14054E20C (MiUnlockAweVadsShared.c)
 *     MiReturnProcessCommitment @ 0x140550984 (MiReturnProcessCommitment.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1406E8E98 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5C20 (MiCreateProcessDefaultAweInfo.c)
 *     MiResizeAweBitMap @ 0x1408D6644 (MiResizeAweBitMap.c)
 *     MiChargeProcessPhysicalPages @ 0x1408D7494 (MiChargeProcessPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  unsigned __int64 v43; // rsi
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  __int64 v46; // r10
  _QWORD *v47; // rax
  _QWORD *v48; // r11
  __int64 v49; // r13
  __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  _QWORD *v52; // rdx
  _QWORD *v53; // r10
  unsigned __int64 v54; // r9
  unsigned __int64 i; // r8
  _QWORD *j; // rax
  _QWORD *v57; // rsi
  void *v58; // rcx
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-198h]
  _QWORD *P; // [rsp+48h] [rbp-190h]
  PRKPROCESS PROCESS; // [rsp+50h] [rbp-188h] BYREF
  __int64 v62; // [rsp+58h] [rbp-180h]
  PVOID v63; // [rsp+60h] [rbp-178h]
  unsigned __int64 v64; // [rsp+68h] [rbp-170h]
  int v65; // [rsp+70h] [rbp-168h]
  _DWORD *v66; // [rsp+78h] [rbp-160h] BYREF
  __int64 v67; // [rsp+80h] [rbp-158h] BYREF
  unsigned __int64 v68; // [rsp+88h] [rbp-150h]
  struct _KTHREAD *v69; // [rsp+90h] [rbp-148h]
  unsigned __int64 v70; // [rsp+98h] [rbp-140h]
  unsigned __int64 v71; // [rsp+A0h] [rbp-138h]
  _QWORD *v72; // [rsp+A8h] [rbp-130h]
  HANDLE Handle; // [rsp+B0h] [rbp-128h]
  unsigned __int64 v74; // [rsp+B8h] [rbp-120h]
  __int64 v75; // [rsp+C0h] [rbp-118h]
  __int64 v76; // [rsp+C8h] [rbp-110h]
  unsigned __int64 v77; // [rsp+D0h] [rbp-108h]
  volatile void *Address; // [rsp+D8h] [rbp-100h]
  unsigned __int64 v79; // [rsp+E0h] [rbp-F8h]
  unsigned __int64 v80; // [rsp+E8h] [rbp-F0h]
  unsigned __int64 *v81; // [rsp+F0h] [rbp-E8h]
  unsigned __int64 v82; // [rsp+F8h] [rbp-E0h]
  _QWORD v83[10]; // [rsp+110h] [rbp-C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v81 = a2;
  Handle = a1;
  Address = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  v67 = 0LL;
  PROCESS = 0LL;
  memset(v83, 0, 0x48uLL);
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v69 = CurrentThread;
  v63 = CurrentThread->ApcState.Process;
  v9 = CurrentThread->PreviousMode;
  PreviousMode = v9;
  result = MiCaptureAllocateMapExtendedParameters(a4, ullMultiplicand, v9, 36, v83);
  if ( result >= 0 )
  {
    if ( (v83[7] & 0xFFFFFFFFFFFFFFF5uLL) != 0 || (v83[7] & 0xA) == 0xA )
      return -1073741811;
    v11 = (v83[7] & 2) != 0 ? 16LL : (unsigned __int64)(v83[7] & 8) << 6;
    v70 = v11;
    if ( LODWORD(v83[4]) > (unsigned __int16)KeNumberNodes )
      return -1073741811;
    if ( v9 )
    {
      v13 = (__int64)a2;
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      v12 = *a2;
      v68 = v12;
      v71 = v12;
      if ( !v12 )
        return 0;
      if ( v12 > 0x1FFFFFFFFFFFFFFFLL )
        return -1073741584;
      ProbeForWrite(Address, 8 * v12, 8u);
    }
    else
    {
      v12 = *a2;
      v68 = v12;
      v71 = v12;
      if ( !v12 )
        return 0;
    }
    v14 = 0LL;
    v66 = 0LL;
    result = MiReferenceAweHandle(Handle, 2u, v9, (PVOID *)&PROCESS, &v67);
    if ( result >= 0 )
    {
      if ( v67 )
      {
        v14 = *(_DWORD **)(MiSectionControlArea(v67) + 8);
        v66 = v14;
      }
      else
      {
        p_Lock = (volatile signed __int64 *)&PROCESS->Header.Lock;
        if ( PROCESS )
          goto LABEL_24;
        v7 = 8;
      }
      p_Lock = (volatile signed __int64 *)v63;
      PROCESS = (PRKPROCESS)v63;
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
          v58 = (void *)v67;
          if ( !v67 )
            v58 = (void *)p_Lock;
          ObfDereferenceObjectWithTag(v58, 0x68506D4Du);
        }
        return v17;
      }
      if ( p_Lock != v63 )
      {
        KeStackAttachProcess((PRKPROCESS)p_Lock, &ApcState);
        v7 |= 1u;
      }
      v62 = 0LL;
      if ( !v14 )
      {
        LOBYTE(v16) = PreviousMode;
        v17 = MiCreateProcessDefaultAweInfo(v16, &v66);
        if ( v17 < 0 )
          goto LABEL_106;
        v14 = v66;
      }
      v18 = ExGetCallBackBlockRoutine((__int64)v14);
      v74 = v18;
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
        v70 = v18;
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
        v68 = v19;
        v71 = v19;
      }
      if ( !v67 )
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
      v75 = AweInfoPartition;
      v26 = *(_QWORD *)(AweInfoPartition + 6920) + 1LL;
      v63 = 0LL;
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
      if ( LODWORD(v83[4]) )
      {
        v31 = LODWORD(v83[4]) - 1;
        if ( BYTE1(v83[6]) == 1 )
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
      if ( v70 != 1 )
        v34 = v33;
      v76 = v34;
      if ( v70 != 1 )
        v32 |= 0x30u;
      v65 = v32;
      v35 = v68;
      while ( 2 )
      {
        PagesForMdl = 0LL;
        P = 0LL;
        v37 = v35 - v62;
        if ( v35 - v62 > 0xC0000 )
          v37 = 786432LL;
        v64 = v37;
        if ( v37 >= 0x10 && (v7 & 0x10) == 0 )
        {
          PagesForMdl = MiAllocatePagesForMdl(v25, 0LL, v29 - 4096, v33, v37 << 12, v66[18], v31, v32 | 0x42u);
          P = (_QWORD *)PagesForMdl;
          v37 = v64;
          v25 = v75;
          v32 = v65;
          v34 = v76;
          if ( !PagesForMdl )
            v7 |= 0x10u;
        }
        if ( PagesForMdl
          || (PagesForMdl = MiAllocatePagesForMdl(v25, 0LL, v29 - 4096, v34, v37 << 12, v66[18], v31, v32),
              (P = (_QWORD *)PagesForMdl) != 0LL) )
        {
          MiSortMdlFrames(PagesForMdl);
          v72 = (_QWORD *)(PagesForMdl + 48);
          v77 = (unsigned __int64)*(unsigned int *)(PagesForMdl + 40) >> 12;
          v80 = PagesForMdl + 8 * (v77 + 6);
          v79 = *(_QWORD *)(v80 - 8) / v74;
          while ( 1 )
          {
            v38 = (__int64)v69;
            if ( !v67 )
            {
              LOCK_ADDRESS_SPACE_SHARED((__int64)v69, (__int64)p_Lock);
              if ( (*((_DWORD *)p_Lock + 281) & 0x20) != 0 )
              {
                UNLOCK_ADDRESS_SPACE_SHARED(v38, (__int64)p_Lock);
                MiFreePagesFromMdl((ULONG_PTR)P, 0);
                ExFreePoolWithTag(P, 0);
                v17 = -1073741558;
                v43 = v62;
                goto LABEL_90;
              }
            }
            v39 = v38;
            v40 = (__int64)v66;
            v41 = MiLockAwePagesShared((__int64)v66, v39);
            v42 = v41;
            if ( v79 < *(_QWORD *)(v40 + 16) )
              break;
            MiUnlockAweVadsShared((__int64)v69, v41);
            if ( !v67 )
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)v69, (__int64)p_Lock);
            v17 = MiResizeAweBitMap(v40);
            LODWORD(v64) = v17;
            if ( v17 < 0 && v79 >= *((_QWORD *)v66 + 2) )
            {
              MiFreePagesFromMdl((ULONG_PTR)P, 0);
              ExFreePoolWithTag(P, 0);
              v43 = v62;
              goto LABEL_91;
            }
          }
          v44 = *(_QWORD *)(v40 + 24);
          v45 = v74;
          v46 = v74;
          v47 = v72;
          v48 = (_QWORD *)v80;
          do
          {
            _InterlockedOr((volatile signed __int32 *)(v44 + 4 * ((*v47 / v45) >> 5)), 1 << ((*v47 / v45) & 0x1F));
            v47 = &v72[v46];
            v72 = v47;
            v45 = v74;
          }
          while ( v47 != v48 );
          v49 = (__int64)v69;
          MiUnlockAweVadsShared((__int64)v69, v42);
          if ( !v67 )
            UNLOCK_ADDRESS_SPACE_SHARED(v49, (__int64)PROCESS);
          *P = v63;
          v63 = P;
          Handle = P;
          v25 = v75;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v75 + 7608), v77);
          v50 = v77 + v62;
          v62 = v50;
          v17 = 0;
          LODWORD(v64) = 0;
          v35 = v71;
          v68 = v71;
          p_Lock = (volatile signed __int64 *)&PROCESS->Header.Lock;
          if ( v50 != v71 )
          {
            v32 = v65;
            v34 = v76;
            continue;
          }
          v43 = v50;
        }
        else
        {
          v43 = v62;
          v17 = v62 == 0 ? 0xC000009A : 0;
LABEL_90:
          LODWORD(v64) = v17;
        }
        break;
      }
LABEL_91:
      if ( (v7 & 1) != 0 )
      {
        KeUnstackDetachProcess(&ApcState);
        v7 &= ~1u;
      }
      v51 = v70;
      if ( v17 >= 0 )
        *v81 = v43 / v70;
      v52 = v63;
      v53 = Address;
      while ( v52 )
      {
        v72 = v52 + 6;
        v54 = (unsigned __int64)*((unsigned int *)v52 + 10) >> 12;
        v77 = v54;
        for ( i = 0LL; ; i += v51 )
        {
          v82 = i;
          if ( i >= v54 )
            break;
          *v53++ = v52[i + 6];
          Address = v53;
        }
        v52 = (_QWORD *)*v52;
      }
      for ( j = v63; j; j = v57 )
      {
        v57 = (_QWORD *)*j;
        ExFreePoolWithTag(j, 0);
      }
      v12 = v68 - v62;
      v71 = v68 - v62;
      CurrentThread = v69;
      goto LABEL_106;
    }
  }
  return result;
}
