/*
 * XREFs of sub_1800C82A0 @ 0x1800C82A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_1800C82A0(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  int v5; // ecx

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 5u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0xDu, (__int64)&unk_18015DEF0, *(const wchar_t **)(a1 + 728));
  }
  v4 = *(_DWORD *)(a1 + 720);
  if ( v4 )
    v5 = *(_DWORD *)(a1 + 276);
  else
    v5 = *(_DWORD *)(a1 + 712);
  *a2 = v5;
  return v4 != 0 ? 0x889000D : 0;
}
