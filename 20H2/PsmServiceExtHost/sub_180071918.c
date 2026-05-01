/*
 * XREFs of sub_180071918 @ 0x180071918
 * Callers:
 *     sub_180071AA0 @ 0x180071AA0 (sub_180071AA0.c)
 * Callees:
 *     sub_180023288 @ 0x180023288 (sub_180023288.c)
 *     sub_18006B218 @ 0x18006B218 (sub_18006B218.c)
 */

__int64 __fastcall sub_180071918(_QWORD *a1)
{
  __int64 v1; // rbx
  int v3; // esi

  v1 = a1[6];
  v3 = *(_DWORD *)(*(_QWORD *)(v1 + 48) + 508LL);
  if ( (*(_BYTE *)(v1 + 836) & 1) != 0 )
  {
    if ( !(unsigned int)sub_180023288(v1 + 64, (*(_DWORD *)(*(_QWORD *)(v1 + 48) + 508LL) & 4) == 0) )
      return a1[5];
  }
  else if ( (*(_BYTE *)(v1 + 1162) & 0x20) == 0 )
  {
    return a1[5];
  }
  if ( (v3 & 4) == 0 && (unsigned int)sub_18006B218(v1, 1) || (*(_BYTE *)(v1 + 1162) & 0x40) == 0 )
    return a1[5];
  return *a1;
}
