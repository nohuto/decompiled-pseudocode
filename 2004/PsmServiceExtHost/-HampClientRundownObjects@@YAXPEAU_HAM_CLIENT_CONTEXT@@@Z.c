/*
 * XREFs of ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800270D4
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800086C4 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x180004224 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800087DC (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000947C (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800094D4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020CE0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcTableGetFirst @ 0x180025464 (CemRcTableGetFirst.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180027160 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CemRcTableGetNext @ 0x180027194 (CemRcTableGetNext.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x1800273A4 (RmpWnfCleanupPendingCallbackList.c)
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18008057C (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 */

void __fastcall HampClientRundownObjects(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  struct _HOST_ACTIVITY_MANAGER *v3; // rcx
  _QWORD *v4; // rsi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *i; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v6; // rdi
  void *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx

  HampClientAcquireLockExclusive(a1, a2);
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a1);
  v3 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  *((_DWORD *)a1 + 32) |= 1u;
  HampManagerReleaseLockExclusive(v3);
  v4 = (_QWORD *)((char *)a1 + 40);
  while ( (_QWORD *)*v4 != v4 )
  {
    v8 = *v4 - 48LL;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
      __fastfail(0xEu);
    HampClientReleaseLockExclusive(a1);
    if ( !*((_DWORD *)a1 + 34) && (*((_BYTE *)a1 + 132) & 1) != 0 )
      HampActTerminate(v8, 1u, 0x1A00u, 0LL, 0);
    HampActClose((struct _HAM_ACTIVITY *)v8, v9);
    CemRcObjectDereference(v8);
    HampClientAcquireLockExclusive(a1, v10);
  }
  HampClientReleaseLockExclusive(a1);
  for ( i = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableGetFirst((__int64)a1 + 56);
        ;
        i = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableGetNext(v6) )
  {
    v6 = i;
    if ( !i )
      break;
    HampClientPkgClose(i);
  }
  if ( (*((_BYTE *)a1 + 128) & 2) == 0 )
  {
    v7 = (void *)*((_QWORD *)a1 + 14);
    if ( v7 )
      RmpWnfCleanupPendingCallbackList(v7);
  }
}
