/*
 * XREFs of memcpy_s @ 0x1C00435F0
 * Callers:
 *     HUBACPI_ExecuteDSM @ 0x1C00840FC (HUBACPI_ExecuteDSM.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C00843C8 (HUBACPI_EvaluateDsmMethod.c)
 * Callees:
 *     HUBFDO_GetPortStatusForDebuggingComplete @ 0x1C000D350 (HUBFDO_GetPortStatusForDebuggingComplete.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 *     memset @ 0x1C0043B00 (memset.c)
 */

errno_t __cdecl memcpy_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v8; // ebx

  if ( !MaxCount )
    return 0;
  if ( !a1 )
    goto LABEL_11;
  if ( Src && DstSize >= MaxCount )
  {
    memmove(a1, Src, MaxCount);
    return 0;
  }
  memset(a1, 0, DstSize);
  if ( Src )
  {
    if ( DstSize >= MaxCount )
      return 22;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  HUBFDO_GetPortStatusForDebuggingComplete();
  return v8;
}
