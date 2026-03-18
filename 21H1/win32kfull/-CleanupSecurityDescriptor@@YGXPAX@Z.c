/*
 * XREFs of ?CleanupSecurityDescriptor@@YGXPAX@Z @ 0xAEDFC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall CleanupSecurityDescriptor(void *a1)
{
  if ( a1 )
    SeReleaseSecurityDescriptor(a1, 1, 0);
}
