/*
 * XREFs of ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180020A50
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D958 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019780 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035518 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CF64 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x18007F5AC (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18007F67C (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007F6D0 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F780 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EACC (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppGetNextHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbp
  DWORD v3; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v6; // edi
  _QWORD *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // r14
  _QWORD *v12; // rax
  bool v13; // zf
  _QWORD *v14; // rax
  DWORD v15; // edi
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 *v20; // rdx

  v1 = *((_QWORD *)a1 + 97);
  v3 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v3) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v6 = HampLockTrackerId;
  dword_1800B4218 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v7 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v7 |= 0x20uLL;
    ++v7[6];
  }
  v8 = v1 + 576;
  RtlAcquireSRWLockShared(v1 + 576);
  v9 = *((_QWORD *)a1 + 101);
  v10 = v1 + 592;
  if ( v9 == v10 )
  {
LABEL_10:
    v11 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v11 = v9 - 808;
      if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v9 - 808)) )
        break;
      v9 = *v20;
      if ( v9 == v10 )
        goto LABEL_10;
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    v12 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v12 & 0x20) == 0 )
      __int2c();
    v13 = v12[6]-- == 1LL;
    if ( v13 )
      *v12 &= ~0x20uLL;
  }
  RtlReleaseSRWLockShared(v8);
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v14 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v14 & 1) == 0 )
      __int2c();
    v13 = v14[1]-- == 1LL;
    if ( v13 )
      *v14 &= ~1uLL;
  }
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v16 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v15) )
      __int2c();
    *v16 |= 1uLL;
    ++v16[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800B4218 = GetCurrentThreadId();
  v13 = (*((_QWORD *)a1 + 74))-- == 1LL;
  if ( v13 )
    RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), v17);
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v18 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v18 & 1) == 0 )
      __int2c();
    v13 = v18[1]-- == 1LL;
    if ( v13 )
      *v18 &= ~1uLL;
  }
  return (struct _RM_HAM_ACTIVITY_HOST *)v11;
}
