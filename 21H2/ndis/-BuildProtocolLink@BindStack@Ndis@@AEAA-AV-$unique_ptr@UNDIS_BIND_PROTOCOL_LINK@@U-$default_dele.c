/*
 * XREFs of ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C0102D30
 * Callers:
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C0102BF8 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 * Callees:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C0102DEC (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C0102DEC.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C010305C (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116C60 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildProtocolLink(void *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = a1;
  LOBYTE(a4) = 1;
  ndisBindGetProtocolDriver(&P, a3, 0LL, a4);
  v6 = (volatile signed __int32 *)P;
  if ( P )
  {
    Ndis::BindStack::BuildProtocolLink(v5, a2, &P);
    if ( _InterlockedExchangeAdd(v6 + 12, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(P);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
