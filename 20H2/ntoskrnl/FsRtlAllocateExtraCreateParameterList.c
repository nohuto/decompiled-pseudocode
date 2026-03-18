/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x140690930
 * Callers:
 *     PspCreateUserProcessEcp @ 0x1406907C8 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406C6E18 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
    ++dword_140CDB1D4;
    PoolWithQuotaTag = (struct _ECP_LIST *)RtlpInterlockedPopEntrySList(&FsRtlEcpListLookaside);
    if ( !PoolWithQuotaTag )
    {
      ++dword_140CDB1D8;
      PoolWithQuotaTag = (struct _ECP_LIST *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140CDB1F0)(
                                               (unsigned int)dword_140CDB1E4,
                                               (unsigned int)dword_140CDB1EC,
                                               (unsigned int)dword_140CDB1E8);
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
