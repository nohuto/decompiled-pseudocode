/*
 * XREFs of BiUnloadHiveByName @ 0x140779404
 * Callers:
 *     BiUnloadHiveByHandle @ 0x14077936C (BiUnloadHiveByHandle.c)
 *     BiAddStoreFromFile @ 0x140781DD8 (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1403D68F0 (swprintf_s.c)
 *     ZwUnloadKey @ 0x1403FDCC0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1403FDCE0 (ZwUnloadKey2.c)
 *     BiReleasePrivilege @ 0x140785C38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140785C90 (BiAcquirePrivilege.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiUnloadHiveByName(__int64 a1, int a2, char a3)
{
  SIZE_T v5; // rbx
  wchar_t *PoolWithTag; // rax
  WCHAR *v7; // rdi
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+5Ch] [rbp-14h]
  __int128 v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+A8h] [rbp+38h] BYREF

  v13[1] = 0;
  v17 = 0;
  v19 = 0LL;
  v5 = (unsigned int)(a2 + 38);
  DestinationString = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x4B444342u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    swprintf_s(PoolWithTag, v5 >> 1, L"%s\\%s", L"\\Registry\\Machine", a1);
    RtlInitUnicodeString(&DestinationString, v7);
    v14 = 0LL;
    p_DestinationString = &DestinationString;
    v13[0] = 48;
    v16 = 576;
    v18 = 0LL;
    v9 = BiAcquirePrivilege(18LL, &v19);
    if ( v9 >= 0 )
    {
      if ( a3 )
        v10 = ZwUnloadKey2((__int64)v13, 1LL);
      else
        v10 = ZwUnloadKey((__int64)v13, v8);
      v9 = v10;
      BiReleasePrivilege(&v19);
    }
    ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
