/*
 * XREFs of MiAddSubRegionEntropy @ 0x140A50C18
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140A508A8 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x14022C890 (ExGenRandom.c)
 *     MiHyperSpaceSize @ 0x140311F38 (MiHyperSpaceSize.c)
 */

__int64 MiAddSubRegionEntropy()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r10

  v0 = qword_140C4FB28;
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = v1 | (unsigned int)ExGenRandom(1);
  v3 = qword_140C4FB38;
  qword_140C4FB28 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_140C4E320[0] = ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30) + v3;
  qword_140C4E360 = ((qword_140C4E320[0] + 0x8FFFFFFFFFLL) & 0xFFFFFF8000000000uLL)
                  + ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30);
  result = MiHyperSpaceSize();
  qword_140C4E368 = (v5 & (qword_140C4E360 + result + 0x7FFFFFFFFFLL)) - 1;
  return result;
}
