/*
 * XREFs of CmSetCallbackObjectContext @ 0x140692F40
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140690378 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x14069061C (VrpPreLoadKey.c)
 *     VrpPostOpenOrCreate @ 0x1407806B0 (VrpPostOpenOrCreate.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpUnlockContextList @ 0x1406930B0 (CmpUnlockContextList.c)
 *     CmpUnlockCallbackList @ 0x1406930D4 (CmpUnlockCallbackList.c)
 *     CmpLockContextListExclusive @ 0x1406930F8 (CmpLockContextListExclusive.c)
 *     CmpLockContextListShared @ 0x140693128 (CmpLockContextListShared.c)
 *     CmpLockCallbackListShared @ 0x140693158 (CmpLockCallbackListShared.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall CmSetCallbackObjectContext(PVOID Object, PLARGE_INTEGER Cookie, PVOID NewContext, PVOID *OldContext)
{
  NTSTATUS v5; // ebx
  char v6; // r12
  _QWORD *v10; // r9
  _QWORD *v11; // r14
  _QWORD *v12; // rsi
  __int64 *v13; // rdi
  LARGE_INTEGER *PoolWithTag; // rax
  LONGLONG *v15; // rcx
  __int64 *v16; // rdi
  LARGE_INTEGER *v17; // rax
  LARGE_INTEGER **v18; // rdx
  LONGLONG v19; // rax
  LONGLONG v20; // rdx
  LONGLONG QuadPart; // rcx
  void *v23; // rbp
  __int64 v24[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  *(_OWORD *)v24 = 0LL;
  v6 = 0;
  CmpInitializeThreadInfo((__int64)v24);
  if ( Object && *(_DWORD *)Object == 1803104306 )
  {
    if ( v10 )
      *v10 = 0LL;
    CmpLockCallbackListShared();
    CmpLockContextListShared();
    v11 = (char *)Object + 72;
    while ( 1 )
    {
      v12 = (_QWORD *)*v11;
      if ( (_QWORD *)*v11 != v11 )
        break;
LABEL_7:
      if ( v6 )
      {
        v13 = (__int64 *)CallbackListHead;
        if ( (__int64 *)CallbackListHead == &CallbackListHead )
          goto LABEL_28;
        while ( Cookie->QuadPart != v13[3] )
        {
          v13 = (__int64 *)*v13;
          if ( v13 == &CallbackListHead )
            goto LABEL_28;
        }
        if ( !v13 )
        {
LABEL_28:
          v5 = -1073741584;
        }
        else
        {
          PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63634D43u);
          v15 = (LONGLONG *)PoolWithTag;
          if ( PoolWithTag )
          {
            PoolWithTag[5].QuadPart = (LONGLONG)v13;
            v16 = v13 + 8;
            PoolWithTag[4] = *Cookie;
            v17 = PoolWithTag + 2;
            v15[7] = (LONGLONG)NewContext;
            v15[6] = (LONGLONG)Object;
            v18 = (LARGE_INTEGER **)v16[1];
            if ( *v18 != (LARGE_INTEGER *)v16
              || (v17->QuadPart = (LONGLONG)v16,
                  v15[3] = (LONGLONG)v18,
                  *v18 = v17,
                  v16[1] = (__int64)v17,
                  v19 = v12[1],
                  v20 = *(_QWORD *)v19,
                  *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19) )
            {
              __fastfail(3u);
            }
            *v15 = v20;
            v15[1] = v19;
            *(_QWORD *)(v20 + 8) = v15;
            *(_QWORD *)v19 = v15;
          }
          else
          {
            v5 = -1073741670;
          }
        }
        goto LABEL_18;
      }
      CmpUnlockContextList();
      v6 = 1;
      CmpLockContextListExclusive();
    }
    QuadPart = Cookie->QuadPart;
    while ( v12[4] != QuadPart )
    {
      if ( v12[4] >= QuadPart )
      {
        v12 = (_QWORD *)*v12;
        if ( v12 != v11 )
          continue;
      }
      goto LABEL_7;
    }
    v23 = (void *)_InterlockedExchange64(v12 + 7, (__int64)NewContext);
    if ( OldContext )
      *OldContext = v23;
LABEL_18:
    CmpUnlockContextList();
    CmpUnlockCallbackList();
    CmCleanupThreadInfo(v24);
    return v5;
  }
  else
  {
    CmCleanupThreadInfo(v24);
    return -1073741585;
  }
}
