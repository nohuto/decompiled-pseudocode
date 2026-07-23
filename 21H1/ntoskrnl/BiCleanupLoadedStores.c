/*
 * XREFs of BiCleanupLoadedStores @ 0x14076D8B8
 * Callers:
 *     BiOpenSystemStore @ 0x14076F02C (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x1403CDDD0 (_wcsnicmp.c)
 *     wcstoul @ 0x1403D00C0 (wcstoul.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     BcdForciblyUnloadStore @ 0x140764944 (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x1407649D8 (BiUnloadHiveByHandle.c)
 *     BiIsWinPEBoot @ 0x14076E5D4 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14076EBB8 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x14076ED38 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x14076FC14 (BiOpenKey.c)
 *     BiCloseKey @ 0x14076FD9C (BiCloseKey.c)
 *     BiOpenKeyNonBcd @ 0x140771190 (BiOpenKeyNonBcd.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall BiCleanupLoadedStores(char a1)
{
  char IsWinPEBoot; // r13
  const wchar_t **v3; // rdi
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  char IsSystemStore; // al
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+38h] BYREF
  HANDLE BcdStoreHandle; // [rsp+70h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  BcdStoreHandle = 0LL;
  v9 = 0;
  P[0] = 0LL;
  Handle = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle) >= 0 )
  {
    if ( (int)BiEnumerateSubKeys(Handle, P, &v9) >= 0 && v9 )
    {
      v3 = (const wchar_t **)P[0];
      v4 = v9;
      do
      {
        if ( !wcsnicmp(*v3, L"BCD", 3uLL)
          && wcstoul(*v3 + 3, 0LL, 10) != -1
          && (int)BiOpenKey(Handle, *v3, 131097LL, &BcdStoreHandle) >= 0 )
        {
          IsSystemStore = BiIsSystemStore(BcdStoreHandle, v5, v6);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(BcdStoreHandle);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle((__int64)BcdStoreHandle, 0);
          }
          else
          {
            BiCloseKey(BcdStoreHandle);
          }
        }
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    if ( P[0] )
      ExFreePoolWithTag(P[0], 0x4B444342u);
  }
  if ( Handle )
    ZwClose(Handle);
}
