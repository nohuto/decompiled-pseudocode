/*
 * XREFs of MiAddSubRegionEntropy @ 0x140A49380
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140A49010 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 *     MiHyperSpaceSize @ 0x1402BDFC8 (MiHyperSpaceSize.c)
 */

__int64 MiAddSubRegionEntropy()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r10

  v0 = qword_140C4F928;
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = v1 | (unsigned int)ExGenRandom(1);
  v3 = qword_140C4F938;
  qword_140C4F928 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_140C4E120[0] = ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30) + v3;
  qword_140C4E160 = ((qword_140C4E120[0] + 0x8FFFFFFFFFLL) & 0xFFFFFF8000000000uLL)
                  + ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30);
  result = MiHyperSpaceSize();
  qword_140C4E168 = (v5 & (qword_140C4E160 + result + 0x7FFFFFFFFFLL)) - 1;
  return result;
}
