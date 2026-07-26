/*
 * XREFs of NdisSetOptionalHandlers @ 0x1C0024360
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x1C0024704 (-ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z.c)
 *     ?ndisSetSystemPowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C0082ED8 (-ndisSetSystemPowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 *     ?ndisSetNDKHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C00FF850 (-ndisSetNDKHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 *     ?ndisPDSetBufferManagerHandlers@@YAHPEAXPEBU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C011D2EC (-ndisPDSetBufferManagerHandlers@@YAHPEAXPEBU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 *     ?ndisSetMiniportReenumerateHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C011E390 (-ndisSetMiniportReenumerateHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 *     ?ndisSetDevicePowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C011E7A8 (-ndisSetDevicePowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 *     ?ndisSetSSHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C0121560 (-ndisSetSSHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 */

NDIS_STATUS __stdcall NdisSetOptionalHandlers(NDIS_HANDLE NdisHandle, PNDIS_DRIVER_OPTIONAL_HANDLERS OptionalHandlers)
{
  NDIS_STATUS v4; // ebx
  unsigned int Type; // ecx
  unsigned int v6; // ecx
  NDIS_STATUS restarted; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  _OWORD *v16; // rax
  bool v17; // zf
  bool v18; // zf
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  UCHAR Revision; // al

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x72u,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      NdisHandle);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  Type = OptionalHandlers->Header.Type;
  if ( Type > 0xA6 )
  {
    switch ( Type )
    {
      case 0xB0u:
        switch ( *(_BYTE *)NdisHandle )
        {
          case 3:
            *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
            *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
            *((_QWORD *)NdisHandle + 100) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
            break;
          case 0x11:
            *((_QWORD *)NdisHandle + 450) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
            *((_QWORD *)NdisHandle + 451) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
            *((_QWORD *)NdisHandle + 452) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
            break;
          case 0x12:
            *((_QWORD *)NdisHandle + 97) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
            *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
            *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
            break;
          default:
            goto LABEL_49;
        }
        goto LABEL_9;
      case 0xB2u:
        restarted = ndisSetNDKHandlers(NdisHandle, OptionalHandlers);
        goto LABEL_8;
      case 0xB4u:
        restarted = ndisSetSSHandlers(NdisHandle, OptionalHandlers);
        goto LABEL_8;
    }
    if ( Type != 184 )
    {
      switch ( Type )
      {
        case 0xBBu:
          restarted = ndisSetSystemPowerNotificationHandlers(NdisHandle, OptionalHandlers);
          goto LABEL_8;
        case 0xBCu:
          restarted = ndisSetMiniportReenumerateHandlers(NdisHandle, OptionalHandlers);
          goto LABEL_8;
        case 0xC4u:
          restarted = ndisPDSetBufferManagerHandlers(NdisHandle, OptionalHandlers);
          goto LABEL_8;
        case 0xC6u:
          restarted = ndisSetDevicePowerNotificationHandlers(NdisHandle, OptionalHandlers);
          goto LABEL_8;
      }
      goto LABEL_49;
    }
    Revision = OptionalHandlers->Header.Revision;
    if ( (Revision != 2 || OptionalHandlers->Header.Size >= 0xF0u)
      && (Revision != 1 || OptionalHandlers->Header.Size >= 0x70u) )
    {
      if ( *(_BYTE *)NdisHandle != 2 )
        goto LABEL_49;
      *((_QWORD *)NdisHandle + 114) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
      *((_QWORD *)NdisHandle + 115) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
      *((_QWORD *)NdisHandle + 117) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
      *((_QWORD *)NdisHandle + 116) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
      *((_QWORD *)NdisHandle + 118) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
      *((_QWORD *)NdisHandle + 119) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
      *((_QWORD *)NdisHandle + 120) = *(_QWORD *)&OptionalHandlers[14].Header.Type;
      *((_QWORD *)NdisHandle + 121) = *(_QWORD *)&OptionalHandlers[16].Header.Type;
      *((_QWORD *)NdisHandle + 122) = *(_QWORD *)&OptionalHandlers[18].Header.Type;
      *((_QWORD *)NdisHandle + 123) = *(_QWORD *)&OptionalHandlers[20].Header.Type;
      *((_QWORD *)NdisHandle + 124) = *(_QWORD *)&OptionalHandlers[22].Header.Type;
      *((_QWORD *)NdisHandle + 125) = *(_QWORD *)&OptionalHandlers[24].Header.Type;
      *((_QWORD *)NdisHandle + 126) = *(_QWORD *)&OptionalHandlers[26].Header.Type;
      *((_QWORD *)NdisHandle + 127) = *(_QWORD *)&OptionalHandlers[28].Header.Type;
      *((_QWORD *)NdisHandle + 128) = *(_QWORD *)&OptionalHandlers[30].Header.Type;
      if ( OptionalHandlers->Header.Revision >= 2u )
      {
        *((_QWORD *)NdisHandle + 129) = *(_QWORD *)&OptionalHandlers[32].Header.Type;
        *((_QWORD *)NdisHandle + 130) = *(_QWORD *)&OptionalHandlers[34].Header.Type;
        *((_QWORD *)NdisHandle + 131) = *(_QWORD *)&OptionalHandlers[36].Header.Type;
        *((_QWORD *)NdisHandle + 132) = *(_QWORD *)&OptionalHandlers[38].Header.Type;
        *((_QWORD *)NdisHandle + 133) = *(_QWORD *)&OptionalHandlers[40].Header.Type;
        *((_QWORD *)NdisHandle + 134) = *(_QWORD *)&OptionalHandlers[42].Header.Type;
        *((_QWORD *)NdisHandle + 135) = *(_QWORD *)&OptionalHandlers[44].Header.Type;
        *((_QWORD *)NdisHandle + 136) = *(_QWORD *)&OptionalHandlers[46].Header.Type;
        *((_QWORD *)NdisHandle + 137) = *(_QWORD *)&OptionalHandlers[48].Header.Type;
        *((_QWORD *)NdisHandle + 138) = *(_QWORD *)&OptionalHandlers[50].Header.Type;
        *((_QWORD *)NdisHandle + 139) = *(_QWORD *)&OptionalHandlers[52].Header.Type;
        *((_QWORD *)NdisHandle + 140) = *(_QWORD *)&OptionalHandlers[54].Header.Type;
        *((_QWORD *)NdisHandle + 141) = *(_QWORD *)&OptionalHandlers[56].Header.Type;
        *((_QWORD *)NdisHandle + 142) = *(_QWORD *)&OptionalHandlers[58].Header.Type;
      }
      goto LABEL_9;
    }
    goto LABEL_54;
  }
  if ( Type == 166 )
  {
    if ( OptionalHandlers->Header.Revision && OptionalHandlers->Header.Size >= 0xA0u )
    {
      if ( *(_BYTE *)NdisHandle != 3 )
        goto LABEL_49;
      *(_OWORD *)((char *)NdisHandle + 472) = *(_OWORD *)&OptionalHandlers->Header.Type;
      *(_OWORD *)((char *)NdisHandle + 488) = *(_OWORD *)&OptionalHandlers[4].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 504) = *(_OWORD *)&OptionalHandlers[8].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 520) = *(_OWORD *)&OptionalHandlers[12].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 536) = *(_OWORD *)&OptionalHandlers[16].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 552) = *(_OWORD *)&OptionalHandlers[20].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 568) = *(_OWORD *)&OptionalHandlers[24].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 584) = *(_OWORD *)&OptionalHandlers[28].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 600) = *(_OWORD *)&OptionalHandlers[32].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 616) = *(_OWORD *)&OptionalHandlers[36].Header.Type;
      goto LABEL_9;
    }
