/*
 * XREFs of BiQueryBootEntryOrder @ 0x140975144
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140972BE8 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x140972CD4 (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x1409744A8 (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1409752F8 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x1403FA970 (ZwQueryBootEntryOrder.c)
 *     BiLogMessage @ 0x140780FBC (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140781E58 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140781EB0 (BiAcquirePrivilege.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiQueryBootEntryOrder(_QWORD *a1, unsigned int *a2)
{
  void *v2; // rdi
  int BootEntryOrder; // ebx
  PVOID PoolWithTag; // rax
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = 0LL;
  v8 = 0;
  BootEntryOrder = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( BootEntryOrder >= 0 )
  {
    BootEntryOrder = ZwQueryBootEntryOrder(0LL, (__int64)&v8);
    if ( BootEntryOrder != -1073741789 )
      goto LABEL_6;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v8, 0x4B444342u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      BootEntryOrder = -1073741670;
LABEL_10:
      BiReleasePrivilege((unsigned int *)&v9);
      return (unsigned int)BootEntryOrder;
    }
    BootEntryOrder = ZwQueryBootEntryOrder((__int64)PoolWithTag, (__int64)&v8);
    if ( BootEntryOrder < 0 )
    {
LABEL_6:
      BiLogMessage(4LL, L"Failed to query boot entry order. Status: %x", (unsigned int)BootEntryOrder);
      if ( BootEntryOrder < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_10;
      }
    }
    *a2 = v8;
    *a1 = v2;
    goto LABEL_10;
  }
  return (unsigned int)BootEntryOrder;
}
