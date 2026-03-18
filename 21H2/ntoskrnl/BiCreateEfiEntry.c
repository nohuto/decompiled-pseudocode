/*
 * XREFs of BiCreateEfiEntry @ 0x140A1F234
 * Callers:
 *     BiBindEfiEntries @ 0x140A1E590 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x140A1F9F4 (BiExportBcdObjects.c)
 * Callees:
 *     BiSetRegistryValue @ 0x1408123B4 (BiSetRegistryValue.c)
 *     BcdOpenObject @ 0x140812B74 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140812D00 (BcdCloseObject.c)
 *     BiLogMessage @ 0x1408138F0 (BiLogMessage.c)
 *     BiAddBootEntry @ 0x140A1E0A0 (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x140A1EE84 (BiCreateBootEntry.c)
 *     BiGetSavedBootEntry @ 0x140A20438 (BiGetSavedBootEntry.c)
 *     BiUpdateEfiEntry @ 0x140A210D4 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A212A0 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
    goto LABEL_16;
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
        SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", (__int64)L"Description", 3u, v3, v3[1]);
        if ( SavedBootEntry >= 0 )
        {
          *(_DWORD *)(a2 + 48) |= 2u;
          goto LABEL_17;
        }
      }
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  SavedBootEntry = BiGetSavedBootEntry(v13, &P);
  if ( SavedBootEntry < 0 )
  {
LABEL_15:
    v3 = (ULONG *)P;
    goto LABEL_16;
  }
  v3 = (ULONG *)P;
  if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
  {
    SavedBootEntry = BiUpdateObjectReferenceInEfiEntry(P, v6);
    if ( SavedBootEntry >= 0 )
    {
      *(_DWORD *)(a2 + 48) |= 0x20u;
      goto LABEL_7;
    }
LABEL_16:
    BiLogMessage(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)SavedBootEntry);
    goto LABEL_17;
  }
LABEL_7:
  SavedBootEntry = BiAddBootEntry((__int64)v3, (__int64)&v11);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  BiLogMessage(2LL, L"Created boot entry 0x%x using cached variable", v11);
  v3[2] = v11;
  v8 = v11;
  *(_DWORD *)(a2 + 48) |= 1u;
  *(_DWORD *)(a2 + 32) = v8;
  *(_QWORD *)(a2 + 40) = v3;
  SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", (__int64)L"Description", 3u, v3, v3[1]);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  SavedBootEntry = BiUpdateEfiEntry(a1, a2);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (*(_DWORD *)(a2 + 48) & 1) == 0 && v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)SavedBootEntry;
}
