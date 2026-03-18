/*
 * XREFs of MiSetResidentPageMemberInPfn @ 0x1403ED988
 * Callers:
 *     MiDemotePfnListChain @ 0x140558728 (MiDemotePfnListChain.c)
 *     MxCreatePfn @ 0x140A4F590 (MxCreatePfn.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetResidentPageMemberInPfn(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 40) ^ (*(_QWORD *)(a1 + 40) ^ ((unsigned __int64)a2 << 36)) & 0x1000000000LL;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
