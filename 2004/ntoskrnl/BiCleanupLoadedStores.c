/*
 * XREFs of BiCleanupLoadedStores @ 0x14076FCC8
 * Callers:
 *     BiOpenSystemStore @ 0x14077143C (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x1403CEC10 (_wcsnicmp.c)
 *     wcstoul @ 0x1403D0F00 (wcstoul.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     BcdForciblyUnloadStore @ 0x1407662F8 (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x14076638C (BiUnloadHiveByHandle.c)
 *     BiIsWinPEBoot @ 0x1407709E4 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x140770FC8 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x140771148 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140772024 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407721AC (BiCloseKey.c)
 *     BiOpenKeyNonBcd @ 0x1407735A0 (BiOpenKeyNonBcd.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
