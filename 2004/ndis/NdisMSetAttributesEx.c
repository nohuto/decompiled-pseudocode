/*
 * XREFs of NdisMSetAttributesEx @ 0x1C012C0F0
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0022EB0 (NdisMSetMiniportAttributes.c)
 *     NdisMSetAttributes @ 0x1C0071DB0 (NdisMSetAttributes.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisInitializeTimer @ 0x1C00233E0 (NdisInitializeTimer.c)
 *     ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012C368 (-ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __stdcall NdisMSetAttributesEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        UINT CheckForHangTimeInSeconds,
        ULONG AttributeFlags,
        NDIS_INTERFACE_TYPE AdapterType)
{
  __int64 i; // rcx
  UINT v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  KIRQL v15; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+18h] BYREF

  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Eu,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      MiniportAdapterHandle);
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x180) == 0 )
    *((_QWORD *)MiniportAdapterHandle + 3) = MiniportAdapterContext;
  *((_DWORD *)MiniportAdapterHandle + 454) = AttributeFlags;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  ndisSetMiniportHandlers((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  for ( i = *((_QWORD *)MiniportAdapterHandle + 7); i; i = *(_QWORD *)(i + 392) )
    *(_QWORD *)(i + 56) = *((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, NewIrql);
  *((_DWORD *)MiniportAdapterHandle + 119) = AdapterType;
  if ( CheckForHangTimeInSeconds < 2 )
  {
    v10 = 2;
  }
  else if ( CheckForHangTimeInSeconds > 0x40 )
  {
    v10 = 64;
  }
  else
  {
    v10 = CheckForHangTimeInSeconds & 0xFFFFFFFE;
  }
  *((_DWORD *)MiniportAdapterHandle + 94) = v10;
  v11 = *((_DWORD *)MiniportAdapterHandle + 30);
  v12 = *((_DWORD *)MiniportAdapterHandle + 468) | 0x2000000;
  *((_DWORD *)MiniportAdapterHandle + 468) = v12;
  if ( (AttributeFlags & 8) != 0 )
  {
    v11 |= 8u;
    v12 |= 1u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v11;
    *((_DWORD *)MiniportAdapterHandle + 468) = v12;
  }
  if ( (AttributeFlags & 1) != 0 )
  {
    v11 |= 0x800u;
    v12 |= 0x20u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v11;
    *((_DWORD *)MiniportAdapterHandle + 468) = v12;
  }
  if ( (AttributeFlags & 2) != 0 )
  {
    v11 |= 0x1000u;
    v12 |= 0x40u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v11;
    *((_DWORD *)MiniportAdapterHandle + 468) = v12;
  }
  if ( (AttributeFlags & 0x10) != 0 )
  {
    v11 |= 0x8000u;
    v12 |= 0x100u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v11;
    *((_DWORD *)MiniportAdapterHandle + 468) = v12;
  }
  if ( (AttributeFlags & 0x40) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x8000u;
    *((_DWORD *)MiniportAdapterHandle + 468) = v12 | 0x200000;
  }
  if ( (AttributeFlags & 0x100) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 30) = v11 & 0xFFFDFFFF;
  KeInitializeEvent((PRKEVENT)((char *)MiniportAdapterHandle + 1912), NotificationEvent, 1u);
  v13 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (AttributeFlags & 0x20) != 0 || (v13 & 0x20000) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x800u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v13 | 0x40000;
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpcX,
      MiniportAdapterHandle);
    *((_QWORD *)MiniportAdapterHandle + 55) = ndisMSendCompleteX;
  }
  else
  {
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpc,
      MiniportAdapterHandle);
  }
  v14 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (v14 & 0x20000) != 0 )
  {
    ndisReferencePackage((struct _PKG_REF *)&dword_1C00E30A8);
    v14 = *((_DWORD *)MiniportAdapterHandle + 30);
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 32) > 5u
    || *((_BYTE *)MiniportAdapterHandle + 32) == 5 && *((_BYTE *)MiniportAdapterHandle + 33)
    || (AttributeFlags & 0x200) != 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 2u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000u;
  }
  if ( ndisPadShortPackets && (AttributeFlags & 0x810) == 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 8u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000000u;
  }
  if ( (AttributeFlags & 0x80u) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x100000u;
  *((_DWORD *)MiniportAdapterHandle + 30) = v14 | 0x10000;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, &NewIrql);
  ndisSetMiniportHandlers((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  v15 = NewIrql;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v15);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Fu,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      MiniportAdapterHandle);
}
