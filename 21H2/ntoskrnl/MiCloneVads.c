/*
 * XREFs of MiCloneVads @ 0x140559568
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1408D91C0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiIsVadLargePrivate @ 0x14022B870 (MiIsVadLargePrivate.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140321710 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiReturnFullProcessCharges @ 0x1403230C0 (MiReturnFullProcessCharges.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140323130 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiLockAweVadsExclusive @ 0x14054D240 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054E238 (MiUnlockAweVadsExclusive.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiFreeForkMaps @ 0x14055AB74 (MiFreeForkMaps.c)
 *     MiInitializeForkMaps @ 0x14055B44C (MiInitializeForkMaps.c)
 *     MiInsertClone @ 0x14055B4B4 (MiInsertClone.c)
 *     MiUpdateForkMaps @ 0x14055B9E0 (MiUpdateForkMaps.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
 *     MiBuildNewCloneDescriptor @ 0x1408D9064 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x1408D9848 (MiFreeCloneDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCloneVads(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  _QWORD *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rdi
  unsigned __int64 *v10; // r15
  __int64 v11; // rdi
  int v12; // eax
  _QWORD *Pool; // rax
  _QWORD *v14; // rsi
  struct _KTHREAD *v15; // rcx
  LONG *SharedVm; // rbx
  KIRQL v17; // al
  struct _KTHREAD *v18; // rdi
  LONG *v19; // rbx
  unsigned __int64 j; // rdi
  unsigned __int64 *v21; // rbx
  int v22; // edi
  unsigned __int64 *v23; // r12
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  _QWORD **v27; // rax
  __int64 v28; // r15
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  unsigned __int64 v32; // rdi
  __int64 **Address; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // r10
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rbx
  LONG *v39; // rax
  LONG *v40; // r12
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // esi
  unsigned __int64 updated; // rax
  int v46; // ecx
  unsigned __int64 v47; // rcx
  bool v48; // cc
  __int64 v49; // rbx
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rsi
  int v52; // edx
  __int64 **LockedVadEvent; // rax
  __int64 v54; // r9
  size_t v55; // r8
  __int64 v56; // r12
  __int64 *v57; // rcx
  _QWORD *i; // rax
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // r14
  _QWORD *v61; // rbx
  _QWORD **v62; // rax
  unsigned __int64 v63; // rcx
  _QWORD *v64; // rcx
  LONG *v65; // rbx
  unsigned __int64 v66; // r15
  _QWORD *v67; // rbx
  KIRQL v69; // [rsp+80h] [rbp-80h]
  int v70; // [rsp+84h] [rbp-7Ch] BYREF
  int v71; // [rsp+88h] [rbp-78h]
  int v72; // [rsp+8Ch] [rbp-74h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  unsigned __int64 v74; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v75; // [rsp+A0h] [rbp-60h]
  _QWORD *v76; // [rsp+A8h] [rbp-58h]
  __int64 v77; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v80; // [rsp+C8h] [rbp-38h]
  _QWORD *v81; // [rsp+D0h] [rbp-30h]
  __int64 v82; // [rsp+D8h] [rbp-28h]
  _QWORD *v83; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v84; // [rsp+E8h] [rbp-18h]
  _QWORD *v85; // [rsp+F0h] [rbp-10h]
  unsigned __int64 *v86; // [rsp+F8h] [rbp-8h]
  _QWORD *v87; // [rsp+100h] [rbp+0h]
  _DWORD *v88; // [rsp+108h] [rbp+8h]
  _QWORD v89[10]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v90; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v91[24]; // [rsp+170h] [rbp+70h] BYREF

  v78 = a3;
  v7 = a1;
  v87 = a1;
  v82 = a4;
  v88 = a6;
  memset(v89, 0, 0x48uLL);
  memset(v91, 0, 0xB8uLL);
  v72 = 0;
  v77 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  v90 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    v9 = v7[159];
    if ( !v9 )
      v9 = 1LL;
    v79 = MiBuildNewCloneDescriptor(v7, v9, *(_QWORD *)(v7[210] + 360LL));
    v10 = (unsigned __int64 *)v79;
    if ( !v79 )
      return 3221225626LL;
    v11 = 32 * (v9 + 1);
    v12 = PsChargeProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v11);
    if ( v12 < 0 )
    {
      v22 = v12;
      goto LABEL_90;
    }
    Pool = MiAllocatePool(64, 0x70uLL, 0x64436D4Du);
    v85 = Pool;
    v14 = Pool;
    if ( !Pool )
    {
      PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v11);
      v22 = -1073741670;
LABEL_90:
      MiFreeCloneDescriptor(v7, v79);
      return (unsigned int)v22;
    }
    v15 = CurrentThread;
    Pool[8] = v11;
    MiLockAweVadsExclusive((__int64)v15);
    SharedVm = MiGetSharedVm((__int64)(v7 + 208));
    v17 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v69 = v17;
    if ( v7[159] <= v10[5] )
    {
      v18 = CurrentThread;
      *v14 = v78;
      v7[156] = v18;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v17);
      MiUnlockAweVadsExclusive((__int64)v18);
      v19 = MiGetSharedVm((__int64)(v7 + 208));
      ExAcquireSpinLockExclusive(v19);
      j = 0LL;
      v19[1] = 0;
      v21 = (unsigned __int64 *)v10[3];
      v86 = v21;
      if ( (unsigned int)MiInitializeForkMaps(a2, v89) )
      {
        v23 = v21;
        v75 = v21;
        v10[6] = 1LL;
        MiInsertClone(v7, v10, 1LL);
        v25 = *(_QWORD **)(a2 + 2008);
        LODWORD(v91[0]) = 1;
        v26 = 0LL;
        WORD2(v91[0]) = 0;
        v91[2] = 0LL;
        LODWORD(v91[1]) = 20;
        v91[3] = 0LL;
        while ( v25 )
        {
          v26 = v25;
          v25 = (_QWORD *)*v25;
        }
        if ( v26 )
        {
          do
          {
            v27 = (_QWORD **)v26[1];
            v28 = (__int64)v26;
            v83 = v26;
            v29 = v26;
            v81 = v26;
            if ( v27 )
            {
              v30 = *v27;
              v26 = v27;
              v76 = v27;
              if ( v30 )
              {
                do
                {
                  v31 = (_QWORD *)*v30;
                  v26 = v30;
                  v76 = v30;
                  v30 = v31;
                }
                while ( v31 );
              }
            }
            else
            {
              v26 = (_QWORD *)(v26[2] & 0xFFFFFFFFFFFFFFFCuLL);
              v76 = v26;
              if ( v26 )
              {
                do
                {
                  if ( (_QWORD *)*v26 == v29 )
                    break;
                  v29 = v26;
                  v26 = (_QWORD *)(v26[2] & 0xFFFFFFFFFFFFFFFCuLL);
                }
                while ( v26 );
                v76 = v26;
              }
            }
            v32 = (*(unsigned int *)(v28 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v28 + 32) << 32)) << 12;
            Address = MiLocateAddress(v32);
            v34 = *(unsigned int *)(v28 + 52);
            LODWORD(v34) = v34 & 0x7FFFFFFF;
            v35 = (unsigned __int64)*(unsigned __int8 *)(v28 + 34) << 31;
            v78 = (__int64)Address;
            v24 = v34 | v35;
            if ( v24 < 0x7FFFFFFFDLL && !(unsigned int)MiIsVadLargePrivate(v28) )
            {
              v37 = v36 + ((v32 >> 9) & 0x7FFFFFFFF8LL);
              v38 = v36
                  + 8
                  * ((*(unsigned int *)(v28 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v28 + 33) << 32)) & 0xFFFFFFFFFLL);
              v84 = v38;
              do
              {
                MiFlushTbList((__int64)v91, (_KPROCESS *)v24);
                if ( MiWorkingSetIsContended((__int64)(v7 + 208)) || KeShouldYieldProcessor() )
                {
                  v70 = 0;
                  v39 = MiGetSharedVm((__int64)(v7 + 208));
                  v40 = v39;
                  if ( (*v39 & 0x40000000) != 0 )
                  {
                    v71 = 1;
                    v39[1] = 1;
                  }
                  else
                  {
                    v71 = 0;
                  }
                  MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v69);
                  v44 = 0;
                  if ( v71 )
                  {
                    v70 = 0;
                    while ( v40[1] )
                    {
                      KeYieldProcessorEx(&v70, v41, v42, v43);
                      if ( (v70 & 0x3F) == 0 )
                      {
                        v44 = 1;
                        break;
                      }
                    }
                  }
                  ExAcquireSpinLockExclusive(v40);
                  if ( !v44 )
                    v40[1] = 0;
                  v23 = v75;
                }
                updated = MiUpdateForkMaps((unsigned int)v89, v37, v38, (unsigned int)&v77, (__int64)v7, v69);
                v46 = *(_DWORD *)(v28 + 48);
                v37 = updated;
                if ( (*(_BYTE *)(v28 + 48) & 0x70) != 0x50 )
                {
                  if ( updated > v38 )
                    break;
                  v47 = v38;
                  v48 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v38;
                  v49 = v89[8];
                  if ( v48 )
                    v47 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  v50 = v89[5] - updated;
                  v51 = v47;
                  do
                  {
                    if ( MiBuildForkPte(
                           (__int64)v7,
                           a2,
                           v37,
                           (_QWORD *)(v50 + v37),
                           v82,
                           v23,
                           &v77,
                           v49,
                           (__int64)v91,
                           v78,
                           (__int64)v81,
                           a5,
                           v69,
                           &v90,
                           &v72) )
                    {
                      v23 += 4;
                    }
                    v37 += 8LL;
                  }
                  while ( v37 <= v51 );
                  v38 = v84;
                  v28 = (__int64)v83;
                  v75 = v23;
                  v46 = *((_DWORD *)v83 + 12);
                }
              }
              while ( v37 <= v38 );
              v26 = v76;
              v24 = 3145728LL;
              if ( (v46 & 0x300000) == 0x300000 )
              {
                MiLocateLockedVadEvent(v28, 4);
                LockedVadEvent = MiLocateLockedVadEvent(v78, v52);
                memmove(*(void **)(v54 + 16), LockedVadEvent[2], v55);
              }
            }
            j = 0LL;
          }
          while ( v26 );
          v14 = v85;
          v10 = (unsigned __int64 *)v79;
        }
        MiFlushTbList((__int64)v91, (_KPROCESS *)v24);
        MiFreeForkMaps(v89);
        v56 = (char *)v23 - (char *)v86;
        v57 = (__int64 *)v10[7];
        *(_QWORD *)(a2 + 1272) += v77;
        v8 = v56 >> 5;
        v77 = *(_QWORD *)(a2 + 1272);
        if ( v8 )
        {
          *v57 = v8;
          v10[6] = v8;
          v10[5] = v8;
        }
        else
        {
          RtlAvlRemoveNode(v7 + 158, v10);
        }
        for ( i = (_QWORD *)v7[158]; i; i = (_QWORD *)*i )
          j = (unsigned __int64)i;
        if ( j )
        {
          v59 = v74;
          v60 = v80;
          do
          {
            if ( *(_QWORD *)(j + 48) )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(j + 56) + 8LL));
              v61 = (_QWORD *)*v14;
              v59 += v14[8];
              v60 += *(_QWORD *)(j + 64);
              *(_OWORD *)v14 = *(_OWORD *)j;
              *((_OWORD *)v14 + 1) = *(_OWORD *)(j + 16);
              *((_OWORD *)v14 + 2) = *(_OWORD *)(j + 32);
              *((_OWORD *)v14 + 3) = *(_OWORD *)(j + 48);
              *((_OWORD *)v14 + 4) = *(_OWORD *)(j + 64);
              *((_OWORD *)v14 + 5) = *(_OWORD *)(j + 80);
              *((_OWORD *)v14 + 6) = *(_OWORD *)(j + 96);
              MiInsertClone(a2, v14, 0LL);
              v14 = v61;
            }
            v62 = *(_QWORD ***)(j + 8);
            v63 = j;
            if ( v62 )
            {
              v64 = *v62;
              for ( j = *(_QWORD *)(j + 8); v64; v64 = (_QWORD *)*v64 )
                j = (unsigned __int64)v64;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v63 )
                  break;
                v63 = j;
              }
            }
          }
          while ( j );
          v80 = v60;
          v7 = v87;
          v74 = v59;
          v10 = (unsigned __int64 *)v79;
        }
        v22 = 0;
      }
      else
      {
        MiFreeForkMaps(v89);
        v22 = -1073741670;
      }
      MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v69);
      MiLockAweVadsExclusive((__int64)CurrentThread);
      v65 = MiGetSharedVm((__int64)(v7 + 208));
      ExAcquireSpinLockExclusive(v65);
      v65[1] = 0;
      v7[156] = 0LL;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v69);
      MiUnlockAweVadsExclusive((__int64)CurrentThread);
      if ( v14 )
      {
        v66 = v74;
        do
        {
          v66 += v14[8];
          v67 = (_QWORD *)*v14;
          ExFreePoolWithTag(v14, 0);
          v14 = v67;
        }
        while ( v67 );
        v74 = v66;
        v10 = (unsigned __int64 *)v79;
      }
      if ( v74 > v80 )
        PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v74 - v80);
      if ( (_QWORD)v90 )
        MiReturnFullProcessCommitment(a2);
      if ( *((_QWORD *)&v90 + 1) )
        MiReturnFullProcessCharges(a2, *((__int64 *)&v90 + 1));
      if ( !v8 || v22 < 0 )
        MiFreeCloneDescriptor(v7, v10);
      if ( v72 == 1 )
        *v88 = 1;
      return (unsigned int)v22;
    }
    MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v17);
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    MiFreeCloneDescriptor(v7, v10);
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v11);
    ExFreePoolWithTag(v14, 0);
  }
}
