/*
 * XREFs of Amd64PauseProfiling @ 0x1404DDF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int Amd64PauseProfiling()
{
  unsigned __int64 v0; // rax
  int *v1; // r8
  int v2; // r9d
  __int64 v3; // r10

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v1 = (int *)(Amd64CounterStatus + ((unsigned __int64)(unsigned int)v0 << 6));
  v2 = 0;
  v3 = 4LL;
  do
  {
    if ( *v1 < 2 )
    {
      v0 = __readmsr(v2 - 1073676288) & 0xFFBFFFFF;
      __writemsr(v2 - 1073676288, v0);
    }
    ++v2;
    v1 += 4;
    --v3;
  }
  while ( v3 );
  return v0;
}
