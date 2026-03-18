/*
 * XREFs of MiAllocateUserPhysicalPages @ 0x14097BD88
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x14097D9A0 (NtAllocateUserPhysicalPages.c)
 *     NtAllocateUserPhysicalPagesEx @ 0x14097D9C0 (NtAllocateUserPhysicalPagesEx.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x140265428 (MiAllocatePagesForMdl.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14030EA00 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14030EB30 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiChargeProcessCommitment @ 0x14032A750 (MiChargeProcessCommitment.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeGetIdealNodeNumberThread @ 0x14056D710 (KeGetIdealNodeNumberThread.c)
 *     MiSortMdlFrames @ 0x14058A0E0 (MiSortMdlFrames.c)
 *     MiGetAweInfoPartition @ 0x1405AAEC8 (MiGetAweInfoPartition.c)
 *     MiGetAwePageSize @ 0x1405AAF90 (MiGetAwePageSize.c)
 *     MiLockAwePagesShared @ 0x1405AB994 (MiLockAwePagesShared.c)
 *     MiReferenceAweHandle @ 0x1405AC580 (MiReferenceAweHandle.c)
 *     MiUnlockAweVadsShared @ 0x1405AC910 (MiUnlockAweVadsShared.c)
 *     MiReturnProcessCommitment @ 0x1405B3370 (MiReturnProcessCommitment.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1407E72CC (MiCaptureAllocateMapExtendedParameters.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14097CC1C (MiCreateProcessDefaultAweInfo.c)
 *     MiResizeAweBitMap @ 0x14097D688 (MiResizeAweBitMap.c)
 *     MiChargeProcessPhysicalPages @ 0x14097F200 (MiChargeProcessPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

int __fastcall MiAllocateUserPhysicalPages(
        void *a1,
        unsigned __int64 *a2,
        volatile void *a3,
        unsigned __int64 *a4,
        unsigned int a5)
{
  char v7; // di
  struct _KTHREAD *CurrentThread; // r15
  char v9; // r13
  int result; // eax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r12
  volatile signed __int64 *v15; // r13
  __int64 v16; // rcx
  _DWORD *v17; // r9
  signed int v18; // r12d
  unsigned __int64 AwePageSize; // rax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 AweInfoPartition; // r10
  unsigned __int64 v26; // rsi
  __int16 v27; // cx
  bool v28; // al
  unsigned __int64 v29; // rsi
  unsigned int v30; // edx
  int IdealNodeNumberThread; // r15d
  int v32; // r8d
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rax
  __int64 PagesForMdl; // rcx
  unsigned __int64 v37; // rdx
  ULONG_PTR v38; // rax
  ULONG_PTR v39; // r9
  unsigned __int64 v40; // rsi
  __int64 v41; // r8
  unsigned __int64 v42; // rcx
  __int64 v43; // r10
  unsigned int *v44; // rax
  unsigned int *v45; // r11
  __int64 v46; // r13
  __int64 v47; // rcx
  unsigned __int64 v48; // r8
  _QWORD *v49; // rcx
  _QWORD *v50; // r10
  unsigned __int64 v51; // r9
  unsigned __int64 i; // rdx
  _QWORD *j; // rax
  _QWORD *v54; // rsi
  void *v55; // rcx
  KPROCESSOR_MODE PreviousMode; // [rsp+50h] [rbp-1A8h]
  unsigned int *P; // [rsp+58h] [rbp-1A0h]
  int v58; // [rsp+60h] [rbp-198h]
  PVOID Object; // [rsp+68h] [rbp-190h] BYREF
  __int64 v60; // [rsp+70h] [rbp-188h]
  PVOID Process; // [rsp+78h] [rbp-180h]
  unsigned __int64 v62; // [rsp+80h] [rbp-178h]
  __int64 v63; // [rsp+88h] [rbp-170h] BYREF
  unsigned __int64 v64; // [rsp+90h] [rbp-168h]
  struct _KTHREAD *v65; // [rsp+98h] [rbp-160h]
  __int64 v66; // [rsp+A0h] [rbp-158h] BYREF
  unsigned __int64 v67; // [rsp+A8h] [rbp-150h]
  __int64 v68; // [rsp+B0h] [rbp-148h]
  unsigned __int64 v69; // [rsp+B8h] [rbp-140h]
  unsigned int *v70; // [rsp+C0h] [rbp-138h]
  HANDLE Handle; // [rsp+C8h] [rbp-130h]
  unsigned __int64 v72; // [rsp+D0h] [rbp-128h]
  __int64 v73; // [rsp+D8h] [rbp-120h]
  unsigned __int64 v74; // [rsp+E0h] [rbp-118h]
  unsigned __int64 v75; // [rsp+E8h] [rbp-110h]
  volatile void *Address; // [rsp+F0h] [rbp-108h]
  unsigned __int64 v77; // [rsp+F8h] [rbp-100h]
  unsigned int *v78; // [rsp+100h] [rbp-F8h]
  unsigned __int64 *v79; // [rsp+108h] [rbp-F0h]
  unsigned __int64 v80; // [rsp+110h] [rbp-E8h]
  _QWORD v81[10]; // [rsp+130h] [rbp-C8h] BYREF
  _BYTE v82[48]; // [rsp+180h] [rbp-78h] BYREF

  v79 = a2;
  Handle = a1;
  Address = a3;
  memset(v82, 0, sizeof(v82));
  v66 = 0LL;
  Object = 0LL;
  memset(v81, 0, 0x48uLL);
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v65 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v9 = CurrentThread->PreviousMode;
  PreviousMode = v9;
  result = MiCaptureAllocateMapExtendedParameters(a4, a5, v9, 36, v81);
  if ( result >= 0 )
  {
    if ( (v81[7] & 0xFFFFFFFFFFFFFFE5uLL) != 0
      || (v81[7] & 0x1A) != 0 && (v81[7] & (unsigned __int8)((v81[7] & 0x1A) - 1) & 0x1A) != 0 )
    {
      return -1073741811;
    }
    if ( (v81[7] & 2) != 0 )
    {
      v11 = 16LL;
    }
    else if ( (v81[7] & 8) != 0 )
    {
      v11 = 512LL;
    }
    else if ( (v81[7] & 0x10) != 0 )
    {
      if ( !_bittest64(&KeFeatureBits, 0x25u) )
        return -1073741637;
      v11 = 0x40000LL;
    }
    else
    {
      v11 = 0LL;
    }
    v64 = v11;
    if ( LODWORD(v81[4]) > (unsigned __int16)KeNumberNodes )
      return -1073741811;
    if ( v9 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a2;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      v12 = *a2;
      v67 = v12;
      v69 = v12;
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
      v69 = v12;
      if ( !v12 )
        return 0;
    }
    v14 = 0LL;
    v63 = 0LL;
    result = MiReferenceAweHandle(Handle, 2u, v9, &Object, &v66);
    if ( result >= 0 )
    {
      if ( v66 )
      {
        v14 = *(_QWORD *)(MiSectionControlArea(v66) + 8);
        v63 = v14;
        v68 = v14;
      }
      else
      {
        v68 = 0LL;
        v15 = (volatile signed __int64 *)Object;
        if ( Object )
          goto LABEL_31;
        v7 = 8;
        v68 = 0LL;
      }
      v15 = (volatile signed __int64 *)Process;
      Object = Process;
LABEL_31:
      if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
      {
        v18 = -1073741727;
LABEL_117:
        if ( v12 )
        {
          if ( (v7 & 2) != 0 )
          {
            LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v15);
            MiReturnProcessCommitment((__int64)v15, v12);
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v15);
          }
          if ( (v7 & 4) != 0 )
          {
            _InterlockedExchangeAdd64(v15 + 254, -(__int64)v12);
            v15 = (volatile signed __int64 *)Object;
          }
        }
        if ( (v7 & 1) != 0 )
          KiUnstackDetachProcess((__int64)v82, 0LL);
        if ( (v7 & 8) == 0 )
        {
          v55 = (void *)v66;
          if ( !v66 )
            v55 = (void *)v15;
          ObfDereferenceObjectWithTag(v55, 0x68506D4Du);
        }
        return v18;
      }
      if ( v15 != Process )
      {
        KiStackAttachProcess((_KPROCESS *)v15, 0LL, (__int64)v82, v17);
        v7 |= 1u;
      }
      v60 = 0LL;
      if ( !v14 )
      {
        LOBYTE(v16) = PreviousMode;
        v18 = MiCreateProcessDefaultAweInfo(v16, &v63);
        if ( v18 < 0 )
          goto LABEL_117;
        v68 = (__int64)v15;
        v14 = v63;
      }
      AwePageSize = MiGetAwePageSize(v14);
      v72 = AwePageSize;
      if ( v11 )
      {
        if ( v11 <= AwePageSize || v11 % AwePageSize || ((v11 - 1) & v11) != 0 )
        {
          v18 = -1073741811;
          goto LABEL_117;
        }
      }
      else
      {
        v11 = AwePageSize;
        v64 = AwePageSize;
      }
      if ( v11 > 1 )
      {
        v20 = v11 * v12;
        if ( v12 >= v11 * v12 )
        {
          v18 = -1073741584;
          goto LABEL_117;
        }
        v12 *= v11;
        v67 = v20;
        v69 = v20;
      }
      if ( !v66 )
      {
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v15);
        if ( (*((_DWORD *)v15 + 281) & 0x20) != 0 )
        {
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v15);
          v18 = -1073741558;
          goto LABEL_117;
        }
        if ( !(unsigned int)MiChargeProcessPhysicalPages(v15, v12) )
        {
          v22 = (__int64)v15;
          v23 = (__int64)CurrentThread;
LABEL_52:
          UNLOCK_ADDRESS_SPACE_SHARED(v23, v22);
          v18 = -1073741523;
          goto LABEL_117;
        }
        v7 |= 4u;
        v24 = MiChargeProcessCommitment(v21, v12);
        v22 = (__int64)v15;
        v23 = (__int64)CurrentThread;
        if ( !v24 )
          goto LABEL_52;
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v15);
        v7 |= 2u;
      }
      AweInfoPartition = MiGetAweInfoPartition(v14);
      v73 = AweInfoPartition;
      v26 = *(_QWORD *)(AweInfoPartition + 16712) + 1LL;
      Process = 0LL;
      Handle = 0LL;
      if ( *((_QWORD *)v15 + 176) )
      {
        v27 = *((_WORD *)v15 + 1206);
        v28 = v27 == 332 || v27 == 452;
        if ( v28 && v26 > 0x100000000LL )
          v26 = 0x100000000LL;
      }
      v29 = v26 << 12;
      v30 = 0x80000000;
      if ( LODWORD(v81[4]) )
      {
        IdealNodeNumberThread = LODWORD(v81[4]) - 1;
        if ( BYTE1(v81[6]) )
          v30 = -2147483646;
      }
      else
      {
        IdealNodeNumberThread = (unsigned __int16)KeGetIdealNodeNumberThread((__int64)CurrentThread);
      }
      v32 = v30 | 1;
      if ( (*(_DWORD *)(v14 + 8) & 4) == 0 )
        v32 = v30;
      v58 = v32;
      v33 = v11 << 12;
      if ( v64 != 1 )
      {
        v32 |= 0x30u;
        v58 = v32;
      }
      v34 = 0LL;
      if ( v64 != 1 )
        v34 = v33;
      v74 = v34;
      v35 = v67;
      while ( 2 )
      {
        PagesForMdl = 0LL;
        P = 0LL;
        v37 = v35 - v60;
        if ( v35 - v60 > 0xC0000 )
          v37 = 786432LL;
        v62 = v37;
        if ( v37 >= 0x10 && (v7 & 0x10) == 0 )
        {
          PagesForMdl = MiAllocatePagesForMdl(
                          AweInfoPartition,
                          0LL,
                          v29 - 4096,
                          v33,
                          v37 << 12,
                          *(_DWORD *)(v14 + 80),
                          IdealNodeNumberThread,
                          v32 | 0x42u,
                          v68);
          P = (unsigned int *)PagesForMdl;
          v37 = v62;
          v32 = v58;
          v34 = v74;
          AweInfoPartition = v73;
          if ( !PagesForMdl )
            v7 |= 0x10u;
        }
        if ( PagesForMdl
          || (PagesForMdl = MiAllocatePagesForMdl(
                              AweInfoPartition,
                              0LL,
                              v29 - 4096,
                              v34,
                              v37 << 12,
                              *(_DWORD *)(v14 + 80),
                              IdealNodeNumberThread,
                              v32,
                              v68),
              (P = (unsigned int *)PagesForMdl) != 0LL) )
        {
          MiSortMdlFrames(PagesForMdl);
          v70 = P + 12;
          v75 = (unsigned __int64)P[10] >> 12;
          v78 = &P[2 * v75 + 12];
          v77 = *((_QWORD *)v78 - 1) / v72;
          while ( 1 )
          {
            if ( !v66 )
            {
              LOCK_ADDRESS_SPACE_SHARED((__int64)v65, (__int64)v15);
              if ( (*((_DWORD *)v15 + 281) & 0x20) != 0 )
              {
                UNLOCK_ADDRESS_SPACE_SHARED((__int64)v65, (__int64)v15);
                MiFreePagesFromMdl((ULONG_PTR)P, 0);
                ExFreePoolWithTag(P, 0);
                v18 = -1073741558;
                v40 = v60;
                goto LABEL_101;
              }
            }
            v38 = MiLockAwePagesShared(v14, (__int64)v65);
            v39 = v38;
            if ( v77 < *(_QWORD *)(v14 + 24) )
              break;
            MiUnlockAweVadsShared((__int64)v65, v38);
            if ( !v66 )
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)v65, (__int64)v15);
            v18 = MiResizeAweBitMap(v14);
            LODWORD(v62) = v18;
            if ( v18 < 0 && v77 >= *(_QWORD *)(v63 + 24) )
            {
              MiFreePagesFromMdl((ULONG_PTR)P, 0);
              ExFreePoolWithTag(P, 0);
              v40 = v60;
              goto LABEL_102;
            }
            v14 = v63;
          }
          v41 = *(_QWORD *)(v14 + 32);
          v42 = v72;
          v43 = 2 * v72;
          v44 = v70;
          v45 = v78;
          do
          {
            _InterlockedOr(
              (volatile signed __int32 *)(v41 + 4 * ((*(_QWORD *)v44 / v42) >> 5)),
              1 << ((*(_QWORD *)v44 / v42) & 0x1F));
            v44 = &v70[v43];
            v70 = v44;
            v42 = v72;
          }
          while ( v44 != v45 );
          v46 = (__int64)v65;
          MiUnlockAweVadsShared((__int64)v65, v39);
          if ( !v66 )
            UNLOCK_ADDRESS_SPACE_SHARED(v46, (__int64)Object);
          *(_QWORD *)P = Process;
          Process = P;
          Handle = P;
          AweInfoPartition = v73;
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v73 + 17512), v75);
          v47 = v75 + v60;
          v60 = v47;
          v18 = 0;
          LODWORD(v62) = 0;
          v35 = v69;
          v67 = v69;
          v15 = (volatile signed __int64 *)Object;
          if ( v47 != v69 )
          {
            v14 = v63;
            v32 = v58;
            v34 = v74;
            continue;
          }
          v40 = v47;
        }
        else
        {
          v40 = v60;
          v18 = v60 == 0 ? 0xC000009A : 0;
LABEL_101:
          LODWORD(v62) = v18;
        }
        break;
      }
LABEL_102:
      if ( (v7 & 1) != 0 )
      {
        KiUnstackDetachProcess((__int64)v82, 0LL);
        v7 &= ~1u;
      }
      v48 = v64;
      if ( v18 >= 0 )
        *v79 = v40 / v64;
      v49 = Process;
      v50 = Address;
      while ( v49 )
      {
        v70 = (unsigned int *)(v49 + 6);
        v51 = (unsigned __int64)*((unsigned int *)v49 + 10) >> 12;
        v75 = v51;
        for ( i = 0LL; ; i += v48 )
        {
          v80 = i;
          if ( i >= v51 )
            break;
          *v50++ = v49[i + 6];
          Address = v50;
        }
        v49 = (_QWORD *)*v49;
      }
      for ( j = Process; j; j = v54 )
      {
        v54 = (_QWORD *)*j;
        ExFreePoolWithTag(j, 0);
      }
      v12 = v67 - v60;
      v69 = v67 - v60;
      CurrentThread = v65;
      goto LABEL_117;
    }
  }
  return result;
}
