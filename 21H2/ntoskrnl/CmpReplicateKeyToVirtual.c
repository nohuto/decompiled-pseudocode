/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x140870B24
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1405FFF90 (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     CmRealKCBToVirtualPath @ 0x140667CCC (CmRealKCBToVirtualPath.c)
 *     CmpLockKcbExclusive @ 0x1406DBABC (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpConvertRegistryShared @ 0x14086EC08 (CmpConvertRegistryShared.c)
 *     CmpTryConvertRegistryExclusive @ 0x14086EC24 (CmpTryConvertRegistryExclusive.c)
 *     CmpBuildVirtualReplicationStack @ 0x14086FD8C (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x14086FF04 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x140870A6C (CmpGetVirtualStoreRoot.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, unsigned __int64 *a4)
{
  ULONG_PTR v7; // r14
  char v8; // r15
  int VirtualStoreRoot; // ebx
  UNICODE_STRING *v10; // rcx
  _DWORD *v11; // rsi
  ULONG_PTR v12; // rcx
  unsigned __int64 v13; // r8
  unsigned int v14; // edx
  UNICODE_STRING *p_DestinationString; // rcx
  unsigned int v17; // [rsp+40h] [rbp-39h] BYREF
  int v18; // [rsp+44h] [rbp-35h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-19h] BYREF
  ULONG_PTR v22; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 *v23; // [rsp+70h] [rbp-9h]
  _OWORD v24[2]; // [rsp+78h] [rbp-1h] BYREF

  v23 = a4;
  v18 = 0;
  DestinationString = 0LL;
  v7 = 0LL;
  memset(v24, 0, sizeof(v24));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v24, 0x20000u);
  v21 = 0LL;
  P = 0LL;
  v17 = 0;
  v8 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v22 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && BugCheckParameter2 )
    v7 = BugCheckParameter2;
  if ( !a3 )
  {
    v8 = CmpTryConvertRegistryExclusive();
    if ( !v8 )
    {
      VirtualStoreRoot = -1073741739;
LABEL_22:
      if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
      {
        p_DestinationString = &DestinationString;
        LOBYTE(p_DestinationString) = 26;
        (*(void (__fastcall **)(UNICODE_STRING *, _OWORD *, _QWORD, _QWORD, ULONG_PTR, UNICODE_STRING *))((char *)&NlsMbCodePageTag + 7))(
          p_DestinationString,
          v24,
          (unsigned int)VirtualStoreRoot,
          0LL,
          v7,
          &DestinationString);
      }
      if ( DestinationString.Buffer )
        RtlFreeAnsiString(&DestinationString);
      return (unsigned int)VirtualStoreRoot;
    }
  }
  CmpUnlockKcb(BugCheckParameter2);
  VirtualStoreRoot = CmRealKCBToVirtualPath(BugCheckParameter2, 0LL, a2, &DestinationString);
  if ( VirtualStoreRoot >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(BugCheckParameter2, (__int64)&DestinationString, &v17, &P) >= 0 )
    {
      v11 = P;
      if ( v17 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot(a2, (__int64 *)&v21, &v18, &v22);
        if ( VirtualStoreRoot >= 0 )
        {
          v12 = v22;
          v13 = v21;
          v14 = v17;
          *v23 = v21;
          v11[8] = *(_DWORD *)(v12 + 40);
          *((_QWORD *)v11 + 2) = v12;
          VirtualStoreRoot = CmpDoBuildVirtualStack((__int64)v11, v14, v13, BugCheckParameter2, a2);
        }
      }
      else
      {
        VirtualStoreRoot = -1073741811;
      }
      if ( v11 )
      {
        CmpDestroyVirtualStack((__int64)v11, v17);
        ExFreePoolWithTag(v11, 0);
      }
    }
    else
    {
      VirtualStoreRoot = -1073741670;
    }
    CmpLockKcbExclusive(BugCheckParameter2);
    if ( v8 )
      CmpConvertRegistryShared();
    goto LABEL_22;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v10 = &DestinationString;
    LOBYTE(v10) = 26;
    (*(void (__fastcall **)(UNICODE_STRING *, _OWORD *, _QWORD, _QWORD, ULONG_PTR, UNICODE_STRING *))((char *)&NlsMbCodePageTag + 7))(
      v10,
      v24,
      (unsigned int)VirtualStoreRoot,
      0LL,
      v7,
      &DestinationString);
  }
  return (unsigned int)VirtualStoreRoot;
}
