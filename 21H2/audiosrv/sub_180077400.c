/*
 * XREFs of sub_180077400 @ 0x180077400
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

__int64 __fastcall sub_180077400(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = *(unsigned int *)(a2 + 256);
  *(_DWORD *)(a2 + 136) = v2;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 3u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 27LL, &unk_18015E3E8, v2);
  }
  return 0LL;
}
