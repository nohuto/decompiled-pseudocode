/*
 * XREFs of DestroyThreadsObjects @ 0x1C0071190
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007049C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMAssignmentUnlockWorker @ 0x1C0073448 (HMAssignmentUnlockWorker.c)
 *     IsCleanupW32ThreadLocksSupported @ 0x1C007351C (IsCleanupW32ThreadLocksSupported.c)
 *     DestroyCacheDCEntries @ 0x1C0073548 (DestroyCacheDCEntries.c)
 *     ThreadUnlock1 @ 0x1C00828E0 (ThreadUnlock1.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rdi
  unsigned int v1; // ebx
  char *v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // r9
  __int64 v5; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries(gptiCurrent);
  while ( *((_QWORD *)v0 + 51) )
    ThreadUnlock1();
  if ( (int)IsCleanupW32ThreadLocksSupported() >= 0 && qword_1C0258700 )
    qword_1C0258700(v0);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
  v1 = 0;
  if ( *((_QWORD *)v0 + 132) )
  {
    if ( qword_1C0258708 && (int)qword_1C0258708() >= 0 && qword_1C0258710 )
      qword_1C0258710(*((_QWORD *)v0 + 132), 1LL);
    *((_QWORD *)v0 + 132) = 0LL;
  }
  if ( *((_QWORD *)v0 + 133) )
  {
    if ( qword_1C0258718 && (int)qword_1C0258718() >= 0 && qword_1C0258720 )
      qword_1C0258720(*((_QWORD *)v0 + 133), 1LL);
    *((_QWORD *)v0 + 133) = 0LL;
  }
  GetDomainLockRef(14LL);
  do
  {
    v2 = (char *)qword_1C0250D48 + 32 * v1;
    v3 = (unsigned __int8)v2[24];
    v4 = (char *)gpKernelHandleTable + 24 * v1;
    if ( (_BYTE)v3 )
    {
      if ( (*((_BYTE *)&unk_1C020B6DC + 24 * v3) & 2) != 0 )
      {
        if ( (_BYTE)v3 == 2 )
        {
          v5 = *(_QWORD *)(*v4 + 80LL);
          if ( v5 )
          {
            if ( *(struct tagTHREADINFO **)(v5 + 16) == v0 )
              HMAssignmentUnlockWorker();
          }
        }
      }
      else if ( (struct tagTHREADINFO *)v4[1] == v0 && (v2[25] & 1) == 0 )
      {
        HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)((char *)qword_1C0250D48 + 32 * v1));
      }
    }
    ++v1;
  }
  while ( v1 <= giheLast );
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
}
