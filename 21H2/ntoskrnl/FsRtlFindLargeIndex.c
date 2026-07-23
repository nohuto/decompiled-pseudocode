/*
 * XREFs of FsRtlFindLargeIndex @ 0x14021A7C0
 * Callers:
 *     FsRtlTruncateBaseMcb @ 0x140219BE0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x140219CF0 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x14021A0C0 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlSplitBaseMcb @ 0x1404EF640 (FsRtlSplitBaseMcb.c)
 * Callees:
 *     <none>
 */

char __fastcall FsRtlFindLargeIndex(__int64 a1, unsigned int a2, int *a3)
{
  int v3; // ebx
  int v4; // r11d
  int v6; // r9d
  int v7; // eax
  __int64 v8; // rdx

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0;
  v6 = v3 - 1;
  if ( v3 - 1 < 0 )
  {
LABEL_7:
    *a3 = v3;
    return 0;
  }
  while ( 1 )
  {
    v7 = (v6 + v4) / 2;
    v8 = *(_QWORD *)(a1 + 16);
    if ( v7 && a2 < *(_DWORD *)(v8 + 8LL * v7 - 8) )
    {
      v6 = v7 - 1;
      goto LABEL_6;
    }
    if ( a2 <= *(_DWORD *)(v8 + 8LL * v7) - 1 )
      break;
    v4 = v7 + 1;
LABEL_6:
    if ( v4 > v6 )
      goto LABEL_7;
  }
  *a3 = v7;
  return 1;
}
