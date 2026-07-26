/*
 * XREFs of ?ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106A2C
 * Callers:
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1C003F03C (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A3D8 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A470 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     PktMonClientComponentUnregister @ 0x1C0026788 (PktMonClientComponentUnregister.c)
 *     PktMonClientComponentRegister @ 0x1C00268A0 (PktMonClientComponentRegister.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     PktMonClientAddEdge @ 0x1C00C6864 (PktMonClientAddEdge.c)
 *     PktMonClientSetCompProperty @ 0x1C00C6B60 (PktMonClientSetCompProperty.c)
 */

__int64 __fastcall ndisPktMonMiniportRegister(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int *p_MiniportMediaType; // r14
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdx
  __int64 *p_PktMonComp; // rsi
  _UNICODE_STRING *pAdapterInstanceName; // r8
  _NDIS_MEDIUM MiniportMediaType; // eax
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  _NDIS_IF_BLOCK *IfBlock; // r8
  unsigned __int16 Length; // r9
  char v14[8]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h] BYREF
  int v17; // [rsp+60h] [rbp-28h]

  p_MiniportMediaType = (int *)&a1->MiniportMediaType;
  DriverHandle = a1->DriverHandle;
  p_PktMonComp = (__int64 *)&a1->PktMonComp;
  pAdapterInstanceName = a1->pAdapterInstanceName;
  v17 = *(_DWORD *)L"r";
  v16 = *(_QWORD *)L"Upper";
  v15[1] = &v16;
  MiniportMediaType = a1->MiniportMediaType;
  v15[0] = 786442LL;
  v14[0] = 1;
  v7 = PktMonClientComponentRegister(
         (__int64)&a1->PktMonComp,
         (__int64)&DriverHandle->ImageName,
         (__int64)pAdapterInstanceName,
         2LL,
         MiniportMediaType);
  if ( v7 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = 15;
LABEL_4:
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v8,
        (struct _GUID *)&WPP_fbdf58c292a732b3a0a0fc105b5cb86b_Traceguids,
        (char)a1,
        v7);
    }
  }
  else
  {
    v7 = PktMonClientSetCompProperty((__int64)p_PktMonComp, 9, (__int64)v14, 1u);
    if ( v7 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v8 = 16;
      goto LABEL_4;
    }
    v7 = PktMonClientSetCompProperty((__int64)p_PktMonComp, 1, (__int64)&a1->IfIndex, 4u);
    if ( v7 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v8 = 17;
      goto LABEL_4;
    }
    v7 = PktMonClientSetCompProperty((__int64)p_PktMonComp, 4, (__int64)&a1->InterfaceGuid, 0x10u);
    if ( v7 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v8 = 18;
      goto LABEL_4;
    }
    v7 = PktMonClientSetCompProperty((__int64)p_PktMonComp, 5, (__int64)p_MiniportMediaType, 4u);
    if ( v7 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v8 = 19;
      goto LABEL_4;
    }
    if ( ndisMReferenceIfBlock(a1, 0x1Bu) )
    {
      IfBlock = a1->IfBlock;
      Length = IfBlock->ifPhysAddress.Length;
      if ( Length )
        v7 = PktMonClientSetCompProperty((__int64)p_PktMonComp, 6, (__int64)IfBlock->ifPhysAddress.Address, Length);
      ndisMDereferenceIfBlock(a1, MPIFREF_PKTMON);
      if ( v7 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_5;
        v8 = 20;
        goto LABEL_4;
      }
    }
    v7 = PktMonClientAddEdge(
           (__int64)p_PktMonComp,
           (__int64)v15,
           v10,
           v11,
           *p_MiniportMediaType,
           (__int64)&a1->PktMonEdge);
    if ( !v7 )
      return v7;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = 21;
      goto LABEL_4;
    }
  }
LABEL_5:
  PktMonClientComponentUnregister(p_PktMonComp);
  return v7;
}
