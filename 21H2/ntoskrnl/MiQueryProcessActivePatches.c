/*
 * XREFs of MiQueryProcessActivePatches @ 0x1408CE048
 * Callers:
 *     NtManageHotPatch @ 0x1408CEEA0 (NtManageHotPatch.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1408C9DB8 (MiFillActivePatchesQueryBuffer.c)
 *     MiGetProcessHotPatchContext @ 0x1408CA358 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x1408CAD00 (MiIsActiveSystemHotPatch.c)
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
  _QWORD *ProcessHotPatchContext; // rax
  unsigned __int64 v29; // r13
  __int64 v30; // rcx
  unsigned __int64 n; // rcx
  _QWORD **v32; // rax
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rdx
  unsigned __int64 v35; // r15
  int v36; // r13d
  _QWORD *Pool; // rax
  __int64 v38; // rsi
  HANDLE v39; // r9
  __int64 v40; // r8
  __int64 v41; // r15
  __int64 v42; // rdx
  _QWORD **v43; // rax
  unsigned __int64 v44; // rcx
  _QWORD *v45; // rcx
  PVOID *m; // rdi
  __int64 v47; // rdx
  __int64 v48; // r8
  _DWORD *v49; // rcx
  _QWORD **v50; // rax
  unsigned __int64 v51; // rcx
  _QWORD *v52; // rcx
  struct _KTHREAD *v53; // r14
  _QWORD *v54; // rdi
  __int64 v56; // [rsp+50h] [rbp-89h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-81h]
  __int64 *v58; // [rsp+60h] [rbp-79h]
  _DWORD *v59; // [rsp+68h] [rbp-71h]
  __int64 v60; // [rsp+70h] [rbp-69h] BYREF
  __int64 v61; // [rsp+78h] [rbp-61h] BYREF
  __int64 v62; // [rsp+80h] [rbp-59h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp-51h]
  PVOID Object; // [rsp+90h] [rbp-49h] BYREF
  _QWORD *v65; // [rsp+98h] [rbp-41h]
  __int64 v66; // [rsp+A0h] [rbp-39h]
  HANDLE v67; // [rsp+A8h] [rbp-31h]
  _OWORD v68[3]; // [rsp+B0h] [rbp-29h] BYREF

  v58 = a2;
  v67 = Handle;
  v6 = a2;
  v66 = a4;
  v59 = a3;
  v56 = 0LL;
  v7 = a3;
  DmaAdapter = 0LL;
  LOBYTE(v8) = 0;
  v65 = 0LL;
  j = 0LL;
  k = 0LL;
  v11 = 0LL;
  v12 = 0;
  memset(v68, 0, sizeof(v68));
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
    v35 = v11 + 40;
    if ( a5 >= v35 )
    {
      v36 = v35;
      Pool = MiAllocatePool(256, (unsigned int)v35, 0x71486D4Du);
      v25 = 0LL;
      v38 = (__int64)Pool;
      if ( Pool )
      {
        v39 = v67;
        Pool[1] = v67;
        *(_DWORD *)Pool = 2;
        if ( v12 )
        {
          v40 = (__int64)(Pool + 5);
          v41 = (__int64)Pool - v66;
          v42 = (__int64)&Pool[2 * v12 + 5];
          v61 = (__int64)(Pool + 5);
          v62 = v42;
          Pool[3] = Pool + 5;
          Pool[4] = v42;
          v60 = v42 + 8LL * v12;
          if ( v39 )
          {
            while ( j )
            {
              if ( *(_DWORD *)(j + 88) )
              {
                MiFillActivePatchesQueryBuffer(
                  v38,
                  v42,
                  v40,
                  v41,
                  (_QWORD **)&v62,
                  (UNICODE_STRING **)&v61,
                  (wchar_t **)&v60,
                  (_QWORD *)(j + 48),
                  (PCUNICODE_STRING)(j + 64));
                v25 = 0LL;
              }
              v50 = *(_QWORD ***)(j + 8);
              v51 = j;
              if ( v50 )
              {
                v52 = *v50;
                for ( j = *(_QWORD *)(j + 8); v52; v52 = (_QWORD *)*v52 )
                  j = (unsigned __int64)v52;
              }
              else
              {
                while ( 1 )
                {
                  j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !j || *(_QWORD *)j == v51 )
                    break;
                  v51 = j;
                }
              }
            }
          }
          else
          {
            while ( k )
            {
              v56 = *(_QWORD *)(k + 24);
              MiFillActivePatchesQueryBuffer(
                v38,
                v42,
                v40,
                v41,
                (_QWORD **)&v62,
                (UNICODE_STRING **)&v61,
                (wchar_t **)&v60,
                &v56,
                (PCUNICODE_STRING)(k + 48));
              v43 = *(_QWORD ***)(k + 8);
              v25 = 0LL;
              v44 = k;
              if ( v43 )
              {
                v45 = *v43;
                for ( k = *(_QWORD *)(k + 8); v45; v45 = (_QWORD *)*v45 )
                  k = (unsigned __int64)v45;
              }
              else
              {
                while ( 1 )
                {
                  k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !k || *(_QWORD *)k == v44 )
                    break;
                  v44 = k;
                }
              }
            }
            for ( m = (PVOID *)PsLoadedModuleList; m != &PsLoadedModuleList; m = (PVOID *)*m )
            {
              if ( MiIsActiveSystemHotPatch((__int64)m) )
              {
                v49 = m[35];
                LODWORD(v56) = v49[30];
                HIDWORD(v56) = v49[39];
                MiFillActivePatchesQueryBuffer(
                  v38,
                  v47,
                  v48,
                  v41,
                  (_QWORD **)&v62,
                  (UNICODE_STRING **)&v61,
                  (wchar_t **)&v60,
                  &v56,
                  (PCUNICODE_STRING)(m + 9));
                v25 = 0LL;
              }
            }
          }
          *(_QWORD *)(v38 + 32) -= v41;
          *(_QWORD *)(v38 + 24) -= v41;
        }
        *v58 = v38;
        v26 = v25;
        *v59 = v36;
      }
      else
      {
        v26 = -1073741670;
      }
    }
    else
    {
      v25 = 0LL;
      if ( v35 <= 0xFFFFFFFF )
      {
        *v6 = v15;
        v26 = v15;
        *v7 = v35;
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
    v53 = CurrentThread;
    goto LABEL_79;
  }
  v27 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139);
  v8 = 2 * (v27 & 1);
  if ( (v27 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)v24, 0, (__int64)v68);
    v8 |= 4u;
    ProcessHotPatchContext = MiGetProcessHotPatchContext((__int64)v24, 0);
    v15 = 0LL;
    v65 = ProcessHotPatchContext;
    v29 = (unsigned __int64)ProcessHotPatchContext;
    if ( ProcessHotPatchContext )
    {
      v8 |= 1u;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(ProcessHotPatchContext + 2), 0LL);
      v30 = *(_QWORD *)(v29 + 8);
      if ( (v30 & 1) != 0 )
      {
        if ( v30 != 1 )
          j = v30 ^ (v29 | 1);
      }
      else
      {
        j = *(_QWORD *)(v29 + 8);
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
        v32 = *(_QWORD ***)(n + 8);
        v33 = n;
        if ( v32 )
        {
          v34 = *v32;
          for ( n = *(_QWORD *)(n + 8); v34; v34 = (_QWORD *)*v34 )
            n = (unsigned __int64)v34;
        }
        else
        {
          while ( 1 )
          {
            n = *(_QWORD *)(n + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !n || *(_QWORD *)n == v33 )
              break;
            v33 = n;
          }
        }
      }
    }
    v6 = v58;
    v7 = v59;
    goto LABEL_40;
  }
  v26 = -1073741558;
  v25 = 0LL;
LABEL_75:
  v53 = CurrentThread;
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
    v54 = v65;
    if ( _InterlockedCompareExchange64(v65 + 2, v25, 17LL) != 17 )
      ExfReleasePushLockShared(v54 + 2);
    KeAbPostRelease((ULONG_PTR)(v54 + 2));
    KiLeaveGuardedRegionUnsafe((__int64)v53);
  }
  if ( (v8 & 4) != 0 )
    KiUnstackDetachProcess((__int64)v68, 0LL);
  if ( (v8 & 2) != 0 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v24 + 139);
  if ( v24 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v24);
  return v26;
}
