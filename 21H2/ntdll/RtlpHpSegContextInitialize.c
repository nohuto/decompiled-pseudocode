/*
 * XREFs of RtlpHpSegContextInitialize @ 0x1800084E0
 * Callers:
 *     RtlpHpHeapCreate @ 0x18000821C (RtlpHpHeapCreate.c)
 * Callees:
 *     memset @ 0x1800A4740 (memset.c)
 */

_OWORD *__fastcall RtlpHpSegContextInitialize(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        _OWORD *a7,
        char a8)
{
  __int64 v9; // rbx
  unsigned __int64 v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // edx
  unsigned int v16; // edx
  _OWORD *result; // rax

  v9 = a2;
  memset(a1, 0, 0xC0uLL);
  *(_WORD *)((char *)a1 + 11) = 1031;
  v12 = (unsigned int)v9 >> 8;
  *a1 = ~(v9 - 1);
  _BitScanReverse(&v13, v12);
  *((_BYTE *)a1 + 8) = v13;
  _BitScanForward(&v14, (unsigned int)v9 >> 20);
  *((_BYTE *)a1 + 9) = v14;
  v15 = *(_DWORD *)a1;
  *((_BYTE *)a1 + 10) = (v12 + 0x1FFF) / v12;
  a1[8] = 0LL;
  v16 = ((((_DWORD)v12 - 1) & (unsigned int)(v12 + 0x1FFF)) - (unsigned int)v12 + -v15 - 0x1FFF) >> 1;
  *((_BYTE *)a1 + 13) = a8;
  *((_DWORD *)a1 + 4) = v16 - ((v12 - 1) & v16);
  a1[10] = (__int64)(a1 + 9);
  a1[9] = (__int64)(a1 + 9);
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[7] = a3;
  *((_WORD *)a1 + 10) = a6 + ((unsigned int)v9 < 0x200000 ? 0 : 0x10) - (_WORD)a1 + 32;
  a1[4] = a5;
  result = a7;
  *((_WORD *)a1 + 11) = a6 - (_WORD)a1;
  a1[3] = a4;
  *(_OWORD *)(a1 + 5) = *a7;
  return result;
}
