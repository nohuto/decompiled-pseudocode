/*
 * XREFs of DestroyThreadsObjects @ 0x1C0051B28
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0044210 (ThreadUnlock1.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMAssignmentUnlockWorker @ 0x1C0054B18 (HMAssignmentUnlockWorker.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0055648 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyCacheDCEntries @ 0x1C005E338 (DestroyCacheDCEntries.c)
 *     IsCleanupW32ThreadLocksSupported @ 0x1C00A3848 (IsCleanupW32ThreadLocksSupported.c)
 *     ?Feature_Servicing_BackwardDestroyHandles__private_IsEnabled@@YAHXZ @ 0x1C00CD9E8 (-Feature_Servicing_BackwardDestroyHandles__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void DestroyThreadsObjects()
{
  struct tagTHREADINFO *v0; // rbx
  int v1; // edi
  int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r14
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdi
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+50h] [rbp+8h] BYREF

  v0 = gptiCurrent;
  DestroyCacheDCEntries(gptiCurrent);
  while ( *((_QWORD *)v0 + 52) )
    ThreadUnlock1();
  if ( (int)IsCleanupW32ThreadLocksSupported() >= 0 && qword_1C0250740 )
    qword_1C0250740(v0);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  v1 = -1073741637;
  if ( *((_QWORD *)v0 + 134) )
  {
    if ( qword_1C0250748 )
      v2 = qword_1C0250748();
    else
      v2 = -1073741637;
    if ( v2 >= 0 && qword_1C0250750 )
      qword_1C0250750(*((_QWORD *)v0 + 134), 1LL);
    *((_QWORD *)v0 + 134) = 0LL;
  }
  if ( *((_QWORD *)v0 + 135) )
  {
    if ( qword_1C0250758 )
      v1 = qword_1C0250758();
    if ( v1 >= 0 && qword_1C0250760 )
      qword_1C0250760(*((_QWORD *)v0 + 135), 1LL);
    *((_QWORD *)v0 + 135) = 0LL;
  }
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v13);
  if ( (unsigned int)Feature_Servicing_BackwardDestroyHandles__private_IsEnabled() )
  {
    v3 = giheLast;
    if ( giheLast >= 0LL )
    {
      v4 = 24LL * giheLast;
      v5 = 32LL * giheLast;
      do
      {
        v6 = (char *)qword_1C0248D48 + v5;
        v7 = *((unsigned __int8 *)qword_1C0248D48 + v5 + 24);
        if ( (_BYTE)v7 )
        {
          if ( (*((_BYTE *)&gahti + 24 * v7 + 12) & 2) != 0 )
          {
            if ( (_BYTE)v7 == 2 )
            {
              v8 = *(_QWORD *)((char *)gpKernelHandleTable + v4) + 80LL;
              if ( *(_QWORD *)v8 )
              {
                if ( *(struct tagTHREADINFO **)(*(_QWORD *)v8 + 16LL) == v0 )
                  HMAssignmentUnlockWorker(v8, v6, v7, gpKernelHandleTable);
              }
            }
          }
          else if ( *(struct tagTHREADINFO **)((char *)gpKernelHandleTable + v4 + 8) == v0 && (v6[25] & 1) == 0 )
          {
            HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)((char *)qword_1C0248D48 + v5));
          }
        }
        v5 -= 32LL;
        v4 -= 24LL;
        --v3;
      }
      while ( v3 >= 0 );
    }
  }
  else
  {
    v9 = 0LL;
    do
    {
      v10 = (char *)qword_1C0248D48 + 32 * (unsigned int)v9;
      v11 = (unsigned __int8)v10[24];
      if ( (_BYTE)v11 )
      {
        if ( (*((_BYTE *)&gahti + 24 * v11 + 12) & 2) != 0 )
        {
          if ( (_BYTE)v11 == 2 )
          {
            v12 = *((_QWORD *)gpKernelHandleTable + 3 * v9) + 80LL;
            if ( *(_QWORD *)v12 )
            {
              if ( *(struct tagTHREADINFO **)(*(_QWORD *)v12 + 16LL) == v0 )
                HMAssignmentUnlockWorker(v12, v10, v11, 3 * v9);
            }
          }
        }
        else if ( *((struct tagTHREADINFO **)gpKernelHandleTable + 3 * v9 + 1) == v0 && (v10[25] & 1) == 0 )
        {
          HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)((char *)qword_1C0248D48 + 32 * (unsigned int)v9));
        }
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 <= giheLast );
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
}
