/*
 * XREFs of MmIsRecursiveIoFault @ 0x14031C380
 * Callers:
 *     IoPageReadEx @ 0x14031C130 (IoPageReadEx.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsRecursiveIoFault(void)
{
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  result = 0;
  if ( BYTE5(CurrentThread[1].Queue) || BYTE4(CurrentThread[1].Queue) == 1 )
    return 1;
  return result;
}
