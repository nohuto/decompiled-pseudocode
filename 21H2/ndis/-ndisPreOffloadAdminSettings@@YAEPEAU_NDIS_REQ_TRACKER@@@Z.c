/*
 * XREFs of ?ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001F5A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C00A0334 (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 */

unsigned __int8 __fastcall ndisPreOffloadAdminSettings(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  unsigned __int8 v4; // bl
  wchar_t *Buffer; // rdi
  char v6; // al
  int v7; // eax
  bool v8; // cf
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  int updated; // eax
  unsigned __int8 MajorNdisVersion; // cl
  bool v12; // cf
  unsigned __int8 MinorNdisVersion; // al
  wchar_t v14; // ax
  wchar_t v15; // ax
  wchar_t v16; // ax
  wchar_t v17; // ax

  v1 = *a1;
  v3 = a1[4];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBFu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      v3);
  v4 = 1;
  if ( *((_DWORD *)&v3->Header + 1) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_66;
  }
  if ( !*a1 )
  {
    v4 = 0;
    goto LABEL_66;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( v3->PcwDatapathEventMask < 0x14u )
  {
    LODWORD(v3->OpenQueue) = 20;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_66;
  }
  Buffer = v3->Reserved4.Buffer;
  v6 = *((_BYTE *)Buffer + 1);
  if ( v6 != 1 )
  {
    switch ( v6 )
    {
      case 2:
        if ( v3->PcwDatapathEventMask < 0x16u )
        {
          LODWORD(v3->OpenQueue) = 22;
          goto LABEL_17;
        }
        if ( *(_BYTE *)Buffer != 0x80 )
          goto LABEL_36;
        v7 = 0;
        v8 = Buffer[1] < 0x16u;
        break;
      case 3:
        if ( v3->PcwDatapathEventMask < 0x1Au )
        {
          LODWORD(v3->OpenQueue) = 26;
          goto LABEL_17;
        }
        if ( *(_BYTE *)Buffer != 0x80 )
          goto LABEL_36;
        v7 = 0;
        v8 = Buffer[1] < 0x1Au;
        break;
      case 4:
        if ( v3->PcwDatapathEventMask < 0x20u )
        {
          LODWORD(v3->OpenQueue) = 32;
          goto LABEL_17;
        }
        if ( *(_BYTE *)Buffer != 0x80 )
          goto LABEL_36;
        v7 = 0;
        v8 = Buffer[1] < 0x20u;
        break;
      case 5:
        if ( v3->PcwDatapathEventMask >= 0x22u )
        {
          if ( *(_BYTE *)Buffer == 0x80 && *((_BYTE *)Buffer + 1) >= 5u && Buffer[1] >= 0x22u )
            goto LABEL_38;
          goto LABEL_36;
        }
        LODWORD(v3->OpenQueue) = 34;
LABEL_17:
        *((_DWORD *)a1 + 10) = -1073676268;
        goto LABEL_66;
      default:
        *((_DWORD *)a1 + 10) = -1073676267;
        goto LABEL_66;
    }
LABEL_12:
    if ( !v8 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( *(_BYTE *)Buffer == 0x80 )
  {
    v7 = 0;
    v8 = Buffer[1] < 0x14u;
    goto LABEL_12;
  }
LABEL_36:
  v7 = -1073676267;
  *((_DWORD *)a1 + 10) = -1073676267;
LABEL_37:
  if ( v7 )
    goto LABEL_66;
LABEL_38:
  Offload = v1->Offload;
  if ( Offload && v1->MajorNdisVersion >= 6u )
  {
    if ( Offload->RSCDisallowed && *((_BYTE *)Buffer + 1) >= 3u )
      Buffer[11] = 257;
    if ( (*((_DWORD *)Buffer + 4) & 1) != 0 )
    {
      LOBYTE(v3->FirstPendingPacket) |= 1u;
      *((_DWORD *)Buffer + 4) &= ~1u;
    }
    if ( ((__int64)v3->FirstPendingPacket & 1) != 0
      || (updated = ndisUpdateOffloadKeywords(v1, (struct _NDIS_OFFLOAD_PARAMETERS *)Buffer),
          (*((_DWORD *)a1 + 10) = updated) == 0) )
    {
      MajorNdisVersion = v1->MajorNdisVersion;
      v12 = MajorNdisVersion < 6u;
      if ( MajorNdisVersion <= 6u )
      {
        if ( MajorNdisVersion != 6 )
          goto LABEL_60;
        MinorNdisVersion = v1->MinorNdisVersion;
        if ( MinorNdisVersion < 0x53u )
        {
          if ( MinorNdisVersion >= 0x32u )
          {
            if ( *((_BYTE *)Buffer + 1) >= 5u )
            {
              *(_DWORD *)&v3->LinkStateIndicationFlags |= 0x400000u;
              BYTE1(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink) = *((_BYTE *)Buffer + 1);
              v16 = Buffer[1];
              *((_BYTE *)Buffer + 1) = 4;
              WORD1(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink) = v16;
              Buffer[1] = 32;
            }
            goto LABEL_63;
          }
          if ( MinorNdisVersion >= 0x1Eu )
          {
            if ( *((_BYTE *)Buffer + 1) >= 4u )
            {
              *(_DWORD *)&v3->LinkStateIndicationFlags |= 0x400000u;
              BYTE1(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink) = *((_BYTE *)Buffer + 1);
              v15 = Buffer[1];
              *((_BYTE *)Buffer + 1) = 3;
              WORD1(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink) = v15;
              Buffer[1] = 26;
            }
            goto LABEL_63;
          }
          if ( MinorNdisVersion )
          {
            if ( *((_BYTE *)Buffer + 1) >= 3u )
            {
              *(_DWORD *)&v3->LinkStateIndicationFlags |= 0x400000u;
              BYTE1(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink) = *((_BYTE *)Buffer + 1);
              v14 = Buffer[1];
              *((_BYTE *)Buffer + 1) = 2;
              WORD1(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink) = v14;
              Buffer[1] = 22;
            }
            goto LABEL_63;
          }
          v12 = 0;
LABEL_60:
          if ( !v12 && *((_BYTE *)Buffer + 1) >= 2u )
          {
            *(_DWORD *)&v3->LinkStateIndicationFlags |= 0x400000u;
            BYTE1(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink) = *((_BYTE *)Buffer + 1);
            v17 = Buffer[1];
            *((_BYTE *)Buffer + 1) = 1;
            WORD1(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink) = v17;
            Buffer[1] = 20;
          }
        }
      }
LABEL_63:
      v4 = 0;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
LABEL_66:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xC0u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      *((_DWORD *)a1 + 10),
      v4);
  return v4;
}
