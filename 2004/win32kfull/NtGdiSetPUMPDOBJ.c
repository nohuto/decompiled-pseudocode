/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C00EE440
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00EE7B8 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C00EE8B4 (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C00EEC0C (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C00EED8C (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0289310 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02B1E10 (--1UMPDREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v6; // r15d
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *ThreadWin32Thread; // rax
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // ebx
  struct _KPROCESS *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _EPROCESS *v26; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v29; // rcx
  __int64 CurrentThreadProcess; // rax
  PEPROCESS Process[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF
  int v33; // [rsp+78h] [rbp+10h]

  v6 = a2;
  if ( a1 )
  {
    LOBYTE(a2) = 17;
    v8 = HmgShareLock(a1, a2);
  }
  else
  {
    v8 = 0LL;
  }
  v32 = v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_55;
  }
  else if ( !a3 )
  {
    goto LABEL_55;
  }
  if ( gUMPDSecurityLevel != 1
    || !v8
    || (Process[0] = 0LL,
        PsLookupProcessByProcessId((HANDLE)*(int *)(v8 + 408), Process),
        !(unsigned int)bIsProcessLocalSystem(Process[0]))
    || (v26 = (struct _EPROCESS *)PsGetCurrentProcess(a1, v24, v25), (unsigned int)bIsProcessLocalSystem(v26)) )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(a1)
      || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v29),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v10 = *ThreadWin32Thread;
    }
    if ( v10 )
    {
      if ( v6 )
      {
        Process[2] = 0LL;
        v15 = *(_DWORD *)(v8 + 424);
        v33 = v15;
        if ( a4 )
        {
          if ( (unsigned __int64)(a4 + 1) > MmUserProbeAddress || a4 + 1 <= a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a4 = v15;
        }
        if ( v15 )
        {
          if ( !(unsigned int)bSandboxedCurrentProcess() )
          {
            v22 = *(_DWORD *)(v8 + 408);
            if ( v22 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) && *(_QWORD *)(v10 + 40) == v10 + 40 )
            {
              v23 = (struct _KPROCESS *)PALLOCMEM2(0x10uLL, 1684631623LL, 1);
              Process[1] = v23;
              if ( v23 )
              {
                if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                *a3 = 0LL;
                if ( UMPDOBJ::bTryAcquireExclussiveAccess((UMPDOBJ *)v8) )
                {
                  *(_QWORD *)v23 = *(_QWORD *)(v8 + 400);
                  *((_DWORD *)v23 + 2) = *(_DWORD *)(v8 + 408);
                  *(_QWORD *)(v10 + 72) = v23;
                  UMPDOBJ::vPushToCurrentThread((struct UMPDOBJ *)v8);
                  return 1LL;
                }
                Win32FreePool(v23);
              }
            }
          }
        }
        else
        {
          v16 = *(_QWORD *)(v10 + 40);
          v17 = v16 - 40;
          if ( v16 == v10 + 40 )
            v17 = 0LL;
          if ( v8 == v17 )
          {
            if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *a3 = 0LL;
            goto LABEL_25;
          }
        }
      }
      else
      {
        if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v19 = *(_QWORD *)(v10 + 40);
        if ( v19 == v10 + 40 )
          v20 = 0LL;
        else
          v20 = v19 - 40;
        if ( v20 && *a3 == *(_QWORD *)v20 )
        {
          if ( !*(_DWORD *)(v20 + 424) )
          {
LABEL_25:
            if ( v8 )
            {
              DEC_SHARE_REF_CNT(v8);
              if ( (unsigned int)UMPDOBJ::bCleanupWorker((UMPDOBJ *)v8) )
                Win32FreePool(v8);
            }
            return 1LL;
          }
          if ( *(_QWORD *)(v20 + 24) == W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          {
            *(_BYTE *)(v20 + 32) |= 2u;
            UMPDOBJ::vRelease((struct UMPDOBJ *)v20, 1);
            v21 = *(_QWORD *)(v10 + 72);
            if ( v21 )
            {
              Win32FreePool(v21);
              *(_QWORD *)(v10 + 72) = 0LL;
            }
            goto LABEL_25;
          }
        }
      }
    }
  }
LABEL_55:
  UMPDREF::~UMPDREF((UMPDREF *)&v32);
  return 0LL;
}
