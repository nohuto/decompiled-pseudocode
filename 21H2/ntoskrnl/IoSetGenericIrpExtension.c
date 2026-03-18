/*
 * XREFs of IoSetGenericIrpExtension @ 0x140387790
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x140652638 (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x14020C0F0 (IopIrpHasExtensionType.c)
 *     IopAllocateIrpExtension @ 0x14020C420 (IopAllocateIrpExtension.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall IoSetGenericIrpExtension(__int64 a1, const void *a2, __int64 a3, __int64 a4)
{
  size_t v4; // rbx
  int v6; // edx
  _WORD *IrpExtension; // rax

  v4 = (unsigned __int16)a3;
  if ( (unsigned __int16)a3 > 4u )
    return 3221225485LL;
  v6 = 2;
  if ( !(_BYTE)a4 && IopIrpHasExtensionType(a1, 2u) )
    return 3221225505LL;
  IrpExtension = IopAllocateIrpExtension(a1, v6, a3, a4);
  if ( !IrpExtension )
    return 3221225626LL;
  memmove(IrpExtension + 2, a2, v4);
  return 0LL;
}
