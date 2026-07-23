/*
 * XREFs of RtlpZeroBlockFromOffset @ 0x180076114
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x18001F630 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     memset @ 0x1800A4740 (memset.c)
 */

unsigned __int8 __fastcall RtlpZeroBlockFromOffset(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  __int64 v6; // rdx
  int v7; // eax
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  unsigned __int8 result; // al
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // al
  __int64 v14; // r8
  int v15; // [rsp+28h] [rbp-10h]

  v4 = a2 - 16;
  _m_prefetchw((const void *)(a2 - 16));
  if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
    v4 -= 16LL * *(unsigned __int8 *)(v4 + 14);
  v6 = 0LL;
  if ( *(char *)(v4 + 15) < 0 )
  {
    if ( !((unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v4 + 8) ^ (v4 >> 4))) )
      v6 = *(_QWORD *)(v4
                     - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)(v4 >> 4)) >> 12));
    v8 = *(_WORD *)(v6 + 36);
  }
  else if ( *(_DWORD *)(a1 + 124) )
  {
    v7 = *(_DWORD *)(v4 + 8);
    LOWORD(v15) = v7;
    if ( (v7 & *(_DWORD *)(a1 + 124)) != 0 )
      v15 = *(_DWORD *)(a1 + 136) ^ v7;
    v8 = v15;
  }
  else
  {
    v8 = *(_WORD *)(v4 + 8);
  }
  v9 = v8;
  result = *(_BYTE *)(v4 + 15);
  v11 = 16 * v9;
  if ( result != 4 )
  {
    v12 = v11 - 8;
    v13 = result & 0x3F;
    if ( v13 != 63 )
      v12 = v11;
    v14 = v12 + 8;
    if ( (*(_BYTE *)(v4 + 10) & 2) != 0 )
    {
      v14 -= 16LL;
      if ( v13 != 63 )
        v14 -= 8LL;
    }
    return (unsigned __int8)memset((void *)(a2 + a3), 0, v14 - a3 - 16);
  }
  return result;
}
