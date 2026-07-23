/*
 * XREFs of PopEtProcessSnapshotFind @ 0x140682EE0
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x140682D28 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopEtProcessSnapshotFind(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // rbp
  __int64 v3; // r9
  int v4; // ebx
  __int64 v5; // r11
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  v4 = *(_DWORD *)(v1 + 68) >> 5;
  v5 = v2 & (-1LL << (*(_BYTE *)(v1 + 68) & 0x1F));
  if ( !v4 )
    goto LABEL_10;
  v6 = *(_QWORD *)(v1 + 72)
     + 8LL
     * ((37
       * (BYTE6(v5)
        + 37
        * (BYTE5(v5)
         + 37
         * (BYTE4(v5) + 37 * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883)))))))
       + HIBYTE(v5)) & (unsigned int)(v4 - 1));
  while ( 1 )
  {
    v6 = *(_QWORD *)v6;
    if ( (v6 & 1) != 0 )
      break;
    if ( v5 == ((-1LL << (*(_BYTE *)(v1 + 68) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
      goto LABEL_5;
  }
  v6 = 0LL;
LABEL_5:
  if ( v6 )
    return v6;
LABEL_10:
  if ( (*(_DWORD *)(v1 + 636) & 1) == 0 && *(_DWORD *)a1 != 1 && *(_DWORD *)(*(_QWORD *)(v2 + 2280) + 468LL) > 1u )
    ++*(_DWORD *)(v1 + 608);
  return v3;
}
