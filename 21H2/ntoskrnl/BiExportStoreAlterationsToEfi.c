/*
 * XREFs of BiExportStoreAlterationsToEfi @ 0x140972110
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x1407796CC (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     BiLogMessage @ 0x140784F5C (BiLogMessage.c)
 *     BiBuildIdentifierList @ 0x140970B08 (BiBuildIdentifierList.c)
 *     BiExportBcdObjects @ 0x140971C78 (BiExportBcdObjects.c)
 *     BiExportEfiBootManager @ 0x140971DA0 (BiExportEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x1409721B0 (BiFreeIdentifierList.c)
 */

__int64 __fastcall BiExportStoreAlterationsToEfi(HANDLE BcdStoreHandle)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  const GUID *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Exporting store alterations to efi");
  v7[1] = (const GUID *)v7;
  v7[0] = (const GUID *)v7;
  v3 = BiBuildIdentifierList((__int64)BcdStoreHandle, v2, v7);
  if ( v3 < 0 )
    goto LABEL_7;
  v4 = BiExportBcdObjects(BcdStoreHandle, v7);
  if ( v4 < 0 )
    v3 = v4;
  v5 = BiExportEfiBootManager(BcdStoreHandle, (__int64)v7);
  if ( v5 < 0 )
    v3 = v5;
  if ( v3 < 0 )
LABEL_7:
    BiLogMessage(4LL, L"BiExportStoreAlterationsToEfi failed %x", (unsigned int)v3);
  BiFreeIdentifierList(v7);
  return (unsigned int)v3;
}
