/*
 * XREFs of HalpMceInitializeErrorPacket @ 0x1409A10E0
 * Callers:
 *     HalpMceInitProcessor @ 0x1409A104C (HalpMceInitProcessor.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140379460 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037CA48 (HalpMmAllocCtxAlloc.c)
 *     HalpGetMcaPcrContext @ 0x1403A0BC8 (HalpGetMcaPcrContext.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     HalpMceInitializeErrorPacketContents @ 0x1409A114C (HalpMceInitializeErrorPacketContents.c)
 */

volatile __int64 *__fastcall HalpMceInitializeErrorPacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  volatile __int64 *result; // rax
  __int64 v7; // rcx
  volatile __int64 *v8; // rbx
  __int64 v9; // rdi

  v4 = HalpMmAllocCtxAlloc(a1, 352LL);
  v5 = v4;
  if ( !v4 )
    KeBugCheckEx(0xACu, 0x160uLL, 0xDA00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\mca.c", 0x6C0uLL);
  HalpMceInitializeErrorPacketContents(v4);
  result = (volatile __int64 *)HalpGetMcaPcrContext(a2);
  v8 = result;
  v9 = _InterlockedExchange64(result, v5);
  if ( v9 )
    result = (volatile __int64 *)HalpMmAllocCtxFree(v7, v9);
  _InterlockedExchange64(v8 + 1, a1);
  return result;
}
