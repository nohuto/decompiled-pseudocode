/*
 * XREFs of CmpVolumeManagerInitialize @ 0x14078CCCC
 * Callers:
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpVolumeManagerInitialize()
{
  __int64 *result; // rax

  CmpVolumeManager = 0LL;
  result = &qword_140D2DF98;
  qword_140D2DFA0 = (__int64)&qword_140D2DF98;
  qword_140D2DF98 = (__int64)&qword_140D2DF98;
  return result;
}
