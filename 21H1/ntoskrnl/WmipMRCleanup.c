/*
 * XREFs of WmipMRCleanup @ 0x1407B01A0
 * Callers:
 *     <none>
 * Callees:
 *     WmipGenerateMofResourceNotification @ 0x1407B0210 (WmipGenerateMofResourceNotification.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall WmipMRCleanup(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rdx
  void *v4; // rcx

  v2 = *(void **)(a1 + 40);
  if ( v2 )
  {
    v3 = *(void **)(a1 + 48);
    if ( v3 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
      {
        WmipGenerateMofResourceNotification(v2, v3);
        v2 = *(void **)(a1 + 40);
      }
    }
  }
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v4 = *(void **)(a1 + 48);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
