/*
 * XREFs of RtlpMakeXpressCallback @ 0x18010DC04
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x18005B090 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzStandard @ 0x1800868D0 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18010CEB4 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x18010D5BC (RtlCompressBufferXpressLzMax.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall RtlpMakeXpressCallback(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
