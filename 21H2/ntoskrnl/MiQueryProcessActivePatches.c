/*
 * XREFs of MiQueryProcessActivePatches @ 0x1408CDEE8
 * Callers:
 *     NtManageHotPatch @ 0x1408CED40 (NtManageHotPatch.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1408C9C58 (MiFillActivePatchesQueryBuffer.c)
 *     MiGetProcessHotPatchContext @ 0x1408CA1F8 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x1408CABA0 (MiIsActiveSystemHotPatch.c)
 */

__int64 __fastcall MiQueryProcessActivePatches(
        HANDLE Handle,
        __int64 *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5,
        KPROCESSOR_MODE AccessMode)
{
  __int64 *v6; // rsi
  _DWORD *v7; // r13
  unsigned int v8; // ebx
  unsigned __int64 j; // rdi
  unsigned __int64 k; // r14
  __int64 v11; // r15
  unsigned int v12; // r12d
  struct _KTHREAD *Lock; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v17; // rdx
  _QWORD **v18; // rax
  _QWORD *v19; // rdx
  PVOID *v20; // rcx
  PVOID *v21; // rdx
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  void *v24; // r13
  signed __int64 v25; // r10
  unsigned int v26; // esi
  BOOLEAN v27; // al
  _DWORD *v28; // r9
  _QWORD *ProcessHotPatchContext; // rax
  unsigned __int64 v30; // r13
  __int64 v31; // rcx
  unsigned __int64 n; // rcx
  _QWORD **v33; // rax
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rdx
  unsigned __int64 v36; // r15
  int v37; // r13d
  _QWORD *Pool; // rax
  __int64 v39; // rsi
  HANDLE v40; // r9
  __int64 v41; // r8
  __int64 v42; // r15
  __int64 v43; // rdx
  _QWORD **v44; // rax
  unsigned __int64 v45; // rcx
  _QWORD *v46; // rcx
  PVOID *m; // rdi
  __int64 v48; // rdx
  __int64 v49; // r8
  _DWORD *v50; // rcx
  _QWORD **v51; // rax
  unsigned __int64 v52; // rcx
  _QWORD *v53; // rcx
  struct _KTHREAD *v54; // r14
  _QWORD *v55; // rdi
  __int64 v57; // [rsp+50h] [rbp-89h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-81h]
  __int64 *v59; // [rsp+60h] [rbp-79h]
  _DWORD *v60; // [rsp+68h] [rbp-71h]
  __int64 v61; // [rsp+70h] [rbp-69h] BYREF
  __int64 v62; // [rsp+78h] [rbp-61h] BYREF
  __int64 v63; // [rsp+80h] [rbp-59h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-51h]
  PVOID Object; // [rsp+90h] [rbp-49h] BYREF
  _QWORD *v66; // [rsp+98h] [rbp-41h]
  __int64 v67; // [rsp+A0h] [rbp-39h]
  HANDLE v68; // [rsp+A8h] [rbp-31h]
  _OWORD v69[3]; // [rsp+B0h] [rbp-29h] BYREF

  v59 = a2;
  v68 = Handle;
  v6 = a2;
  v67 = a4;
  v60 = a3;
  v57 = 0LL;
  v7 = a3;
  DmaAdapter = 0LL;
  LOBYTE(v8) = 0;
  v66 = 0LL;
  j = 0LL;
  k = 0LL;
  v11 = 0LL;
  v12 = 0;
  memset(v69, 0, sizeof(v69));
  CurrentThread = KeGetCurrentThread();
  if ( !Handle )
  {
    v8 = 8;
    Lock = MmAcquireLoadLock();
    v14 = (_QWORD *)MiSecureImageActivePatches;
    v15 = 0LL;
    CurrentThread = Lock;
    while ( v14 )
    {
      k = (unsigned __int64)v14;
      v14 = (_QWORD *)*v14;
    }
    i = k;
    while ( i )
    {
      ++v12;
      v17 = i;
      v11 += *(unsigned __int16 *)(i + 48) + 24LL;
      v18 = *(_QWORD ***)(i + 8);
      if ( v18 )
      {
        v19 = *v18;
        for ( i = *(_QWORD *)(i + 8); v19; v19 = (_QWORD *)*v19 )
          i = (unsigned __int64)v19;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v17 )
            break;
          v17 = i;
        }
      }
    }
    v20 = (PVOID *)PsLoadedModuleList;
    v21 = &PsLoadedModuleList;
    while ( v20 != v21 )
    {
      if ( MiIsActiveSystemHotPatch((__int64)v20) )
      {
        ++v12;
        v11 += *(unsigned __int16 *)(v22 + 72) + 24LL;
      }
      v20 = *(PVOID **)v22;
    }
