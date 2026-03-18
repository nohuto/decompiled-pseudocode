/*
 * XREFs of BiTranslateFilePath @ 0x14096E4A0
 * Callers:
 *     BiCreateBootEntry @ 0x14096C698 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x14096CC2C (BiCreateMergedBootEntry.c)
 *     BiGetDeviceFromEfiPath @ 0x14096D7CC (BiGetDeviceFromEfiPath.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x1403F5BB0 (ZwTranslateFilePath.c)
 *     BiReleasePrivilege @ 0x140771448 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407714A0 (BiAcquirePrivilege.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiTranslateFilePath(__int64 a1, unsigned int a2, _QWORD *a3)
{
  PVOID PoolWithTag; // rdi
  int v7; // ebx
  int v8; // eax
  unsigned int v10[10]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)v10 = 0LL;
  PoolWithTag = 0LL;
  v7 = BiAcquirePrivilege(0x16u, (__int64)v10);
  if ( v7 >= 0 )
  {
    v8 = ZwTranslateFilePath(a1, a2);
    v7 = v8;
    if ( v8 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0LL, 0x4B444342u);
      if ( PoolWithTag )
        v7 = ZwTranslateFilePath(a1, a2);
      else
        v7 = -1073741670;
    }
    else if ( v8 >= 0 )
    {
      v7 = -1073741811;
    }
    BiReleasePrivilege(v10);
    if ( v7 < 0 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    }
    else
    {
      *a3 = PoolWithTag;
    }
  }
  return (unsigned int)v7;
}
