/*
 * XREFs of MiQueryProcessActivePatches @ 0x1408C9598
 * Callers:
 *     NtManageHotPatch @ 0x1408CA3F0 (NtManageHotPatch.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1408C5308 (MiFillActivePatchesQueryBuffer.c)
 *     MiGetProcessHotPatchContext @ 0x1408C58A8 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x1408C6250 (MiIsActiveSystemHotPatch.c)
 */

__int64 __fastcall MiQueryProcessActivePatches(
        _DWORD *Handle,
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
  _DWORD *v14; // r9
  _QWORD *v15; // rcx
  __int64 v16; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v18; // rdx
  _QWORD **v19; // rax
  _QWORD *v20; // rdx
  PVOID *v21; // rcx
  PVOID *v22; // rdx
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  void *v25; // r13
  signed __int64 v26; // r10
  unsigned int v27; // esi
  BOOLEAN v28; // al
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
  __int64 v40; // r15
  __int64 v41; // rdx
  _QWORD **v42; // rax
  unsigned __int64 v43; // rcx
  _QWORD *v44; // rcx
  PVOID *m; // rdi
  __int64 v46; // rdx
  _DWORD *v47; // rcx
  _QWORD **v48; // rax
  unsigned __int64 v49; // rcx
  _QWORD *v50; // rcx
  struct _KTHREAD *v51; // r14
  _QWORD *v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
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
  _DWORD *v68; // [rsp+A8h] [rbp-31h]
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
    v15 = (_QWORD *)MiSecureImageActivePatches;
    v16 = 0LL;
    CurrentThread = Lock;
    while ( v15 )
    {
      k = (unsigned __int64)v15;
      v15 = (_QWORD *)*v15;
    }
    i = k;
    while ( i )
    {
      ++v12;
      v18 = i;
      v11 += *(unsigned __int16 *)(i + 48) + 24LL;
      v19 = *(_QWORD ***)(i + 8);
      if ( v19 )
      {
        v20 = *v19;
        for ( i = *(_QWORD *)(i + 8); v20; v20 = (_QWORD *)*v20 )
          i = (unsigned __int64)v20;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v18 )
            break;
          v18 = i;
        }
      }
    }
    v21 = (PVOID *)PsLoadedModuleList;
    v22 = &PsLoadedModuleList;
    while ( v21 != v22 )
    {
      if ( MiIsActiveSystemHotPatch((__int64)v21) )
      {
        ++v12;
        v11 += *(unsigned __int16 *)(v23 + 72) + 24LL;
      }
      v21 = *(PVOID **)v23;
    }
