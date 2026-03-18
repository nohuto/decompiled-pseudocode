/*
 * XREFs of _FreeClientOnWindowDestruction@4 @ 0x718DA
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 * Callees:
 *     <none>
 */

void __stdcall FreeClientOnWindowDestruction(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // esi
  struct _LIST_ENTRY *v2; // eax
  struct _LIST_ENTRY *v3; // ebx
  struct _LIST_ENTRY *v4; // edi
  struct _LIST_ENTRY *v5; // ecx
  struct _LIST_ENTRY *Blink; // eax

  Flink = gPointerDeviceClients.Flink;
  if ( !IsListEmpty(&gPointerDeviceClients) )
  {
    v2 = a1;
    do
    {
      v3 = Flink - 1;
      v4 = Flink;
      Flink = Flink->Flink;
      if ( v2 == v3->Flink )
      {
        HMAssignmentUnlock(v3);
        v5 = v4->Flink;
        if ( v4->Flink->Blink != v4 || (Blink = v4->Blink, Blink->Flink != v4) )
          __fastfail(3u);
        Blink->Flink = v5;
        v5->Blink = Blink;
        Win32FreePool(v3);
        v2 = a1;
      }
    }
    while ( Flink != &gPointerDeviceClients );
  }
}
