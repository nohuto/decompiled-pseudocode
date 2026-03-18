/*
 * XREFs of BiTranslateFilePath @ 0x140A20C90
 * Callers:
 *     BiCreateBootEntry @ 0x140A1EE84 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x140A1F420 (BiCreateMergedBootEntry.c)
 *     BiGetDeviceFromEfiPath @ 0x140A1FFC0 (BiGetDeviceFromEfiPath.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x14041F160 (ZwTranslateFilePath.c)
 *     BiReleasePrivilege @ 0x140813B50 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140813BA8 (BiAcquirePrivilege.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
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
