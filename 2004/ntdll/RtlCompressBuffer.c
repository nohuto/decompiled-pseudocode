/*
 * XREFs of RtlCompressBuffer @ 0x1800827A0
 * Callers:
 *     EtwpWriteBufferCompressed @ 0x1800877B0 (EtwpWriteBufferCompressed.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlCompressBuffer(unsigned __int16 a1)
{
  if ( (unsigned __int8)a1 < 2u )
    return 3221225485LL;
  if ( (unsigned __int8)a1 > 4u )
    return 3221226079LL;
  return RtlCompressBufferProcs[(unsigned __int8)a1](a1 & 0xFF00);
}
