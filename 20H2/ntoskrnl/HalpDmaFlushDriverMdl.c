/*
 * XREFs of HalpDmaFlushDriverMdl @ 0x1404B5D3C
 * Callers:
 *     HalMapTransferEx @ 0x14039FAA0 (HalMapTransferEx.c)
 *     HalFlushAdapterBuffersEx @ 0x1403A2470 (HalFlushAdapterBuffersEx.c)
 * Callees:
 *     KeFlushIoBuffers @ 0x14030AE60 (KeFlushIoBuffers.c)
 */

char __fastcall HalpDmaFlushDriverMdl(_QWORD *BugCheckParameter4, char a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  char result; // al

  if ( BugCheckParameter4 )
  {
    v5 = BugCheckParameter4;
    do
    {
      result = KeFlushIoBuffers((ULONG_PTR)v5, a2, 1, a4);
      v5 = (_QWORD *)*v5;
    }
    while ( v5 );
  }
  return result;
}
