/*
 * XREFs of RtlpTestAndFillMemoryUp @ 0x14058F69C
 * Callers:
 *     RtlpGenericInverseCouplingWorker @ 0x14058EE20 (RtlpGenericInverseCouplingWorker.c)
 *     RtlpGenericMATSPlusWorker @ 0x14058F0F8 (RtlpGenericMATSPlusWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpTestAndFillMemoryUp(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // rax

  v3 = a3 + 1024;
  while ( 1 )
  {
    if ( a3 >= v3 )
      return 1;
    if ( *a3 != a1 )
      break;
    *a3++ = a2;
  }
  return 0;
}
