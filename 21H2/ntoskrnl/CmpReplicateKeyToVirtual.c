/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x1408709C4
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x1406A0A00 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1406A0C50 (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     EtwGetKernelTraceTimestamp @ 0x14029B060 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     CmRealKCBToVirtualPath @ 0x140672A9C (CmRealKCBToVirtualPath.c)
 *     CmpUnlockKcb @ 0x1406F2B40 (CmpUnlockKcb.c)
 *     CmpConvertRegistryShared @ 0x14086EAA8 (CmpConvertRegistryShared.c)
 *     CmpTryConvertRegistryExclusive @ 0x14086EAC4 (CmpTryConvertRegistryExclusive.c)
 *     CmpBuildVirtualReplicationStack @ 0x14086FC2C (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x14086FDA4 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x14086FF9C (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x14087090C (CmpGetVirtualStoreRoot.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(ULONG_PTR a1, __int64 a2, char a3, unsigned __int64 *a4)
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
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && a1 )
    v7 = a1;
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
  CmpUnlockKcb(a1);
  VirtualStoreRoot = CmRealKCBToVirtualPath(a1, 0LL, a2, &DestinationString);
  if ( VirtualStoreRoot >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(a1, (__int64)&DestinationString, &v17, &P) >= 0 )
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
          VirtualStoreRoot = CmpDoBuildVirtualStack((__int64)v11, v14, v13, a1, a2);
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
    CmpLockKcbExclusive(a1);
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
