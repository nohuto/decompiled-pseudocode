/*
 * XREFs of ?UmfdCallSessionInitialize@@YGJXZ @ 0xE5E48
 * Callers:
 *     _UmfdSessionInitialize@0 @ 0xE5DB0 (_UmfdSessionInitialize@0.c)
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SGXQAV1@@Z @ 0xD32EE (-Destroy@CMultipleConsumerWorkQueue@@SGXQAV1@@Z.c)
 *     ?Create@CMultipleConsumerWorkQueue@@SGQAV1@XZ @ 0xE5E8C (-Create@CMultipleConsumerWorkQueue@@SGQAV1@XZ.c)
 */

int __stdcall UmfdCallSessionInitialize()
{
  int v0; // edi
  unsigned int v1; // esi
  void **v2; // eax
  unsigned int i; // ebx
  void **v5; // ecx

  v0 = 0;
  v1 = 0;
  while ( v0 >= 0 )
  {
    v2 = (void **)CMultipleConsumerWorkQueue::Create();
    if ( v2 )
    {
      (&g_pUmfdServerPort)[v1] = v2;
      v0 = 0;
      (&g_pUmfdClientPort)[v1] = v2;
    }
    else
    {
      v0 = -1073741801;
    }
    if ( ++v1 >= 4 )
    {
      if ( v0 >= 0 )
        return v0;
      break;
    }
  }
  for ( i = 0; i < v1; ++i )
  {
    v5 = (&g_pUmfdServerPort)[i];
    (&g_pUmfdClientPort)[i] = 0;
    CMultipleConsumerWorkQueue::Destroy(v5);
    (&g_pUmfdServerPort)[i] = 0;
  }
  return v0;
}
