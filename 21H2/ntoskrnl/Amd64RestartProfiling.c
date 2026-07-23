/*
 * XREFs of Amd64RestartProfiling @ 0x1409AA790
 * Callers:
 *     <none>
 * Callees:
 *     Amd64ConfigureCounter @ 0x1404DDA4C (Amd64ConfigureCounter.c)
 */

unsigned __int64 Amd64RestartProfiling()
{
  int v0; // ebx
  unsigned __int64 v1; // rdi
  int v2; // eax
  unsigned __int64 result; // rax

  v0 = 0;
  v1 = Amd64CounterStatus + ((unsigned __int64)KeGetPcr()->Prcb.Number << 6) + 8;
  do
  {
    v2 = *(_DWORD *)(v1 - 8);
    if ( v2 >= 2 )
    {
      result = 0LL;
      __writemsr(v0 - 1073676288, 0LL);
    }
    else
    {
      result = Amd64ConfigureCounter(v0, 1, *(_DWORD *)v1, *(_DWORD *)(v1 + 4), v2 != 1);
    }
    ++v0;
    v1 += 16LL;
  }
  while ( v0 < 4 );
  return result;
}
