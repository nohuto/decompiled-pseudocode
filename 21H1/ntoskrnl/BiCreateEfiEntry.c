/*
 * XREFs of BiCreateEfiEntry @ 0x14096CA48
 * Callers:
 *     BiBindEfiEntries @ 0x14096BDA0 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x14096D210 (BiExportBcdObjects.c)
 * Callees:
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14076F3DC (BcdCloseObject.c)
 *     BiSetRegistryValue @ 0x140770274 (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x1407705AC (BiLogMessage.c)
 *     BiAddBootEntry @ 0x14096B8B0 (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x14096C698 (BiCreateBootEntry.c)
 *     BiGetSavedBootEntry @ 0x14096DC44 (BiGetSavedBootEntry.c)
 *     BiUpdateEfiEntry @ 0x14096E8E4 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14096EAAC (BiUpdateObjectReferenceInEfiEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateEfiEntry(__int64 a1, __int64 a2)
{
  ULONG *v3; // rdi
  int v5; // eax
  __int64 v6; // r14
  int SavedBootEntry; // ebx
  ULONG v8; // eax
  ULONG v9; // eax
  ULONG v11; // [rsp+68h] [rbp+38h] BYREF
  PVOID P; // [rsp+70h] [rbp+40h] BYREF
  void *v13; // [rsp+78h] [rbp+48h] BYREF

  v11 = 0;
  v13 = 0LL;
  v3 = 0LL;
  P = 0LL;
  v5 = BcdOpenObject(a1, (unsigned int *)(a2 + 16), &v13);
  v6 = (__int64)v13;
  SavedBootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_17;
  if ( (*(_DWORD *)(a2 + 48) & 2) == 0 )
  {
    SavedBootEntry = BiCreateBootEntry(v13, &P);
    if ( SavedBootEntry >= 0 )
    {
      v3 = (ULONG *)P;
      SavedBootEntry = BiAddBootEntry((__int64)P, (__int64)&v11);
      if ( SavedBootEntry >= 0 )
      {
        BiLogMessage(2LL, L"Created new boot entry 0x%x", v11);
        v3[2] = v11;
        v9 = v11;
        *(_DWORD *)(a2 + 48) |= 0x21u;
        *(_DWORD *)(a2 + 32) = v9;
        *(_QWORD *)(a2 + 40) = v3;
        SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", L"Description", 3u, v3, v3[1]);
        if ( SavedBootEntry >= 0 )
        {
          *(_DWORD *)(a2 + 48) |= 2u;
LABEL_14:
          if ( SavedBootEntry >= 0 )
            goto LABEL_18;
          goto LABEL_17;
        }
      }
      goto LABEL_17;
    }
LABEL_16:
    v3 = (ULONG *)P;
    goto LABEL_17;
  }
  SavedBootEntry = BiGetSavedBootEntry(v13, &P);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  v3 = (ULONG *)P;
  if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
  {
    SavedBootEntry = BiUpdateObjectReferenceInEfiEntry(P, v6);
    if ( SavedBootEntry < 0 )
      goto LABEL_17;
    *(_DWORD *)(a2 + 48) |= 0x20u;
  }
  SavedBootEntry = BiAddBootEntry((__int64)v3, (__int64)&v11);
  if ( SavedBootEntry >= 0 )
  {
    BiLogMessage(2LL, L"Created boot entry 0x%x using cached variable", v11);
    v3[2] = v11;
    v8 = v11;
    *(_DWORD *)(a2 + 48) |= 1u;
    *(_DWORD *)(a2 + 32) = v8;
    *(_QWORD *)(a2 + 40) = v3;
    SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", L"Description", 3u, v3, v3[1]);
    if ( SavedBootEntry >= 0 )
    {
      SavedBootEntry = BiUpdateEfiEntry(a1, a2);
      goto LABEL_14;
    }
  }
LABEL_17:
  BiLogMessage(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)SavedBootEntry);
LABEL_18:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (*(_DWORD *)(a2 + 48) & 1) == 0 && v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)SavedBootEntry;
}