LABEL_54:
    v4 = -1073741811;
    goto LABEL_9;
  }
  v6 = Type - 140;
  if ( !v6 )
  {
    if ( *(_BYTE *)NdisHandle == 5 )
    {
      restarted = ndisFSetRestartAttributes(NdisHandle, (struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *)OptionalHandlers);
LABEL_8:
      v4 = restarted;
      goto LABEL_9;
    }
    goto LABEL_49;
  }
  v9 = v6 - 2;
  if ( !v9 )
  {
    v20 = *(_BYTE *)NdisHandle;
    if ( *(_BYTE *)NdisHandle < 3u )
      goto LABEL_49;
    if ( v20 <= 5u )
      goto LABEL_9;
    v18 = v20 == 18;
LABEL_48:
    if ( v18 )
      goto LABEL_9;
    goto LABEL_49;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( *(_BYTE *)NdisHandle == 3 )
      {
        *((_QWORD *)NdisHandle + 24) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
        *((_QWORD *)NdisHandle + 25) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
        *((_QWORD *)NdisHandle + 26) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
        *((_QWORD *)NdisHandle + 27) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
        goto LABEL_9;
      }
      goto LABEL_49;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      if ( *(_BYTE *)NdisHandle == 2 )
      {
        *((_QWORD *)NdisHandle + 63) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
        *((_QWORD *)NdisHandle + 64) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
        *((_QWORD *)NdisHandle + 65) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
        *((_QWORD *)NdisHandle + 66) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
        *((_QWORD *)NdisHandle + 67) = *(_QWORD *)&OptionalHandlers[10].Header.Type;
        *((_QWORD *)NdisHandle + 69) = *(_QWORD *)&OptionalHandlers[12].Header.Type;
        goto LABEL_9;
      }
      goto LABEL_49;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( *(_BYTE *)NdisHandle == 2 )
      {
        *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&OptionalHandlers[2].Header.Type;
        *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&OptionalHandlers[4].Header.Type;
        *((_QWORD *)NdisHandle + 100) = *(_QWORD *)&OptionalHandlers[6].Header.Type;
        *((_QWORD *)NdisHandle + 101) = *(_QWORD *)&OptionalHandlers[8].Header.Type;
        goto LABEL_9;
      }
      goto LABEL_49;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 != 17 )
          goto LABEL_49;
        if ( OptionalHandlers->Header.Revision && OptionalHandlers->Header.Size >= 0x88u )
        {
          if ( *(_BYTE *)NdisHandle == 2 )
          {
            v16 = (char *)NdisHandle + 640;
            goto LABEL_31;
          }
          if ( *(_BYTE *)NdisHandle == 3 )
          {
            v16 = (char *)NdisHandle + 632;
LABEL_31:
            *v16 = *(_OWORD *)&OptionalHandlers->Header.Type;
            v16[1] = *(_OWORD *)&OptionalHandlers[4].Header.Type;
            v16[2] = *(_OWORD *)&OptionalHandlers[8].Header.Type;
            v16[3] = *(_OWORD *)&OptionalHandlers[12].Header.Type;
            v16[4] = *(_OWORD *)&OptionalHandlers[16].Header.Type;
            v16[5] = *(_OWORD *)&OptionalHandlers[20].Header.Type;
            v16[6] = *(_OWORD *)&OptionalHandlers[24].Header.Type;
            v16[7] = *(_OWORD *)&OptionalHandlers[28].Header.Type;
            v16[8] = *(_OWORD *)&OptionalHandlers[32].Header.Type;
            goto LABEL_9;
          }
LABEL_49:
          v4 = -1073741637;
          goto LABEL_9;
        }
        goto LABEL_54;
      }
      v17 = *(_BYTE *)NdisHandle == 2;
    }
    else
    {
      if ( *(_BYTE *)NdisHandle == 3 )
      {
LABEL_36:
        v18 = *(_DWORD *)&OptionalHandlers[2] == 1;
        goto LABEL_48;
      }
      v17 = *(_BYTE *)NdisHandle == 18;
    }
    if ( !v17 )
      goto LABEL_49;
    goto LABEL_36;
  }
  v19 = *(_BYTE *)NdisHandle;
  if ( *(_BYTE *)NdisHandle != 2 && (v19 <= 3u || v19 > 5u) )
    goto LABEL_49;
LABEL_9:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x73u,
      (struct _GUID *)&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids,
      (char)NdisHandle,
      v4);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}
