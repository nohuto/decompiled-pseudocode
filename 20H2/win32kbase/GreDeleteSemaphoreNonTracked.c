/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C00859E0
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C008582C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall GreDeleteSemaphoreNonTracked(struct _ERESOURCE *P)
{
  if ( P )
  {
    ExDeleteResourceLite(P);
    ExFreePoolWithTag(P, 0);
  }
}
