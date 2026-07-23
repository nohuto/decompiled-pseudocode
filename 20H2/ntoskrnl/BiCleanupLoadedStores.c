/*
 * XREFs of BiCleanupLoadedStores @ 0x14077E2C8
 * Callers:
 *     BiOpenSystemStore @ 0x14077FA3C (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D18A0 (_wcsnicmp.c)
 *     wcstoul @ 0x1403D3B90 (wcstoul.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     BcdForciblyUnloadStore @ 0x140775328 (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x1407753BC (BiUnloadHiveByHandle.c)
 *     BiIsWinPEBoot @ 0x14077EFE4 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14077F5C8 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x14077F748 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140780624 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407807AC (BiCloseKey.c)
 *     BiOpenKeyNonBcd @ 0x140781BA0 (BiOpenKeyNonBcd.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
