/*
 * XREFs of HalpMceInitializeErrorPacket @ 0x140A5A98C
 * Callers:
 *     HalpMceInitProcessor @ 0x140A5A8F8 (HalpMceInitProcessor.c)
 * Callees:
 *     HalpGetMcaPcrContext @ 0x1403AAB1C (HalpGetMcaPcrContext.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140A5A9F8 (HalpMceInitializeErrorPacketContents.c)
 */

void __fastcall HalpMceInitializeErrorPacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  volatile __int64 *McaPcrContext; // rbx
  __int64 v8; // rdi

  v4 = HalpMmAllocCtxAlloc(a1, 372LL);
  v5 = v4;
  if ( !v4 )
    KeBugCheckEx(0xACu, 0x174uLL, 0xDA00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\mca.c", 0x6CBuLL);
  HalpMceInitializeErrorPacketContents(v4);
  McaPcrContext = (volatile __int64 *)HalpGetMcaPcrContext(a2);
  v8 = _InterlockedExchange64(McaPcrContext, v5);
  if ( v8 )
    HalpMmAllocCtxFree(v6, v8);
  _InterlockedExchange64(McaPcrContext + 1, a1);
}
