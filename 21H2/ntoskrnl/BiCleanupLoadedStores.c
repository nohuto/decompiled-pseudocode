/*
 * XREFs of BiCleanupLoadedStores @ 0x1407820A8
 * Callers:
 *     BiOpenSystemStore @ 0x14078381C (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D2210 (_wcsnicmp.c)
 *     wcstoul @ 0x1403D4500 (wcstoul.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     BcdForciblyUnloadStore @ 0x1407792D8 (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x14077936C (BiUnloadHiveByHandle.c)
 *     BiIsWinPEBoot @ 0x140782DC4 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x1407833A8 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x140783528 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140784404 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078458C (BiCloseKey.c)
 *     BiOpenKeyNonBcd @ 0x140785980 (BiOpenKeyNonBcd.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  __int64 v10; // [rsp+70h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  v10 = 0LL;
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
          && (int)BiOpenKey(Handle, *v3, 131097LL, &v10) >= 0 )
        {
          IsSystemStore = BiIsSystemStore(v10, v5, v6);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(v10);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle(v10, 0);
          }
          else
          {
            BiCloseKey(v10);
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
