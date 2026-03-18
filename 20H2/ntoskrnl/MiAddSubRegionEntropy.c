/*
 * XREFs of MiAddSubRegionEntropy @ 0x140A4F610
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140A4F2A0 (MiAssignTopLevelRanges.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x140299518 (MiHyperSpaceSize.c)
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 */

__int64 MiAddSubRegionEntropy()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r10

  v0 = qword_140C4F9A8;
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = v1 | (unsigned int)ExGenRandom(1);
  v3 = qword_140C4F9B8;
  qword_140C4F9A8 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_140C4E1A0[0] = ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30) + v3;
  qword_140C4E1E0 = ((qword_140C4E1A0[0] + 0x8FFFFFFFFFLL) & 0xFFFFFF8000000000uLL)
                  + ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30);
  result = MiHyperSpaceSize();
  qword_140C4E1E8 = (v5 & (qword_140C4E1E0 + result + 0x7FFFFFFFFFLL)) - 1;
  return result;
}
