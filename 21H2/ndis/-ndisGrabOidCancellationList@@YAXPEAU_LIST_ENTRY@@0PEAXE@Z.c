/*
 * XREFs of ?ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z @ 0x1C009A8D8
 * Callers:
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C0099DA4 (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1C0099F44 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGrabOidCancellationList(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2, _LIST_ENTRY *a3, char a4)
{
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v6; // r8
  _LIST_ENTRY *Blink; // r9
  _LIST_ENTRY *v8; // r9

  a2->Blink = a2;
  a2->Flink = a2;
  Flink = a1->Flink;
  if ( a1->Flink != a1 )
  {
    if ( a4 )
    {
      *a2 = *a1;
      a1->Blink = a1;
      a1->Flink = a1;
      a2->Flink->Blink = a2;
      a2->Blink->Flink = a2;
    }
    else
    {
      do
      {
        v6 = Flink->Flink;
        if ( Flink[-4].Blink == a3 )
        {
          if ( v6->Blink != Flink
            || (Blink = Flink->Blink, Blink->Flink != Flink)
            || (Blink->Flink = v6, v6->Blink = Blink, v8 = a2->Blink, v8->Flink != a2) )
          {
            __fastfail(3u);
          }
          Flink->Flink = a2;
          Flink->Blink = v8;
          v8->Flink = Flink;
          a2->Blink = Flink;
        }
        Flink = v6;
      }
      while ( v6 != a1 );
    }
  }
}
