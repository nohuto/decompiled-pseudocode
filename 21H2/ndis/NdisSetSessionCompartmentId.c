/*
 * XREFs of NdisSetSessionCompartmentId @ 0x1C00B1000
 * Callers:
 *     ?ndisNsiSetAllSessionInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B0FB0 (-ndisNsiSetAllSessionInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C0013DA0 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0013DD8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C001E0BC (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C0020974 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisCmLazyInitializeCleanup@@YAXXZ @ 0x1C00B0E6C (-ndisCmLazyInitializeCleanup@@YAXXZ.c)
 */

__int64 __fastcall NdisSetSessionCompartmentId(unsigned int a1, unsigned int a2)
{
  _DWORD *v2; // r14
  unsigned int ThreadSessionId; // ebp
  _DWORD *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // r15
  KIRQL v8; // r13
  char *PoolWithTag; // rbx
  unsigned int SessionCompartmentId; // eax
  PVOID v12; // r15

  v2 = 0LL;
  ThreadSessionId = a1;
  if ( a1 == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( a2 )
  {
    SessionCompartmentId = NdisGetSessionCompartmentId(ThreadSessionId);
    v5 = ndisCmValidateCompartmentChange(SessionCompartmentId, a2);
    if ( !v5 )
      return 3221225485LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = ThreadSessionId + 1;
  v7 = v6;
  v8 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E4AF0);
  if ( ThreadSessionId < dword_1C00E6160 )
  {
    PoolWithTag = (char *)P;
  }
  else
  {
    ndisCmLazyInitializeCleanup();
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 24 * v6, 0x6D63444Eu);
    if ( !PoolWithTag )
    {
      KeReleaseSpinLock(&qword_1C00E4AF0, v8);
      if ( v5 )
        ndisIfDereferenceCompartmentForUser(v5);
      return 3221225626LL;
    }
    v12 = P;
    if ( P )
    {
      memmove(PoolWithTag, P, 24LL * (unsigned int)dword_1C00E6160);
      ExFreePoolWithTag(v12, 0);
    }
    memset(&PoolWithTag[24 * dword_1C00E6160], 0, 24LL * (unsigned int)(v6 - dword_1C00E6160));
    v7 = ThreadSessionId + 1;
    P = PoolWithTag;
    dword_1C00E6160 = v6;
  }
  if ( *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 8] )
  {
    v2 = *(_DWORD **)&PoolWithTag[24 * ThreadSessionId + 16];
    if ( !a2 )
    {
      *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 8] = 0LL;
      a2 = 1;
      v5 = 0LL;
    }
    goto LABEL_21;
  }
  if ( a2 )
  {
    *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 8] = v7;
LABEL_21:
    *(_QWORD *)&PoolWithTag[24 * ThreadSessionId + 16] = v5;
    *(_DWORD *)&PoolWithTag[24 * ThreadSessionId] = a2;
  }
  KeReleaseSpinLock(&qword_1C00E4AF0, v8);
  if ( v2 )
    ndisIfDereferenceCompartmentForUser(v2);
  _InterlockedExchangeAdd(&dword_1C00E6158, 2u);
  return 0LL;
}
