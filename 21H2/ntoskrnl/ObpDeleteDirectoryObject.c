/*
 * XREFs of ObpDeleteDirectoryObject @ 0x14061C220
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall ObpDeleteDirectoryObject(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 312);
  if ( v2 )
    ObDereferenceObjectDeferDelete(v2);
  v3 = *(void **)(a1 + 328);
  if ( v3 )
    ObDereferenceObjectDeferDelete(v3);
}
