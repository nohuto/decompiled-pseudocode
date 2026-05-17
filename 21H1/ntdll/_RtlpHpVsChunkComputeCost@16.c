/*
 * XREFs of _RtlpHpVsChunkComputeCost@16 @ 0x4B37E9EC
 * Callers:
 *     _RtlpHpVsChunkDecommit@20 @ 0x4B37EAB0 (_RtlpHpVsChunkDecommit@20.c)
 *     _RtlpHpVsFreeChunkInsert@12 @ 0x4B37F97E (_RtlpHpVsFreeChunkInsert@12.c)
 *     _RtlpHpVsFreeChunkRemove@12 @ 0x4B37FAC1 (_RtlpHpVsFreeChunkRemove@12.c)
 * Callees:
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 */

unsigned int __fastcall RtlpHpVsChunkComputeCost(_WORD *a1, int a2, unsigned int *a3, int *a4)
{
  int v4; // edi
  unsigned int v5; // edx
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // esi
  __int64 v9; // rax
  int v10; // edi
  int v11; // edi
  int v12; // eax
  unsigned int v14; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+14h] [ebp-4h]

  v4 = 8 * ((unsigned __int16)((unsigned __int16)a1 ^ RtlpHpHeapGlobals ^ *a1) >> 1);
  v5 = ((v4 + ((unsigned __int16)a1 & 0xFFFu) + 4095) >> 12) - ((unsigned int)(v4 + 4095) >> 12);
  v6 = ((unsigned int)a1 - a2 + 4111) & 0xFFFFF000;
  v14 = v5;
  v7 = ((unsigned int)a1 + v4 - a2) & 0xFFFFF000;
  if ( v6 >= v7 )
  {
    v8 = 0;
    v11 = 0;
    v12 = 0;
  }
  else
  {
    v8 = v7 - v6;
    v16 = 0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((v7 - 1) >> 12)) >> 32;
    v9 = -1LL << (v6 >> 12);
    v10 = v9 & (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((v7 - 1) >> 12)));
    LODWORD(v9) = HIDWORD(v9) & v16;
    v5 = v14;
    v11 = *(_DWORD *)(a2 + 8) & v10;
    v12 = *(_DWORD *)(a2 + 12) & v9;
  }
  *a3 = v8 >> 12;
  *a4 = v11;
  a4[1] = v12;
  return v5;
}