LABEL_40:
    v36 = v11 + 40;
    if ( a5 >= v36 )
    {
      v37 = v36;
      Pool = MiAllocatePool(256, (unsigned int)v36, 0x71486D4Du);
      v26 = 0LL;
      v39 = (__int64)Pool;
      if ( Pool )
      {
        v14 = v68;
        Pool[1] = v68;
        *(_DWORD *)Pool = 2;
        if ( v12 )
        {
          v16 = (__int64)(Pool + 5);
          v40 = (__int64)Pool - v67;
          v41 = (__int64)&Pool[2 * v12 + 5];
          v62 = (__int64)(Pool + 5);
          v63 = v41;
          Pool[3] = Pool + 5;
          Pool[4] = v41;
          v61 = v41 + 8LL * v12;
          if ( v14 )
          {
            while ( j )
            {
              if ( *(_DWORD *)(j + 88) )
              {
                MiFillActivePatchesQueryBuffer(
                  v39,
                  v41,
                  v16,
                  v40,
                  (_QWORD **)&v63,
                  (UNICODE_STRING **)&v62,
                  (wchar_t **)&v61,
                  (_QWORD *)(j + 48),
                  (PCUNICODE_STRING)(j + 64));
                v26 = 0LL;
              }
              v48 = *(_QWORD ***)(j + 8);
              v49 = j;
              if ( v48 )
              {
                v50 = *v48;
                for ( j = *(_QWORD *)(j + 8); v50; v50 = (_QWORD *)*v50 )
                  j = (unsigned __int64)v50;
              }
              else
              {
                while ( 1 )
                {
                  j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !j || *(_QWORD *)j == v49 )
                    break;
                  v49 = j;
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
                v41,
                v16,
                v40,
                (_QWORD **)&v63,
                (UNICODE_STRING **)&v62,
                (wchar_t **)&v61,
                &v57,
                (PCUNICODE_STRING)(k + 48));
              v42 = *(_QWORD ***)(k + 8);
              v26 = 0LL;
              v43 = k;
              if ( v42 )
              {
                v44 = *v42;
                for ( k = *(_QWORD *)(k + 8); v44; v44 = (_QWORD *)*v44 )
                  k = (unsigned __int64)v44;
              }
              else
              {
                while ( 1 )
                {
                  k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !k || *(_QWORD *)k == v43 )
                    break;
                  v43 = k;
                }
              }
            }
            for ( m = (PVOID *)PsLoadedModuleList; m != &PsLoadedModuleList; m = (PVOID *)*m )
            {
              if ( MiIsActiveSystemHotPatch((__int64)m) )
              {
                v47 = m[35];
                LODWORD(v57) = v47[30];
                HIDWORD(v57) = v47[39];
                MiFillActivePatchesQueryBuffer(
                  v39,
                  v46,
                  v16,
                  v40,
                  (_QWORD **)&v63,
                  (UNICODE_STRING **)&v62,
                  (wchar_t **)&v61,
                  &v57,
                  (PCUNICODE_STRING)(m + 9));
                v26 = 0LL;
              }
            }
          }
          *(_QWORD *)(v39 + 32) -= v40;
          *(_QWORD *)(v39 + 24) -= v40;
        }
        *v59 = v39;
        v27 = v26;
        *v60 = v37;
      }
      else
      {
        v27 = -1073741670;
      }
    }
    else
    {
      v26 = 0LL;
      if ( v36 <= 0xFFFFFFFF )
      {
        *v6 = v16;
        v27 = v16;
        *v7 = v36;
      }
      else
      {
        v27 = -1073741675;
      }
    }
    goto LABEL_75;
  }
  Object = 0LL;
  v24 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, AccessMode, &Object, 0LL);
  v25 = Object;
  v26 = 0LL;
  DmaAdapter = (PADAPTER_OBJECT)Object;
  v27 = v24;
  if ( v24 < 0 )
  {
    v51 = CurrentThread;
    goto LABEL_79;
  }
  v28 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
  v8 = 2 * (v28 & 1);
  if ( (v28 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)v25, 0LL, (__int64)v69, v14);
    v8 |= 4u;
    ProcessHotPatchContext = MiGetProcessHotPatchContext((__int64)v25, 0);
    v16 = 0LL;
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
      v16 = 0LL;
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
  v27 = -1073741558;
  v26 = 0LL;
LABEL_75:
  v51 = CurrentThread;
  if ( v8 < 8 )
  {
    v25 = DmaAdapter;
  }
  else
  {
    MmReleaseLoadLock((__int64)CurrentThread);
    v25 = DmaAdapter;
    v26 = 0LL;
  }
LABEL_79:
  if ( (v8 & 1) != 0 )
  {
    v52 = v66;
    if ( _InterlockedCompareExchange64(v66 + 2, v26, 17LL) != 17 )
      ExfReleasePushLockShared(v52 + 2);
    KeAbPostRelease((ULONG_PTR)(v52 + 2));
    KiLeaveGuardedRegionUnsafe((__int64)v51, v53, v54, v55);
  }
  if ( (v8 & 4) != 0 )
    KiUnstackDetachProcess((__int64)v69, 0LL, v16, v14);
  if ( (v8 & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v25 + 139);
  if ( v25 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v25);
  return v27;
}
