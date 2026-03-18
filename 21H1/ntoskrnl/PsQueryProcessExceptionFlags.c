/*
 * XREFs of PsQueryProcessExceptionFlags @ 0x140902E10
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall PsQueryProcessExceptionFlags(ULONG_PTR BugCheckParameter1, int a2, int *a3, _DWORD *a4)
{
  int v5; // edi
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int *v15; // rax
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _OWORD v21[3]; // [rsp+58h] [rbp-60h] BYREF

  memset(v21, 0, sizeof(v21));
  v5 = 0;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( !*(_QWORD *)(BugCheckParameter1 + 1360) )
    return 3221225711LL;
  v7 = a2 & 1;
  if ( (a2 & 1) != 0 && !*(_QWORD *)(BugCheckParameter1 + 1408) )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v9 = 0;
    if ( CurrentThread->Process != (_KPROCESS *)BugCheckParameter1 )
      v9 = 2;
    if ( v9 < 2 )
      goto LABEL_13;
  }
  else
  {
    v9 = 3;
  }
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, (__int64)a3, (__int64)a4);
    return 3221225738LL;
  }
LABEL_13:
  v11 = v9 & 1;
  if ( (v9 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v21, a4);
    v11 = v9 & 1;
  }
  if ( v7 )
  {
    v12 = *(__int64 **)(BugCheckParameter1 + 1408);
    if ( !v12 || *((_WORD *)v12 + 4) != 0x8664 )
    {
      v14 = 0LL;
      if ( v12 )
        v14 = *v12;
      v15 = (int *)(v14 + 40);
      goto LABEL_24;
    }
    v13 = *v12;
  }
  else
  {
    v13 = *(_QWORD *)(BugCheckParameter1 + 1360);
  }
  v15 = (int *)(v13 + 80);
LABEL_24:
  v16 = *v15;
  if ( v11 )
    KiUnstackDetachProcess((__int64)v21, 0LL, (__int64)a3, a4);
  if ( v9 >= 2 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v18, v19);
  }
  *a3 = 0;
  if ( (v16 & 4) != 0 )
  {
    *a3 = 1;
    v5 = 1;
  }
  if ( (v16 & 8) != 0 )
    *a3 = v5 | 2;
  return 0LL;
}
