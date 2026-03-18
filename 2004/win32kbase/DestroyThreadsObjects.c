/*
 * XREFs of DestroyThreadsObjects @ 0x1C00955C0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     IsCleanupW32ThreadLocksSupported @ 0x1C00427E4 (IsCleanupW32ThreadLocksSupported.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007447C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C007477C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0074948 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMAssignmentUnlockWorker @ 0x1C0076388 (HMAssignmentUnlockWorker.c)
 *     ThreadUnlock1 @ 0x1C00899B0 (ThreadUnlock1.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     DestroyCacheDCEntries @ 0x1C00A5538 (DestroyCacheDCEntries.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rdi
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  char *v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 *v9; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries(gptiCurrent);
  while ( *((_QWORD *)v0 + 51) )
    ThreadUnlock1(v1);
  if ( (int)IsCleanupW32ThreadLocksSupported() >= 0 && qword_1C0252740 )
    qword_1C0252740(v0);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  v5 = 0;
  if ( *((_QWORD *)v0 + 133) )
  {
    if ( qword_1C0252748 && (int)qword_1C0252748() >= 0 && qword_1C0252750 )
      qword_1C0252750(*((_QWORD *)v0 + 133), 1LL);
    *((_QWORD *)v0 + 133) = 0LL;
  }
  if ( *((_QWORD *)v0 + 134) )
  {
    if ( qword_1C0252758 && (int)qword_1C0252758() >= 0 && qword_1C0252760 )
      qword_1C0252760(*((_QWORD *)v0 + 134), 1LL);
    *((_QWORD *)v0 + 134) = 0LL;
  }
  GetDomainLockRef(14LL, v2, v3, v4);
  do
  {
    v6 = (char *)qword_1C024AD48 + 32 * v5;
    v7 = (unsigned __int8)v6[24];
    v8 = (char *)gpKernelHandleTable + 24 * v5;
    if ( (_BYTE)v7 )
    {
      if ( (*((_BYTE *)&unk_1C02056CC + 24 * v7) & 2) != 0 )
      {
        if ( (_BYTE)v7 == 2 )
        {
          v9 = (__int64 *)(*v8 + 80LL);
          if ( *v9 )
          {
            if ( *(struct tagTHREADINFO **)(*v9 + 16) == v0 )
              HMAssignmentUnlockWorker(v9);
          }
        }
      }
      else if ( (struct tagTHREADINFO *)v8[1] == v0 && (v6[25] & 1) == 0 )
      {
        HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)((char *)qword_1C024AD48 + 32 * v5));
      }
    }
    ++v5;
  }
  while ( v5 <= giheLast );
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
}
