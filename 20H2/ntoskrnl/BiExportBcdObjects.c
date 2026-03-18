/*
 * XREFs of BiExportBcdObjects @ 0x140974380
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x140974818 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     BiLogMessage @ 0x140780FBC (BiLogMessage.c)
 *     BiIsPortableWorkspaceBoot @ 0x140972190 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140972A98 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140973BB8 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x1409740EC (BiDeleteBootEntry.c)
 *     BiUpdateEfiEntry @ 0x140975A54 (BiUpdateEfiEntry.c)
 */

__int64 __fastcall BiExportBcdObjects(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // esi
  bool IsPortableWorkspaceBoot; // al
  int v11; // ecx
  bool v12; // bp
  int EfiEntry; // eax
  int updated; // eax

  v2 = *a2;
  v3 = 0;
  if ( (__int64 *)*a2 == a2 )
    return v3;
  do
  {
    v6 = *(_DWORD *)(v2 + 48);
    v7 = v6 & 5;
    if ( (v6 & 5) == 0 )
      goto LABEL_24;
    if ( (v6 & 0x10) != 0 )
    {
      if ( (v6 & 1) == 0 )
        goto LABEL_24;
      v8 = BiDeleteBootEntry(*(_DWORD *)(v2 + 32));
      if ( v8 >= 0 )
      {
        *(_DWORD *)(v2 + 48) &= ~1u;
        goto LABEL_24;
      }
LABEL_9:
      v3 = v8;
      goto LABEL_24;
    }
    if ( v7 == 1 )
    {
      v8 = BiDeleteBootEntry(*(_DWORD *)(v2 + 32));
      if ( v8 >= 0 )
        goto LABEL_24;
      goto LABEL_9;
    }
    if ( v7 == 4 )
    {
      v9 = 0;
      IsPortableWorkspaceBoot = BiIsPortableWorkspaceBoot();
      v11 = *(_DWORD *)(v2 + 48);
      v12 = IsPortableWorkspaceBoot;
      if ( (v11 & 8) != 0 || !IsPortableWorkspaceBoot )
      {
        EfiEntry = BiCreateEfiEntry(a1, v2);
        v11 = *(_DWORD *)(v2 + 48);
        v9 = EfiEntry;
      }
      if ( (v11 & 8) == 0 && !v12 )
      {
        if ( v9 < 0 )
          v9 = 0;
        else
          BiAddBootEntryToEfiBootManagerDisplayOrder(a1, v2);
      }
      if ( v9 < 0 )
        v3 = -2143748095;
    }
    else
    {
      updated = BiUpdateEfiEntry(a1, v2);
      if ( updated < 0 )
      {
        v3 = updated;
        if ( (*(_BYTE *)(v2 + 48) & 8) != 0 )
          v3 = -2143748093;
      }
    }
LABEL_24:
    v2 = *(_QWORD *)v2;
  }
  while ( (__int64 *)v2 != a2 );
  if ( (v3 & 0x80000000) != 0 )
    BiLogMessage(4LL, L"BiExportBcdObjects failed %x", v3);
  return v3;
}
