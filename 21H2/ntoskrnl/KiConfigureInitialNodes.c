/*
 * XREFs of KiConfigureInitialNodes @ 0x1403B5BAC
 * Callers:
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x1403B5C48 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x1403B604C (KiCommitNodeAssignment.c)
 */

__int64 __fastcall KiConfigureInitialNodes(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdx
  _WORD *v4; // rcx

  byte_140D254F5 |= 2u;
  qword_140D254E0 |= 1uLL;
  byte_140D254F4 = KiMaximumGroupSize;
  KeNodeBlock[0] = (__int64)&ExNode0;
  KiCommitNodeAssignment(&ExNode0);
  *(_QWORD *)(a1 + 192) = &ExNode0;
  qword_140D25490 |= 1uLL;
  *(_BYTE *)(a1 + 35) = 1;
  KiAddProcessorToGroupDatabase(a1, 0LL);
  LODWORD(result) = 1;
  v3 = &unk_140D23388;
  v4 = &unk_140D2FFC0;
  do
  {
    *v3++ = v4;
    v4[73] = result;
    result = (unsigned int)(result + 1);
    v4 += 192;
  }
  while ( (unsigned int)result < 0x40 );
  return result;
}
