/*
 * XREFs of KiConfigureInitialNodes @ 0x1403C2FF8
 * Callers:
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     KiAssignProcessorNumberToPrcb @ 0x1403C2378 (KiAssignProcessorNumberToPrcb.c)
 *     KiAllocateProcessorNumber @ 0x1403C2638 (KiAllocateProcessorNumber.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiConfigureInitialNodes(__int64 a1)
{
  _QWORD *v2; // rdx
  _WORD *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  dword_140D33684 = -1;
  byte_140D3368A |= 2u;
  byte_140CF8C45 |= 5u;
  KeNodeBlock[0] = (__int64)&ExNode0;
  KiSubNodeConfigBlock = (__int64)&KiInitialNodeStructures;
  v5 = 0;
  KiSubNodes = (__int64)&qword_140CF9180;
  ExNode0 = 0;
  word_140D33688 = KiMaximumGroupSize;
  KiSubNodeCount = 1;
  KiInitialNodeStructures = 0;
  byte_140CF8C44 = KiMaximumGroupSize;
  qword_140CF8C50 = 0LL;
  word_140CF8C46 = 0;
  memset(&unk_140CF8C80, 0, 0x140uLL);
  word_140CF8D0A = 0;
  word_140CF8D0C = 0;
  word_140CF8D08 = 0;
  qword_140CF8D40 = (__int64)&unk_140CF8DC0;
  byte_140CF8D39 = 8;
  qword_140CF9180 = (__int64)&unk_140CF8C80;
  qword_140D33698 = (__int64)&unk_140CF8C80;
  KiAllocateProcessorNumber(0, (__int64)&v5);
  KiAssignProcessorNumberToPrcb(a1, (unsigned __int8 *)&v5, 0);
  qword_140CF8D20 |= 1uLL;
  v2 = &unk_140D31708;
  qword_140CF8CD0 |= 1uLL;
  v3 = &unk_140D3DED8;
  *(_BYTE *)(a1 + 35) = 1;
  LODWORD(result) = 1;
  qword_140D083A0 |= 1uLL;
  do
  {
    *v2++ = v3;
    *v3 = result;
    result = (unsigned int)(result + 1);
    v3 += 140;
  }
  while ( (unsigned int)result < 0x40 );
  return result;
}
