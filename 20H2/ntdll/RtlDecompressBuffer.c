/*
 * XREFs of RtlDecompressBuffer @ 0x1800F5B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlDecompressBuffer(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 <= 4u )
    return RtlDecompressBufferProcs[a1](a2, a3, a4, a5, 0, a6, 0LL);
  return 3221226079LL;
}
