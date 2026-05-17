/*
 * XREFs of RtlpHpVsSubsegmentWalk @ 0x180002980
 * Callers:
 *     RtlpHpSegWalk @ 0x1800026A8 (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x180021698 (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpVsSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _DWORD *a5)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v14; // rdx
  unsigned __int64 i; // rax

  if ( a3 == a2 )
  {
    v14 = a1 + 32;
    for ( i = *(_QWORD *)v14 ^ v14; i != v14; i ^= *(_QWORD *)i )
    {
      if ( i == a2 )
        goto LABEL_15;
    }
    if ( i == a2 )
    {
LABEL_15:
      v8 = a2 + 48;
      goto LABEL_4;
    }
    return 0LL;
  }
  v7 = a3 - 16;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && (a3 & 0xFFF) == 0 )
    v7 = a3 - 32;
  v8 = 16 * (WORD1(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v7 + 2) ^ ((unsigned __int64)(unsigned int)v7 >> 16)) + v7;
LABEL_4:
  v9 = a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL);
  if ( v8 >= v9 )
    return 0LL;
  while ( ((DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(v8) ^ HIDWORD(*(_QWORD *)v8)) & 0xFF0000) == 0
       || (*(_DWORD *)(v8 + 8) & 0x200) != 0 )
  {
    v8 += 16 * (WORD1(RtlpHpHeapGlobals) ^ *(unsigned __int16 *)(v8 + 2) ^ ((unsigned __int64)(unsigned int)v8 >> 16));
    if ( v8 >= v9 )
      return 0LL;
  }
  v10 = v8 + 16;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v8 + 32) & 0xFFF) == 0 )
    v10 = v8 + 32;
  v11 = RtlpHpVsChunkSize(a1, v10);
  v12 = *(unsigned __int16 *)(v8 + 2);
  *a4 = v11;
  *a5 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v8) ^ v12) - *(_DWORD *)a4 - 16;
  return v10;
}
