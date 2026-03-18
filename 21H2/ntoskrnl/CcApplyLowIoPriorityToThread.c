/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x140288EE4
 * Callers:
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14023C5D4 (CcUpdateSharedCacheMapFlag.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402768B4 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     PsSetIoPriorityThread @ 0x14028F698 (PsSetIoPriorityThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall CcApplyLowIoPriorityToThread(__int64 a1, char a2, _DWORD *a3)
{
  _UNKNOWN **v3; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  ULONG_PTR v9; // rsi
  struct _KTHREAD *v10; // rdi
  unsigned int v11; // ecx
  char *p_Process; // rbx
  __int64 v13; // rdx
  int v14; // r9d
  __int64 v15; // rdx
  unsigned int SessionId; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  CurrentThread = KeGetCurrentThread();
  if ( !a3[1] )
    KeBugCheckEx(0x34u, 0x514uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a2 )
  {
    if ( *(struct _KTHREAD **)(a1 + 1192) != CurrentThread )
      return (char)v3;
    v9 = a1 + 1216;
    ExAcquirePushLockExclusiveEx(a1 + 1216, 0LL);
    PsSetIoPriorityThread(CurrentThread, *(unsigned int *)(a1 + 1212));
    v15 = *(unsigned int *)(a1 + 1208);
    if ( (_DWORD)v15 != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), v15);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      LOBYTE(v15) = 1;
      PsBoostThreadIoEx(CurrentThread, v15, 0LL, 0LL);
      CcUpdateSharedCacheMapFlag((__int64)a3, 0x20000000, 0);
    }
    *(_QWORD *)(a1 + 1192) = 0LL;
    *(_QWORD *)(a1 + 1200) = 0LL;
    *(_DWORD *)(a1 + 1212) = 5;
    *(_DWORD *)(a1 + 1208) = 32;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    v10 = KeGetCurrentThread();
    if ( v9 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    else
      SessionId = -1;
    _disable();
    p_Process = (char *)&v10[1].Process;
    v13 = 0LL;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v9 & 0x7FFFFFFFFFFFFFFCLL)
         || !p_Process[18]
         || (*(_DWORD *)p_Process & 1) != 0
         || *((_DWORD *)p_Process + 2) != SessionId )
    {
      v13 = (unsigned int)(v13 + 1);
      p_Process += 96;
      if ( (unsigned int)v13 >= 6 )
        goto LABEL_47;
    }
    p_Process[18] = 0;
    if ( p_Process )
      goto LABEL_24;
LABEL_47:
    LODWORD(v3) = *((_DWORD *)&v10->0 + 1);
    if ( ((unsigned int)v3 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v10, v9, SessionId, 0LL);
    goto LABEL_45;
  }
  LOBYTE(v3) = CcIsWriteBehindThreadpoolAtLowPriority(a1);
  if ( (_BYTE)v3 && !*(_QWORD *)(v7 + 1192) && !*(_DWORD *)(v8 + 516) && (*(_DWORD *)(v8 + 152) & 0x10000) == 0 )
  {
    v9 = v7 + 1216;
    ExAcquirePushLockExclusiveEx(v7 + 1216, 0LL);
    if ( CcIsWriteBehindThreadpoolAtLowPriority(a1) && !*(_QWORD *)(a1 + 1192) && !a3[129] && (a3[38] & 0x10000) == 0 )
    {
      *(_QWORD *)(a1 + 1192) = CurrentThread;
      *(_QWORD *)(a1 + 1200) = a3;
      *(_DWORD *)(a1 + 1212) = PsSetIoPriorityThread(CurrentThread, 0LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    v10 = KeGetCurrentThread();
    if ( v9 - qword_140C50630 < 0x8000000000LL )
      v11 = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    else
      v11 = -1;
    _disable();
    p_Process = (char *)&v10[1].Process;
    v13 = 0LL;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v9 & 0x7FFFFFFFFFFFFFFCLL)
         || !p_Process[18]
         || (*(_DWORD *)p_Process & 1) != 0
         || *((_DWORD *)p_Process + 2) != v11 )
    {
      v13 = (unsigned int)(v13 + 1);
      p_Process += 96;
      if ( (unsigned int)v13 >= 6 )
        goto LABEL_44;
    }
    p_Process[18] = 0;
    if ( p_Process )
    {
LABEL_24:
      if ( *(__int64 *)p_Process < 0 )
      {
        *p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process, v13, 0x7FFFFFFFFFFFFFFCLL);
        _disable();
      }
      v14 = *((_DWORD *)p_Process + 22);
      *((_DWORD *)p_Process + 22) = 0;
      p_Process[17] = 0;
      *(_QWORD *)p_Process = 0LL;
      LOBYTE(v3) = p_Process[16];
      v10->AbEntrySummary |= 1 << (char)v3;
      _enable();
      if ( v14 )
        LOBYTE(v3) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v10, v9, v14);
      return (char)v3;
    }
LABEL_44:
    LODWORD(v3) = *((_DWORD *)&v10->0 + 1);
    if ( ((unsigned int)v3 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v10, v9, v11, 0LL);
LABEL_45:
    _enable();
  }
  return (char)v3;
}
