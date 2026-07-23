/*
 * XREFs of PoCpuIdledSinceLastCallImprecise @ 0x14036C380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PoCpuIdledSinceLastCallImprecise(unsigned int a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  char v3; // cl
  __int64 v4; // r8
  unsigned __int64 v5; // r9

  v2 = a1;
  v3 = 1;
  v4 = KiProcessorBlock[v2];
  if ( v4 )
  {
    v5 = *a2;
    *a2 = *(_QWORD *)(v4 + 32792);
    if ( !*(_QWORD *)(v4 + 32800) )
      return *a2 > v5;
  }
  return v3;
}
