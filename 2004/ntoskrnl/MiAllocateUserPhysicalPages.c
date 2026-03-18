/*
 * XREFs of MiAllocateUserPhysicalPages @ 0x1408D16E8
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1408D31C0 (NtAllocateUserPhysicalPages.c)
 *     NtAllocateUserPhysicalPagesEx @ 0x1408D31E0 (NtAllocateUserPhysicalPagesEx.c)
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14020B330 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14024B530 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     MiChargeProcessCommitment @ 0x1402AD200 (MiChargeProcessCommitment.c)
 *     MiAllocatePagesForMdl @ 0x14031379C (MiAllocatePagesForMdl.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     ExGetCallBackBlockRoutine @ 0x14037FCA0 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiSortMdlFrames @ 0x14052EE0C (MiSortMdlFrames.c)
 *     MiGetAweInfoPartition @ 0x140546EC4 (MiGetAweInfoPartition.c)
 *     MiLockAwePagesShared @ 0x140547B0C (MiLockAwePagesShared.c)
 *     MiReferenceAweHandle @ 0x14054877C (MiReferenceAweHandle.c)
 *     MiUnlockAweVadsShared @ 0x140548AFC (MiUnlockAweVadsShared.c)
 *     MiReturnProcessCommitment @ 0x14054B2A4 (MiReturnProcessCommitment.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1406B6D58 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D24C0 (MiCreateProcessDefaultAweInfo.c)
 *     MiResizeAweBitMap @ 0x1408D2EE4 (MiResizeAweBitMap.c)
 *     MiChargeProcessPhysicalPages @ 0x1408D3D34 (MiChargeProcessPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  __int64 AweInfoPartition; // r10
  unsigned __int64 v25; // rsi
  __int64 v26; // rcx
  __int16 v27; // cx
  unsigned __int64 v28; // rsi
  unsigned int v29; // edx
  int v30; // r14d
  int v31; // r8d
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 PagesForMdl; // r12
  unsigned __int64 v36; // rcx
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // r12
  ULONG_PTR v40; // rax
  ULONG_PTR v41; // r9
  __int64 v42; // r8
  unsigned __int64 v43; // rsi
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  __int64 v46; // r10
  _QWORD *v47; // rax
  _QWORD *v48; // r11
  __int64 v49; // r13
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int64 v52; // rcx
  _QWORD *v53; // rdx
  _QWORD *v54; // r10
  unsigned __int64 v55; // r9
  unsigned __int64 i; // r8
  _QWORD *j; // rax
  _QWORD *v58; // rsi
  void *v59; // rcx
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-198h]
  _QWORD *P; // [rsp+48h] [rbp-190h]
  PRKPROCESS PROCESS; // [rsp+50h] [rbp-188h] BYREF
  __int64 v63; // [rsp+58h] [rbp-180h]
  PVOID v64; // [rsp+60h] [rbp-178h]
  unsigned __int64 v65; // [rsp+68h] [rbp-170h]
  int v66; // [rsp+70h] [rbp-168h]
  _DWORD *v67; // [rsp+78h] [rbp-160h] BYREF
  __int64 v68; // [rsp+80h] [rbp-158h] BYREF
  unsigned __int64 v69; // [rsp+88h] [rbp-150h]
  struct _KTHREAD *v70; // [rsp+90h] [rbp-148h]
  unsigned __int64 v71; // [rsp+98h] [rbp-140h]
  unsigned __int64 v72; // [rsp+A0h] [rbp-138h]
  _QWORD *v73; // [rsp+A8h] [rbp-130h]
  HANDLE Handle; // [rsp+B0h] [rbp-128h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-120h]
  __int64 v76; // [rsp+C0h] [rbp-118h]
  unsigned __int64 v77; // [rsp+C8h] [rbp-110h]
  unsigned __int64 v78; // [rsp+D0h] [rbp-108h]
  volatile void *Address; // [rsp+D8h] [rbp-100h]
  unsigned __int64 v80; // [rsp+E0h] [rbp-F8h]
  unsigned __int64 v81; // [rsp+E8h] [rbp-F0h]
  unsigned __int64 *v82; // [rsp+F0h] [rbp-E8h]
  unsigned __int64 v83; // [rsp+F8h] [rbp-E0h]
  _QWORD v84[10]; // [rsp+110h] [rbp-C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v82 = a2;
  Handle = a1;
  Address = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  v68 = 0LL;
  PROCESS = 0LL;
  memset(v84, 0, 0x48uLL);
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v70 = CurrentThread;
  v64 = CurrentThread->ApcState.Process;
  v9 = CurrentThread->PreviousMode;
  PreviousMode = v9;
  result = MiCaptureAllocateMapExtendedParameters(a4, ullMultiplicand, v9, 36, v84);
  if ( result >= 0 )
  {
    if ( (v84[7] & 0xFFFFFFFFFFFFFFF5uLL) != 0 || (v84[7] & 0xA) == 0xA )
      return -1073741811;
    v11 = (v84[7] & 2) != 0 ? 16LL : (unsigned __int64)(v84[7] & 8) << 6;
    v71 = v11;
    if ( LODWORD(v84[4]) > (unsigned __int16)KeNumberNodes )
      return -1073741811;
    if ( v9 )
    {
      v13 = (__int64)a2;
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      v12 = *a2;
      v69 = v12;
      v72 = v12;
      if ( !v12 )
        return 0;
      if ( v12 > 0x1FFFFFFFFFFFFFFFLL )
        return -1073741584;
      ProbeForWrite(Address, 8 * v12, 8u);
    }
    else
    {
      v12 = *a2;
      v69 = v12;
      v72 = v12;
      if ( !v12 )
        return 0;
    }
    v14 = 0LL;
    v67 = 0LL;
    result = MiReferenceAweHandle(Handle, 2u, v9, (PVOID *)&PROCESS, &v68);
    if ( result >= 0 )
    {
      if ( v68 )
      {
        v14 = *(_DWORD **)(MiSectionControlArea(v68) + 8);
        v67 = v14;
      }
      else
      {
        p_Lock = (volatile signed __int64 *)&PROCESS->Header.Lock;
        if ( PROCESS )
          goto LABEL_24;
        v7 = 8;
      }
      p_Lock = (volatile signed __int64 *)v64;
      PROCESS = (PRKPROCESS)v64;
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
          v59 = (void *)v68;
          if ( !v68 )
            v59 = (void *)p_Lock;
          ObfDereferenceObjectWithTag(v59, 0x68506D4Du);
        }
        return v17;
      }
      if ( p_Lock != v64 )
      {
        KeStackAttachProcess((PRKPROCESS)p_Lock, &ApcState);
        v7 |= 1u;
      }
      v63 = 0LL;
      if ( !v14 )
      {
        LOBYTE(v16) = PreviousMode;
        v17 = MiCreateProcessDefaultAweInfo(v16, &v67);
        if ( v17 < 0 )
          goto LABEL_106;
        v14 = v67;
      }
      v18 = ExGetCallBackBlockRoutine((__int64)v14);
      v75 = v18;
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
        v71 = v18;
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
        v69 = v19;
        v72 = v19;
      }
      if ( !v68 )
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
      v76 = AweInfoPartition;
      v25 = *(_QWORD *)(AweInfoPartition + 6920) + 1LL;
      v64 = 0LL;
      Handle = 0LL;
      v26 = *((_QWORD *)p_Lock + 176);
      if ( v26 )
      {
        v27 = *(_WORD *)(v26 + 8);
        if ( (v27 == 332 || v27 == 452) && v25 > 0x100000000LL )
          v25 = 0x100000000LL;
      }
      v28 = v25 << 12;
      v29 = 0x80000000;
      if ( LODWORD(v84[4]) )
      {
        v30 = LODWORD(v84[4]) - 1;
        if ( BYTE1(v84[6]) == 1 )
          v29 = -2147483646;
      }
      else
      {
        v30 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL);
      }
      v31 = v29 | 1;
      if ( (*v14 & 4) == 0 )
        v31 = v29;
      v32 = v11 << 12;
      v33 = 0LL;
      if ( v71 != 1 )
        v33 = v32;
      v77 = v33;
      if ( v71 != 1 )
        v31 |= 0x30u;
      v66 = v31;
      v34 = v69;
      while ( 2 )
      {
        PagesForMdl = 0LL;
        P = 0LL;
        v36 = v34 - v63;
        if ( v34 - v63 > 0xC0000 )
          v36 = 786432LL;
        v65 = v36;
        if ( v36 >= 0x10 && (v7 & 0x10) == 0 )
        {
          PagesForMdl = MiAllocatePagesForMdl(
                          AweInfoPartition,
                          0LL,
                          v28 - 4096,
                          v32,
                          v36 << 12,
                          v67[18],
                          v30,
                          v31 | 0x42u);
          P = (_QWORD *)PagesForMdl;
          v36 = v65;
          AweInfoPartition = v76;
          v31 = v66;
          v33 = v77;
          if ( !PagesForMdl )
            v7 |= 0x10u;
        }
        if ( PagesForMdl
          || (PagesForMdl = MiAllocatePagesForMdl(AweInfoPartition, 0LL, v28 - 4096, v33, v36 << 12, v67[18], v30, v31),
              (P = (_QWORD *)PagesForMdl) != 0LL) )
        {
          MiSortMdlFrames(PagesForMdl);
          v73 = (_QWORD *)(PagesForMdl + 48);
          v78 = (unsigned __int64)*(unsigned int *)(PagesForMdl + 40) >> 12;
          v81 = PagesForMdl + 8 * (v78 + 6);
          v80 = *(_QWORD *)(v81 - 8) / v75;
          while ( 1 )
          {
            v37 = (__int64)v70;
            if ( !v68 )
            {
              LOCK_ADDRESS_SPACE_SHARED((__int64)v70, (__int64)p_Lock);
              if ( (*((_DWORD *)p_Lock + 281) & 0x20) != 0 )
              {
                UNLOCK_ADDRESS_SPACE_SHARED(v37, (__int64)p_Lock);
                MiFreePagesFromMdl((ULONG_PTR)P, 0, v51);
                ExFreePoolWithTag(P, 0);
                v17 = -1073741558;
                v43 = v63;
                goto LABEL_90;
              }
            }
            v38 = v37;
            v39 = (__int64)v67;
            v40 = MiLockAwePagesShared((__int64)v67, v38);
            v41 = v40;
            if ( v80 < *(_QWORD *)(v39 + 16) )
              break;
            MiUnlockAweVadsShared((__int64)v70, v40);
            if ( !v68 )
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)v70, (__int64)p_Lock);
            v17 = MiResizeAweBitMap(v39);
            LODWORD(v65) = v17;
            if ( v17 < 0 && v80 >= *((_QWORD *)v67 + 2) )
            {
              MiFreePagesFromMdl((ULONG_PTR)P, 0, v42);
              ExFreePoolWithTag(P, 0);
              v43 = v63;
              goto LABEL_91;
            }
          }
          v44 = *(_QWORD *)(v39 + 24);
          v45 = v75;
          v46 = v75;
          v47 = v73;
          v48 = (_QWORD *)v81;
          do
          {
            _InterlockedOr((volatile signed __int32 *)(v44 + 4 * ((*v47 / v45) >> 5)), 1 << ((*v47 / v45) & 0x1F));
            v47 = &v73[v46];
            v73 = v47;
            v45 = v75;
          }
          while ( v47 != v48 );
          v49 = (__int64)v70;
          MiUnlockAweVadsShared((__int64)v70, v41);
          if ( !v68 )
            UNLOCK_ADDRESS_SPACE_SHARED(v49, (__int64)PROCESS);
          *P = v64;
          v64 = P;
          Handle = P;
          AweInfoPartition = v76;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v76 + 7608), v78);
          v50 = v78 + v63;
          v63 = v50;
          v17 = 0;
          LODWORD(v65) = 0;
          v34 = v72;
          v69 = v72;
          p_Lock = (volatile signed __int64 *)&PROCESS->Header.Lock;
          if ( v50 != v72 )
          {
            v31 = v66;
            v33 = v77;
            continue;
          }
          v43 = v50;
        }
        else
        {
          v43 = v63;
          v17 = v63 == 0 ? 0xC000009A : 0;
LABEL_90:
          LODWORD(v65) = v17;
        }
        break;
      }
LABEL_91:
      if ( (v7 & 1) != 0 )
      {
        KeUnstackDetachProcess(&ApcState);
        v7 &= ~1u;
      }
      v52 = v71;
      if ( v17 >= 0 )
        *v82 = v43 / v71;
      v53 = v64;
      v54 = Address;
      while ( v53 )
      {
        v73 = v53 + 6;
        v55 = (unsigned __int64)*((unsigned int *)v53 + 10) >> 12;
        v78 = v55;
        for ( i = 0LL; ; i += v52 )
        {
          v83 = i;
          if ( i >= v55 )
            break;
          *v54++ = v53[i + 6];
          Address = v54;
        }
        v53 = (_QWORD *)*v53;
      }
      for ( j = v64; j; j = v58 )
      {
        v58 = (_QWORD *)*j;
        ExFreePoolWithTag(j, 0);
      }
      v12 = v69 - v63;
      v72 = v69 - v63;
      CurrentThread = v70;
      goto LABEL_106;
    }
  }
  return result;
}
