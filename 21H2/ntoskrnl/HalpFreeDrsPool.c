/*
 * XREFs of HalpFreeDrsPool @ 0x14051C060
 * Callers:
 *     HalpErrorDeferredHandler @ 0x14051C010 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x14051C2D8 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x14051C4E0 (HalpPmemErrorDeferredRecovery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall HalpFreeDrsPool(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 == -1 )
    {
      ExFreePoolWithTag(a1, 0x61656857u);
    }
    else if ( *a1 == 1 )
    {
      *a1 = 0;
    }
  }
}
