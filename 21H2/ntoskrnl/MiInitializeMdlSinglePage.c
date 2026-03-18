/*
 * XREFs of MiInitializeMdlSinglePage @ 0x14045B962
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiInitializeMdlLeafPfns @ 0x140589C40 (MiInitializeMdlLeafPfns.c)
 * Callees:
 *     MiConvertLargePfnToSmall @ 0x1403C9B18 (MiConvertLargePfnToSmall.c)
 *     MiInitializeMdlPfn @ 0x140589CEC (MiInitializeMdlPfn.c)
 */

__int64 __fastcall MiInitializeMdlSinglePage(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rax

  v5 = a2[5];
  if ( (v5 & 0x10000000000LL) != 0 )
  {
    MiConvertLargePfnToSmall(a1, (__int64)a2, a3, 1);
    v5 = a2[5];
  }
  *a2 = 0LL;
  a2[1] = 0xFFFFF68000000000uLL;
  a2[2] = a4;
  a2[5] = v5 & 0x7FFFFF0000000000LL | 0x3FFFFFFFFELL;
  *a2 = (a3 >> 3) & 0xFFFFFFFFFFELL;
  return MiInitializeMdlPfn(a2, a5);
}
