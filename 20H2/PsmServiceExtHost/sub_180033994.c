/*
 * XREFs of sub_180033994 @ 0x180033994
 * Callers:
 *     sub_180033820 @ 0x180033820 (sub_180033820.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_180033994(__int64 a1, __int64 a2)
{
  bool v2; // zf
  int v3; // eax
  _DWORD *v4; // r8
  __int64 v5; // r9

  *(_QWORD *)(a2 + 136) = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 128) = 2;
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 104) = 1;
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a2 + 360) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 88);
  v2 = (*(_BYTE *)(a2 + 16) & 1) == 0;
  *(_DWORD *)(a2 + 48) = (*(_DWORD *)(a1 + 88) >> 2) & 1;
  if ( !v2 )
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 32);
  v3 = *(unsigned __int8 *)(a1 + 35);
  v4 = (_DWORD *)(a2 + 96);
  *(_DWORD *)(a2 + 8) = v3;
  v5 = 3LL;
  *(_DWORD *)(a2 + 32) = v3;
  do
  {
    *v4 = v3;
    v4 += 6;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)(a2 + 32) = *(unsigned __int8 *)(a1 + 36);
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a1 + 98);
  *(_WORD *)(a2 + 40) = *(_WORD *)(a1 + 96);
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 24);
  return memset((void *)(a2 + 164), 0, 0xBCuLL);
}
