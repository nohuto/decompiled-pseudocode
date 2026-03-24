/*
 * XREFs of BiUnloadHiveByHandle @ 0x14077936C
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407792D8 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x140781D00 (BiCloseStore.c)
 *     BiCleanupLoadedStores @ 0x1407820A8 (BiCleanupLoadedStores.c)
 * Callees:
 *     BiUnloadHiveByName @ 0x140779404 (BiUnloadHiveByName.c)
 *     BiGetRegistryValue @ 0x140783DF8 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x14078458C (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUnloadHiveByHandle(__int64 a1, char a2)
{
  int RegistryValue; // edi
  __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  P = 0LL;
  RegistryValue = BiGetRegistryValue(a1, L"KeyName", L"Description", 1LL, &P, &v8);
  BiCloseKey(a1);
  if ( RegistryValue < 0 )
    return (unsigned int)RegistryValue;
  LOBYTE(v5) = a2;
  v6 = BiUnloadHiveByName(P, v8, v5);
  ExFreePoolWithTag(P, 0x4B444342u);
  return v6;
}
