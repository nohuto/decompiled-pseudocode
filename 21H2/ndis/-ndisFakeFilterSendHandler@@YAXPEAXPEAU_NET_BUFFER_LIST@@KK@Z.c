/*
 * XREFs of ?ndisFakeFilterSendHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0068610
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C00693F8 (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     PktMonClientNblDropNdis @ 0x1C00C6C44 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisFakeFilterSendHandler(_DWORD *a1, struct _NET_BUFFER_LIST *a2, int a3, char a4)
{
  struct _NET_BUFFER_LIST *i; // rcx
  __int64 v8; // r8
  unsigned int v9; // esi
  struct _NDIS_OBJECT_HEADER *v10; // r9
  void *v11; // rax
  void (*v12)(void *, struct _NET_BUFFER_LIST *, unsigned int); // rcx

  if ( byte_1C00E3FD0 && (a1[211] & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)a1 + 792, (_DWORD)a2, a3, 2, a1[24], -536866815);
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = a1[24];
  v8 = *((_QWORD *)a1 + 14);
  v9 = a4 & 1;
  if ( v8 )
  {
    v10 = *(struct _NDIS_OBJECT_HEADER **)(v8 + 488);
    v11 = *(void **)(v8 + 472);
    v12 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v8 + 464);
  }
  else
  {
    v8 = *((_QWORD *)a1 + 4);
    v10 = *(struct _NDIS_OBJECT_HEADER **)(v8 + 2592);
    v11 = *(void **)(v8 + 2576);
    v12 = *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v8 + 2616);
  }
  ndisInvokeNextSendCompleteHandler(a2, v9, (struct _NDIS_OBJECT_HEADER *)v8, v10, v11, v12);
}
