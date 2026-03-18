/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x14066E820
 * Callers:
 *     PspCreateUserProcessEcp @ 0x14066E6B4 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406CDF18 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterList(FSRTL_ALLOCATE_ECPLIST_FLAGS Flags, PECP_LIST *EcpList)
{
  struct _ECP_LIST *PoolWithQuotaTag; // rax
  int v4; // edx

  *EcpList = 0LL;
  if ( (Flags & 1) != 0 )
  {
    PoolWithQuotaTag = (struct _ECP_LIST *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x18uLL, 0x6C655346u);
    v4 = 2;
  }
  else
  {
    ++dword_140CDB294;
    PoolWithQuotaTag = (struct _ECP_LIST *)RtlpInterlockedPopEntrySList(&FsRtlEcpListLookaside);
    if ( !PoolWithQuotaTag )
    {
      ++dword_140CDB298;
      PoolWithQuotaTag = (struct _ECP_LIST *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140CDB2B0)(
                                               (unsigned int)dword_140CDB2A4,
                                               (unsigned int)dword_140CDB2AC,
                                               (unsigned int)dword_140CDB2A8);
    }
    v4 = 6;
  }
  if ( !PoolWithQuotaTag )
    return -1073741670;
  PoolWithQuotaTag->Flags = v4;
  PoolWithQuotaTag->Signature = 1282433861;
  PoolWithQuotaTag->EcpList.Blink = &PoolWithQuotaTag->EcpList;
  PoolWithQuotaTag->EcpList.Flink = &PoolWithQuotaTag->EcpList;
  *EcpList = PoolWithQuotaTag;
  return 0;
}
