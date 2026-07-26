/*
 * XREFs of ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00BACDC
 * Callers:
 *     ?ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00BB270 (-ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BBBA0 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BBF10 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C00753A8 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x1C00758A4 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisCoIndicatePromiscNetBuffer(
        _QWORD *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OPEN_BLOCK *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // rbx
  struct _NET_BUFFER_LIST *v10; // r14
  unsigned int v11; // r8d
  bool v12; // zf
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v15; // rax
  char v16; // r15
  struct _NDIS_PACKET **v17; // r12
  void *v18; // r14
  __int64 v19; // r13
  struct _NDIS_PACKET *v20; // rbx
  _NDIS_PACKET *v21; // r8
  __int64 v22; // [rsp+30h] [rbp-D0h]
  struct _NDIS_PACKET **v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h]
  int v26; // [rsp+4Ch] [rbp-B4h]
  struct _NET_BUFFER_LIST *v27; // [rsp+50h] [rbp-B0h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+58h] [rbp-A8h]
  unsigned int v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+64h] [rbp-9Ch]
  struct _NDIS_MINIPORT_BLOCK *v31; // [rsp+68h] [rbp-98h]
  _BYTE v32[512]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+2F8h] [rbp+1F8h]

  v7 = a1[9];
  v30 = 0;
  v10 = a4;
  memset(v32, 0, sizeof(v32));
  v29 = 0;
  v11 = a6 | 2;
  v12 = a2->PmodeOpens == 0;
  v24 = (struct _NDIS_PACKET **)v32;
  FirstNetBuffer = v10->FirstNetBuffer;
  v22 = v7;
  v25 = 64;
  v26 = -1073741670;
  v27 = v10;
  v31 = a2;
  v33 = a6 | 2;
  if ( !v12 && a3 )
  {
    do
    {
      if ( a7 )
        FilterNextOpen = a3->FilterNextOpen;
      else
        FilterNextOpen = a3->MiniportNextOpen;
      if ( (a3->OpenFlags & 4) != 0 )
      {
        *((_BYTE *)a3->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
        if ( a3->ProtocolHandle->MajorNdisVersion < 6u )
        {
          do
          {
            v16 = ndisXlateRecvNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v24);
            if ( v29 )
            {
              v17 = v24;
              v18 = (void *)(v7 + 136);
              v19 = v29;
              do
              {
                v20 = *v17;
                v21 = *v17;
                (*v17)->Private.Flags |= 0x100u;
                a3->ProtocolHandle->CoReceivePacketHandler(a3->ProtocolBindingContext, v18, v21);
                ndisXlateReturnPacketToNetBufferList(v20);
                ++v17;
                --v19;
              }
              while ( v19 );
              v7 = v22;
            }
          }
          while ( v16 );
          v10 = a4;
        }
        else
        {
          Alignment = v10;
          do
          {
            Alignment->Flags |= 0x80u;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
          v10->NblFlags |= 0x8000u;
          a3->ProtocolHandle->CoReceiveNetBufferListsHandler(
            a3->ProtocolBindingContext,
            (void *)(v7 + 136),
            v10,
            a5,
            v11);
          v15 = v10;
          do
          {
            v15->Flags &= ~0x80u;
            v15 = (struct _NET_BUFFER_LIST *)v15->Link.Alignment;
          }
          while ( v15 );
          v10->NblFlags &= ~0x8000u;
        }
        v11 = v33;
      }
      a3 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
}
