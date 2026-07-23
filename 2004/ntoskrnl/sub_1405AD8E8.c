/*
 * XREFs of sub_1405AD8E8 @ 0x1405AD8E8
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409030A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x140709DA0 (RtlQueryRegistryValuesEx.c)
 *     ExInitLicenseData @ 0x1407943A8 (ExInitLicenseData.c)
 *     ExpInitLicensing @ 0x1407C1494 (ExpInitLicensing.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405AD8E8(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY *v3; // rsi
  struct _LIST_ENTRY *PoolWithTag; // r14
  NTSTATUS v5; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *v7; // rbx
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+38h] [rbp-19h] BYREF
  __int64 v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+78h] [rbp+27h]
  __int64 v12; // [rsp+80h] [rbp+2Fh]
  __int64 v13; // [rsp+88h] [rbp+37h]
  int v14; // [rsp+90h] [rbp+3Fh]
  __int64 v15; // [rsp+98h] [rbp+47h]
  int v16; // [rsp+A0h] [rbp+4Fh]

  Blink = (struct _LIST_ENTRY *)&PspHostSiloGlobals;
  if ( a1 )
    Blink = a1[79].Blink;
  v3 = 0LL;
  PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x10008uLL, 0x69534C53u);
  if ( PoolWithTag && (v3 = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x9320uLL, 0x69534C53u)) != 0LL )
  {
    memset(PoolWithTag, 0, 0x10000uLL);
    memset(&v3->Blink, 0, 0x9318uLL);
    HIDWORD(PoolWithTag[4096].Flink) = 0;
    QueryTable.DefaultData = 0LL;
    v10 = 0LL;
    v11 = 0;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
    v16 = 0;
    LODWORD(PoolWithTag[4096].Flink) = 0x10000;
    QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&ExpQueryRegistryRoutine;
    v3->Flink = PoolWithTag;
    QueryTable.Name = L"ProductPolicy";
    Blink[56].Blink = v3;
    QueryTable.Flags = 256;
    QueryTable.DefaultType = 50331651;
    QueryTable.DefaultLength = 0x10000;
    QueryTable.EntryContext = v3;
    ExpInitLicensing(Blink);
    CurrentThread = KeGetCurrentThread();
    v7 = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
    CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = a1;
    v5 = RtlQueryRegistryValuesEx(2u, L"ProductOptions", &QueryTable, 0LL, 0LL);
    ExInitLicenseData();
    KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = v7;
    if ( v5 >= 0 )
      return (unsigned int)v5;
  }
  else
  {
    v5 = -1073741801;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x69534C53u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x69534C53u);
  return (unsigned int)v5;
}
