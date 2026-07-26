/*
 * XREFs of ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C001EBB0
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0022EB0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMCheckReceiveFilterPacketCoalescingAttributes@@YAHPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1C001EE1C (-ndisMCheckReceiveFilterPacketCoalescingAttributes@@YAHPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z.c)
 *     ?ndisShouldSuppressReceiveFilterCapabilities@@YAEPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1C001EE34 (-ndisShouldSuppressReceiveFilterCapabilities@@YAEPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

__int64 __fastcall ndisMSetReceiveFilterAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  unsigned int v4; // ebx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *HardwareReceiveFilterCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *CurrentReceiveFilterCapabilities; // rax
  size_t v7; // rbp
  _NDIS_RECEIVE_FILTER_CAPABILITIES *PoolWithTag; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v9; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v10; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v11; // rdx
  size_t Size; // r8
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v13; // rdx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterHwCapabilities; // rcx
  char v18[8]; // [rsp+38h] [rbp-20h]

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x7Eu,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a1,
      a2);
  HardwareReceiveFilterCapabilities = a2->HardwareReceiveFilterCapabilities;
  if ( !HardwareReceiveFilterCapabilities->Header.Revision || HardwareReceiveFilterCapabilities->Header.Size < 0x38u )
  {
    v4 = -1073741811;
LABEL_30:
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073676283 )
      goto LABEL_32;
    goto LABEL_21;
  }
  CurrentReceiveFilterCapabilities = a2->CurrentReceiveFilterCapabilities;
  if ( !CurrentReceiveFilterCapabilities->Header.Revision || CurrentReceiveFilterCapabilities->Header.Size < 0x38u )
  {
    v4 = -1073741811;
    goto LABEL_32;
  }
  if ( ndisShouldSuppressReceiveFilterCapabilities(HardwareReceiveFilterCapabilities)
    || ndisShouldSuppressReceiveFilterCapabilities(a2->CurrentReceiveFilterCapabilities) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x7Fu,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a1,
      (char)a2->HardwareReceiveFilterCapabilities,
      a2->CurrentReceiveFilterCapabilities);
    goto LABEL_21;
  }
  v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(a2->HardwareReceiveFilterCapabilities);
  if ( v4 )
    goto LABEL_30;
  v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(a2->CurrentReceiveFilterCapabilities);
  if ( v4 )
    goto LABEL_30;
  if ( !a1->ReceiveFilterCurrentCapabilities && !a1->ReceiveFilterHwCapabilities )
  {
    v7 = 84LL;
    PoolWithTag = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
    a1->ReceiveFilterCurrentCapabilities = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
      a1->TopReceiveFilterCurrentCapabilities = v9;
      if ( v9 )
      {
        v10 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
        a1->ReceiveFilterHwCapabilities = v10;
        if ( v10 )
        {
          memset(a1->TopReceiveFilterCurrentCapabilities, 0, sizeof(_NDIS_RECEIVE_FILTER_CAPABILITIES));
          memset(a1->ReceiveFilterCurrentCapabilities, 0, sizeof(_NDIS_RECEIVE_FILTER_CAPABILITIES));
          memset(a1->ReceiveFilterHwCapabilities, 0, sizeof(_NDIS_RECEIVE_FILTER_CAPABILITIES));
          v11 = a2->HardwareReceiveFilterCapabilities;
          Size = v11->Header.Size;
          if ( v11->Header.Size >= 0x54u )
            Size = 84LL;
          memmove(a1->ReceiveFilterHwCapabilities, v11, Size);
          v13 = a2->CurrentReceiveFilterCapabilities;
          if ( v13->Header.Size < 0x54u )
            v7 = v13->Header.Size;
          memmove(a1->ReceiveFilterCurrentCapabilities, v13, v7);
          memmove(a1->TopReceiveFilterCurrentCapabilities, a2->CurrentReceiveFilterCapabilities, v7);
          a1->EnabledReceiveQueueTypes = a2->CurrentReceiveFilterCapabilities->EnabledQueueTypes;
          a1->EnabledReceiveFilterTypes = a2->CurrentReceiveFilterCapabilities->EnabledFilterTypes;
          goto LABEL_21;
        }
      }
    }
    v4 = -1073741670;
LABEL_32:
    ReceiveFilterCurrentCapabilities = a1->ReceiveFilterCurrentCapabilities;
    if ( ReceiveFilterCurrentCapabilities )
    {
      ExFreePoolWithTag(ReceiveFilterCurrentCapabilities, 0);
      a1->ReceiveFilterCurrentCapabilities = 0LL;
    }
    TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
    if ( TopReceiveFilterCurrentCapabilities )
    {
      ExFreePoolWithTag(TopReceiveFilterCurrentCapabilities, 0);
      a1->TopReceiveFilterCurrentCapabilities = 0LL;
    }
    ReceiveFilterHwCapabilities = a1->ReceiveFilterHwCapabilities;
    if ( ReceiveFilterHwCapabilities )
    {
      ExFreePoolWithTag(ReceiveFilterHwCapabilities, 0);
      a1->ReceiveFilterHwCapabilities = 0LL;
    }
    goto LABEL_21;
  }
  v4 = -1073676283;
LABEL_21:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = v4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x80u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)a1,
      (char)a2,
      *(_QWORD *)v18);
  }
  return v4;
}
