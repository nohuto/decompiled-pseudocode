/*
 * XREFs of KiConfigureAllSchedulingInformation @ 0x140A4FA60
 * Callers:
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     KiConfigureNodeSchedulingInformation @ 0x1403B6970 (KiConfigureNodeSchedulingInformation.c)
 *     KiConfigureSchedulingInformation @ 0x1409A0CB0 (KiConfigureSchedulingInformation.c)
 */

void KiConfigureAllSchedulingInformation()
{
  unsigned __int16 v0; // si
  __int64 *v1; // rdi
  __int64 v2; // rcx
  unsigned __int64 v3; // rbp
  int v4; // r14d
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx

  v0 = 0;
  if ( KeNumberNodes )
  {
    v1 = KeNodeBlock;
    do
    {
      v2 = KeNodeBlock[v0];
      v3 = *(_QWORD *)(v2 + 136);
      if ( v3 )
      {
        v4 = *(unsigned __int16 *)(v2 + 144) << 6;
        do
        {
          _BitScanForward64(&v5, v3);
          KiConfigureSchedulingInformation(
            KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v4 + v5)]],
            0);
          v3 &= ~(1LL << v5);
        }
        while ( v3 );
      }
      ++v0;
    }
    while ( v0 < (unsigned __int16)KeNumberNodes );
    if ( KeNumberNodes )
    {
      v6 = (unsigned __int16)KeNumberNodes;
      do
      {
        KiConfigureNodeSchedulingInformation(*v1++);
        --v6;
      }
      while ( v6 );
    }
  }
}
