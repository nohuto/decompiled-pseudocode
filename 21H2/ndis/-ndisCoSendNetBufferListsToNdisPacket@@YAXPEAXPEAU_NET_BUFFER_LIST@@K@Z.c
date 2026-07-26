/*
 * XREFs of ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00BB280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x1C0075C58 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BB460 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 */

void __fastcall ndisCoSendNetBufferListsToNdisPacket(_QWORD *a1, struct _NET_BUFFER_LIST *a2, int a3)
{
  char v6; // bl
  _SLIST_HEADER *Alignment; // rbx
  _SLIST_HEADER *v8; // rax
  struct _NDIS_PACKET **v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+38h] [rbp-C8h]
  int v11; // [rsp+3Ch] [rbp-C4h]
  struct _NET_BUFFER_LIST *v12; // [rsp+40h] [rbp-C0h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+48h] [rbp-B8h]
  unsigned int v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+54h] [rbp-ACh]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  _BYTE v17[512]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v17, 0, sizeof(v17));
  v11 = 0;
  v14 = 0;
  v9 = (struct _NDIS_PACKET **)v17;
  FirstNetBuffer = a2->FirstNetBuffer;
  v16 = a1[24];
  v10 = 64;
  v12 = a2;
  v15 = a3;
  do
  {
    v6 = ndisXlateSendNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v9, 0);
    if ( v14 )
      ndisCoSendPacketsToNdisPackets(a1, v9, v14);
  }
  while ( v6 );
  Alignment = (_SLIST_HEADER *)v12;
  if ( v12 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        3u,
        0xCu,
        (struct _GUID *)&WPP_d3463f6b73bf32dd4c2bbb7d32504344_Traceguids);
    if ( FirstNetBuffer != (_NET_BUFFER *)Alignment->Region )
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
    if ( Alignment )
    {
      v8 = Alignment;
      do
      {
        *((_DWORD *)&v8[8].HeaderX64 + 3) = -1073741823;
        v8 = (_SLIST_HEADER *)v8->Alignment;
      }
      while ( v8 );
      ((void (__fastcall *)(_QWORD *, _SLIST_HEADER *, _QWORD))a1[32])(a1, Alignment, a3 & 1);
    }
  }
}