LABEL_40:
    v36 = v11 + 40;
    if ( a5 >= v36 )
    {
      v37 = v36;
      Pool = MiAllocatePool(256, (unsigned int)v36, 0x71486D4Du);
      v25 = 0LL;
      v39 = (__int64)Pool;
      if ( Pool )
      {
        v40 = v68;
        Pool[1] = v68;
        *(_DWORD *)Pool = 2;
        if ( v12 )
        {
          v41 = (__int64)(Pool + 5);
          v42 = (__int64)Pool - v67;
          v43 = (__int64)&Pool[2 * v12 + 5];
          v62 = (__int64)(Pool + 5);
          v63 = v43;
          Pool[3] = Pool + 5;
          Pool[4] = v43;
          v61 = v43 + 8LL * v12;
          if ( v40 )
          {
            while ( j )
            {
              if ( *(_DWORD *)(j + 88) )
              {
                MiFillActivePatchesQueryBuffer(
                  v39,
                  v43,
                  v41,
                  v42,
                  (_QWORD **)&v63,
                  (UNICODE_STRING **)&v62,
                  (wchar_t **)&v61,
                  (_QWORD *)(j + 48),
                  (PCUNICODE_STRING)(j + 64));
                v25 = 0LL;
              }
              v51 = *(_QWORD ***)(j + 8);
              v52 = j;
              if ( v51 )
              {
                v53 = *v51;
                for ( j = *(_QWORD *)(j + 8); v53; v53 = (_QWORD *)*v53 )
                  j = (unsigned __int64)v53;
              }
              else
              {
                while ( 1 )
                {
                  j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !j || *(_QWORD *)j == v52 )
                    break;
                  v52 = j;
                }
              }
            }
          }
          else
          {
            while ( k )
            {
              v57 = *(_QWORD *)(k + 24);
              MiFillActivePatchesQueryBuffer(
                v39,
                v43,
                v41,
                v42,
                (_QWORD **)&v63,
                (UNICODE_STRING **)&v62,
                (wchar_t **)&v61,
                &v57,
                (PCUNICODE_STRING)(k + 48));
              v44 = *(_QWORD ***)(k + 8);
              v25 = 0LL;
              v45 = k;
              if ( v44 )
              {
                v46 = *v44;
                for ( k = *(_QWORD *)(k + 8); v46; v46 = (_QWORD *)*v46 )
                  k = (unsigned __int64)v46;
              }
              else
              {
                while ( 1 )
                {
                  k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !k || *(_QWORD *)k == v45 )
                    break;
                  v45 = k;
                }
              }
            }
            for ( m = (PVOID *)PsLoadedModuleList; m != &PsLoadedModuleList; m = (PVOID *)*m )
            {
              if ( MiIsActiveSystemHotPatch((__int64)m) )
              {
                v50 = m[35];
                LODWORD(v57) = v50[30];
                HIDWORD(v57) = v50[39];
                MiFillActivePatchesQueryBuffer(
                  v39,
                  v48,
                  v49,
                  v42,
                  (_QWORD **)&v63,
                  (UNICODE_STRING **)&v62,
                  (wchar_t **)&v61,
                  &v57,
                  (PCUNICODE_STRING)(m + 9));
                v25 = 0LL;
              }
            }
          }
          *(_QWORD *)(v39 + 32) -= v42;
          *(_QWORD *)(v39 + 24) -= v42;
        }
        *v59 = v39;
        v26 = v25;
        *v60 = v37;
      }
      else
      {
        v26 = -1073741670;
      }
    }
    else
    {
      v25 = 0LL;
      if ( v36 <= 0xFFFFFFFF )
      {
        *v6 = v15;
        v26 = v15;
        *v7 = v36;
      }
      else
      {
        v26 = -1073741675;
      }
    }
    goto LABEL_75;
  }
  Object = 0LL;
  v23 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, AccessMode, &Object, 0LL);
  v24 = Object;
  v25 = 0LL;
  DmaAdapter = (PADAPTER_OBJECT)Object;
  v26 = v23;
  if ( v23 < 0 )
  {
    v54 = CurrentThread;
    goto LABEL_79;
  }
  v27 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
  v8 = 2 * (v27 & 1);
  if ( (v27 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)v24, 0LL, (__int64)v69, v28);
    v8 |= 4u;
    ProcessHotPatchContext = MiGetProcessHotPatchContext((__int64)v24, 0);
    v15 = 0LL;
    v66 = ProcessHotPatchContext;
    v30 = (unsigned __int64)ProcessHotPatchContext;
    if ( ProcessHotPatchContext )
    {
      v8 |= 1u;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(ProcessHotPatchContext + 2), 0LL);
      v31 = *(_QWORD *)(v30 + 8);
      if ( (v31 & 1) != 0 )
      {
        if ( v31 != 1 )
          j = v31 ^ (v30 | 1);
      }
      else
      {
        j = *(_QWORD *)(v30 + 8);
      }
      v15 = 0LL;
      n = j;
      while ( n )
      {
        if ( *(_DWORD *)(n + 88) )
        {
          ++v12;
          v11 += *(unsigned __int16 *)(n + 64) + 24LL;
        }
        v33 = *(_QWORD ***)(n + 8);
        v34 = n;
        if ( v33 )
        {
          v35 = *v33;
          for ( n = *(_QWORD *)(n + 8); v35; v35 = (_QWORD *)*v35 )
            n = (unsigned __int64)v35;
        }
        else
        {
          while ( 1 )
          {
            n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !n || *(_QWORD *)n == v34 )
              break;
            v34 = n;
          }
        }
      }
    }
    v6 = v59;
    v7 = v60;
    goto LABEL_40;
  }
  v26 = -1073741558;
  v25 = 0LL;
LABEL_75:
  v54 = CurrentThread;
  if ( v8 < 8 )
  {
    v24 = DmaAdapter;
  }
  else
  {
    MmReleaseLoadLock((__int64)CurrentThread);
    v24 = DmaAdapter;
    v25 = 0LL;
  }
LABEL_79:
  if ( (v8 & 1) != 0 )
  {
    v55 = v66;
    if ( _InterlockedCompareExchange64(v66 + 2, v25, 17LL) != 17 )
      ExfReleasePushLockShared(v55 + 2);
    KeAbPostRelease((ULONG_PTR)(v55 + 2));
    KiLeaveGuardedRegionUnsafe((__int64)v54);
  }
  if ( (v8 & 4) != 0 )
    KiUnstackDetachProcess((__int64)v69, 0);
  if ( (v8 & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v24 + 139);
  if ( v24 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v24);
  return v26;
}
