/*
 * XREFs of BiBindEfiEntries @ 0x140970628
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x140970888 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BcdOpenObject @ 0x140783A40 (BcdOpenObject.c)
 *     BiLogMessage @ 0x140784D9C (BiLogMessage.c)
 *     BcdDeleteObject @ 0x14096ECB0 (BcdDeleteObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x14096F8A8 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140970300 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiEntryToBcdObject @ 0x140970784 (BiBindEfiEntryToBcdObject.c)
 *     BiCreateEfiEntry @ 0x1409712D0 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x140971804 (BiDeleteBootEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140972A10 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x140972E90 (BiUpdateBcdObject.c)
 */

__int64 __fastcall BiBindEfiEntries(__int64 a1, __int64 *a2)
{
  int updated; // edi
  __int64 v3; // rbx
  int v6; // eax
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
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
          if ( (int)BiDeleteBootEntry(*(unsigned int *)(v3 + 32)) < 0 )
            goto LABEL_21;
          goto LABEL_6;
        }
        updated = BiBindEfiEntryToBcdObject(a1, v3);
        if ( updated < 0 || (updated = BiUpdateBcdObject(a1, v3), updated < 0) )
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
          updated = BcdOpenObject(a1, (unsigned int *)(v3 + 16), &v8);
          if ( updated < 0 )
            goto LABEL_23;
          BcdDeleteObject(v8);
          *(_DWORD *)(v3 + 48) &= 0xFFFFFFF9;
        }
        else if ( !BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(a1, v3) >= 0 )
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
    if ( (int)BiDeleteBootEntry(*(unsigned int *)(v3 + 32)) < 0 )
      goto LABEL_21;
    *(_DWORD *)(v3 + 48) &= ~1u;
LABEL_6:
    BiRemoveBootEntryFromNvramDisplayOrder(v3);
    goto LABEL_21;
  }
  return (unsigned int)updated;
}
