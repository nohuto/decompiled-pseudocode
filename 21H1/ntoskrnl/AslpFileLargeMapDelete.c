/*
 * XREFs of AslpFileLargeMapDelete @ 0x140967DF4
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x14096766C (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslpFileLargeMapCreate @ 0x140967B7C (AslpFileLargeMapCreate.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     AslpFilePartialViewFree @ 0x140967E54 (AslpFilePartialViewFree.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
