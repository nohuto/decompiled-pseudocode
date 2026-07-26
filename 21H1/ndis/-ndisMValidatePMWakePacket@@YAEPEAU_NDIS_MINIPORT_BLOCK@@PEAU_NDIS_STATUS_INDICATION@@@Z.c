/*
 * XREFs of ?ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090074
 * Callers:
 *     ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00902A8 (-ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C008FAF4 (-ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C008FEE0 (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 *     McTemplateK0jqbr1_EtwWriteTransfer @ 0x1C0096014 (McTemplateK0jqbr1_EtwWriteTransfer.c)
 */

bool __fastcall ndisMValidatePMWakePacket(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  _DWORD *StatusBuffer; // rax
  unsigned int v4; // edx
  char *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // r8d
  int v10; // edx
  int v11; // ecx
  unsigned __int16 v12; // r9

  StatusBuffer = a2->StatusBuffer;
  v4 = StatusBuffer[4];
  if ( !v4 )
    return !StatusBuffer[3];
  if ( v4 < 0x9C )
    return 0;
  v6 = (char *)StatusBuffer + (unsigned int)StatusBuffer[3];
  if ( *v6 != (char)0x80 || v6[1] != 1 || (v7 = *((unsigned __int16 *)v6 + 1), (unsigned __int16)v7 < 0x9Cu) || v7 > v4 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v12 = 136;
LABEL_22:
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      v12,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      a1);
    return 0;
  }
  if ( !*((_DWORD *)v6 + 1) )
  {
    v8 = *((unsigned int *)v6 + 38);
    if ( (v8 & 7) == 0 )
    {
      if ( (unsigned int)v8 <= v4 && &v6[v8] >= v6 )
      {
        v9 = v8 + *((_DWORD *)v6 + 37);
        if ( v9 >= (unsigned int)v8 && v9 <= v4 )
        {
          ndisMUpdateNameOnPMWakePacket(a1, (struct _NDIS_PM_WAKE_PACKET *)v6);
          ndisMEvaluateMagicPacketWake((_LIST_ENTRY *)a1, (struct _NDIS_PM_WAKE_PACKET *)v6);
          if ( *((_DWORD *)v6 + 37) >= 0x80u && (byte_1C00E6085 & 0x20) != 0 )
            McTemplateK0jqbr1_EtwWriteTransfer(v11, v10, (_DWORD)a1 + 4008, (_DWORD)a1 + 4008);
          return 1;
        }
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v12 = 137;
        goto LABEL_22;
      }
    }
  }
  return 0;
}
