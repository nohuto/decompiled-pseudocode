/*
 * XREFs of ?ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0100A84
 * Callers:
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C008ED20 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C0096DFC (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisOpenAdapterEx @ 0x1C012DF30 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     PktMonClientComponentUnregister @ 0x1C00267C4 (PktMonClientComponentUnregister.c)
 *     PktMonClientComponentRegister @ 0x1C00267E4 (PktMonClientComponentRegister.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     PktMonClientAddEdge @ 0x1C00C635C (PktMonClientAddEdge.c)
 *     PktMonClientSetCompProperty @ 0x1C00C65F8 (PktMonClientSetCompProperty.c)
 */

__int64 __fastcall ndisPktMonOpenRegister(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rdx
  _PKTMON_COMPONENT_CONTEXT *p_PktMonComp; // rbp
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // esi
  char v11[8]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  int v14; // [rsp+60h] [rbp-28h]

  ProtocolHandle = a1->ProtocolHandle;
  p_PktMonComp = &a1->PktMonComp;
  v14 = *(_DWORD *)L"r";
  v12[1] = &v13;
  MiniportHandle = a1->MiniportHandle;
  v13 = *(_QWORD *)L"Lower";
  v12[0] = 786442LL;
  v11[0] = 1;
  v5 = PktMonClientComponentRegister(
         (__int64)&a1->PktMonComp,
         (__int64)&ProtocolHandle->ImageName,
         (__int64)&ProtocolHandle->Name,
         4,
         MiniportHandle->MediaType);
  if ( v5 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = 10;
LABEL_4:
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v6,
        (struct _GUID *)&WPP_a8f48a69e2ab36ff9f4854b6437fd0df_Traceguids,
        (char)a1,
        v5);
    }
  }
  else
  {
    v5 = PktMonClientSetCompProperty(p_PktMonComp, 9, (__int64)v11, 1u);
    if ( v5 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v6 = 11;
      goto LABEL_4;
    }
    v5 = PktMonClientSetCompProperty(p_PktMonComp, 2, (__int64)&a1->MiniportHandle->IfIndex, 4u);
    if ( v5 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v6 = 12;
      goto LABEL_4;
    }
    v10 = 0;
    if ( a1->FrameTypeArraySize )
    {
      while ( 1 )
      {
        v5 = PktMonClientSetCompProperty(p_PktMonComp, 7, (__int64)&a1->FrameTypeArray[v10], 2u);
        if ( v5 )
          break;
        if ( ++v10 >= a1->FrameTypeArraySize )
          goto LABEL_16;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v6 = 13;
      goto LABEL_4;
    }
LABEL_16:
    v5 = PktMonClientAddEdge(
           (__int64)p_PktMonComp,
           (__int64)v12,
           v8,
           v9,
           a1->MiniportHandle->MediaType,
           (__int64)&a1->PktMonEdge);
    if ( !v5 )
      return v5;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = 14;
      goto LABEL_4;
    }
  }
LABEL_5:
  PktMonClientComponentUnregister(p_PktMonComp);
  return v5;
}
