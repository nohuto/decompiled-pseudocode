/*
 * XREFs of CmpInitializeLightWeightTransactionType @ 0x14078EBC4
 * Callers:
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ObCreateObjectTypeEx @ 0x14077DE30 (ObCreateObjectTypeEx.c)
 */

__int64 CmpInitializeLightWeightTransactionType()
{
  __int128 v1[8]; // [rsp+30h] [rbp-29h] BYREF

  memset(v1, 0, 0x78uLL);
  v1[3] = 0uLL;
  HIDWORD(v1[1]) = 2031679;
  LOWORD(v1[0]) = 120;
  *((_QWORD *)&v1[0] + 1) = 0x12000100000030LL;
  BYTE2(v1[0]) = BYTE2(v1[0]) & 0xE3 | 0xC;
  *(_QWORD *)&v1[4] = CmpCloseLightWeightTransaction;
  *((_QWORD *)&v1[4] + 1) = CmpDeleteLightWeightTransaction;
  LODWORD(v1[1]) = 1179710;
  *(_QWORD *)((char *)&v1[1] + 4) = 0x1F003F00120018LL;
  *(_QWORD *)((char *)&v1[2] + 4) = 0x1800000001LL;
  return ObCreateObjectTypeEx(&CmpTransactionTypeNameString, v1, 0LL, 0LL, (__int64 *)&CmRegistryTransactionType);
}
