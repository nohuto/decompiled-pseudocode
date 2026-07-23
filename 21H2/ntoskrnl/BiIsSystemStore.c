/*
 * XREFs of BiIsSystemStore @ 0x140783568
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140779498 (BcdForciblyUnloadStore.c)
 *     BiLoadSystemStore @ 0x140781D94 (BiLoadSystemStore.c)
 *     BiCleanupLoadedStores @ 0x140782268 (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x1407825D4 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x1407839DC (BiOpenSystemStore.c)
 * Callees:
 *     BiGetRegistryValue @ 0x140783FB8 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

bool __fastcall BiIsSystemStore(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  int v4; // ebx
  PVOID v6[5]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v1 = 0;
  v6[0] = 0LL;
  v8 = 0;
  P = 0LL;
  v7 = 0;
  if ( (int)BiGetRegistryValue(a1, L"System", L"Description", 4LL, &P, &v7) >= 0 )
  {
    v3 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    if ( v3 )
    {
      if ( (int)BiGetRegistryValue(a1, L"TreatAsSystem", L"Description", 4LL, v6, &v8) >= 0 )
      {
        v4 = *(_DWORD *)v6[0];
        ExFreePoolWithTag(v6[0], 0x4B444342u);
        return v4 != 0;
      }
    }
  }
  return v1;
}
