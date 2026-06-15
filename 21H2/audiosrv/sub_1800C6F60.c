/*
 * XREFs of sub_1800C6F60 @ 0x1800C6F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800C6B60 @ 0x1800C6B60 (sub_1800C6B60.c)
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 */

__int64 __fastcall sub_1800C6F60(__int64 a1, int a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x28u, (__int64)&unk_18015DEF0, a1 - 16);
  }
  v6 = sub_1800C6C50(a1, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    sub_18005E8F8((__int64)"CPerEndpointVolumeAudioSession::Disconnect", 2208, v6);
  else
    sub_1800C6B60(a1 - 16);
  return v7;
}
