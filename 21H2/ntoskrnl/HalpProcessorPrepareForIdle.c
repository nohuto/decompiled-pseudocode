/*
 * XREFs of HalpProcessorPrepareForIdle @ 0x14029C060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
