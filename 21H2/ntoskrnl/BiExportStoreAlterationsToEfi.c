/*
 * XREFs of BiExportStoreAlterationsToEfi @ 0x140971F30
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x14077950C (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     BiLogMessage @ 0x140784D9C (BiLogMessage.c)
 *     BiBuildIdentifierList @ 0x140970928 (BiBuildIdentifierList.c)
 *     BiExportBcdObjects @ 0x140971A98 (BiExportBcdObjects.c)
 *     BiExportEfiBootManager @ 0x140971BC0 (BiExportEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x140971FD0 (BiFreeIdentifierList.c)
 */

__int64 __fastcall BiExportStoreAlterationsToEfi(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Exporting store alterations to efi");
  v7[1] = (__int64)v7;
  v7[0] = (__int64)v7;
  v3 = BiBuildIdentifierList(a1, v2, v7);
  if ( v3 < 0 )
    goto LABEL_7;
  v4 = BiExportBcdObjects(a1, v7);
  if ( v4 < 0 )
    v3 = v4;
  v5 = BiExportEfiBootManager(a1, (__int64)v7);
  if ( v5 < 0 )
    v3 = v5;
  if ( v3 < 0 )
LABEL_7:
    BiLogMessage(4LL, L"BiExportStoreAlterationsToEfi failed %x", (unsigned int)v3);
  BiFreeIdentifierList(v7);
  return (unsigned int)v3;
}
