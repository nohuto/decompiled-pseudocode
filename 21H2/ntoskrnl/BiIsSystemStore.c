/*
 * XREFs of BiIsSystemStore @ 0x1407833A8
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407792D8 (BcdForciblyUnloadStore.c)
 *     BiLoadSystemStore @ 0x140781BD4 (BiLoadSystemStore.c)
 *     BiCleanupLoadedStores @ 0x1407820A8 (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x140782414 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x14078381C (BiOpenSystemStore.c)
 * Callees:
 *     BiGetRegistryValue @ 0x140783DF8 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
