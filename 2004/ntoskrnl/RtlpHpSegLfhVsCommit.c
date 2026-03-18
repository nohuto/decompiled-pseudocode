/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x1402576D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x1402577C0 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v4; // r10d
  __int64 v5; // r9
  char v8; // r8
  unsigned __int64 v9; // rdx
  char v10; // al
  char v11; // cl

  v3 = *(_QWORD *)a1;
  v4 = a1;
  v5 = a2 & *(_QWORD *)a1;
  v8 = *(_BYTE *)(a1 + 8);
  if ( (a1 ^ v5 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)(v5 + 0x10)) != 0xA2E64EADA2E64EADuLL )
    goto LABEL_8;
  v9 = v5 + 32 * ((unsigned __int64)(unsigned int)(a2 - v5) >> v8);
  if ( !v9 )
    goto LABEL_8;
  v10 = *(_BYTE *)(v9 + 24);
  if ( (v10 & 1) == 0 )
    goto LABEL_8;
  if ( (v10 & 2) == 0 )
  {
    v9 -= 32LL * *(unsigned __int8 *)(v9 + 31);
    v11 = *(_BYTE *)(v9 + 24);
    if ( (v11 & 3) == 3 && (v11 & 0xCu) >= 8 )
      return RtlpHpSegPageRangeCommit(
               v4,
               v9,
               ((_DWORD)a2 - (unsigned int)((__int64)(v9 - (v9 & v3)) >> 5 << v8) - ((unsigned int)v9 & (unsigned int)v3)) >> 12,
               a3 >> 12,
               0,
               0LL);
LABEL_8:
    v9 = 0LL;
    return RtlpHpSegPageRangeCommit(
             v4,
             v9,
             ((_DWORD)a2 - (unsigned int)((__int64)(v9 - (v9 & v3)) >> 5 << v8) - ((unsigned int)v9 & (unsigned int)v3)) >> 12,
             a3 >> 12,
             0,
             0LL);
  }
  if ( (v10 & 0xCu) < 8 && (((1 << v8) - 1) & a2) != 0 )
    goto LABEL_8;
  return RtlpHpSegPageRangeCommit(
           v4,
           v9,
           ((_DWORD)a2 - (unsigned int)((__int64)(v9 - (v9 & v3)) >> 5 << v8) - ((unsigned int)v9 & (unsigned int)v3)) >> 12,
           a3 >> 12,
           0,
           0LL);
}
