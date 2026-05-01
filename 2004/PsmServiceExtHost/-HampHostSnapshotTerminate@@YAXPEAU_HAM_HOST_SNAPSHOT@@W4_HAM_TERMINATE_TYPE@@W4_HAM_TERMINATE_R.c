/*
 * XREFs of ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003BD14
 * Callers:
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003BBE8 (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F780 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18008011C (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180081898 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180005204 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CA10 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001E5C0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003423C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003BF2C (-HampHostSnapshotGetNext@@YAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 */

struct _HAM_TERMINATION_HOST_BLOCK *__fastcall HampHostSnapshotTerminate(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  struct _RM_HAM_ACTIVITY_HOST **Next; // rax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rdi
  __int64 *v13; // r14
  struct _RM_HAM_ACTIVITY_HOST **v14; // rdi
  unsigned __int64 v15; // rbp
  struct _HAM_TERMINATION_HOST_BLOCK *result; // rax
  bool v17; // zf
  struct _RM_HAM_ACTIVITY_HOST *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // r12
  BOOL v22; // edi
  unsigned __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h] BYREF
  int v26; // [rsp+90h] [rbp+28h]

  Next = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    Next = *(struct _RM_HAM_ACTIVITY_HOST ***)a1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  for ( ; Next; Next = (struct _RM_HAM_ACTIVITY_HOST **)HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)a1) )
  {
    v11 = *Next;
    HampHostQueueTerminateEx(*Next, a2, a3, a4, 0, 0);
    if ( (a6 & 1) != 0 )
    {
      HampHostAcquireLockExclusiveEx(v11, 0);
      HampHostCheckQueueStateWorker(v11, 0);
      HampHostReleaseLockExclusiveEx(v11);
    }
  }
  RtlQueryUnbiasedInterruptTime(&v23);
  v13 = &v24;
  v14 = 0LL;
  v15 = v23 / 0x2710;
  result = (struct _HAM_TERMINATION_HOST_BLOCK *)(a5 + (unsigned int)(v23 / 0x2710));
  v17 = a5 == -1;
  v26 = a5 + v23 / 0x2710;
  if ( v17 )
    v13 = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v14 = *(struct _RM_HAM_ACTIVITY_HOST ***)a1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  if ( v14 )
  {
    do
    {
      v18 = *v14;
      HampHostAcquireLockSharedEx(*v14, 0);
      v21 = v14 + 1;
      do
      {
        CempLockTrackerMarkReleased(v20, v19, 1u);
        RtlReleaseSRWLockShared(v18);
        if ( v13 )
          v24 = -10000LL * (unsigned int)(v26 - v15);
        RtlWaitOnAddress((char *)v18 + 800, v21, 8LL);
        if ( a5 == -1 )
        {
          v22 = 0;
        }
        else
        {
          RtlQueryUnbiasedInterruptTime(&v23);
          LODWORD(v15) = v23 / 0x2710;
          v22 = v26 - (int)v15 > a5;
        }
        HampHostAcquireLockSharedEx(v18, 0);
      }
      while ( *v21 == *((_QWORD *)v18 + 100) && !v22 );
      CempLockTrackerMarkReleased(v20, v19, 1u);
      RtlReleaseSRWLockShared(v18);
      result = HampHostSnapshotGetNext((struct _HAM_HOST_SNAPSHOT *)a1);
      v14 = (struct _RM_HAM_ACTIVITY_HOST **)result;
    }
    while ( result );
  }
  return result;
}
