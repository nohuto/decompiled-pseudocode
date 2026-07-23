/*
 * XREFs of PiPnpRtlObjectEventWorker @ 0x14072EEE0
 * Callers:
 *     PiDqIrpPropertySet @ 0x140712180 (PiDqIrpPropertySet.c)
 *     PiPnpRtlObjectEventCallback @ 0x14072EEB0 (PiPnpRtlObjectEventCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402E5430 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402E5E00 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1406A5E50 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlEndOperation @ 0x1406A5E98 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406A6604 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1406A7234 (PiPnpRtlObjectEventCreate.c)
 *     PnpAllocatePWSTR @ 0x1406AA0A8 (PnpAllocatePWSTR.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14072DF88 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectProcessPropertyChange @ 0x14072F324 (PiDmObjectProcessPropertyChange.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x14074FFE4 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1408A0470 (PiDqObjectManagerMakeInconsistent.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall PiPnpRtlObjectEventWorker(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  struct _KTHREAD *v9; // rax
  int PWSTR; // r15d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rdx
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // rbx
  struct _KTHREAD *v18; // rax
  _DWORD *v19; // rcx
  __int128 *v20; // rax
  const wchar_t *v21; // rdi
  __int128 v22; // xmm0
  unsigned int v23; // r13d
  int v24; // eax
  char *v25; // rcx
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  const wchar_t *v33; // rdx
  _DWORD *PoolWithTag; // rax
  _DWORD *v35; // rbx
  _RTL_AVL_TABLE *v36; // rcx
  ULONG_PTR v37; // rcx
  struct _KTHREAD *v38; // rax
  __int64 v39; // rcx
  int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int *v44; // r8
  struct _KTHREAD *v45; // rax
  struct _KTHREAD *v46; // rax
  __int64 *i; // rdi
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  char *v51; // rbx
  char *v52; // rbx
  char *v53; // rax
  char **v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // eax
  __int64 *v59; // rax
  __int64 v60; // rbx
  _QWORD *v61; // rbx
  void **v62; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v64; // rbx
  char *v65; // rbx
  char *v66; // rax
  char **v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 ObjectManagerForPnpObjectType; // rax
  void *Src; // [rsp+30h] [rbp-40h] BYREF
  char v73[8]; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int128 v75; // [rsp+48h] [rbp-28h]
  __int128 v76; // [rsp+58h] [rbp-18h] BYREF

  if ( a2 < 7 )
  {
    P = 0LL;
    Src = 0LL;
    v73[0] = 0;
    if ( a3 == 1 )
      goto LABEL_59;
    if ( (int)PiPnpRtlBeginOperation(&P) < 0
      || (v9 = KeGetCurrentThread(),
          --v9->KernelApcDisable,
          ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u),
          PWSTR = PiPnpRtlObjectEventCreate(a1, a2, (__int64)P, (char **)&Src),
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock),
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13),
          PWSTR < 0) )
    {
      v14 = Src;
LABEL_54:
      if ( !v14 )
        goto LABEL_59;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
      if ( *((_QWORD *)Src + 7) )
      {
LABEL_58:
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v68, v69, v70);
LABEL_59:
        ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType((unsigned int)a2);
        if ( ObjectManagerForPnpObjectType )
          PiDqObjectManagerMakeInconsistent(ObjectManagerForPnpObjectType);
        goto LABEL_21;
      }
      v64 = (char *)P;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
      v65 = v64 + 128;
      v66 = (char *)Src + 56;
      v67 = (char **)*((_QWORD *)v65 + 1);
      if ( *v67 == v65 )
      {
        *(_QWORD *)v66 = v65;
        *((_QWORD *)v66 + 1) = v67;
        *v67 = v66;
        *((_QWORD *)v65 + 1) = v66;
        goto LABEL_58;
      }
LABEL_61:
      __fastfail(3u);
    }
    v14 = Src;
    if ( Src )
    {
      v15 = a3 - 2;
      if ( !v15 )
      {
        *((_DWORD *)Src + 1) |= 1u;
        goto LABEL_19;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        *((_DWORD *)Src + 1) |= 2u;
        v37 = *((_QWORD *)Src + 1);
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v37, 0LL);
        v39 = *((_QWORD *)Src + 1);
        v40 = *(_DWORD *)(v39 + 32);
        *(_DWORD *)(v39 + 32) = v40 & 0xFFFFFFFE;
        ExReleasePushLockEx(*((_QWORD *)Src + 1), 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v41, v42, v43);
        if ( (v40 & 1) != 0 )
          PiDmRemoveCacheReferenceForObject(a2, a1, v44);
        v45 = KeGetCurrentThread();
        --v45->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        v46 = KeGetCurrentThread();
        --v46->KernelApcDisable;
        ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
        for ( i = (__int64 *)PiPnpRtlActiveOperations; i != &PiPnpRtlActiveOperations; i = (__int64 *)*i )
        {
          if ( i != P )
          {
            v59 = (__int64 *)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), &Src);
            if ( v59 )
            {
              v60 = *v59;
              RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(i + 3), v59);
              v61 = (_QWORD *)(v60 + 56);
              v62 = (void **)i[17];
              if ( *v62 != i + 16 )
                goto LABEL_61;
              *v61 = i + 16;
              v61[1] = v62;
              *v62 = v61;
              i[17] = (__int64)v61;
            }
          }
        }
        ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v48, v49, v50);
        PiPnpRtlObjectEventDispatch((__int64)Src);
        v51 = (char *)P;
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)((char *)P + 24), &Src);
        v52 = v51 + 128;
        v53 = (char *)Src + 56;
        v54 = (char **)*((_QWORD *)v52 + 1);
        if ( *v54 != v52 )
          goto LABEL_61;
        *((_QWORD *)Src + 8) = v54;
        *(_QWORD *)v53 = v52;
        *v54 = v53;
        *((_QWORD *)v52 + 1) = v53;
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v55, v56, v57);
        v14 = 0LL;
        Src = 0LL;
        goto LABEL_20;
      }
      v17 = (unsigned int)(v16 - 1);
      if ( !(_DWORD)v17 )
      {
        PiDmObjectProcessPropertyChange(
          a2,
          a1,
          *((_QWORD *)Src + 1),
          *(_QWORD *)(a4 + 8),
          *(_QWORD *)(a4 + 16),
          (__int64)v73);
        if ( v73[0] )
        {
LABEL_19:
          v14 = Src;
          goto LABEL_20;
        }
        v18 = KeGetCurrentThread();
        --v18->KernelApcDisable;
        ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
        v19 = Src;
        if ( !*((_QWORD *)Src + 7) )
        {
          v20 = *(__int128 **)(a4 + 16);
          v21 = *(const wchar_t **)(a4 + 8);
          v22 = *v20;
          v23 = *((_DWORD *)v20 + 4);
          *(_QWORD *)&v76 = __PAIR64__(a5, v23);
          v75 = v22;
          *((_QWORD *)&v76 + 1) = v21;
          if ( *((_DWORD *)Src + 19) )
          {
            do
            {
              if ( v23 == v19[8 * v17 + 24] )
              {
                v31 = 8LL * (unsigned int)v17;
                v32 = v75 - *(_QWORD *)&v19[v31 + 20];
                if ( (_QWORD)v75 == *(_QWORD *)&v19[v31 + 20] )
                  v32 = *((_QWORD *)&v75 + 1) - *(_QWORD *)&v19[v31 + 22];
                if ( !v32 && a5 == v19[v31 + 25] )
                {
                  v33 = *(const wchar_t **)&v19[v31 + 26];
                  if ( v21 == v33 )
                    goto LABEL_18;
                  if ( v21 && v33 )
                  {
                    if ( !wcsicmp(v21, v33) )
                      goto LABEL_18;
                    v19 = Src;
                  }
                }
              }
              v17 = (unsigned int)(v17 + 1);
            }
            while ( (unsigned int)v17 < v19[19] );
          }
          if ( a5 == 1 )
          {
            v58 = v19[1];
            if ( (v58 & 4) == 0 )
            {
              v19[1] = v58 | 4;
              SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)((char *)Src + 24));
              v19 = Src;
            }
          }
          v24 = v19[18];
          if ( v19[19] != v24 )
            goto LABEL_16;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * (unsigned int)(2 * v24) + 80, 0x41706E50u);
          v35 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src, 32LL * *((unsigned int *)Src + 19) + 80);
            v36 = (_RTL_AVL_TABLE *)((char *)P + 24);
            v35[18] *= 2;
            *(_QWORD *)RtlLookupElementGenericTableAvl(v36, &Src) = v35;
            ExFreePoolWithTag(Src, 0x41706E50u);
            Src = v35;
LABEL_16:
            PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a4 + 8), 0x7FFFFFFFuLL, 0x41706E50u, (PVOID *)&v76 + 1);
            if ( PWSTR >= 0 )
            {
              v25 = (char *)Src;
              v26 = v76;
              v27 = 32LL * *((unsigned int *)Src + 19);
              *(_OWORD *)((char *)Src + v27 + 80) = v75;
              *(_OWORD *)&v25[v27 + 96] = v26;
              ++*((_DWORD *)Src + 19);
            }
            goto LABEL_18;
          }
          PWSTR = -1073741670;
        }
LABEL_18:
        ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29, v30);
        goto LABEL_19;
      }
      if ( (_DWORD)v17 == 1 )
      {
        *((_DWORD *)Src + 1) |= 8u;
        goto LABEL_19;
      }
    }
LABEL_20:
    if ( PWSTR >= 0 )
    {
LABEL_21:
      if ( P )
        PiPnpRtlEndOperation((PVOID **)P);
      return;
    }
    goto LABEL_54;
  }
}
