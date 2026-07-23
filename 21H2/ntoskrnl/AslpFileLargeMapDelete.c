/*
 * XREFs of AslpFileLargeMapDelete @ 0x14096C85C
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x14096C0D4 (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslpFileLargeMapCreate @ 0x14096C5E4 (AslpFileLargeMapCreate.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     AslpFilePartialViewFree @ 0x14096C8BC (AslpFilePartialViewFree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall AslpFileLargeMapDelete(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      AslpFilePartialViewFree(v1 + 6);
      AslpFilePartialViewFree(v1 + 2);
      v3 = (void *)v1[1];
      if ( v3 )
        ZwClose(v3);
      ExFreePoolWithTag(v1, 0x74705041u);
      *a1 = 0LL;
    }
  }
}
