/*
 * XREFs of HalpProcessorPrepareForIdle @ 0x140213A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpProcessorPrepareForIdle()
{
  void (*v1)(void); // rax

  if ( HalpPmuInUse )
  {
    if ( (HalpPmuInUse & 1) == 0 )
    {
      v1 = (void (*)(void))*((_QWORD *)HalpProfileInterface[0] + 8);
      if ( v1 )
        v1();
    }
  }
  return 0LL;
}
