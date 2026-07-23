/*
 * XREFs of BiBindEfiEntries @ 0x14096BDA0
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x14096C000 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1407705AC (BiLogMessage.c)
 *     BcdDeleteObject @ 0x14096A428 (BcdDeleteObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x14096B020 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14096BA78 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiEntryToBcdObject @ 0x14096BEFC (BiBindEfiEntryToBcdObject.c)
 *     BiCreateEfiEntry @ 0x14096CA48 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x14096CF7C (BiDeleteBootEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x14096E188 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x14096E608 (BiUpdateBcdObject.c)
 */

__int64 __fastcall BiBindEfiEntries(HANDLE BcdStoreHandle, __int64 *a2)
{
  NTSTATUS updated; // edi
  __int64 v3; // rbx
  int v6; // eax
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  BcdObjectHandle = 0LL;
  updated = 0;
  v3 = *a2;
  if ( (__int64 *)*a2 != a2 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v3 + 48);
      if ( (v6 & 0x10) != 0 )
        break;
      if ( (v6 & 1) != 0 )
      {
        if ( (v6 & 0x24) == 0x20 && !BiIsPortableWorkspaceBoot() )
        {
          if ( (int)BiDeleteBootEntry(*(_DWORD *)(v3 + 32)) < 0 )
            goto LABEL_21;
          goto LABEL_6;
        }
        updated = BiBindEfiEntryToBcdObject(BcdStoreHandle, v3);
        if ( updated < 0 || (updated = BiUpdateBcdObject(BcdStoreHandle, v3), updated < 0) )
        {
LABEL_23:
          BiLogMessage(4LL, L"BiBindEfiEntries failed %x", (unsigned int)updated);
          return (unsigned int)updated;
        }
      }
      else if ( (v6 & 4) != 0 )
      {
        if ( (v6 & 8) != 0 )
        {
          updated = BcdOpenObject(BcdStoreHandle, (const GUID *)(v3 + 16), &BcdObjectHandle);
          if ( updated < 0 )
            goto LABEL_23;
          BcdDeleteObject(BcdObjectHandle);
          *(_DWORD *)(v3 + 48) &= 0xFFFFFFF9;
        }
        else if ( !BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(BcdStoreHandle, v3) >= 0 )
        {
          BiAddBootEntryToNvramDisplayOrder(v3);
        }
      }
LABEL_21:
      v3 = *(_QWORD *)v3;
      if ( (__int64 *)v3 == a2 )
        return (unsigned int)updated;
    }
    if ( (v6 & 1) == 0 )
      goto LABEL_21;
    BiLogMessage(3LL, L"Boot entry exists for DontSync with ID 0x%x", *(unsigned int *)(v3 + 32));
    if ( (int)BiDeleteBootEntry(*(_DWORD *)(v3 + 32)) < 0 )
      goto LABEL_21;
    *(_DWORD *)(v3 + 48) &= ~1u;
LABEL_6:
    BiRemoveBootEntryFromNvramDisplayOrder(v3);
    goto LABEL_21;
  }
  return (unsigned int)updated;
}
