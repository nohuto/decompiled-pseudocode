/*
 * XREFs of ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0020374
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0023210 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C007240C (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall ndisMSetQosAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  unsigned int v3; // ebx
  _NDIS_QOS_CAPABILITIES *HardwareQosCapabilities; // rax
  size_t v6; // rsi
  int Revision; // edx
  _NDIS_QOS_CAPABILITIES *PoolWithTag; // rax
  _NDIS_QOS_CAPABILITIES *v9; // rax
  _NDIS_QOS_CAPABILITIES *QosCurrentCapabilities; // rax
  _NDIS_QOS_CAPABILITIES *QosHwCapabilities; // rax
  _NDIS_QOS_CAPABILITIES *CurrentQosCapabilities; // rdx
  size_t Size; // r8
  _NDIS_QOS_CAPABILITIES *v14; // rdx
  _QWORD *v16; // rcx
  int v17; // r9d
  _NDIS_QOS_CAPABILITIES *v18; // rcx
  _NDIS_QOS_CAPABILITIES *v19; // rcx
  __int64 v20; // [rsp+38h] [rbp-30h]

  v3 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x85u,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)a1,
      a2);
  HardwareQosCapabilities = a2->HardwareQosCapabilities;
  v6 = 20LL;
  Revision = HardwareQosCapabilities->Header.Revision;
  if ( !(_BYTE)Revision || HardwareQosCapabilities->Header.Size < 0x14u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v16 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      goto LABEL_28;
    v17 = 134;
    goto LABEL_27;
  }
  HardwareQosCapabilities = a2->CurrentQosCapabilities;
  Revision = HardwareQosCapabilities->Header.Revision;
  if ( !(_BYTE)Revision || HardwareQosCapabilities->Header.Size < 0x14u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v16 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      goto LABEL_28;
    v17 = 135;
LABEL_27:
    WPP_RECORDER_SF_DDDD(
      v16[8],
      Revision,
      13,
      v17,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      Revision,
      1,
      HardwareQosCapabilities->Header.Size,
      20);
LABEL_28:
    v3 = -1073741811;
    goto LABEL_29;
  }
  if ( a1->QosCurrentCapabilities || a1->QosHwCapabilities )
  {
    v3 = -1073676283;
    goto LABEL_16;
  }
  PoolWithTag = (_NDIS_QOS_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x7371444Eu);
  a1->QosCurrentCapabilities = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = (_NDIS_QOS_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x7371444Eu);
    a1->QosHwCapabilities = v9;
    if ( v9 )
    {
      QosCurrentCapabilities = a1->QosCurrentCapabilities;
      *(_OWORD *)&QosCurrentCapabilities->Header.Type = 0LL;
      QosCurrentCapabilities->MaxNumPfcEnabledTrafficClasses = 0;
      QosHwCapabilities = a1->QosHwCapabilities;
      *(_OWORD *)&QosHwCapabilities->Header.Type = 0LL;
      QosHwCapabilities->MaxNumPfcEnabledTrafficClasses = 0;
      CurrentQosCapabilities = a2->CurrentQosCapabilities;
      Size = CurrentQosCapabilities->Header.Size;
      if ( CurrentQosCapabilities->Header.Size >= 0x14u )
        Size = 20LL;
      memmove(a1->QosCurrentCapabilities, CurrentQosCapabilities, Size);
      v14 = a2->HardwareQosCapabilities;
      if ( v14->Header.Size < 0x14u )
        v6 = v14->Header.Size;
      memmove(a1->QosHwCapabilities, v14, v6);
      goto LABEL_16;
    }
  }
  v3 = -1073741670;
LABEL_29:
  v18 = a1->QosCurrentCapabilities;
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    a1->QosCurrentCapabilities = 0LL;
  }
  v19 = a1->QosHwCapabilities;
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
    a1->QosHwCapabilities = 0LL;
  }
LABEL_16:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = v3;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x88u,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)a1,
      (char)a2,
      v20);
  }
  return v3;
}
