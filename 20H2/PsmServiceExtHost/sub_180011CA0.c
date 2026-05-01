/*
 * XREFs of sub_180011CA0 @ 0x180011CA0
 * Callers:
 *     sub_180002FF8 @ 0x180002FF8 (sub_180002FF8.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180011CA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // r8d

  v2 = *(_QWORD *)(a1 + 40);
  if ( (v2 & 8) == 0 )
  {
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 64);
    *(_QWORD *)(a1 + 40) |= 8uLL;
    v2 = *(_QWORD *)(a1 + 40);
  }
  if ( (v2 & 4) == 0 )
  {
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a1 + 40) |= 4uLL;
    v2 = *(_QWORD *)(a1 + 40);
  }
  if ( (v2 & 2) == 0 )
  {
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
    *(_QWORD *)(a1 + 40) |= 2uLL;
    v2 = *(_QWORD *)(a1 + 40);
  }
  if ( (v2 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 360);
    *(_QWORD *)(a1 + 40) |= 1uLL;
    v2 = *(_QWORD *)(a1 + 40);
  }
  if ( (v2 & 0x20) == 0 )
  {
    *(_DWORD *)(a1 + 88) ^= (*(_DWORD *)(a1 + 88) ^ *(_DWORD *)(a2 + 44)) & 3;
    *(_QWORD *)(a1 + 40) |= 0x20uLL;
    v2 = *(_QWORD *)(a1 + 40);
  }
  if ( (v2 & 0x40) == 0 )
  {
    *(_DWORD *)(a1 + 88) ^= (*(_DWORD *)(a1 + 88) ^ *(_DWORD *)(a2 + 44)) & 8;
    *(_QWORD *)(a1 + 40) |= 0x40uLL;
    v2 = *(_QWORD *)(a1 + 40);
  }
  if ( (v2 & 0x80u) == 0LL )
  {
    *(_DWORD *)(a1 + 88) ^= (*(_DWORD *)(a1 + 88) ^ *(_DWORD *)(a2 + 44)) & 0x20;
    *(_QWORD *)(a1 + 40) |= 0x80uLL;
    v2 = *(_QWORD *)(a1 + 40);
  }
  if ( (v2 & 0x10) == 0 && (*(_BYTE *)(a1 + 88) & 0x20) != 0 )
  {
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 40) |= 0x10uLL;
  }
  if ( (*(_BYTE *)(a2 + 42) & 7) == 3 )
    *(_DWORD *)(a1 + 88) |= 0x20u;
  LODWORD(v3) = (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a2 + 372) >> 18)) & 1;
  *(_DWORD *)(a1 + 16) ^= v3;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a2 + 136);
    *(_QWORD *)a1 = v3;
    *(_DWORD *)(a1 + 16) |= 2u;
    v4 = *(_DWORD *)(a1 + 16);
  }
  if ( (v4 & 4) == 0 )
  {
    v3 = *(_QWORD *)(a2 + 112);
    *(_QWORD *)(a1 + 8) = v3;
    *(_DWORD *)(a1 + 16) = v4 | 4;
  }
  if ( !*(_BYTE *)(a1 + 35) )
  {
    *(_WORD *)(a1 + 32) |= 1u;
    *(_BYTE *)(a1 + 35) = *(_BYTE *)(a2 + 8);
    LOBYTE(v3) = *(_BYTE *)(a2 + 32);
    *(_BYTE *)(a1 + 36) = v3;
  }
  return v3;
}
