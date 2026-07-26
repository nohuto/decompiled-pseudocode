/*
 * XREFs of ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C3260
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000317C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032928 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C0075EC4 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C00C6B28 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisMSendPacketsToNetBufferLists(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  struct _NDIS_PACKET *v6; // rcx
  __int64 v7; // rdi
  bool v8; // al
  __int64 v9; // r8
  __int64 v10; // rsi
  bool v11; // r12
  __int64 v12; // rax
  struct _NDIS_PACKET **v13; // rsi
  __int64 v14; // rbx
  _QWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-20h]
  _BYTE v17[12]; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+54h] [rbp-Ch]
  int v20; // [rsp+5Ch] [rbp-4h]
  struct _NDIS_STACK_RESERVED *v21; // [rsp+90h] [rbp+30h] BYREF

  memset(v17, 0, sizeof(v17));
  v19 = 0LL;
  v20 = 0;
  v6 = *a2;
  v21 = 0LL;
  NDIS_STACK_RESERVED_FROM_PACKET(v6, &v21);
  v18 = 0;
  v16 = a3;
  v15[1] = a2;
  v7 = *(_QWORD *)v21;
  v15[0] = *(_QWORD *)v21;
  do
  {
    v8 = ndisXlateSendPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)v15);
    v10 = *(_QWORD *)&v17[4];
    v11 = v8;
    if ( *(_QWORD *)&v17[4] )
    {
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          *(struct _NET_BUFFER_LIST **)&v17[4],
          *(_QWORD *)(v7 + 584),
          a1[320],
          0x8Fu,
          BYTE4(v19) & 1);
      if ( byte_1C00E3FD8 )
      {
        v12 = *(_QWORD *)(v7 + 1000);
        if ( v12 )
        {
          if ( (*(_DWORD *)(v12 + 52) & 1) != 0 )
            PktMonClientNblLogNdis(v7 + 976, v10, v9, 2LL);
        }
      }
      ((void (__fastcall *)(_QWORD *, __int64, _QWORD, _QWORD))a1[82])(a1, v10, 0LL, HIDWORD(v19));
    }
  }
  while ( v11 );
  if ( !v10 && v18 < a3 )
  {
    v13 = &a2[v18];
    v14 = a3 - v18;
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v7 + 112))(v7, *v13++, 3221225626LL);
      --v14;
    }
    while ( v14 );
  }
}
