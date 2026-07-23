/*
 * XREFs of EmonRestartProfiling @ 0x140998BE0
 * Callers:
 *     <none>
 * Callees:
 *     EmonConfigureCounter @ 0x14038B37C (EmonConfigureCounter.c)
 */

unsigned __int64 EmonRestartProfiling()
{
  unsigned int v0; // esi
  unsigned int v1; // edi
  unsigned __int64 result; // rax
  int *v3; // rbx
  int v4; // eax
  char v5; // dl
  int v6; // r8d
  unsigned int v7; // r9d
  char v8; // al

  v0 = 0;
  v1 = EmonNumberCounters;
  result = EmonNumberCounters * KeGetPcr()->Prcb.Number;
  if ( EmonNumberCounters )
  {
    v3 = (int *)(EmonCounterStatus + 16LL * (unsigned int)result + 8);
    do
    {
      v4 = *(v3 - 2);
      if ( v4 < 2 )
      {
        v6 = *v3;
        v7 = v3[1];
        v5 = 1;
        v8 = v4 != 1;
      }
      else
      {
        v5 = 0;
        v6 = 0;
        v7 = 0;
        v8 = 0;
      }
      result = EmonConfigureCounter(v0++, v5, v6, v7, v8);
      v3 += 4;
    }
    while ( v0 < v1 );
  }
  return result;
}
