/*
 * XREFs of ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C005CF4C
 * Callers:
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C005AE50 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C2C8 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisUpdateCsSpuriousWakeStats(struct _NDIS_MINIPORT_AOAC *a1, unsigned int a2)
{
  if ( a2 <= 0x2000 )
  {
    switch ( a2 )
    {
      case 0x2000u:
        ++*((_DWORD *)a1 + 266);
        return;
      case 0u:
        ++*((_DWORD *)a1 + 258);
        return;
      case 1u:
        ++*((_DWORD *)a1 + 259);
        return;
      case 2u:
        ++*((_DWORD *)a1 + 260);
        return;
      case 3u:
        ++*((_DWORD *)a1 + 261);
        return;
      case 0x1000u:
        ++*((_DWORD *)a1 + 262);
        return;
      case 0x1001u:
        ++*((_DWORD *)a1 + 263);
        return;
      case 0x1002u:
        ++*((_DWORD *)a1 + 264);
        return;
      case 0x1003u:
        ++*((_DWORD *)a1 + 265);
        return;
    }
    goto LABEL_27;
  }
  switch ( a2 )
  {
    case 0x2001u:
      ++*((_DWORD *)a1 + 267);
      break;
    case 0x2002u:
      ++*((_DWORD *)a1 + 268);
      break;
    case 0x2004u:
      ++*((_DWORD *)a1 + 269);
      break;
    case 0x2005u:
      ++*((_DWORD *)a1 + 270);
      break;
    case 0xFFFDu:
      ++*((_DWORD *)a1 + 273);
      break;
    case 0xFFFEu:
      ++*((_DWORD *)a1 + 272);
      break;
    case 0xFFFFu:
      ++*((_DWORD *)a1 + 271);
      break;
    default:
LABEL_27:
      ++*((_DWORD *)a1 + 274);
      *((_DWORD *)a1 + 275) = a2;
      return;
  }
}
