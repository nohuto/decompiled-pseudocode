/*
 * XREFs of ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00FF050
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0022EF0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qccL @ 0x1C001E144 (WPP_RECORDER_SF_qccL.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00FF17C (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMSetPacketDirectAttributes(
        _QWORD *a1,
        const union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  unsigned int Flags; // eax
  unsigned __int8 DmaAddressWidth; // cl
  int v8; // eax
  char v9; // al
  int v10; // ebx
  int v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-28h]

  v4 = a1[684];
  if ( !v4 )
  {
    v10 = -1073741637;
    goto LABEL_20;
  }
  LOBYTE(a3) = 1;
  if ( a2->Header.Revision != 1 || a2->Header.Size < 9u )
  {
    v10 = -1073741811;
    goto LABEL_14;
  }
  Flags = a2->GeneralAttributes.Flags;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    goto LABEL_22;
  DmaAddressWidth = a2->PacketDirectAttributes.DmaAddressWidth;
  if ( (Flags & 1) != 0 )
  {
    if ( !DmaAddressWidth )
    {
      *(_DWORD *)(v4 + 20) = 0;
      v9 = 1;
      goto LABEL_11;
    }
LABEL_22:
    v10 = -1073741811;
    goto LABEL_20;
  }
  if ( (unsigned __int8)(DmaAddressWidth - 1) <= 0x1Eu || DmaAddressWidth >= 0x41u )
    goto LABEL_22;
  v8 = 64;
  if ( DmaAddressWidth )
    v8 = a2->PacketDirectAttributes.DmaAddressWidth;
  *(_DWORD *)(v4 + 20) = v8;
  v9 = 0;
LABEL_11:
  *(_BYTE *)(v4 + 14) = v9;
  if ( (a2->GeneralAttributes.Flags & 2) != 0 )
  {
    if ( !*(_QWORD *)(a1[470] + 1144LL) )
    {
      v10 = -1073741808;
      goto LABEL_20;
    }
    *(_BYTE *)(v4 + 13) = 1;
  }
  if ( *(_BYTE *)(v4 + 12) )
  {
    v10 = ndisPDInitializeMiniportBufferManagement((struct _NDIS_PD_BLOCK *)v4);
    if ( v10 == -1073740007 )
    {
      if ( !*(_DWORD *)(v4 + 16) )
        goto LABEL_20;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x1Du,
          0x10u,
          (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
          (char)a1,
          *(_DWORD *)(v4 + 16));
      *(_DWORD *)(v4 + 16) = 0;
      *(_DWORD *)(v4 + 8) |= 0x80000001;
      v10 = ndisPDInitializeMiniportBufferManagement((struct _NDIS_PD_BLOCK *)v4);
    }
  }
  else
  {
    v10 = 0;
  }
LABEL_14:
  if ( v10 >= 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = *(_BYTE *)(v4 + 14) == 0;
      WPP_RECORDER_SF_qccL(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)a2, a3, a4, v12);
    }
    return (unsigned int)v10;
  }
LABEL_20:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v10;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x1Du,
      0x12u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      v13);
  }
  return (unsigned int)v10;
}
