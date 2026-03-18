/*
 * XREFs of MiAllocateUserPhysicalPages @ 0x1408D0398
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1408D1E70 (NtAllocateUserPhysicalPages.c)
 *     NtAllocateUserPhysicalPagesEx @ 0x1408D1E90 (NtAllocateUserPhysicalPagesEx.c)
 * Callees:
 *     MiChargeProcessCommitment @ 0x14021A6F0 (MiChargeProcessCommitment.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140264380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1402A4560 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     MiAllocatePagesForMdl @ 0x140342ADC (MiAllocatePagesForMdl.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     ExGetCallBackBlockRoutine @ 0x14037F340 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiSortMdlFrames @ 0x14052E7BC (MiSortMdlFrames.c)
 *     MiGetAweInfoPartition @ 0x140546874 (MiGetAweInfoPartition.c)
 *     MiLockAwePagesShared @ 0x1405474BC (MiLockAwePagesShared.c)
 *     MiReferenceAweHandle @ 0x14054812C (MiReferenceAweHandle.c)
 *     MiUnlockAweVadsShared @ 0x1405484AC (MiUnlockAweVadsShared.c)
 *     MiReturnProcessCommitment @ 0x14054AC54 (MiReturnProcessCommitment.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x14064DD78 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D1170 (MiCreateProcessDefaultAweInfo.c)
 *     MiResizeAweBitMap @ 0x1408D1B94 (MiResizeAweBitMap.c)
 *     MiChargeProcessPhysicalPages @ 0x1408D29E4 (MiChargeProcessPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  unsigned __int64 v42; // rsi
  __int64 v43; // r8
  unsigned __int64 v44; // rcx
  __int64 v45; // r10
  _QWORD *v46; // rax
  _QWORD *v47; // r11
  __int64 v48; // r13
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  _QWORD *v51; // rdx
  _QWORD *v52; // r10
  unsigned __int64 v53; // r9
  unsigned __int64 i; // r8
  _QWORD *j; // rax
  _QWORD *v56; // rsi
  void *v57; // rcx
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-198h]
  _QWORD *P; // [rsp+48h] [rbp-190h]
  PRKPROCESS PROCESS; // [rsp+50h] [rbp-188h] BYREF
  __int64 v61; // [rsp+58h] [rbp-180h]
  PVOID v62; // [rsp+60h] [rbp-178h]
  unsigned __int64 v63; // [rsp+68h] [rbp-170h]
  int v64; // [rsp+70h] [rbp-168h]
  _DWORD *v65; // [rsp+78h] [rbp-160h] BYREF
  __int64 v66; // [rsp+80h] [rbp-158h] BYREF
  unsigned __int64 v67; // [rsp+88h] [rbp-150h]
  struct _KTHREAD *v68; // [rsp+90h] [rbp-148h]
  unsigned __int64 v69; // [rsp+98h] [rbp-140h]
  unsigned __int64 v70; // [rsp+A0h] [rbp-138h]
  _QWORD *v71; // [rsp+A8h] [rbp-130h]
  HANDLE Handle; // [rsp+B0h] [rbp-128h]
  unsigned __int64 v73; // [rsp+B8h] [rbp-120h]
  __int64 v74; // [rsp+C0h] [rbp-118h]
  unsigned __int64 v75; // [rsp+C8h] [rbp-110h]
  unsigned __int64 v76; // [rsp+D0h] [rbp-108h]
  volatile void *Address; // [rsp+D8h] [rbp-100h]
  unsigned __int64 v78; // [rsp+E0h] [rbp-F8h]
  unsigned __int64 v79; // [rsp+E8h] [rbp-F0h]
  unsigned __int64 *v80; // [rsp+F0h] [rbp-E8h]
  unsigned __int64 v81; // [rsp+F8h] [rbp-E0h]
  _QWORD v82[10]; // [rsp+110h] [rbp-C8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v80 = a2;
  Handle = a1;
  Address = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  v66 = 0LL;
  PROCESS = 0LL;
  memset(v82, 0, 0x48uLL);
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v68 = CurrentThread;
  v62 = CurrentThread->ApcState.Process;
  v9 = CurrentThread->PreviousMode;
  PreviousMode = v9;
  result = MiCaptureAllocateMapExtendedParameters(a4, ullMultiplicand, v9, 36, v82);
  if ( result >= 0 )
  {
    if ( (v82[7] & 0xFFFFFFFFFFFFFFF5uLL) != 0 || (v82[7] & 0xA) == 0xA )
      return -1073741811;
    v11 = (v82[7] & 2) != 0 ? 16LL : (unsigned __int64)(v82[7] & 8) << 6;
    v69 = v11;
    if ( LODWORD(v82[4]) > (unsigned __int16)KeNumberNodes )
      return -1073741811;
    if ( v9 )
    {
      v13 = (__int64)a2;
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      v12 = *a2;
      v67 = v12;
      v70 = v12;
      if ( !v12 )
        return 0;
      if ( v12 > 0x1FFFFFFFFFFFFFFFLL )
        return -1073741584;
      ProbeForWrite(Address, 8 * v12, 8u);
    }
    else
    {
      v12 = *a2;
      v67 = v12;
      v70 = v12;
      if ( !v12 )
        return 0;
    }
    v14 = 0LL;
    v65 = 0LL;
    result = MiReferenceAweHandle(Handle, 2u, v9, (PVOID *)&PROCESS, &v66);
    if ( result >= 0 )
    {
      if ( v66 )
      {
        v14 = *(_DWORD **)(MiSectionControlArea(v66) + 8);
        v65 = v14;
      }
      else
      {
        p_Lock = (volatile signed __int64 *)&PROCESS->Header.Lock;
        if ( PROCESS )
          goto LABEL_24;
        v7 = 8;
      }
      p_Lock = (volatile signed __int64 *)v62;
      PROCESS = (PRKPROCESS)v62;
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
          v57 = (void *)v66;
          if ( !v66 )
            v57 = (void *)p_Lock;
          ObfDereferenceObjectWithTag(v57, 0x68506D4Du);
        }
        return v17;
      }
      if ( p_Lock != v62 )
      {
        KeStackAttachProcess((PRKPROCESS)p_Lock, &ApcState);
        v7 |= 1u;
      }
      v61 = 0LL;
      if ( !v14 )
      {
        LOBYTE(v16) = PreviousMode;
        v17 = MiCreateProcessDefaultAweInfo(v16, &v65);
        if ( v17 < 0 )
          goto LABEL_106;
        v14 = v65;
      }
      v18 = ExGetCallBackBlockRoutine((__int64)v14);
      v73 = v18;
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
        v69 = v18;
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
        v67 = v19;
        v70 = v19;
      }
      if ( !v66 )
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
      v74 = AweInfoPartition;
      v25 = *(_QWORD *)(AweInfoPartition + 6920) + 1LL;
      v62 = 0LL;
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
      if ( LODWORD(v82[4]) )
      {
        v30 = LODWORD(v82[4]) - 1;
        if ( BYTE1(v82[6]) == 1 )
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
      if ( v69 != 1 )
        v33 = v32;
      v75 = v33;
      if ( v69 != 1 )
        v31 |= 0x30u;
      v64 = v31;
      v34 = v67;
      while ( 2 )
      {
        PagesForMdl = 0LL;
        P = 0LL;
        v36 = v34 - v61;
        if ( v34 - v61 > 0xC0000 )
          v36 = 786432LL;
        v63 = v36;
        if ( v36 >= 0x10 && (v7 & 0x10) == 0 )
        {
          PagesForMdl = MiAllocatePagesForMdl(
                          AweInfoPartition,
                          0LL,
                          v28 - 4096,
                          v32,
                          v36 << 12,
                          v65[18],
                          v30,
                          v31 | 0x42u);
          P = (_QWORD *)PagesForMdl;
          v36 = v63;
          AweInfoPartition = v74;
          v31 = v64;
          v33 = v75;
          if ( !PagesForMdl )
            v7 |= 0x10u;
        }
        if ( PagesForMdl
          || (PagesForMdl = MiAllocatePagesForMdl(AweInfoPartition, 0LL, v28 - 4096, v33, v36 << 12, v65[18], v30, v31),
              (P = (_QWORD *)PagesForMdl) != 0LL) )
        {
          MiSortMdlFrames(PagesForMdl);
          v71 = (_QWORD *)(PagesForMdl + 48);
          v76 = (unsigned __int64)*(unsigned int *)(PagesForMdl + 40) >> 12;
          v79 = PagesForMdl + 8 * (v76 + 6);
          v78 = *(_QWORD *)(v79 - 8) / v73;
          while ( 1 )
          {
            v37 = (__int64)v68;
            if ( !v66 )
            {
              LOCK_ADDRESS_SPACE_SHARED((__int64)v68, (__int64)p_Lock);
              if ( (*((_DWORD *)p_Lock + 281) & 0x20) != 0 )
              {
                UNLOCK_ADDRESS_SPACE_SHARED(v37, (__int64)p_Lock);
                MiFreePagesFromMdl((ULONG_PTR)P, 0);
                ExFreePoolWithTag(P, 0);
                v17 = -1073741558;
                v42 = v61;
                goto LABEL_90;
              }
            }
            v38 = v37;
            v39 = (__int64)v65;
            v40 = MiLockAwePagesShared((__int64)v65, v38);
            v41 = v40;
            if ( v78 < *(_QWORD *)(v39 + 16) )
              break;
            MiUnlockAweVadsShared((__int64)v68, v40);
            if ( !v66 )
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)v68, (__int64)p_Lock);
            v17 = MiResizeAweBitMap(v39);
            LODWORD(v63) = v17;
            if ( v17 < 0 && v78 >= *((_QWORD *)v65 + 2) )
            {
              MiFreePagesFromMdl((ULONG_PTR)P, 0);
              ExFreePoolWithTag(P, 0);
              v42 = v61;
              goto LABEL_91;
            }
          }
          v43 = *(_QWORD *)(v39 + 24);
          v44 = v73;
          v45 = v73;
          v46 = v71;
          v47 = (_QWORD *)v79;
          do
          {
            _InterlockedOr((volatile signed __int32 *)(v43 + 4 * ((*v46 / v44) >> 5)), 1 << ((*v46 / v44) & 0x1F));
            v46 = &v71[v45];
            v71 = v46;
            v44 = v73;
          }
          while ( v46 != v47 );
          v48 = (__int64)v68;
          MiUnlockAweVadsShared((__int64)v68, v41);
          if ( !v66 )
            UNLOCK_ADDRESS_SPACE_SHARED(v48, (__int64)PROCESS);
          *P = v62;
          v62 = P;
          Handle = P;
          AweInfoPartition = v74;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v74 + 7608), v76);
          v49 = v76 + v61;
          v61 = v49;
          v17 = 0;
          LODWORD(v63) = 0;
          v34 = v70;
          v67 = v70;
          p_Lock = (volatile signed __int64 *)&PROCESS->Header.Lock;
          if ( v49 != v70 )
          {
            v31 = v64;
            v33 = v75;
            continue;
          }
          v42 = v49;
        }
        else
        {
          v42 = v61;
          v17 = v61 == 0 ? 0xC000009A : 0;
LABEL_90:
          LODWORD(v63) = v17;
        }
        break;
      }
LABEL_91:
      if ( (v7 & 1) != 0 )
      {
        KeUnstackDetachProcess(&ApcState);
        v7 &= ~1u;
      }
      v50 = v69;
      if ( v17 >= 0 )
        *v80 = v42 / v69;
      v51 = v62;
      v52 = Address;
      while ( v51 )
      {
        v71 = v51 + 6;
        v53 = (unsigned __int64)*((unsigned int *)v51 + 10) >> 12;
        v76 = v53;
        for ( i = 0LL; ; i += v50 )
        {
          v81 = i;
          if ( i >= v53 )
            break;
          *v52++ = v51[i + 6];
          Address = v52;
        }
        v51 = (_QWORD *)*v51;
      }
      for ( j = v62; j; j = v56 )
      {
        v56 = (_QWORD *)*j;
        ExFreePoolWithTag(j, 0);
      }
      v12 = v67 - v61;
      v70 = v67 - v61;
      CurrentThread = v68;
      goto LABEL_106;
    }
  }
  return result;
}
