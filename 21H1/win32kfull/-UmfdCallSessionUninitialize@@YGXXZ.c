/*
 * XREFs of ?UmfdCallSessionUninitialize@@YGXXZ @ 0xD3A84
 * Callers:
 *     _UmfdSessionUninitialize@0 @ 0xD39AC (_UmfdSessionUninitialize@0.c)
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SGXQAV1@@Z @ 0xD32EE (-Destroy@CMultipleConsumerWorkQueue@@SGXQAV1@@Z.c)
 */

void __stdcall UmfdCallSessionUninitialize()
{
  unsigned int i; // esi
  void **v1; // ecx

  for ( i = 0; i < 4; ++i )
  {
    if ( (&g_pUmfdClientPort)[i] )
      (&g_pUmfdClientPort)[i] = 0;
    v1 = (&g_pUmfdServerPort)[i];
    if ( v1 )
    {
      CMultipleConsumerWorkQueue::Destroy(v1);
      (&g_pUmfdServerPort)[i] = 0;
    }
  }
}
