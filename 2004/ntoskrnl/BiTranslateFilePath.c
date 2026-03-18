/*
 * XREFs of BiTranslateFilePath @ 0x14096F840
 * Callers:
 *     BiCreateBootEntry @ 0x14096DA38 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x14096DFCC (BiCreateMergedBootEntry.c)
 *     BiGetDeviceFromEfiPath @ 0x14096EB6C (BiGetDeviceFromEfiPath.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x1403F6E40 (ZwTranslateFilePath.c)
 *     BiReleasePrivilege @ 0x140773858 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407738B0 (BiAcquirePrivilege.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
